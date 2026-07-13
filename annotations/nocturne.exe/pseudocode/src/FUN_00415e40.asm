; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00415e40(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined1* PTR_FUN_0059a744 = 00416500
;   undefined4 DAT_0059a860
;
; Called Functions:
;   FUN_00409ea0
;   FUN_00415ee0
;   FUN_00418110
;   FUN_00418130
;   FUN_0041a6c0
;   FUN_0056445f
;   FUN_00564486
;   FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415e40
        ;   Label: FUN_00415e40
    MOV EBX,dword ptr [ESP + 0x8]       ; 00415e41
    TEST byte ptr [ESP + 0xc],0x4       ; 00415e45
    JNZ 0x00415eb4                      ; 00415e4a
        ;   XREF to: 00415eb4 (CONDITIONAL_JUMP)  ; LAB_00415eb4
    PUSH 0x0                            ; 00415e4c
    PUSH 0x0                            ; 00415e4e
    PUSH EBX                            ; 00415e50
    MOV dword ptr [EBX + 0x14c],0x59a744 ; 00415e51 | PTR_FUN_0059a744
    CALL FUN_00415ee0                   ; 00415e5b
        ;   XREF to: 00415ee0 (UNCONDITIONAL_CALL)  ; undefined FUN_00415ee0()
    ADD ESP,0xc                         ; 00415e60
    PUSH 0x0                            ; 00415e63
    ADD EBX,0xcb4                       ; 00415e65
    PUSH EBX                            ; 00415e6b
    CALL FUN_0041a6c0                   ; 00415e6c
        ;   XREF to: 0041a6c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a6c0()
    ADD ESP,0x8                         ; 00415e71
    PUSH 0x0                            ; 00415e74
    SUB EAX,0x56c                       ; 00415e76
    PUSH EAX                            ; 00415e7b
    CALL FUN_00418130                   ; 00415e7c
        ;   XREF to: 00418130 (UNCONDITIONAL_CALL)  ; undefined FUN_00418130()
    ADD ESP,0x8                         ; 00415e81
    PUSH 0x0                            ; 00415e84
    SUB EAX,0x4c0                       ; 00415e86
    PUSH EAX                            ; 00415e8b
    CALL FUN_00418110                   ; 00415e8c
        ;   XREF to: 00418110 (UNCONDITIONAL_CALL)  ; undefined FUN_00418110()
    ADD ESP,0x8                         ; 00415e91
    PUSH 0x1                            ; 00415e94
    LEA EBX,[EAX + 0xfffffd78]          ; 00415e96
    PUSH EBX                            ; 00415e9c
    CALL FUN_00409ea0                   ; 00415e9d
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409ea0()
    ADD ESP,0x8                         ; 00415ea2
    MOV DL,byte ptr [ESP + 0xc]         ; 00415ea5
    MOV EBX,EAX                         ; 00415ea9
    TEST DL,0x2                         ; 00415eab
    JNZ 0x00415ecf                      ; 00415eae
        ;   XREF to: 00415ecf (CONDITIONAL_JUMP)  ; LAB_00415ecf
    MOV EAX,EBX                         ; 00415eb0
    POP EBX                             ; 00415eb2
    RET                                 ; 00415eb3
    PUSH 0x59a860                       ; 00415eb4 | DAT_0059a860
        ;   Label: LAB_00415eb4
    PUSH EBX                            ; 00415eb9
    CALL FUN_0056445f                   ; 00415eba
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 00415ebf
    PUSH EAX                            ; 00415ec2
    CALL FUN_00564486                   ; 00415ec3
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 00415ec8
    MOV EAX,EBX                         ; 00415ecb
    POP EBX                             ; 00415ecd
    RET                                 ; 00415ece
    PUSH EAX                            ; 00415ecf
        ;   Label: LAB_00415ecf
    CALL FUN_00564494                   ; 00415ed0
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 00415ed5
    MOV EAX,EBX                         ; 00415ed8
    POP EBX                             ; 00415eda
    RET                                 ; 00415edb

