; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00504c70(int param_1,int param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004ff2c0 at 005015cf
;
; Referenced Globals:
;   undefined4 DAT_0058faef
;   undefined4 DAT_0058faf2
;
; Called Functions:
;   FUN_00564bc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00504c70
        ;   Label: FUN_00504c70
    PUSH ESI                            ; 00504c71
    PUSH EDI                            ; 00504c72
    PUSH EBP                            ; 00504c73
    SUB ESP,0x4                         ; 00504c74
    MOV EBP,dword ptr [ESP + 0x18]      ; 00504c77
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00504c7b
    MOV EDX,0x1                         ; 00504c7f
    MOV ECX,dword ptr [EBP + 0x28]      ; 00504c84
    XOR ESI,ESI                         ; 00504c87
    MOV dword ptr [ESP],EDX             ; 00504c89
    CMP EBX,ECX                         ; 00504c8c
    JGE 0x00504cb0                      ; 00504c8e
        ;   XREF to: 00504cb0 (CONDITIONAL_JUMP)  ; LAB_00504cb0
    MOV EDI,dword ptr [EBP + 0x2c]      ; 00504c90
        ;   Label: LAB_00504c90
    MOV EDI,dword ptr [EDI + EBX*0x8 + 0x4] ; 00504c93
    MOV AH,byte ptr [EDI]               ; 00504c97
    CMP AH,0x7b                         ; 00504c99
    JNZ 0x00504cbf                      ; 00504c9c
        ;   XREF to: 00504cbf (CONDITIONAL_JUMP)  ; LAB_00504cbf
    INC EBX                             ; 00504c9e
    INC ESI                             ; 00504c9f
    TEST EBX,EBX                        ; 00504ca0
        ;   Label: LAB_00504ca0
    JL 0x00504cb0                       ; 00504ca2
        ;   XREF to: 00504cb0 (CONDITIONAL_JUMP)  ; LAB_00504cb0
    XOR EDI,EDI                         ; 00504ca4
    MOV EAX,dword ptr [EBP + 0x28]      ; 00504ca6
    MOV dword ptr [ESP],EDI             ; 00504ca9
    CMP EBX,EAX                         ; 00504cac
    JL 0x00504c90                       ; 00504cae
        ;   XREF to: 00504c90 (CONDITIONAL_JUMP)  ; LAB_00504c90
    MOV EBX,0xffffffff                  ; 00504cb0
        ;   Label: LAB_00504cb0
    MOV EAX,EBX                         ; 00504cb5
        ;   Label: LAB_00504cb5
    ADD ESP,0x4                         ; 00504cb7
    POP EBP                             ; 00504cba
    POP EDI                             ; 00504cbb
    POP ESI                             ; 00504cbc
    POP EBX                             ; 00504cbd
    RET                                 ; 00504cbe
    CMP AH,0x7d                         ; 00504cbf
        ;   Label: LAB_00504cbf
    JNZ 0x00504cdd                      ; 00504cc2
        ;   XREF to: 00504cdd (CONDITIONAL_JUMP)  ; LAB_00504cdd
    TEST ESI,ESI                        ; 00504cc4
    JNZ 0x00504cd9                      ; 00504cc6
        ;   XREF to: 00504cd9 (CONDITIONAL_JUMP)  ; LAB_00504cd9
    CMP dword ptr [ESP],0x0             ; 00504cc8
    JZ 0x00504cb5                       ; 00504ccc
        ;   XREF to: 00504cb5 (CONDITIONAL_JUMP)  ; LAB_00504cb5
    INC EBX                             ; 00504cce
    MOV EAX,EBX                         ; 00504ccf
    ADD ESP,0x4                         ; 00504cd1
    POP EBP                             ; 00504cd4
    POP EDI                             ; 00504cd5
    POP ESI                             ; 00504cd6
    POP EBX                             ; 00504cd7
    RET                                 ; 00504cd8
    INC EBX                             ; 00504cd9
        ;   Label: LAB_00504cd9
    DEC ESI                             ; 00504cda
    JMP 0x00504ca0                      ; 00504cdb
        ;   XREF to: 00504ca0 (UNCONDITIONAL_JUMP)  ; LAB_00504ca0
    TEST ESI,ESI                        ; 00504cdd
        ;   Label: LAB_00504cdd
    JG 0x00504ce7                       ; 00504cdf
        ;   XREF to: 00504ce7 (CONDITIONAL_JUMP)  ; LAB_00504ce7
    CMP dword ptr [ESP],0x0             ; 00504ce1
    JZ 0x00504cfb                       ; 00504ce5
        ;   XREF to: 00504cfb (CONDITIONAL_JUMP)  ; LAB_00504cfb
    PUSH 0x2                            ; 00504ce7
        ;   Label: LAB_00504ce7
    PUSH 0x58faef                       ; 00504ce9 | DAT_0058faef
    PUSH EDI                            ; 00504cee
    CALL FUN_00564bc0                   ; 00504cef
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00564bc0()
    ADD ESP,0xc                         ; 00504cf4
    TEST EAX,EAX                        ; 00504cf7
    JZ 0x00504d2f                       ; 00504cf9
        ;   XREF to: 00504d2f (CONDITIONAL_JUMP)  ; LAB_00504d2f
    TEST ESI,ESI                        ; 00504cfb
        ;   Label: LAB_00504cfb
    JG 0x00504d06                       ; 00504cfd
        ;   XREF to: 00504d06 (CONDITIONAL_JUMP)  ; LAB_00504d06
    CMP dword ptr [ESP + 0x20],0x0      ; 00504cff
    JZ 0x00504d1a                       ; 00504d04
        ;   XREF to: 00504d1a (CONDITIONAL_JUMP)  ; LAB_00504d1a
    PUSH 0x4                            ; 00504d06
        ;   Label: LAB_00504d06
    PUSH 0x58faf2                       ; 00504d08 | DAT_0058faf2
    PUSH EDI                            ; 00504d0d
    CALL FUN_00564bc0                   ; 00504d0e
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00564bc0()
    ADD ESP,0xc                         ; 00504d13
    TEST EAX,EAX                        ; 00504d16
    JZ 0x00504d43                       ; 00504d18
        ;   XREF to: 00504d43 (CONDITIONAL_JUMP)  ; LAB_00504d43
    TEST ESI,ESI                        ; 00504d1a
        ;   Label: LAB_00504d1a
    JNZ 0x00504d57                      ; 00504d1c
        ;   XREF to: 00504d57 (CONDITIONAL_JUMP)  ; LAB_00504d57
    CMP dword ptr [ESP],0x0             ; 00504d1e
    JZ 0x00504cb5                       ; 00504d22
        ;   XREF to: 00504cb5 (CONDITIONAL_JUMP)  ; LAB_00504cb5
    INC EBX                             ; 00504d24
    MOV EAX,EBX                         ; 00504d25
    ADD ESP,0x4                         ; 00504d27
    POP EBP                             ; 00504d2a
    POP EDI                             ; 00504d2b
    POP ESI                             ; 00504d2c
    POP EBX                             ; 00504d2d
    RET                                 ; 00504d2e
    PUSH 0x1                            ; 00504d2f
        ;   Label: LAB_00504d2f
    INC EBX                             ; 00504d31
    PUSH EBX                            ; 00504d32
    PUSH EBP                            ; 00504d33
    CALL FUN_00504c70                   ; 00504d34
        ;   XREF to: 00504c70 (UNCONDITIONAL_CALL)  ; undefined FUN_00504c70()
    MOV EBX,EAX                         ; 00504d39
    ADD ESP,0xc                         ; 00504d3b
    JMP 0x00504ca0                      ; 00504d3e
        ;   XREF to: 00504ca0 (UNCONDITIONAL_JUMP)  ; LAB_00504ca0
    PUSH 0x1                            ; 00504d43
        ;   Label: LAB_00504d43
    INC EBX                             ; 00504d45
    PUSH EBX                            ; 00504d46
    PUSH EBP                            ; 00504d47
    CALL FUN_00504c70                   ; 00504d48
        ;   XREF to: 00504c70 (UNCONDITIONAL_CALL)  ; undefined FUN_00504c70()
    ADD ESP,0xc                         ; 00504d4d
    MOV EBX,EAX                         ; 00504d50
    JMP 0x00504ca0                      ; 00504d52
        ;   XREF to: 00504ca0 (UNCONDITIONAL_JUMP)  ; LAB_00504ca0
    INC EBX                             ; 00504d57
        ;   Label: LAB_00504d57
    JMP 0x00504ca0                      ; 00504d58
        ;   XREF to: 00504ca0 (UNCONDITIONAL_JUMP)  ; LAB_00504ca0

