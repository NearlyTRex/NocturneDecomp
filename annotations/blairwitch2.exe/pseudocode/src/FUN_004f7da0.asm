; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f7da0(void)
;
;
; XREF[1]:
;   FUN_004f40a0 at 004f40ee
;
; Referenced Globals:
;   undefined4 DAT_01c38b4c
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;   undefined4 DAT_01d09858
;   undefined4 DAT_01d0985c
;   undefined4 DAT_01d09864
;   undefined4 DAT_01d09868
;
; *****************************************************************************

section .text

    MOV EAX,[0x01d09858]                ; 004f7da0 | DAT_01d09858
        ;   Label: FUN_004f7da0
    MOV ECX,dword ptr [0x01d09868]      ; 004f7da5 | DAT_01d09868
    XOR EDX,EDX                         ; 004f7dab
    OR AX,0x205                         ; 004f7dad
    MOV dword ptr [0x01c38b58],EDX      ; 004f7db1 | DAT_01c38b58
    MOV [0x01c38b54],EAX                ; 004f7db7 | DAT_01c38b54
    TEST ECX,ECX                        ; 004f7dbc
    JNZ 0x004f7dd4                      ; 004f7dbe
        ;   XREF to: 004f7dd4 (CONDITIONAL_JUMP)  ; LAB_004f7dd4
    CMP dword ptr [0x01d09864],0x0      ; 004f7dc0 | DAT_01d09864
        ;   Label: LAB_004f7dc0
    JNZ 0x004f7ddd                      ; 004f7dc7
        ;   XREF to: 004f7ddd (CONDITIONAL_JUMP)  ; LAB_004f7ddd
    MOV EAX,[0x01d0985c]                ; 004f7dc9 | DAT_01d0985c
    MOV [0x01c38b4c],EAX                ; 004f7dce | DAT_01c38b4c
    RET                                 ; 004f7dd3
    OR byte ptr [0x01c38b54],0x8        ; 004f7dd4 | DAT_01c38b54
        ;   Label: LAB_004f7dd4
    JMP 0x004f7dc0                      ; 004f7ddb
        ;   XREF to: 004f7dc0 (UNCONDITIONAL_JUMP)  ; LAB_004f7dc0
    OR word ptr [0x01c38b54],0x122      ; 004f7ddd | DAT_01c38b54
        ;   Label: LAB_004f7ddd
    MOV EAX,[0x01d0985c]                ; 004f7de6 | DAT_01d0985c
    MOV [0x01c38b4c],EAX                ; 004f7deb | DAT_01c38b4c
    RET                                 ; 004f7df0

