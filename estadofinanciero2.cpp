#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

//Jose Luis Elizondo Figueroa id:260938
int main(){
    //Clasificaciones
    float activo,pasivo,capcont, pascap;

    //Vector principal
    float vector[]= {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    string nombre[]= {"", "Caja", "Bancos", "Inversiones temporales", "Clientes", "Documentos por cobrar", "Deudores diversos ", "Funcionarios y empleados", "IVA pendiente de acreditar", "IVA acreditable retenido", "Subsidio al empleo", "Partes relacionadas", "Inventario", "Almacen de Materia Prima ", "Almacen Produccion en Proceso", "Almacen de Articulos Terminados", "Mercancias en transito", "Papeleria y articulos de escritorio", "Anticipo a proveedores", "Rentas pagadas por anticipado", "Primas de seguros y fianzas", "Propaganda y publicidad ", "Gastos de instalacion ", "Cuotas, membresias y suscripciones", "ISR a favor ", "IVA a favor", "Clientes o documentos por cobrar a largo plazo", "Terrenos", "Edificios ", "Maquinaria y equipo ", "Equipo de transporte ", "Equipo de computo ", "Herramientas ", "Equipo de oficina ", "Construcciones en proceso ", "Depreciacion acumulada", "Gastos de organizacion ", "Gastos pre-operativos ", "Licencias de operacion ", "Patentes  ", "Gastos de constitucion ", "Derechos de autor ", "Regalias ", "Gastos de investigacion ", "Amortizacion acumulada", "Otros activos a largo plazo ", "Activos no utilizados ", "Depositos en garantia", "Impuesto a la utilidad diferido a favor", "Proveedores", "Acreedores bancarios ", "Acreedores diversos ", "Documentos por pagar ", "IVA trasladado  ", "PTU no pagada ", "Impuestos retenidos no pagados (no exigibles)", "ISR retenido", "IVA retenido ", "IVA por pagar ", "Impuestos por pagar", "Anticipo de clientes", "Pasivos a menos de un año ", "Rentas cobradas por anticipado ", "Dividendos por pagar ", "Intereses cobrados por anticipado", "Acreedores bancarios ", "Acreedores hipotecarios", "PTU diferida", "Indemnizaciones y prima de antigüedad", "Impuesto a la utilidad diferido a cargo", "Capital social", "Donaciones", "Acciones en tesoreria", "Prima de emision de acciones", "Aportaciones para futuros aumentos de capital", "Utilidades acumuladas ", "Perdidas acumuladas ", "Utilidad o Perdida neta", "Reserva legal", "Reserva de reinversion "};
    //Activos
    float actvlarg, actvcort;

    //Activos a corto plazo
    float efectequiv, cuentasporcob, otrascuenporcob, partsrelaci, invent, pagsantic, impuestsrecup;

    //Activos a largo plazo
    float cuenydocs, propplanyeq, actvintang, otrosactiv, impuestoalauti;

    //Pasivos
    float pasvlarg, pasvcort;

    //Pasivos a corto plazo
    float cuentporpag, prestamos, otrascuentporpag, impuesycontr, anticipaclien, otrospasvcort;

    //Pasivos a largo plazo
    float prestamosyotrsacre, ptudif, benefempl, impstutidif;

    //Capital contable
    float capcontr, capgana;

    //Capital contribuido
    float capsocia, accentesor, primdeemision, aportfutaumen;

    //Capital ganado
    float utioperdreten, reservdecap;
    
    //menu
    int menu,n;
    float a;
    
    while(menu!=3){
        system("cls");
        printf("\n Elizondo Studios. 2021 \n");
        printf("\n Generar estado de situacion financiera \n 1.  Insertar nuevo valor \n 2.  Borrar el ultimo valor introducido \n 3.  Terminar \n");
        //log
        printf("\n \n Log: \n");
        int m;
        for(m=1;m<80;m++){
          if(vector[m]!=0){
            printf ("\n -%s: $%f \n", nombre[m].c_str(), vector[m]);
          };
        };
        scanf("%d", &menu);
        if(menu<2){
         system("cls");
         printf("\n 1.	Caja \n 2.	Bancos \n 3.	Inversiones temporales  \n 4.	Clientes \n 5.	Documentos por cobrar  \n 6.	Deudores diversos  \n 7.	Funcionarios y empleados \n 8.	IVA pendiente de acreditar  \n 9.	IVA acreditable retenido \n 10.	Subsidio al empleo \n 11.	Partes relacionadas \n 12.	Inventario \n 13.	Almacen de Materia Prima  \n 14.	Almacen Produccion en Proceso \n 15.	 Almacen de Articulos Terminados \n 16.	 Mercancias en transito \n 17.	Papeleria y articulos de escritorio \n 18.	 Anticipo a proveedores \n 19.	 Rentas pagadas por anticipado \n 20.	 Primas de seguros y fianzas \n 21.	Propaganda y publicidad  \n 22.	Gastos de instalacion  \n 23.	Cuotas, membresias y suscripciones \n 24.	ISR a favor  \n 25.	IVA a favor \n 26.	Clientes o documentos por cobrar a largo plazo \n 27.	Terrenos  \n 28.	Edificios  \n 29.	Maquinaria y equipo  \n 30.	Equipo de transporte  \n 31.	Equipo de computo  \n 32.	Herramientas  \n 33.	Equipo de oficina  \n 34.	Construcciones en proceso  \n 35.	Depreciacion acumulada \n 36.	Gastos de organizacion  \n 37.	Gastos pre-operativos  \n 38.	Licencias de operacion  \n 39.	Patentes   \n 40.	Gastos de constitucion  \n 41.	Derechos de autor  \n 42.	Regalias  \n 43.	Gastos de investigacion  \n 44.	Amortizacion acumulada \n 45.	Otros activos a largo plazo  \n 46.	Activos no utilizados  \n 47.	Depositos en garantia \n 48.	Impuesto a la utilidad diferido a favor \n 49.	Proveedores \n 50.	Acreedores bancarios  \n 51.	Acreedores diversos  \n 52.	Documentos por pagar  \n 53.	IVA trasladado   \n 54.	PTU no pagada  \n 55.	Impuestos retenidos no pagados (no exigibles) \n 56.	ISR retenido \n 57.	 IVA retenido  \n 58.	IVA por pagar  \n 59.	Impuestos por pagar \n 60.	Anticipo de clientes \n 61.	Pasivos a menos de un año  \n 62.	Rentas cobradas por anticipado  \n 63.	Dividendos por pagar  \n 64.	Intereses cobrados por anticipado \n 65.	Acreedores bancarios  \n 66.	Acreedores hipotecarios \n 67.	PTU diferida \n 68.	Indemnizaciones y prima de antigüedad \n 69.	Impuesto a la utilidad diferido a cargo \n 70.	Capital social \n 71.	Donaciones \n 72.	Acciones en tesoreria \n 73.	Prima de emision de acciones \n 74.	Aportaciones para futuros aumentos de capital \n 75.	Utilidades acumuladas  \n 76.	Perdidas acumuladas  \n 77.	Utilidad o Perdida neta \n 78.	Reserva legal \n 79.	Reserva de reinversion \n");
         scanf("%d", &n);
         if(n<1 || n>79){
             printf("Valor incorrecto");
             getch();
         } else {
             printf("\n -%s: $", nombre[n].c_str());
             scanf("%f", &a);
             vector[n]=a;
                };
        };
        if(menu>1 && menu<3){
            int choice=0;
            system("cls");
            printf("Estas seguro? \n 1. Si \n 2.No \n");
            scanf("%d", &choice);
            if (choice<2){
                vector[n]=0;
            };
        };
    };
    system("cls");
    printf("\n Estado de situacion financiera \n Activos \n \n   Activos a corto plazo: \n");
    //Activos a corto plazo

    int x;
    
    efectequiv= vector[1] + vector[2] + vector[3];
    if(efectequiv!=0)
    printf("\n    Efectivo y equivalentes: $%f", efectequiv);
    for(x=1;x<4;x++){
        if(vector[x]!=0){
            printf("\n %s: $%f", nombre[x].c_str(), vector[x]);
        };
    };

    cuentasporcob= vector[4];
    if(cuentasporcob!=0)
    printf("\n    Cuentas por cobrar: $%f", cuentasporcob);
    if(vector[4]!=0){
            printf("\n %s: $%f", nombre[4].c_str(), vector[4]);
    };
    
    otrascuenporcob= vector[5] + vector[6] + vector[7] + vector[8] + vector[9] + vector[10];
    if(otrascuenporcob!=0)
    printf("\n   Otras cuentas por cobrar: $%f", otrascuenporcob);
    for(x=5;x<11;x++){
        if(vector[x]!=0){
            printf("\n %s: $%f", nombre[x].c_str(), vector[x]);
        };
    }; 

    partsrelaci= vector[11];
    if(partsrelaci!=0)
    printf("\n   Partes relacionadas: $%f", partsrelaci);
        if(vector[11]!=0){
            printf("\n %s: $%f", nombre[11].c_str(), vector[11]);
    };

    invent= vector[12]+vector[13]+vector[14]+vector[15]+vector[16];
    if(invent!=0)
    printf("\n   Inventario: $%f", invent);
    for(x=12;x<17;x++){
        if(vector[x]!=0){
            printf("\n %s: $%f", nombre[x].c_str(), vector[x]);
        };
    }; 
    

    pagsantic= vector[17]+vector[18]+vector[19]+vector[20]+vector[21]+vector[22]+vector[23];
    if(pagsantic!=0)
    printf("\n   Pagos anticipados: $%f", pagsantic);
    for(x=17;x<24;x++){
        if(vector[x]!=0){
            printf("\n %s: $%f", nombre[x].c_str(), vector[x]);
        };
    }; 

    impuestsrecup= vector[24]+vector[25];
    if(impuestsrecup!=0)
    printf("\n   Impuestos por recuperar: $%f", impuestsrecup);
    for(x=24;x<26;x++){
        if(vector[x]!=0){
            printf("\n %s: $%f", nombre[x].c_str(), vector[x]);
        };
    }; 
    
    actvcort=efectequiv+cuentasporcob+otrascuenporcob+partsrelaci+invent+pagsantic+impuestsrecup;
    printf("\n \n Total activos a corto plazo: $%f", actvcort);

    //Activos a largo plazo
    printf("\n \n   Activos a largo plazo: \n");

    cuenydocs= vector[26];
    if(cuenydocs!=0)
    printf("\n   Cuentas y documentos por cobrar a clientes y otros: $%f", cuenydocs);
    if(vector[26]!=0){
            printf("\n %s: $%f", nombre[26].c_str(), vector[26]);
    };

    propplanyeq= vector[27]+vector[28]+vector[29]+vector[30]+vector[31]+vector[32]+vector[33]+vector[34]+vector[35];
    if(propplanyeq!=0)
    printf("\n   Propiedad, planta y equipo: $%f", propplanyeq);
    for(x=27;x<36;x++){
        if(vector[x]!=0){
            printf("\n %s: $%f", nombre[x].c_str(), vector[x]);
        };
    }; 

    actvintang= vector[36]+vector[37]+vector[38]+vector[39]+vector[40]+vector[41]+vector[42]+vector[43]+vector[44];
    if(actvintang!=0)
    printf("\n   Activos intangibes : $%f", actvintang);
    for(x=36;x<45;x++){
        if(vector[x]!=0){
            printf("\n %s: $%f", nombre[x].c_str(), vector[x]);
        };
    }; 
    

    otrosactiv= vector[45]+vector[46]+vector[47];
    if(otrosactiv!=0)
    printf("\n   Otros activos: $%f", otrosactiv);
    for(x=45;x<48;x++){
        if(vector[x]!=0){
            printf("\n %s: $%f", nombre[x].c_str(), vector[x]);
        };
    }; 

    impuestoalauti= vector[48];
    if(impuestoalauti!=0)
    printf("\n   Impuesto a la utilidad diferido: $%f", impuestoalauti);
    if(vector[48]!=0){
            printf("\n %s: $%f", nombre[48].c_str(), vector[48]);
    };

    actvlarg= cuenydocs+propplanyeq+actvintang+otrosactiv+impuestoalauti;
    printf("\n \n Total activos a largo plazo: $%f", actvlarg);

    activo= actvcort+actvlarg;
    printf("\n \n Total activos: $%f \n", activo);
    //Pasivos a corto plazo
    printf("\n Pasivos \n \n   Pasivos a corto plazo: \n");
    
    cuentporpag= vector[49];
    if(cuentporpag!=0)
    printf("\n   Cuentas por pagar: $%f", cuentporpag);
    if(vector[49]!=0){
            printf("\n %s: $%f", nombre[49].c_str(), vector[49]);
    };

    prestamos= vector[50];
    if(prestamos!=0)
    printf("\n   Prestamos de instituciones financieras y otros acreedores: $%f", prestamos);
    if(vector[50]!=0){
            printf("\n %s: $%f", nombre[50].c_str(), vector[50]);
    };

    otrascuentporpag= vector[51]+vector[52]+vector[53]+vector[54]+vector[55];
    if(otrascuentporpag!=0)
    printf("\n   Otras cuentas por pagar: $%f", otrascuentporpag);
    for(x=51;x<56;x++){
        if(vector[x]!=0){
            printf("\n %s: $%f", nombre[x].c_str(), vector[x]);
        };
    }; 

    impuesycontr= vector[56]+vector[57]+vector[58]+vector[59];
    if(impuesycontr!=0)
    printf("\n   Impuestos y contribuciones por pagar: $%f", impuesycontr);
    for(x=56;x<60;x++){
        if(vector[x]!=0){
            printf("\n %s: $%f", nombre[x].c_str(), vector[x]);
        };
    }; 

    anticipaclien= vector[60];
    if(anticipaclien!=0)
    printf("\n   Anticipo de clientes: $%f", anticipaclien);
    if(vector[60]!=0){
            printf("\n %s: $%f", nombre[60].c_str(), vector[60]);
    };

    otrospasvcort=vector[61]+vector[62]+vector[63]+vector[64];
    if(otrospasvcort!=0)
    printf("\n  Otros pasivos a corto plazo: $%f", otrospasvcort);
    for(x=61;x<65;x++){
        if(vector[x]!=0){
            printf("\n %s: $%f", nombre[x].c_str(), vector[x]);
        };
    }; 

    pasvcort=cuentporpag+prestamos+otrascuentporpag+impuesycontr+anticipaclien+otrospasvcort;
    printf("\n \n Total pasivos a corto plazo: $%f", pasvcort);

    //Pasivos a largo plazo 
    printf("\n \n   Pasivos a largo plazo: \n");

    prestamosyotrsacre= vector[65]+vector[66];
    if(prestamosyotrsacre!=0)
    printf("\n   Prestamos de instituciones financieras y otros acreedores a largo plazo: $%f", prestamosyotrsacre);
    for(x=65;x<67;x++){
        if(vector[x]!=0){
            printf("\n %s: $%f", nombre[x].c_str(), vector[x]);
        };
    }; 

    ptudif= vector[67];
    if(ptudif!=0)
    printf("\n   PTU diferida: $%f", ptudif);
    if(vector[67]!=0){
            printf("\n %s: $%f", nombre[67].c_str(), vector[67]);
    };

    benefempl= vector[68];
    if(benefempl!=0)
    printf("\n   Beneficios a los empleados: $%f", benefempl);
    if(vector[68]!=0){
            printf("\n %s: $%f", nombre[68].c_str(), vector[68]);
    };
    // ;)
    impstutidif= vector[69];
    if(impstutidif!=0)
    printf("\n   Impuesto a la utilidad diferido: $%f", impstutidif);
    if(vector[69]!=0){
            printf("\n %s: $%f", nombre[69].c_str(), vector[69]);
    };

    pasvlarg=prestamosyotrsacre+ptudif+benefempl+impstutidif;
    printf("\n \n Total pasivos a largo plazo: $%f", pasvlarg);

    pasivo= pasvcort+ pasvlarg;
    printf("\n \n Total pasivos: $%f \n", pasivo);

    //Capital contribuido
    printf("\n \n Capital contable \n \n   Capital contribuido: \n");
    capsocia= vector[70]+vector[71];
    if(capsocia!=0)
    printf("\n   Captial social: $%f", capsocia);
    for(x=70;x<72;x++){
        if(vector[x]!=0){
            printf("\n %s: $%f", nombre[x].c_str(), vector[x]);
        };
    }; 

    accentesor= vector[72];
    if(accentesor!=0)
    printf("\n   Acciones en tesoreria: $%f", accentesor);
    if(vector[72]!=0){
            printf("\n %s: $%f", nombre[72].c_str(), vector[72]);
    };

    primdeemision= vector[73];
    if(primdeemision!=0)
    printf("\n   Prima de emision de acciones: $%f", primdeemision);
    if(vector[73]!=0){
            printf("\n %s: $%f", nombre[73].c_str(), vector[73]);
    };

    aportfutaumen= vector[74];
    if(aportfutaumen!=0)
    printf("\n   Aportaciones para futuros aumentos de capital: $%f", aportfutaumen);
    if(vector[74]!=0){
            printf("\n %s: $%f", nombre[74].c_str(), vector[74]);
    };

    capcontr= capsocia+accentesor+primdeemision+aportfutaumen;
    printf("\n \n Total capital contribuido: $%f", capcontr);

    //Capital ganado
    printf("\n \n Capital ganado: \n");
    
    utioperdreten= vector[75]+vector[76]+vector[77];
    if(utioperdreten!=0)
    printf("\n Utilidades o perdidas retenidas o acumuladas: $%f", utioperdreten);
    for(x=75;x<78;x++){
        if(vector[x]!=0){
            printf("\n %s: $%f", nombre[x].c_str(), vector[x]);
        };
    }; 

    reservdecap= vector[78]+ vector[79];
    if(reservdecap!=0)
    printf("\n Reservas de capital: $%f", reservdecap);
    for(x=78;x<80;x++){
        if(vector[x]!=0){
            printf("\n %s: $%f", nombre[x].c_str(), vector[x]);
        };
    }; 

    capgana=utioperdreten+reservdecap;
    printf("\n \n Total de capital ganado: $%f", capgana);

    capcont=capcontr+capgana;
    printf("\n \n Total capital contable: $%f",capcont);

    pascap=capcont+pasivo;
    printf("\n \n Total pasivo + capital contable: $%f",pascap);

    //Razones financieras
    float solv,solvin, liq, capnettra, apalanc, indinvcap, invalcon;
    solv= actvcort/pasvcort;
    printf("\n \n Solvencia= $%f / $%f =%f", actvcort, pasvcort, solv);

    solvin=(actvcort-invent)/pasvcort;
    printf("\n Solvencia inmediata (prueba del acido)= ($%f-$%f) / $%f =%f", actvcort, invent, pasvcort, solvin);

    liq=efectequiv/pasvcort;
    printf("\n Liquidez= $%f / $%f =%f", efectequiv, pasvcort, liq);

    capnettra=actvcort-pasvcort;
    printf("\n Capital neta de trabajo= $%f - $%f =$%f", actvcort, pasvcort, capnettra);

    apalanc= pasivo/ capcont;
    printf("\n Apalancamiento= $%f / $%f =%f", pasivo, capcont, apalanc);

    indinvcap= propplanyeq/ capcont;
    printf("\n Indice de inversion capital= $%f / $%f =%f", propplanyeq, capcont, indinvcap);

    invalcon= capcont/capsocia;
    printf("\n Indice del valor contable de capital= $%f / $%f =%f", capcont, capsocia, invalcon);

    getch();
    getch();

}