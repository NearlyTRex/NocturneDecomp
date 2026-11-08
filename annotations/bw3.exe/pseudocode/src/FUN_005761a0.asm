; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005761a0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e5d20
;
; Called Functions:
;   FUN_00408770
;   FUN_00410370
;   FUN_0043f900
;   FUN_0054bf80
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005761a0
        ;   Label: FUN_005761a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005761a1
    TEST byte ptr [ESP + 0xc],0x4       ; 005761a5
    JNZ 0x005761fd                      ; 005761aa
        ;   XREF to: 005761fd (CONDITIONAL_JUMP)  ; LAB_005761fd
    PUSH 0x0                            ; 005761ac
    ADD EBX,0x385c                      ; 005761ae
    PUSH EBX                            ; 005761b4
    CALL FUN_00410370                   ; 005761b5
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined FUN_00410370()
    ADD ESP,0x8                         ; 005761ba
    PUSH 0x0                            ; 005761bd
    SUB EAX,0x954                       ; 005761bf
    PUSH EAX                            ; 005761c4
    CALL FUN_0043f900                   ; 005761c5
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f900()
    ADD ESP,0x8                         ; 005761ca
    PUSH 0x0                            ; 005761cd
    SUB EAX,0x2db0                      ; 005761cf
    PUSH EAX                            ; 005761d4
    CALL FUN_0054bf80                   ; 005761d5
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bf80()
    ADD ESP,0x8                         ; 005761da
    PUSH 0x1                            ; 005761dd
    LEA EBX,[EAX + 0xfffffea8]          ; 005761df
    PUSH EBX                            ; 005761e5
    CALL FUN_00408770                   ; 005761e6
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 005761eb
    MOV DL,byte ptr [ESP + 0xc]         ; 005761ee
    MOV EBX,EAX                         ; 005761f2
    TEST DL,0x2                         ; 005761f4
    JNZ 0x00576218                      ; 005761f7
        ;   XREF to: 00576218 (CONDITIONAL_JUMP)  ; LAB_00576218
    MOV EAX,EBX                         ; 005761f9
    POP EBX                             ; 005761fb
    RET                                 ; 005761fc
    PUSH 0x5e5d20                       ; 005761fd | DAT_005e5d20
        ;   Label: LAB_005761fd
    PUSH EBX                            ; 00576202
    CALL FUN_005a308f                   ; 00576203
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 00576208
    PUSH EAX                            ; 0057620b
    CALL FUN_005a30b6                   ; 0057620c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 00576211
    MOV EAX,EBX                         ; 00576214
    POP EBX                             ; 00576216
    RET                                 ; 00576217
    PUSH EAX                            ; 00576218
        ;   Label: LAB_00576218
    CALL FUN_005a30c4                   ; 00576219
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 0057621e
    MOV EAX,EBX                         ; 00576221
    POP EBX                             ; 00576223
    RET                                 ; 00576224

