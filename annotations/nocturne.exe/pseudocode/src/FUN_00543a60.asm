; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00543a60(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005a30a0
;
; Called Functions:
;   FUN_00409ea0
;   FUN_0056445f
;   FUN_00564486
;   FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00543a60
        ;   Label: FUN_00543a60
    MOV EBX,dword ptr [ESP + 0x8]       ; 00543a61
    TEST byte ptr [ESP + 0xc],0x4       ; 00543a65
    JNZ 0x00543a86                      ; 00543a6a
        ;   XREF to: 00543a86 (CONDITIONAL_JUMP)  ; LAB_00543a86
    PUSH 0x1                            ; 00543a6c
    PUSH EBX                            ; 00543a6e
    CALL FUN_00409ea0                   ; 00543a6f
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409ea0()
    ADD ESP,0x8                         ; 00543a74
    MOV DL,byte ptr [ESP + 0xc]         ; 00543a77
    MOV EBX,EAX                         ; 00543a7b
    TEST DL,0x2                         ; 00543a7d
    JNZ 0x00543aa1                      ; 00543a80
        ;   XREF to: 00543aa1 (CONDITIONAL_JUMP)  ; LAB_00543aa1
    MOV EAX,EBX                         ; 00543a82
    POP EBX                             ; 00543a84
    RET                                 ; 00543a85
    PUSH 0x5a30a0                       ; 00543a86 | DAT_005a30a0
        ;   Label: LAB_00543a86
    PUSH EBX                            ; 00543a8b
    CALL FUN_0056445f                   ; 00543a8c
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 00543a91
    PUSH EAX                            ; 00543a94
    CALL FUN_00564486                   ; 00543a95
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 00543a9a
    MOV EAX,EBX                         ; 00543a9d
    POP EBX                             ; 00543a9f
    RET                                 ; 00543aa0
    PUSH EAX                            ; 00543aa1
        ;   Label: LAB_00543aa1
    CALL FUN_00564494                   ; 00543aa2
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 00543aa7
    MOV EAX,EBX                         ; 00543aaa
    POP EBX                             ; 00543aac
    RET                                 ; 00543aad

