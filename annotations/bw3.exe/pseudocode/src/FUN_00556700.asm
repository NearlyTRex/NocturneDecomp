; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_00556700(undefined4 param_1)
;
;
; XREF[58]:
;   FUN_0040f010 at 0040f184
;   FUN_00412530 at 0041290c
;   FUN_004179b0 at 0041806e
;   FUN_00419b40 at 0041a1c0
;   FUN_00421300 at 004213b0
;   FUN_00424550 at 004245f4
;   FUN_00425da0 at 00426f41
;   FUN_00428a80 at 00428c36
;   FUN_004298f0 at 0042a169
;   FUN_0042cd70 at 0042cdc4
;   ... and 48 more
;
; Called Functions:
;   FUN_00552f10
;   FUN_00556fd0
;   FUN_005586d0
;
; *****************************************************************************

section .text

    CALL FUN_005586d0                   ; 00556700
        ;   XREF to: 005586d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005586d0()
        ;   Label: FUN_00556700
    CMP EAX,0x1                         ; 00556705
    JL 0x00556729                       ; 00556708
        ;   XREF to: 00556729 (CONDITIONAL_JUMP)  ; LAB_00556729
    PUSH 0x1                            ; 0055670a
    MOV ECX,dword ptr [ESP + 0x8]       ; 0055670c
    PUSH ECX                            ; 00556710
    CALL FUN_00552f10                   ; 00556711
        ;   XREF to: 00552f10 (UNCONDITIONAL_CALL)  ; undefined FUN_00552f10()
    ADD ESP,0x8                         ; 00556716
    TEST EAX,EAX                        ; 00556719
    JNZ 0x0055671e                      ; 0055671b
        ;   XREF to: 0055671e (CONDITIONAL_JUMP)  ; LAB_0055671e
    RET                                 ; 0055671d
    CALL FUN_00556fd0                   ; 0055671e
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00556fd0()
        ;   Label: LAB_0055671e
    MOV EAX,0x1                         ; 00556723
    RET                                 ; 00556728
    PUSH 0x0                            ; 00556729
        ;   Label: LAB_00556729
    MOV EDX,dword ptr [ESP + 0x8]       ; 0055672b
    PUSH EDX                            ; 0055672f
    CALL FUN_00552f10                   ; 00556730
        ;   XREF to: 00552f10 (UNCONDITIONAL_CALL)  ; undefined FUN_00552f10()
    ADD ESP,0x8                         ; 00556735
    TEST EAX,EAX                        ; 00556738
    SETNZ AL                            ; 0055673a
    AND EAX,0xff                        ; 0055673d
    RET                                 ; 00556742

