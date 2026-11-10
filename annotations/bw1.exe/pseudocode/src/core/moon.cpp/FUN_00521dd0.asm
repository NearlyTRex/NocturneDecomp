; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_moon_cpp_FUN_00521dd0(undefined4 param_1,float param_2)
;
;
; XREF[1]:
;   core_menu.cpp_showMainGameMenu_FUN_0050cc90 at 0050cdbd
;
; Referenced Globals:
;   undefined4 DAT_005ea453
;   undefined4 DAT_005ea45b
;   undefined4 DAT_005ea463
;   undefined4 DAT_01c43530
;   undefined4 DAT_01d33f64
;   undefined4 DAT_01d33f68
;   undefined4 DAT_01d33f6c
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 00521dd0
        ;   Label: core_moon.cpp_FUN_00521dd0
    FLD float ptr [ESP + 0x10]          ; 00521dd3
    FMUL double ptr [0x005ea453]        ; 00521dd7 | DAT_005ea453
    FADD float ptr [0x01d33f6c]         ; 00521ddd | DAT_01d33f6c
    FST float ptr [0x01d33f6c]          ; 00521de3 | DAT_01d33f6c
    FCOMP double ptr [0x005ea45b]       ; 00521de9 | DAT_005ea45b
    FNSTSW AX                           ; 00521def
    SAHF                                ; 00521df1
    JNC 0x00521e24                      ; 00521df2
        ;   XREF to: 00521e24 (CONDITIONAL_JUMP)  ; LAB_00521e24
    MOV EAX,[0x01c43530]                ; 00521df4 | DAT_01c43530
        ;   Label: LAB_00521df4
    MOV EDX,dword ptr [0x01d33f64]      ; 00521df9 | DAT_01d33f64
    SHL EAX,0x5                         ; 00521dff
    ADD EDX,EAX                         ; 00521e02
    MOV EAX,[0x01c43530]                ; 00521e04 | DAT_01c43530
    MOV ECX,dword ptr [0x01d33f68]      ; 00521e09 | DAT_01d33f68
    SHL EAX,0x4                         ; 00521e0f
    ADD ECX,EAX                         ; 00521e12
    MOV dword ptr [0x01d33f64],EDX      ; 00521e14 | DAT_01d33f64
    MOV dword ptr [0x01d33f68],ECX      ; 00521e1a | DAT_01d33f68
    ADD ESP,0x8                         ; 00521e20
    RET                                 ; 00521e23
    FLD float ptr [0x01d33f6c]          ; 00521e24 | DAT_01d33f6c
        ;   Label: LAB_00521e24
    FADD float ptr [0x005ea463]         ; 00521e2a | DAT_005ea463
    FSTP float ptr [0x01d33f6c]         ; 00521e30 | DAT_01d33f6c
    JMP 0x00521df4                      ; 00521e36
        ;   XREF to: 00521df4 (UNCONDITIONAL_JUMP)  ; LAB_00521df4

