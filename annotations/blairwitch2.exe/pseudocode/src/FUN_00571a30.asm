; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00571a30(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fc700
;
; Called Functions:
;   FUN_004ce3d0
;   FUN_005ade00
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571a30
        ;   Label: FUN_00571a30
    MOV EBX,dword ptr [ESP + 0x8]       ; 00571a31
    TEST byte ptr [ESP + 0xc],0x4       ; 00571a35
    JNZ 0x00571a7d                      ; 00571a3a
        ;   XREF to: 00571a7d (CONDITIONAL_JUMP)  ; LAB_00571a7d
    PUSH 0x0                            ; 00571a3c
    ADD EBX,0x60178                     ; 00571a3e
    PUSH EBX                            ; 00571a44
    CALL FUN_005ade00                   ; 00571a45
        ;   XREF to: 005ade00 (UNCONDITIONAL_CALL)  ; undefined FUN_005ade00()
    ADD ESP,0x8                         ; 00571a4a
    PUSH 0x0                            ; 00571a4d
    SUB EAX,0x3ab30                     ; 00571a4f
    PUSH EAX                            ; 00571a54
    CALL FUN_005ade00                   ; 00571a55
        ;   XREF to: 005ade00 (UNCONDITIONAL_CALL)  ; undefined FUN_005ade00()
    ADD ESP,0x8                         ; 00571a5a
    PUSH 0x1                            ; 00571a5d
    LEA EBX,[EAX + 0xfffda9b8]          ; 00571a5f
    PUSH EBX                            ; 00571a65
    CALL FUN_004ce3d0                   ; 00571a66
        ;   XREF to: 004ce3d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ce3d0()
    ADD ESP,0x8                         ; 00571a6b
    MOV DL,byte ptr [ESP + 0xc]         ; 00571a6e
    MOV EBX,EAX                         ; 00571a72
    TEST DL,0x2                         ; 00571a74
    JNZ 0x00571a98                      ; 00571a77
        ;   XREF to: 00571a98 (CONDITIONAL_JUMP)  ; LAB_00571a98
    MOV EAX,EBX                         ; 00571a79
    POP EBX                             ; 00571a7b
    RET                                 ; 00571a7c
    PUSH 0x5fc700                       ; 00571a7d | DAT_005fc700
        ;   Label: LAB_00571a7d
    PUSH EBX                            ; 00571a82
    CALL FUN_005b7fa7                   ; 00571a83
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 00571a88
    PUSH EAX                            ; 00571a8b
    CALL FUN_005b7fce                   ; 00571a8c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 00571a91
    MOV EAX,EBX                         ; 00571a94
    POP EBX                             ; 00571a96
    RET                                 ; 00571a97
    PUSH EAX                            ; 00571a98
        ;   Label: LAB_00571a98
    CALL FUN_005b7fdc                   ; 00571a99
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 00571a9e
    MOV EAX,EBX                         ; 00571aa1
    POP EBX                             ; 00571aa3
    RET                                 ; 00571aa4

