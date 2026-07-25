; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004f7890(undefined1 *param_1,uint param_2,undefined4 param_3)
;
;
; Called Functions:
;   FUN_004f77d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f7890
        ;   Label: FUN_004f7890
    PUSH ESI                            ; 004f7891
    PUSH EDI                            ; 004f7892
    MOV ESI,dword ptr [ESP + 0x10]      ; 004f7893
    MOV EDI,dword ptr [ESP + 0x14]      ; 004f7897
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f789b
    XOR EBX,EBX                         ; 004f789f
    TEST EDI,EDI                        ; 004f78a1
    JBE 0x004f78c0                      ; 004f78a3
        ;   XREF to: 004f78c0 (CONDITIONAL_JUMP)  ; LAB_004f78c0
    XOR EDX,EDX                         ; 004f78a5
        ;   Label: LAB_004f78a5
    MOV DL,byte ptr [ESI]               ; 004f78a7
    PUSH EDX                            ; 004f78a9
    PUSH EAX                            ; 004f78aa
    INC ESI                             ; 004f78ab
    INC EBX                             ; 004f78ac
    CALL FUN_004f77d0                   ; 004f78ad
        ;   XREF to: 004f77d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f77d0()
    ADD ESP,0x8                         ; 004f78b2
    CMP EBX,EDI                         ; 004f78b5
    JC 0x004f78a5                       ; 004f78b7
        ;   XREF to: 004f78a5 (CONDITIONAL_JUMP)  ; LAB_004f78a5
    LEA EAX,[EAX]                       ; 004f78b9
    NOP                                 ; 004f78bf
    POP EDI                             ; 004f78c0
        ;   Label: LAB_004f78c0
    POP ESI                             ; 004f78c1
    POP EBX                             ; 004f78c2
    RET                                 ; 004f78c3

