; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_moon_cpp_CMoon_update_FUN_005024a0(CMoon *this_ptr,float param_2)
;
; Parameters:
; CMoon *          Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   param_2
;
; XREF[5]:
;   core_menu.cpp_configureCustomKeys_FUN_004ecc70 at 004ecd08
;   core_menu.cpp_configureGraphicsOptions_FUN_004ebf10 at 004ec023
;   core_menu.cpp_configureSoundOptions_FUN_004ed260 at 004ed2fd
;   core_menu.cpp_showMainGameMenu_FUN_004ee3f0 at 004ee51d
;   core_menu.cpp_showOptionsScreen_FUN_004ee1a0 at 004ee239
;
; Referenced Globals:
;   double g_DOUBLE_005df2dd = 12
;   double g_DOUBLE_005df2e5 = 74
;   float g_FLOAT_005df2ed = -74
;   int g_INT_01c2a370
;   int g_INT_01d1cdbc
;   int g_INT_01d1cdc0
;   float g_FLOAT_01d1cdc4
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 005024a0
        ;   Label: core_moon.cpp_CMoon_update_FUN_005024a0
    FLD float ptr [ESP + 0x10]          ; 005024a3
    FMUL double ptr [0x005df2dd]        ; 005024a7 | g_DOUBLE_005df2dd
    FADD float ptr [0x01d1cdc4]         ; 005024ad | g_FLOAT_01d1cdc4
    FST float ptr [0x01d1cdc4]          ; 005024b3 | g_FLOAT_01d1cdc4
    FCOMP double ptr [0x005df2e5]       ; 005024b9 | g_DOUBLE_005df2e5
    FNSTSW AX                           ; 005024bf
    SAHF                                ; 005024c1
    JNC 0x005024f4                      ; 005024c2
        ;   XREF to: 005024f4 (CONDITIONAL_JUMP)  ; LAB_005024f4
    MOV EAX,[0x01c2a370]                ; 005024c4 | g_INT_01c2a370
        ;   Label: LAB_005024c4
    MOV EDX,dword ptr [0x01d1cdbc]      ; 005024c9 | g_INT_01d1cdbc
    SHL EAX,0x5                         ; 005024cf
    ADD EDX,EAX                         ; 005024d2
    MOV EAX,[0x01c2a370]                ; 005024d4 | g_INT_01c2a370
    MOV ECX,dword ptr [0x01d1cdc0]      ; 005024d9 | g_INT_01d1cdc0
    SHL EAX,0x4                         ; 005024df
    ADD ECX,EAX                         ; 005024e2
    MOV dword ptr [0x01d1cdbc],EDX      ; 005024e4 | g_INT_01d1cdbc
    MOV dword ptr [0x01d1cdc0],ECX      ; 005024ea | g_INT_01d1cdc0
    ADD ESP,0x8                         ; 005024f0
    RET                                 ; 005024f3
    FLD float ptr [0x01d1cdc4]          ; 005024f4 | g_FLOAT_01d1cdc4
        ;   Label: LAB_005024f4
    FADD float ptr [0x005df2ed]         ; 005024fa | g_FLOAT_005df2ed
    FSTP float ptr [0x01d1cdc4]         ; 00502500 | g_FLOAT_01d1cdc4
    JMP 0x005024c4                      ; 00502506
        ;   XREF to: 005024c4 (UNCONDITIONAL_JUMP)  ; LAB_005024c4

