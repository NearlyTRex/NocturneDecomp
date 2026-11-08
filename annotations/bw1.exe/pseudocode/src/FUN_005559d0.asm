; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005559d0(int *param_1,int param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_00544460 at 00547048
;
; Called Functions:
;   FUN_005559b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005559d0
        ;   Label: FUN_005559d0
    PUSH ESI                            ; 005559d1
    PUSH EDI                            ; 005559d2
    PUSH EBP                            ; 005559d3
    MOV EDI,dword ptr [ESP + 0x14]      ; 005559d4
    MOV EBP,dword ptr [ESP + 0x18]      ; 005559d8
    MOV EDX,dword ptr [EDI]             ; 005559dc
    XOR EBX,EBX                         ; 005559de
    TEST EDX,EDX                        ; 005559e0
    JLE 0x005559fb                      ; 005559e2
        ;   XREF to: 005559fb (CONDITIONAL_JUMP)  ; LAB_005559fb
    MOV ESI,EDI                         ; 005559e4
    CMP EBP,dword ptr [ESI + 0x150]     ; 005559e6
        ;   Label: LAB_005559e6
    JZ 0x00555a00                       ; 005559ec
        ;   XREF to: 00555a00 (CONDITIONAL_JUMP)  ; LAB_00555a00
    INC EBX                             ; 005559ee
        ;   Label: LAB_005559ee
    MOV ECX,dword ptr [EDI]             ; 005559ef
    ADD ESI,0x1a4                       ; 005559f1
    CMP EBX,ECX                         ; 005559f7
    JL 0x005559e6                       ; 005559f9
        ;   XREF to: 005559e6 (CONDITIONAL_JUMP)  ; LAB_005559e6
    POP EBP                             ; 005559fb
        ;   Label: LAB_005559fb
    POP EDI                             ; 005559fc
    POP ESI                             ; 005559fd
    POP EBX                             ; 005559fe
    RET                                 ; 005559ff
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00555a00
        ;   Label: LAB_00555a00
    PUSH EDX                            ; 00555a04
    PUSH EBX                            ; 00555a05
    PUSH EDI                            ; 00555a06
    CALL FUN_005559b0                   ; 00555a07
        ;   XREF to: 005559b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005559b0()
    ADD ESP,0xc                         ; 00555a0c
    JMP 0x005559ee                      ; 00555a0f
        ;   XREF to: 005559ee (UNCONDITIONAL_JUMP)  ; LAB_005559ee

