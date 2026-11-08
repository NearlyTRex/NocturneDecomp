; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00405e40(int param_1)
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

    PUSH EBX                            ; 00405e40
        ;   Label: FUN_00405e40
    PUSH ESI                            ; 00405e41
    PUSH EBP                            ; 00405e42
    MOV EBX,dword ptr [ESP + 0x10]      ; 00405e43
    LEA ESI,[EBX + 0x18]                ; 00405e47
    LEA EAX,[EBX + 0x8]                 ; 00405e4a
    PUSH EAX                            ; 00405e4d
    CALL FUN_00403970                   ; 00405e4e
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined FUN_00403970()
    ADD ESP,0x4                         ; 00405e53
    TEST EAX,EAX                        ; 00405e56
    JZ 0x00405e9b                       ; 00405e58
        ;   XREF to: 00405e9b (CONDITIONAL_JUMP)  ; LAB_00405e9b
    CMP dword ptr [0x01c38b40],0x0      ; 00405e5a | DAT_01c38b40
    JNZ 0x00405eb6                      ; 00405e61
        ;   XREF to: 00405eb6 (CONDITIONAL_JUMP)  ; LAB_00405eb6
    CMP dword ptr [0x006141c0],0x20     ; 00405e63 | DAT_006141c0
    JNZ 0x00405eaa                      ; 00405e6a
        ;   XREF to: 00405eaa (CONDITIONAL_JUMP)  ; LAB_00405eaa
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 00405e6c | DAT_01c35e6c
    PUSH EDI                            ; 00405e76
        ;   Label: LAB_00405e76
    MOV EDI,0x85                        ; 00405e77
    PUSH ESI                            ; 00405e7c
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405e7d
    MOV EBP,0x1                         ; 00405e80
    PUSH EAX                            ; 00405e85
    MOV dword ptr [0x01c38b54],EDI      ; 00405e86 | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EBP      ; 00405e8c | DAT_01c38b58
    CALL FUN_00431d90                   ; 00405e92
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; undefined FUN_00431d90()
    ADD ESP,0x8                         ; 00405e97
    POP EDI                             ; 00405e9a
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405e9b
        ;   Label: LAB_00405e9b
    ADD EBX,0x18                        ; 00405e9e
    SHL EAX,0x2                         ; 00405ea1
    ADD EAX,EBX                         ; 00405ea4
    POP EBP                             ; 00405ea6
    POP ESI                             ; 00405ea7
    POP EBX                             ; 00405ea8
    RET                                 ; 00405ea9
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 00405eaa | DAT_01c35e6c
        ;   Label: LAB_00405eaa
    JMP 0x00405e76                      ; 00405eb4
        ;   XREF to: 00405e76 (UNCONDITIONAL_JUMP)  ; LAB_00405e76
    CMP dword ptr [0x006141c0],0x20     ; 00405eb6 | DAT_006141c0
        ;   Label: LAB_00405eb6
    JNZ 0x00405ecb                      ; 00405ebd
        ;   XREF to: 00405ecb (CONDITIONAL_JUMP)  ; LAB_00405ecb
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 00405ebf | DAT_01c35e6c | LAB_0055b3b1
    JMP 0x00405e76                      ; 00405ec9
        ;   XREF to: 00405e76 (UNCONDITIONAL_JUMP)  ; LAB_00405e76
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00405ecb | DAT_01c35e6c | LAB_0055bb93
        ;   Label: LAB_00405ecb
    JMP 0x00405e76                      ; 00405ed5
        ;   XREF to: 00405e76 (UNCONDITIONAL_JUMP)  ; LAB_00405e76

