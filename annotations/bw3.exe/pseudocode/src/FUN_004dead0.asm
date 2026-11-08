; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004dead0(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e2230
;
; Called Functions:
;   FUN_00408770
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dead0
        ;   Label: FUN_004dead0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004dead1
    TEST byte ptr [ESP + 0xc],0x4       ; 004dead5
    JNZ 0x004deaf6                      ; 004deada
        ;   XREF to: 004deaf6 (CONDITIONAL_JUMP)  ; LAB_004deaf6
    PUSH 0x1                            ; 004deadc
    PUSH EBX                            ; 004deade
    CALL FUN_00408770                   ; 004deadf
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 004deae4
    MOV DL,byte ptr [ESP + 0xc]         ; 004deae7
    MOV EBX,EAX                         ; 004deaeb
    TEST DL,0x2                         ; 004deaed
    JNZ 0x004deb11                      ; 004deaf0
        ;   XREF to: 004deb11 (CONDITIONAL_JUMP)  ; LAB_004deb11
    MOV EAX,EBX                         ; 004deaf2
    POP EBX                             ; 004deaf4
    RET                                 ; 004deaf5
    PUSH 0x5e2230                       ; 004deaf6 | DAT_005e2230
        ;   Label: LAB_004deaf6
    PUSH EBX                            ; 004deafb
    CALL FUN_005a308f                   ; 004deafc
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 004deb01
    PUSH EAX                            ; 004deb04
    CALL FUN_005a30b6                   ; 004deb05
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 004deb0a
    MOV EAX,EBX                         ; 004deb0d
    POP EBX                             ; 004deb0f
    RET                                 ; 004deb10
    PUSH EAX                            ; 004deb11
        ;   Label: LAB_004deb11
    CALL FUN_005a30c4                   ; 004deb12
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 004deb17
    MOV EAX,EBX                         ; 004deb1a
    POP EBX                             ; 004deb1c
    RET                                 ; 004deb1d

