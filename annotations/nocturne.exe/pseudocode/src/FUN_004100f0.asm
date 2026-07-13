; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004100f0(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00599a80
;
; Called Functions:
;   FUN_00409ea0
;   FUN_0056445f
;   FUN_00564486
;   FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004100f0
        ;   Label: FUN_004100f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004100f1
    TEST byte ptr [ESP + 0xc],0x4       ; 004100f5
    JNZ 0x00410116                      ; 004100fa
        ;   XREF to: 00410116 (CONDITIONAL_JUMP)  ; LAB_00410116
    PUSH 0x1                            ; 004100fc
    PUSH EBX                            ; 004100fe
    CALL FUN_00409ea0                   ; 004100ff
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409ea0()
    ADD ESP,0x8                         ; 00410104
    MOV DL,byte ptr [ESP + 0xc]         ; 00410107
    MOV EBX,EAX                         ; 0041010b
    TEST DL,0x2                         ; 0041010d
    JNZ 0x00410131                      ; 00410110
        ;   XREF to: 00410131 (CONDITIONAL_JUMP)  ; LAB_00410131
    MOV EAX,EBX                         ; 00410112
    POP EBX                             ; 00410114
    RET                                 ; 00410115
    PUSH 0x599a80                       ; 00410116 | DAT_00599a80
        ;   Label: LAB_00410116
    PUSH EBX                            ; 0041011b
    CALL FUN_0056445f                   ; 0041011c
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 00410121
    PUSH EAX                            ; 00410124
    CALL FUN_00564486                   ; 00410125
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 0041012a
    MOV EAX,EBX                         ; 0041012d
    POP EBX                             ; 0041012f
    RET                                 ; 00410130
    PUSH EAX                            ; 00410131
        ;   Label: LAB_00410131
    CALL FUN_00564494                   ; 00410132
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 00410137
    MOV EAX,EBX                         ; 0041013a
    POP EBX                             ; 0041013c
    RET                                 ; 0041013d

