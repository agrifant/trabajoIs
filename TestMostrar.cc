#include "gtest/gtest.h"
#include "actividad.h"
#include <fstream>
#include <vector>
#include <string>

TEST(UsuarioRegistrado,Mostar1){
    Actividad p1(1, "Aitor"), p2(2, "Carlos"), p3(3, "Fernando");
    std::vector <Actividad> act{p1,p2,p3};
    EXPECT_EQ(0,act[0].GetActivar());
    EXPECT_EQ(0,act[1].GetActivar());
    EXPECT_EQ(0,act[2].GetActivar());
    if(guardarVectorActividades(act)==false){
        std::cout<<"Algo va mal\n";
    }else{
        std::cout<<"Mete los numeros: 1, 2, 3\n";
        MostrarActividad();
        MostrarActividad();
        MostrarActividad();
        act=VectorConActividades();
        EXPECT_EQ(1,act[0].GetActivar());
        EXPECT_EQ(1,act[1].GetActivar());
        EXPECT_EQ(1,act[2].GetActivar());    
    }
    
}

TEST(UsuarioRegistrado,Mostar2){
    Actividad p1(1, "Aitor"), p2(2, "Carlos"), p3(3, "Fernando");
    std::vector <Actividad> act{p1,p2,p3};
    guardarVectorActividades(act);
    std::cout<<"Pon por teclado: -100, 100\n";
    MostrarActividad();
    act=VectorConActividades();
    EXPECT_EQ(0,act[0].GetActivar());
    EXPECT_EQ(0,act[1].GetActivar());
    EXPECT_EQ(0,act[2].GetActivar());
    MostrarActividad();
    act=VectorConActividades();
    EXPECT_EQ(0,act[0].GetActivar());
    EXPECT_EQ(0,act[1].GetActivar());
    EXPECT_EQ(0,act[2].GetActivar());
    
}