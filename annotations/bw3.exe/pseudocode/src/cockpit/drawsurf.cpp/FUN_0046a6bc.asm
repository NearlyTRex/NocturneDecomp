; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int cockpit_drawsurf_cpp_FUN_0046a6bc(undefined4 param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01bdd7c4
;
; Called Functions:
;   engine_2d.c_getStringWidth_FUN_004018b0
;   engine_font.cpp_FUN_004b30c0
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 0046a6bc
        ;   Label: cockpit_drawsurf.cpp_FUN_0046a6bc
    SUB ESP,0x4                         ; 0046a6c0
    MOV EAX,dword ptr [ESP + 0xc]       ; 0046a6c3
    MOV EDX,dword ptr [0x01bdd7c4]      ; 0046a6c7 | DAT_01bdd7c4
    TEST EDX,EDX                        ; 0046a6cd
    JZ 0x0046a6df                       ; 0046a6cf
        ;   XREF to: 0046a6df (CONDITIONAL_JUMP)  ; LAB_0046a6df
    PUSH EAX                            ; 0046a6d1
    PUSH EDX                            ; 0046a6d2
    CALL engine_font.cpp_FUN_004b30c0   ; 0046a6d3
        ;   XREF to: 004b30c0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b30c0()
    ADD ESP,0x8                         ; 0046a6d8
    ADD ESP,0x4                         ; 0046a6db
    RET                                 ; 0046a6de
    MOV byte ptr [ESP],AL               ; 0046a6df
        ;   Label: LAB_0046a6df
    XOR AH,AH                           ; 0046a6e2
    MOV byte ptr [ESP + 0x1],AH         ; 0046a6e4
    MOV EAX,ESP                         ; 0046a6e8
    PUSH EAX                            ; 0046a6ea
    CALL engine_2d.c_getStringWidth_FUN_004018b0 ; 0046a6eb
        ;   XREF to: 004018b0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getStringWidth_FUN_004018b0(char * text)
    ADD ESP,0x4                         ; 0046a6f0
    DEC EAX                             ; 0046a6f3
    ADD ESP,0x4                         ; 0046a6f4
    RET                                 ; 0046a6f7

