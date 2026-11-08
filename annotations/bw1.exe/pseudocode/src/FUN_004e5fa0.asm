; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004e5fa0(void)
;
;
; XREF[2]:
;   FUN_004e5ff0 at 004e5fff
;   FUN_004e6020 at 004e6030
;
; Referenced Globals:
;   undefined4 DAT_01cd56ac
;   undefined4 DAT_01cd56b0
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [0x01cd56ac]      ; 004e5fa0 | DAT_01cd56ac
        ;   Label: FUN_004e5fa0
    MOV EAX,ECX                         ; 004e5fa6
    SHL EAX,0x4                         ; 004e5fa8
    ADD EAX,ECX                         ; 004e5fab
    SHL EAX,0x2                         ; 004e5fad
    INC ECX                             ; 004e5fb0
    ADD EAX,0x1cd56b4                   ; 004e5fb1
    CMP ECX,0x7d0                       ; 004e5fb6
    JL 0x004e5fc0                       ; 004e5fbc
        ;   XREF to: 004e5fc0 (CONDITIONAL_JUMP)  ; LAB_004e5fc0
    XOR ECX,ECX                         ; 004e5fbe
    MOV EDX,dword ptr [0x01cd56b0]      ; 004e5fc0 | DAT_01cd56b0
        ;   Label: LAB_004e5fc0
    CMP EDX,0x7d0                       ; 004e5fc6
    JL 0x004e5fd5                       ; 004e5fcc
        ;   XREF to: 004e5fd5 (CONDITIONAL_JUMP)  ; LAB_004e5fd5
    MOV dword ptr [0x01cd56ac],ECX      ; 004e5fce | DAT_01cd56ac
    RET                                 ; 004e5fd4
    PUSH EBX                            ; 004e5fd5
        ;   Label: LAB_004e5fd5
    LEA EBX,[EDX + 0x1]                 ; 004e5fd6
    MOV dword ptr [0x01cd56b0],EBX      ; 004e5fd9 | DAT_01cd56b0
    POP EBX                             ; 004e5fdf
    MOV dword ptr [0x01cd56ac],ECX      ; 004e5fe0 | DAT_01cd56ac
    RET                                 ; 004e5fe6

