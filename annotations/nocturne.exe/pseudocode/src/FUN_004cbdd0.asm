; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004cbdd0(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005a0270
;
; Called Functions:
;   FUN_00409ea0
;   FUN_0056445f
;   FUN_00564486
;   FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cbdd0
        ;   Label: FUN_004cbdd0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cbdd1
    TEST byte ptr [ESP + 0xc],0x4       ; 004cbdd5
    JNZ 0x004cbdf6                      ; 004cbdda
        ;   XREF to: 004cbdf6 (CONDITIONAL_JUMP)  ; LAB_004cbdf6
    PUSH 0x1                            ; 004cbddc
    PUSH EBX                            ; 004cbdde
    CALL FUN_00409ea0                   ; 004cbddf
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409ea0()
    ADD ESP,0x8                         ; 004cbde4
    MOV DL,byte ptr [ESP + 0xc]         ; 004cbde7
    MOV EBX,EAX                         ; 004cbdeb
    TEST DL,0x2                         ; 004cbded
    JNZ 0x004cbe11                      ; 004cbdf0
        ;   XREF to: 004cbe11 (CONDITIONAL_JUMP)  ; LAB_004cbe11
    MOV EAX,EBX                         ; 004cbdf2
    POP EBX                             ; 004cbdf4
    RET                                 ; 004cbdf5
    PUSH 0x5a0270                       ; 004cbdf6 | DAT_005a0270
        ;   Label: LAB_004cbdf6
    PUSH EBX                            ; 004cbdfb
    CALL FUN_0056445f                   ; 004cbdfc
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 004cbe01
    PUSH EAX                            ; 004cbe04
    CALL FUN_00564486                   ; 004cbe05
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 004cbe0a
    MOV EAX,EBX                         ; 004cbe0d
    POP EBX                             ; 004cbe0f
    RET                                 ; 004cbe10
    PUSH EAX                            ; 004cbe11
        ;   Label: LAB_004cbe11
    CALL FUN_00564494                   ; 004cbe12
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 004cbe17
    MOV EAX,EBX                         ; 004cbe1a
    POP EBX                             ; 004cbe1c
    RET                                 ; 004cbe1d

