; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004a76a0(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e0190
;
; Called Functions:
;   FUN_0057aed0
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a76a0
        ;   Label: FUN_004a76a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a76a1
    TEST byte ptr [ESP + 0xc],0x4       ; 004a76a5
    JNZ 0x004a76c6                      ; 004a76aa
        ;   XREF to: 004a76c6 (CONDITIONAL_JUMP)  ; LAB_004a76c6
    PUSH 0x1                            ; 004a76ac
    PUSH EBX                            ; 004a76ae
    CALL FUN_0057aed0                   ; 004a76af
        ;   XREF to: 0057aed0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057aed0()
    ADD ESP,0x8                         ; 004a76b4
    MOV DL,byte ptr [ESP + 0xc]         ; 004a76b7
    MOV EBX,EAX                         ; 004a76bb
    TEST DL,0x2                         ; 004a76bd
    JNZ 0x004a76e1                      ; 004a76c0
        ;   XREF to: 004a76e1 (CONDITIONAL_JUMP)  ; LAB_004a76e1
    MOV EAX,EBX                         ; 004a76c2
    POP EBX                             ; 004a76c4
    RET                                 ; 004a76c5
    PUSH 0x5e0190                       ; 004a76c6 | DAT_005e0190
        ;   Label: LAB_004a76c6
    PUSH EBX                            ; 004a76cb
    CALL FUN_005a308f                   ; 004a76cc
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 004a76d1
    PUSH EAX                            ; 004a76d4
    CALL FUN_005a30b6                   ; 004a76d5
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 004a76da
    MOV EAX,EBX                         ; 004a76dd
    POP EBX                             ; 004a76df
    RET                                 ; 004a76e0
    PUSH EAX                            ; 004a76e1
        ;   Label: LAB_004a76e1
    CALL FUN_005a30c4                   ; 004a76e2
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 004a76e7
    MOV EAX,EBX                         ; 004a76ea
    POP EBX                             ; 004a76ec
    RET                                 ; 004a76ed

