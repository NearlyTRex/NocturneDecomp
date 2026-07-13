; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00548a50(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005a3740
;
; Called Functions:
;   FUN_00409ea0
;   FUN_0056445f
;   FUN_00564486
;   FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548a50
        ;   Label: FUN_00548a50
    MOV EBX,dword ptr [ESP + 0x8]       ; 00548a51
    TEST byte ptr [ESP + 0xc],0x4       ; 00548a55
    JNZ 0x00548a76                      ; 00548a5a
        ;   XREF to: 00548a76 (CONDITIONAL_JUMP)  ; LAB_00548a76
    PUSH 0x1                            ; 00548a5c
    PUSH EBX                            ; 00548a5e
    CALL FUN_00409ea0                   ; 00548a5f
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409ea0()
    ADD ESP,0x8                         ; 00548a64
    MOV DL,byte ptr [ESP + 0xc]         ; 00548a67
    MOV EBX,EAX                         ; 00548a6b
    TEST DL,0x2                         ; 00548a6d
    JNZ 0x00548a91                      ; 00548a70
        ;   XREF to: 00548a91 (CONDITIONAL_JUMP)  ; LAB_00548a91
    MOV EAX,EBX                         ; 00548a72
    POP EBX                             ; 00548a74
    RET                                 ; 00548a75
    PUSH 0x5a3740                       ; 00548a76 | DAT_005a3740
        ;   Label: LAB_00548a76
    PUSH EBX                            ; 00548a7b
    CALL FUN_0056445f                   ; 00548a7c
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 00548a81
    PUSH EAX                            ; 00548a84
    CALL FUN_00564486                   ; 00548a85
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 00548a8a
    MOV EAX,EBX                         ; 00548a8d
    POP EBX                             ; 00548a8f
    RET                                 ; 00548a90
    PUSH EAX                            ; 00548a91
        ;   Label: LAB_00548a91
    CALL FUN_00564494                   ; 00548a92
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 00548a97
    MOV EAX,EBX                         ; 00548a9a
    POP EBX                             ; 00548a9c
    RET                                 ; 00548a9d

