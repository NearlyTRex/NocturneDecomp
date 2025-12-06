; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_spotview.cpp_CSpotView_FUN_005b9950(CSpotView * this_ptr)
;
; Parameters:
; CSpotView *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_spotview.cpp_CSpotView_FUN_005b9670 at 005b9940
;
; Referenced Globals:
;   double DOUBLE_00652ffa = 3.14159265350000
;   float FLOAT_00653002 = 6.283185
;   float FLOAT_00653006 = -6.283185
;   double DOUBLE_0065300a = -1.57079632675000
;   double DOUBLE_00653012 = 1.57079632675000
;   double DOUBLE_0065301a = 0.100000000000000
;   double DOUBLE_00653022 = 10000
;   double DOUBLE_0065302a = 0.0100000000000000
;   double DOUBLE_00653032 = 100
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005b9950
        ;   Label: shape_spotview.cpp_CSpotView_FUN_005b9950
    FLD float ptr [EDX + 0x28]          ; 005b9954
    FCOMP double ptr [0x00652ffa]       ; 005b9957 | double DOUBLE_00652ffa
    FNSTSW AX                           ; 005b995d
    SAHF                                ; 005b995f
    JC 0x005b99f8                       ; 005b9960 | LAB_005b99f8
        ;   XREF to: 005b99f8 (CONDITIONAL_JUMP)
    FLD float ptr [EDX + 0x28]          ; 005b9966
        ;   Label: LAB_005b9966
    FCOMP double ptr [0x00652ffa]       ; 005b9969 | double DOUBLE_00652ffa
    FNSTSW AX                           ; 005b996f
    SAHF                                ; 005b9971
    JBE 0x005b9980                      ; 005b9972 | LAB_005b9980
        ;   XREF to: 005b9980 (CONDITIONAL_JUMP)
    FLD float ptr [EDX + 0x28]          ; 005b9974
    FADD float ptr [0x00653006]         ; 005b9977 | float FLOAT_00653006
    FSTP float ptr [EDX + 0x28]         ; 005b997d
    FLD float ptr [EDX + 0x24]          ; 005b9980
        ;   Label: LAB_005b9980
    FCOMP double ptr [0x0065300a]       ; 005b9983 | double DOUBLE_0065300a
    FNSTSW AX                           ; 005b9989
    SAHF                                ; 005b998b
    JNC 0x005b9995                      ; 005b998c | LAB_005b9995
        ;   XREF to: 005b9995 (CONDITIONAL_JUMP)
    MOV dword ptr [EDX + 0x24],0xbfc90fdb ; 005b998e
    FLD float ptr [EDX + 0x24]          ; 005b9995
        ;   Label: LAB_005b9995
    FCOMP double ptr [0x00653012]       ; 005b9998 | double DOUBLE_00653012
    FNSTSW AX                           ; 005b999e
    SAHF                                ; 005b99a0
    JBE 0x005b99aa                      ; 005b99a1 | LAB_005b99aa
        ;   XREF to: 005b99aa (CONDITIONAL_JUMP)
    MOV dword ptr [EDX + 0x24],0x3fc90fdb ; 005b99a3
    FLD float ptr [EDX + 0x2c]          ; 005b99aa
        ;   Label: LAB_005b99aa
    FCOMP double ptr [0x0065301a]       ; 005b99ad | double DOUBLE_0065301a
    FNSTSW AX                           ; 005b99b3
    SAHF                                ; 005b99b5
    JNC 0x005b99bf                      ; 005b99b6 | LAB_005b99bf
        ;   XREF to: 005b99bf (CONDITIONAL_JUMP)
    MOV dword ptr [EDX + 0x2c],0x3dcccccd ; 005b99b8
    FLD float ptr [EDX + 0x2c]          ; 005b99bf
        ;   Label: LAB_005b99bf
    FCOMP double ptr [0x00653022]       ; 005b99c2 | double DOUBLE_00653022
    FNSTSW AX                           ; 005b99c8
    SAHF                                ; 005b99ca
    JBE 0x005b99d4                      ; 005b99cb | LAB_005b99d4
        ;   XREF to: 005b99d4 (CONDITIONAL_JUMP)
    MOV dword ptr [EDX + 0x2c],0x461c4000 ; 005b99cd
    FLD float ptr [EDX + 0x38]          ; 005b99d4
        ;   Label: LAB_005b99d4
    FCOMP double ptr [0x0065302a]       ; 005b99d7 | double DOUBLE_0065302a
    FNSTSW AX                           ; 005b99dd
    SAHF                                ; 005b99df
    JNC 0x005b99e9                      ; 005b99e0 | LAB_005b99e9
        ;   XREF to: 005b99e9 (CONDITIONAL_JUMP)
    MOV dword ptr [EDX + 0x38],0x3c23d70a ; 005b99e2
    FLD float ptr [EDX + 0x38]          ; 005b99e9
        ;   Label: LAB_005b99e9
    FCOMP double ptr [0x00653032]       ; 005b99ec | double DOUBLE_00653032
    FNSTSW AX                           ; 005b99f2
    SAHF                                ; 005b99f4
    JA 0x005b9a09                       ; 005b99f5 | LAB_005b9a09
        ;   XREF to: 005b9a09 (CONDITIONAL_JUMP)
    RET                                 ; 005b99f7
    FLD float ptr [EDX + 0x28]          ; 005b99f8
        ;   Label: LAB_005b99f8
    FADD float ptr [0x00653002]         ; 005b99fb | float FLOAT_00653002
    FSTP float ptr [EDX + 0x28]         ; 005b9a01
    JMP 0x005b9966                      ; 005b9a04 | LAB_005b9966
        ;   XREF to: 005b9966 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EDX + 0x38],0x42c80000 ; 005b9a09
        ;   Label: LAB_005b9a09
    RET                                 ; 005b9a10

