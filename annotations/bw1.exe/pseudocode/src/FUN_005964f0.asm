; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005964f0(int *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00612560
;
; Called Functions:
;   FUN_00484f00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005964f0
        ;   Label: FUN_005964f0
    PUSH EDI                            ; 005964f1
    PUSH EBP                            ; 005964f2
    MOV EDI,dword ptr [ESP + 0x10]      ; 005964f3
    MOV EDX,dword ptr [EDI]             ; 005964f7
    XOR EBX,EBX                         ; 005964f9
    TEST EDX,EDX                        ; 005964fb
    JLE 0x0059651e                      ; 005964fd
        ;   XREF to: 0059651e (CONDITIONAL_JUMP)  ; LAB_0059651e
    PUSH ESI                            ; 005964ff
    LEA ESI,[EDI + 0x4]                 ; 00596500
    PUSH ESI                            ; 00596503
        ;   Label: LAB_00596503
    MOV ECX,dword ptr [0x00612560]      ; 00596504 | DAT_00612560
    PUSH ECX                            ; 0059650a
    INC EBX                             ; 0059650b
    CALL FUN_00484f00                   ; 0059650c
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00484f00()
    ADD ESI,0x18                        ; 00596511
    MOV EBP,dword ptr [EDI]             ; 00596514
    ADD ESP,0x8                         ; 00596516
    CMP EBX,EBP                         ; 00596519
    JL 0x00596503                       ; 0059651b
        ;   XREF to: 00596503 (CONDITIONAL_JUMP)  ; LAB_00596503
    POP ESI                             ; 0059651d
    POP EBP                             ; 0059651e
        ;   Label: LAB_0059651e
    POP EDI                             ; 0059651f
    POP EBX                             ; 00596520
    RET                                 ; 00596521

