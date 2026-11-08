; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0050f120(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e32a0
;
; Called Functions:
;   FUN_00408770
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050f120
        ;   Label: FUN_0050f120
    MOV EBX,dword ptr [ESP + 0x8]       ; 0050f121
    TEST byte ptr [ESP + 0xc],0x4       ; 0050f125
    JNZ 0x0050f146                      ; 0050f12a
        ;   XREF to: 0050f146 (CONDITIONAL_JUMP)  ; LAB_0050f146
    PUSH 0x1                            ; 0050f12c
    PUSH EBX                            ; 0050f12e
    CALL FUN_00408770                   ; 0050f12f
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 0050f134
    MOV DL,byte ptr [ESP + 0xc]         ; 0050f137
    MOV EBX,EAX                         ; 0050f13b
    TEST DL,0x2                         ; 0050f13d
    JNZ 0x0050f161                      ; 0050f140
        ;   XREF to: 0050f161 (CONDITIONAL_JUMP)  ; LAB_0050f161
    MOV EAX,EBX                         ; 0050f142
    POP EBX                             ; 0050f144
    RET                                 ; 0050f145
    PUSH 0x5e32a0                       ; 0050f146 | DAT_005e32a0
        ;   Label: LAB_0050f146
    PUSH EBX                            ; 0050f14b
    CALL FUN_005a308f                   ; 0050f14c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 0050f151
    PUSH EAX                            ; 0050f154
    CALL FUN_005a30b6                   ; 0050f155
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0050f15a
    MOV EAX,EBX                         ; 0050f15d
    POP EBX                             ; 0050f15f
    RET                                 ; 0050f160
    PUSH EAX                            ; 0050f161
        ;   Label: LAB_0050f161
    CALL FUN_005a30c4                   ; 0050f162
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 0050f167
    MOV EAX,EBX                         ; 0050f16a
    POP EBX                             ; 0050f16c
    RET                                 ; 0050f16d

