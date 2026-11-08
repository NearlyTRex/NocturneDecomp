; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00431d90(undefined4 param_1,undefined4 param_2)
;
;
; XREF[48]:
;   FUN_00403af0 at 00403b71
;   FUN_00403bc0 at 00403c1a
;   FUN_00403ce0 at 00403d38
;   FUN_00403d80 at 00403dd2
;   FUN_00403f40 at 00404012
;   FUN_00404140 at 0040419c
;   FUN_00404240 at 00404416
;   FUN_004044c0 at 00404512
;   FUN_004046e0 at 00404844
;   FUN_00404860 at 00404a35
;   ... and 38 more
;
; Referenced Globals:
;   undefined4 DAT_006141e0
;   undefined4 DAT_007bee30
;   undefined4 DAT_007bee34
;
; Called Functions:
;   FUN_00431330
;   FUN_0051cb20
;   FUN_0051d050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00431d90
        ;   Label: FUN_00431d90
    MOV EAX,dword ptr [ESP + 0x8]       ; 00431d91
    MOV EDX,dword ptr [ESP + 0xc]       ; 00431d95
    CMP dword ptr [0x006141e0],0x0      ; 00431d99 | DAT_006141e0
    JZ 0x00431dbd                       ; 00431da0
        ;   XREF to: 00431dbd (CONDITIONAL_JUMP)  ; LAB_00431dbd
    PUSH EDX                            ; 00431da2
    PUSH EAX                            ; 00431da3
    CALL FUN_00431330                   ; 00431da4
        ;   XREF to: 00431330 (UNCONDITIONAL_CALL)  ; undefined FUN_00431330()
    ADD ESP,0x8                         ; 00431da9
    TEST EAX,EAX                        ; 00431dac
    JNZ 0x00431dbb                      ; 00431dae
        ;   XREF to: 00431dbb (CONDITIONAL_JUMP)  ; LAB_00431dbb
    MOV EBX,dword ptr [0x007bee30]      ; 00431db0 | DAT_007bee30
    CMP EBX,0x2                         ; 00431db6
    JG 0x00431dc9                       ; 00431db9
        ;   XREF to: 00431dc9 (CONDITIONAL_JUMP)  ; LAB_00431dc9
    POP EBX                             ; 00431dbb
        ;   Label: LAB_00431dbb
    RET                                 ; 00431dbc
    PUSH EAX                            ; 00431dbd
        ;   Label: LAB_00431dbd
    PUSH EDX                            ; 00431dbe
    CALL FUN_0051d050                   ; 00431dbf
        ;   XREF to: 0051d050 (UNCONDITIONAL_CALL)  ; undefined FUN_0051d050()
    ADD ESP,0x8                         ; 00431dc4
    POP EBX                             ; 00431dc7
    RET                                 ; 00431dc8
    PUSH EBX                            ; 00431dc9
        ;   Label: LAB_00431dc9
    PUSH 0x7bee34                       ; 00431dca | DAT_007bee34
    CALL FUN_0051cb20                   ; 00431dcf
        ;   XREF to: 0051cb20 (UNCONDITIONAL_CALL)  ; undefined FUN_0051cb20()
    ADD ESP,0x8                         ; 00431dd4
    POP EBX                             ; 00431dd7
    RET                                 ; 00431dd8

