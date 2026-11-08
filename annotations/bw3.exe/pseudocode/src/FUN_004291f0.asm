; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004291f0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005dd0b0
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

    PUSH EBX                            ; 004291f0
        ;   Label: FUN_004291f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004291f1
    TEST byte ptr [ESP + 0xc],0x4       ; 004291f5
    JNZ 0x0042924d                      ; 004291fa
        ;   XREF to: 0042924d (CONDITIONAL_JUMP)  ; LAB_0042924d
    PUSH 0x0                            ; 004291fc
    ADD EBX,0x385c                      ; 004291fe
    PUSH EBX                            ; 00429204
    CALL FUN_00410370                   ; 00429205
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined FUN_00410370()
    ADD ESP,0x8                         ; 0042920a
    PUSH 0x0                            ; 0042920d
    SUB EAX,0x954                       ; 0042920f
    PUSH EAX                            ; 00429214
    CALL FUN_0043f900                   ; 00429215
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f900()
    ADD ESP,0x8                         ; 0042921a
    PUSH 0x0                            ; 0042921d
    SUB EAX,0x2db0                      ; 0042921f
    PUSH EAX                            ; 00429224
    CALL FUN_0054bf80                   ; 00429225
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bf80()
    ADD ESP,0x8                         ; 0042922a
    PUSH 0x1                            ; 0042922d
    LEA EBX,[EAX + 0xfffffea8]          ; 0042922f
    PUSH EBX                            ; 00429235
    CALL FUN_00408770                   ; 00429236
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 0042923b
    MOV DL,byte ptr [ESP + 0xc]         ; 0042923e
    MOV EBX,EAX                         ; 00429242
    TEST DL,0x2                         ; 00429244
    JNZ 0x00429268                      ; 00429247
        ;   XREF to: 00429268 (CONDITIONAL_JUMP)  ; LAB_00429268
    MOV EAX,EBX                         ; 00429249
    POP EBX                             ; 0042924b
    RET                                 ; 0042924c
    PUSH 0x5dd0b0                       ; 0042924d | DAT_005dd0b0
        ;   Label: LAB_0042924d
    PUSH EBX                            ; 00429252
    CALL FUN_005a308f                   ; 00429253
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 00429258
    PUSH EAX                            ; 0042925b
    CALL FUN_005a30b6                   ; 0042925c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 00429261
    MOV EAX,EBX                         ; 00429264
    POP EBX                             ; 00429266
    RET                                 ; 00429267
    PUSH EAX                            ; 00429268
        ;   Label: LAB_00429268
    CALL FUN_005a30c4                   ; 00429269
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 0042926e
    MOV EAX,EBX                         ; 00429271
    POP EBX                             ; 00429273
    RET                                 ; 00429274

