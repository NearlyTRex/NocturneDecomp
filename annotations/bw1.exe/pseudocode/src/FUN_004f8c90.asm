; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004f8c90(int param_1,undefined4 param_2)
;
;
; XREF[3]:
;   FUN_00471af0 at 00471d95
;   FUN_00476510 at 00476526
;   FUN_004f8ce0 at 004f8cea
;
; Called Functions:
;   FUN_0040c550
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f8c90
        ;   Label: FUN_004f8c90
    PUSH ESI                            ; 004f8c91
    PUSH EDI                            ; 004f8c92
    PUSH EBP                            ; 004f8c93
    MOV EDI,dword ptr [ESP + 0x14]      ; 004f8c94
    MOV EBP,dword ptr [ESP + 0x18]      ; 004f8c98
    MOV EDX,dword ptr [EDI + 0x10]      ; 004f8c9c
    XOR ESI,ESI                         ; 004f8c9f
    TEST EDX,EDX                        ; 004f8ca1
    JLE 0x004f8cc3                      ; 004f8ca3
        ;   XREF to: 004f8cc3 (CONDITIONAL_JUMP)  ; LAB_004f8cc3
    MOV EBX,EDI                         ; 004f8ca5
    PUSH EBP                            ; 004f8ca7
        ;   Label: LAB_004f8ca7
    MOV EAX,dword ptr [EBX + 0x14]      ; 004f8ca8
    PUSH EAX                            ; 004f8cab
    CALL FUN_0040c550                   ; 004f8cac
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c550()
    ADD ESP,0x8                         ; 004f8cb1
    TEST EAX,EAX                        ; 004f8cb4
    JNZ 0x004f8cca                      ; 004f8cb6
        ;   XREF to: 004f8cca (CONDITIONAL_JUMP)  ; LAB_004f8cca
    INC ESI                             ; 004f8cb8
    MOV ECX,dword ptr [EDI + 0x10]      ; 004f8cb9
    ADD EBX,0x4                         ; 004f8cbc
    CMP ESI,ECX                         ; 004f8cbf
    JL 0x004f8ca7                       ; 004f8cc1
        ;   XREF to: 004f8ca7 (CONDITIONAL_JUMP)  ; LAB_004f8ca7
    XOR EAX,EAX                         ; 004f8cc3
        ;   Label: LAB_004f8cc3
    POP EBP                             ; 004f8cc5
    POP EDI                             ; 004f8cc6
    POP ESI                             ; 004f8cc7
    POP EBX                             ; 004f8cc8
    RET                                 ; 004f8cc9
    MOV EAX,dword ptr [EBX + 0x14]      ; 004f8cca
        ;   Label: LAB_004f8cca
    POP EBP                             ; 004f8ccd
    POP EDI                             ; 004f8cce
    POP ESI                             ; 004f8ccf
    POP EBX                             ; 004f8cd0
    RET                                 ; 004f8cd1

