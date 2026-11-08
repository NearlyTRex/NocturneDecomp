; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_00573a40(undefined4 *param_1,byte param_2)
;
;
; XREF[15]:
;   FUN_00401010 at 004010d3
;   FUN_00401590 at 004015e4
;   FUN_00402940 at 00402a86
;   FUN_004350a0 at 004351d5
;   FUN_00438ef0 at 00438f94
;   FUN_00440a70 at 00440b15
;   FUN_004af920 at 004afb82
;   FUN_004bda10 at 004bde45
;   FUN_004bdfb0 at 004be3c7
;   FUN_00512fb0 at 00513090
;   ... and 5 more
;
; Referenced Globals:
;   undefined4 DAT_005daf90
;   undefined1* PTR_FUN_005e5a84 = 00573a40
;
; Called Functions:
;   FUN_00572540
;   FUN_00573db0
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00573a40
        ;   Label: FUN_00573a40
    MOV EBX,dword ptr [ESP + 0x8]       ; 00573a41
    TEST byte ptr [ESP + 0xc],0x4       ; 00573a45
    JNZ 0x00573a75                      ; 00573a4a
        ;   XREF to: 00573a75 (CONDITIONAL_JUMP)  ; LAB_00573a75
    PUSH EBX                            ; 00573a4c
    MOV dword ptr [EBX],0x5e5a84        ; 00573a4d | PTR_FUN_005e5a84
    CALL FUN_00573db0                   ; 00573a53
        ;   XREF to: 00573db0 (UNCONDITIONAL_CALL)  ; undefined FUN_00573db0()
    ADD ESP,0x4                         ; 00573a58
    PUSH 0x1                            ; 00573a5b
    PUSH EBX                            ; 00573a5d
    CALL FUN_00572540                   ; 00573a5e
        ;   XREF to: 00572540 (UNCONDITIONAL_CALL)  ; undefined FUN_00572540()
    ADD ESP,0x8                         ; 00573a63
    MOV DL,byte ptr [ESP + 0xc]         ; 00573a66
    MOV EBX,EAX                         ; 00573a6a
    TEST DL,0x2                         ; 00573a6c
    JNZ 0x00573a90                      ; 00573a6f
        ;   XREF to: 00573a90 (CONDITIONAL_JUMP)  ; LAB_00573a90
    MOV EAX,EBX                         ; 00573a71
    POP EBX                             ; 00573a73
    RET                                 ; 00573a74
    PUSH 0x5daf90                       ; 00573a75 | DAT_005daf90
        ;   Label: LAB_00573a75
    PUSH EBX                            ; 00573a7a
    CALL FUN_005a308f                   ; 00573a7b
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 00573a80
    PUSH EAX                            ; 00573a83
    CALL FUN_005a30b6                   ; 00573a84
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 00573a89
    MOV EAX,EBX                         ; 00573a8c
    POP EBX                             ; 00573a8e
    RET                                 ; 00573a8f
    PUSH EAX                            ; 00573a90
        ;   Label: LAB_00573a90
    CALL FUN_005a30c4                   ; 00573a91
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 00573a96
    MOV EAX,EBX                         ; 00573a99
    POP EBX                             ; 00573a9b
    RET                                 ; 00573a9c

