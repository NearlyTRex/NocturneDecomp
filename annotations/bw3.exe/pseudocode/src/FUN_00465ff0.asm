; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00465ff0(char *param_1,char *param_2)
;
;
; XREF[2]:
;   FUN_00465730 at 00465757
;   FUN_00483020 at 004831a0
;
; Called Functions:
;   FUN_005a53f0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00465ff0
        ;   Label: FUN_00465ff0
    PUSH EDI                            ; 00465ff1
    MOV EDI,dword ptr [ESP + 0xc]       ; 00465ff2
    MOV ESI,dword ptr [ESP + 0x10]      ; 00465ff6
    PUSH 0x100                          ; 00465ffa
    PUSH ESI                            ; 00465fff
    PUSH EDI                            ; 00466000
    CALL FUN_005a53f0                   ; 00466001
        ;   XREF to: 005a53f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a53f0()
    ADD ESP,0xc                         ; 00466006
    CMP EAX,EDI                         ; 00466009
    JNZ 0x00466015                      ; 0046600b
        ;   XREF to: 00466015 (CONDITIONAL_JUMP)  ; LAB_00466015
    MOV EAX,0x1                         ; 0046600d
    POP EDI                             ; 00466012
    POP ESI                             ; 00466013
    RET                                 ; 00466014
    PUSH EDI                            ; 00466015
        ;   Label: LAB_00466015
    MOV AL,byte ptr [ESI]               ; 00466016
        ;   Label: LAB_00466016
    MOV byte ptr [EDI],AL               ; 00466018
    CMP AL,0x0                          ; 0046601a
    JZ 0x0046602e                       ; 0046601c
        ;   XREF to: 0046602e (CONDITIONAL_JUMP)  ; LAB_0046602e
    MOV AL,byte ptr [ESI + 0x1]         ; 0046601e
    ADD ESI,0x2                         ; 00466021
    MOV byte ptr [EDI + 0x1],AL         ; 00466024
    ADD EDI,0x2                         ; 00466027
    CMP AL,0x0                          ; 0046602a
    JNZ 0x00466016                      ; 0046602c
        ;   XREF to: 00466016 (CONDITIONAL_JUMP)  ; LAB_00466016
    POP EDI                             ; 0046602e
        ;   Label: LAB_0046602e
    XOR EAX,EAX                         ; 0046602f
    POP EDI                             ; 00466031
    POP ESI                             ; 00466032
    RET                                 ; 00466033

