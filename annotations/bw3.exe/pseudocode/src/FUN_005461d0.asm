; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005461d0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e4310
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

    PUSH EBX                            ; 005461d0
        ;   Label: FUN_005461d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005461d1
    TEST byte ptr [ESP + 0xc],0x4       ; 005461d5
    JNZ 0x0054622d                      ; 005461da
        ;   XREF to: 0054622d (CONDITIONAL_JUMP)  ; LAB_0054622d
    PUSH 0x0                            ; 005461dc
    ADD EBX,0x385c                      ; 005461de
    PUSH EBX                            ; 005461e4
    CALL FUN_00410370                   ; 005461e5
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined FUN_00410370()
    ADD ESP,0x8                         ; 005461ea
    PUSH 0x0                            ; 005461ed
    SUB EAX,0x954                       ; 005461ef
    PUSH EAX                            ; 005461f4
    CALL FUN_0043f900                   ; 005461f5
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f900()
    ADD ESP,0x8                         ; 005461fa
    PUSH 0x0                            ; 005461fd
    SUB EAX,0x2db0                      ; 005461ff
    PUSH EAX                            ; 00546204
    CALL FUN_0054bf80                   ; 00546205
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bf80()
    ADD ESP,0x8                         ; 0054620a
    PUSH 0x1                            ; 0054620d
    LEA EBX,[EAX + 0xfffffea8]          ; 0054620f
    PUSH EBX                            ; 00546215
    CALL FUN_00408770                   ; 00546216
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 0054621b
    MOV DL,byte ptr [ESP + 0xc]         ; 0054621e
    MOV EBX,EAX                         ; 00546222
    TEST DL,0x2                         ; 00546224
    JNZ 0x00546248                      ; 00546227
        ;   XREF to: 00546248 (CONDITIONAL_JUMP)  ; LAB_00546248
    MOV EAX,EBX                         ; 00546229
    POP EBX                             ; 0054622b
    RET                                 ; 0054622c
    PUSH 0x5e4310                       ; 0054622d | DAT_005e4310
        ;   Label: LAB_0054622d
    PUSH EBX                            ; 00546232
    CALL FUN_005a308f                   ; 00546233
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 00546238
    PUSH EAX                            ; 0054623b
    CALL FUN_005a30b6                   ; 0054623c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 00546241
    MOV EAX,EBX                         ; 00546244
    POP EBX                             ; 00546246
    RET                                 ; 00546247
    PUSH EAX                            ; 00546248
        ;   Label: LAB_00546248
    CALL FUN_005a30c4                   ; 00546249
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 0054624e
    MOV EAX,EBX                         ; 00546251
    POP EBX                             ; 00546253
    RET                                 ; 00546254

