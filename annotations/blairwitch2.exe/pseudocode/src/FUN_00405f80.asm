; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00405f80(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b40
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   FUN_00403970
;   FUN_00431d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00405f80
        ;   Label: FUN_00405f80
    PUSH ESI                            ; 00405f81
    PUSH EBP                            ; 00405f82
    MOV EBX,dword ptr [ESP + 0x10]      ; 00405f83
    LEA ESI,[EBX + 0x18]                ; 00405f87
    LEA EAX,[EBX + 0x8]                 ; 00405f8a
    PUSH EAX                            ; 00405f8d
    CALL FUN_00403970                   ; 00405f8e
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined FUN_00403970()
    ADD ESP,0x4                         ; 00405f93
    TEST EAX,EAX                        ; 00405f96
    JZ 0x00405fd8                       ; 00405f98
        ;   XREF to: 00405fd8 (CONDITIONAL_JUMP)  ; LAB_00405fd8
    CMP dword ptr [0x01c38b40],0x0      ; 00405f9a | DAT_01c38b40
    JNZ 0x00405ff3                      ; 00405fa1
        ;   XREF to: 00405ff3 (CONDITIONAL_JUMP)  ; LAB_00405ff3
    CMP dword ptr [0x006141c0],0x20     ; 00405fa3 | DAT_006141c0
    JNZ 0x00405fe7                      ; 00405faa
        ;   XREF to: 00405fe7 (CONDITIONAL_JUMP)  ; LAB_00405fe7
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 00405fac | DAT_01c35e6c
    PUSH EDI                            ; 00405fb6
        ;   Label: LAB_00405fb6
    MOV EDI,0x1                         ; 00405fb7
    PUSH ESI                            ; 00405fbc
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405fbd
    XOR EBP,EBP                         ; 00405fc0
    PUSH EAX                            ; 00405fc2
    MOV dword ptr [0x01c38b54],EDI      ; 00405fc3 | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EBP      ; 00405fc9 | DAT_01c38b58
    CALL FUN_00431d90                   ; 00405fcf
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; undefined FUN_00431d90()
    ADD ESP,0x8                         ; 00405fd4
    POP EDI                             ; 00405fd7
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405fd8
        ;   Label: LAB_00405fd8
    ADD EBX,0x18                        ; 00405fdb
    SHL EAX,0x2                         ; 00405fde
    ADD EAX,EBX                         ; 00405fe1
    POP EBP                             ; 00405fe3
    POP ESI                             ; 00405fe4
    POP EBX                             ; 00405fe5
    RET                                 ; 00405fe6
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 00405fe7 | DAT_01c35e6c
        ;   Label: LAB_00405fe7
    JMP 0x00405fb6                      ; 00405ff1
        ;   XREF to: 00405fb6 (UNCONDITIONAL_JUMP)  ; LAB_00405fb6
    CMP dword ptr [0x006141c0],0x20     ; 00405ff3 | DAT_006141c0
        ;   Label: LAB_00405ff3
    JNZ 0x00406008                      ; 00405ffa
        ;   XREF to: 00406008 (CONDITIONAL_JUMP)  ; LAB_00406008
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 00405ffc | DAT_01c35e6c | LAB_0055b3b1
    JMP 0x00405fb6                      ; 00406006
        ;   XREF to: 00405fb6 (UNCONDITIONAL_JUMP)  ; LAB_00405fb6
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00406008 | DAT_01c35e6c | LAB_0055bb93
        ;   Label: LAB_00406008
    JMP 0x00405fb6                      ; 00406012
        ;   XREF to: 00405fb6 (UNCONDITIONAL_JUMP)  ; LAB_00405fb6

