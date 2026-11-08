; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00404c80(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38aec
;   undefined4 DAT_01c38b40
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   FUN_00403970
;   FUN_00403a20
;   FUN_00431d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404c80
        ;   Label: FUN_00404c80
    PUSH ESI                            ; 00404c81
    MOV EBX,dword ptr [ESP + 0xc]       ; 00404c82
    LEA ESI,[EBX + 0x18]                ; 00404c86
    LEA EAX,[EBX + 0x8]                 ; 00404c89
    PUSH EAX                            ; 00404c8c
    CALL FUN_00403970                   ; 00404c8d
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined FUN_00403970()
    ADD ESP,0x4                         ; 00404c92
    TEST EAX,EAX                        ; 00404c95
    JZ 0x00404cee                       ; 00404c97
        ;   XREF to: 00404cee (CONDITIONAL_JUMP)  ; LAB_00404cee
    CMP dword ptr [0x01c38aec],0x0      ; 00404c99 | DAT_01c38aec
    JZ 0x00404d29                       ; 00404ca0
        ;   XREF to: 00404d29 (CONDITIONAL_JUMP)  ; LAB_00404d29
    CMP dword ptr [0x01c38b40],0x0      ; 00404ca6 | DAT_01c38b40
    JNZ 0x00404d08                      ; 00404cad
        ;   XREF to: 00404d08 (CONDITIONAL_JUMP)  ; LAB_00404d08
    CMP dword ptr [0x006141c0],0x20     ; 00404caf | DAT_006141c0
    JNZ 0x00404cfc                      ; 00404cb6
        ;   XREF to: 00404cfc (CONDITIONAL_JUMP)  ; LAB_00404cfc
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 00404cb8 | DAT_01c35e6c
        ;   Label: LAB_00404cb8
    MOV EDX,0xd9                        ; 00404cc2
        ;   Label: LAB_00404cc2
    MOV ECX,0x1                         ; 00404cc7
    PUSH EBX                            ; 00404ccc
    MOV dword ptr [0x01c38b54],EDX      ; 00404ccd | DAT_01c38b54
    MOV dword ptr [0x01c38b58],ECX      ; 00404cd3 | DAT_01c38b58
    CALL FUN_00403a20                   ; 00404cd9
        ;   XREF to: 00403a20 (UNCONDITIONAL_CALL)  ; undefined FUN_00403a20()
    ADD ESP,0x4                         ; 00404cde
    PUSH ESI                            ; 00404ce1
    MOV ESI,dword ptr [EBX + 0x4]       ; 00404ce2
    PUSH ESI                            ; 00404ce5
    CALL FUN_00431d90                   ; 00404ce6
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; undefined FUN_00431d90()
    ADD ESP,0x8                         ; 00404ceb
    MOV ESI,dword ptr [EBX + 0x4]       ; 00404cee
        ;   Label: LAB_00404cee
    LEA EAX,[EBX + 0x18]                ; 00404cf1
    SHL ESI,0x2                         ; 00404cf4
    ADD EAX,ESI                         ; 00404cf7
    POP ESI                             ; 00404cf9
    POP EBX                             ; 00404cfa
    RET                                 ; 00404cfb
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 00404cfc | DAT_01c35e6c
        ;   Label: LAB_00404cfc
    JMP 0x00404cc2                      ; 00404d06
        ;   XREF to: 00404cc2 (UNCONDITIONAL_JUMP)  ; LAB_00404cc2
    CMP dword ptr [0x006141c0],0x20     ; 00404d08 | DAT_006141c0
        ;   Label: LAB_00404d08
    JNZ 0x00404d1d                      ; 00404d0f
        ;   XREF to: 00404d1d (CONDITIONAL_JUMP)  ; LAB_00404d1d
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 00404d11 | DAT_01c35e6c | LAB_0055b3b1
    JMP 0x00404cc2                      ; 00404d1b
        ;   XREF to: 00404cc2 (UNCONDITIONAL_JUMP)  ; LAB_00404cc2
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00404d1d | DAT_01c35e6c | LAB_0055bb93
        ;   Label: LAB_00404d1d
    JMP 0x00404cc2                      ; 00404d27
        ;   XREF to: 00404cc2 (UNCONDITIONAL_JUMP)  ; LAB_00404cc2
    CMP dword ptr [0x01c38b40],0x0      ; 00404d29 | DAT_01c38b40
        ;   Label: LAB_00404d29
    JNZ 0x00404d4e                      ; 00404d30
        ;   XREF to: 00404d4e (CONDITIONAL_JUMP)  ; LAB_00404d4e
    CMP dword ptr [0x006141c0],0x20     ; 00404d32 | DAT_006141c0
    JZ 0x00404cb8                       ; 00404d39
        ;   XREF to: 00404cb8 (CONDITIONAL_JUMP)  ; LAB_00404cb8
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 00404d3f | DAT_01c35e6c
    JMP 0x00404cc2                      ; 00404d49
        ;   XREF to: 00404cc2 (UNCONDITIONAL_JUMP)  ; LAB_00404cc2
    CMP dword ptr [0x006141c0],0x20     ; 00404d4e | DAT_006141c0
        ;   Label: LAB_00404d4e
    JNZ 0x00404d1d                      ; 00404d55
        ;   XREF to: 00404d1d (CONDITIONAL_JUMP)  ; LAB_00404d1d
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 00404d57 | DAT_01c35e6c | LAB_0055b3b1
    JMP 0x00404cc2                      ; 00404d61
        ;   XREF to: 00404cc2 (UNCONDITIONAL_JUMP)  ; LAB_00404cc2

