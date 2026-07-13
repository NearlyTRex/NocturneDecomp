; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004f3e40(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005a1320
;
; Called Functions:
;   FUN_00409ea0
;   FUN_0056445f
;   FUN_00564486
;   FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f3e40
        ;   Label: FUN_004f3e40
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f3e41
    TEST byte ptr [ESP + 0xc],0x4       ; 004f3e45
    JNZ 0x004f3e66                      ; 004f3e4a
        ;   XREF to: 004f3e66 (CONDITIONAL_JUMP)  ; LAB_004f3e66
    PUSH 0x1                            ; 004f3e4c
    PUSH EBX                            ; 004f3e4e
    CALL FUN_00409ea0                   ; 004f3e4f
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409ea0()
    ADD ESP,0x8                         ; 004f3e54
    MOV DL,byte ptr [ESP + 0xc]         ; 004f3e57
    MOV EBX,EAX                         ; 004f3e5b
    TEST DL,0x2                         ; 004f3e5d
    JNZ 0x004f3e81                      ; 004f3e60
        ;   XREF to: 004f3e81 (CONDITIONAL_JUMP)  ; LAB_004f3e81
    MOV EAX,EBX                         ; 004f3e62
    POP EBX                             ; 004f3e64
    RET                                 ; 004f3e65
    PUSH 0x5a1320                       ; 004f3e66 | DAT_005a1320
        ;   Label: LAB_004f3e66
    PUSH EBX                            ; 004f3e6b
    CALL FUN_0056445f                   ; 004f3e6c
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 004f3e71
    PUSH EAX                            ; 004f3e74
    CALL FUN_00564486                   ; 004f3e75
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 004f3e7a
    MOV EAX,EBX                         ; 004f3e7d
    POP EBX                             ; 004f3e7f
    RET                                 ; 004f3e80
    PUSH EAX                            ; 004f3e81
        ;   Label: LAB_004f3e81
    CALL FUN_00564494                   ; 004f3e82
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 004f3e87
    MOV EAX,EBX                         ; 004f3e8a
    POP EBX                             ; 004f3e8c
    RET                                 ; 004f3e8d

