; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00485ba0(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005ff450
;
; Called Functions:
;   FUN_00408730
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00485ba0
        ;   Label: FUN_00485ba0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00485ba1
    TEST byte ptr [ESP + 0xc],0x4       ; 00485ba5
    JNZ 0x00485bc6                      ; 00485baa
        ;   XREF to: 00485bc6 (CONDITIONAL_JUMP)  ; LAB_00485bc6
    PUSH 0x1                            ; 00485bac
    PUSH EBX                            ; 00485bae
    CALL FUN_00408730                   ; 00485baf
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 00485bb4
    MOV DL,byte ptr [ESP + 0xc]         ; 00485bb7
    MOV EBX,EAX                         ; 00485bbb
    TEST DL,0x2                         ; 00485bbd
    JNZ 0x00485be1                      ; 00485bc0
        ;   XREF to: 00485be1 (CONDITIONAL_JUMP)  ; LAB_00485be1
    MOV EAX,EBX                         ; 00485bc2
    POP EBX                             ; 00485bc4
    RET                                 ; 00485bc5
    PUSH 0x5ff450                       ; 00485bc6 | DAT_005ff450
        ;   Label: LAB_00485bc6
    PUSH EBX                            ; 00485bcb
    CALL FUN_005c030f                   ; 00485bcc
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 00485bd1
    PUSH EAX                            ; 00485bd4
    CALL FUN_005c0336                   ; 00485bd5
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 00485bda
    MOV EAX,EBX                         ; 00485bdd
    POP EBX                             ; 00485bdf
    RET                                 ; 00485be0
    PUSH EAX                            ; 00485be1
        ;   Label: LAB_00485be1
    CALL FUN_005c0344                   ; 00485be2
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 00485be7
    MOV EAX,EBX                         ; 00485bea
    POP EBX                             ; 00485bec
    RET                                 ; 00485bed

