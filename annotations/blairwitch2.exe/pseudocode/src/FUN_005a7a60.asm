; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005a7a60(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_006000c0
;
; Called Functions:
;   FUN_00589ae0
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a7a60
        ;   Label: FUN_005a7a60
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a7a61
    TEST byte ptr [ESP + 0xc],0x4       ; 005a7a65
    JNZ 0x005a7a86                      ; 005a7a6a
        ;   XREF to: 005a7a86 (CONDITIONAL_JUMP)  ; LAB_005a7a86
    PUSH 0x1                            ; 005a7a6c
    PUSH EBX                            ; 005a7a6e
    CALL FUN_00589ae0                   ; 005a7a6f
        ;   XREF to: 00589ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_00589ae0()
    ADD ESP,0x8                         ; 005a7a74
    MOV DL,byte ptr [ESP + 0xc]         ; 005a7a77
    MOV EBX,EAX                         ; 005a7a7b
    TEST DL,0x2                         ; 005a7a7d
    JNZ 0x005a7aa1                      ; 005a7a80
        ;   XREF to: 005a7aa1 (CONDITIONAL_JUMP)  ; LAB_005a7aa1
    MOV EAX,EBX                         ; 005a7a82
    POP EBX                             ; 005a7a84
    RET                                 ; 005a7a85
    PUSH 0x6000c0                       ; 005a7a86 | DAT_006000c0
        ;   Label: LAB_005a7a86
    PUSH EBX                            ; 005a7a8b
    CALL FUN_005b7fa7                   ; 005a7a8c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 005a7a91
    PUSH EAX                            ; 005a7a94
    CALL FUN_005b7fce                   ; 005a7a95
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 005a7a9a
    MOV EAX,EBX                         ; 005a7a9d
    POP EBX                             ; 005a7a9f
    RET                                 ; 005a7aa0
    PUSH EAX                            ; 005a7aa1
        ;   Label: LAB_005a7aa1
    CALL FUN_005b7fdc                   ; 005a7aa2
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 005a7aa7
    MOV EAX,EBX                         ; 005a7aaa
    POP EBX                             ; 005a7aac
    RET                                 ; 005a7aad

