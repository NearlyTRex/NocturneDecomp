; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_005741d0(undefined4 *param_1,byte param_2)
;
;
; XREF[2]:
;   FUN_00440970 at 004409cf
;   FUN_004409f0 at 00440a4f
;
; Referenced Globals:
;   undefined4 DAT_005dd5c0
;   undefined1* PTR_FUN_005e5ac4 = 005741d0
;
; Called Functions:
;   FUN_00572540
;   FUN_005743f0
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005741d0
        ;   Label: FUN_005741d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005741d1
    TEST byte ptr [ESP + 0xc],0x4       ; 005741d5
    JNZ 0x00574205                      ; 005741da
        ;   XREF to: 00574205 (CONDITIONAL_JUMP)  ; LAB_00574205
    PUSH EBX                            ; 005741dc
    MOV dword ptr [EBX],0x5e5ac4        ; 005741dd | PTR_FUN_005e5ac4
    CALL FUN_005743f0                   ; 005741e3
        ;   XREF to: 005743f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005743f0()
    ADD ESP,0x4                         ; 005741e8
    PUSH 0x1                            ; 005741eb
    PUSH EBX                            ; 005741ed
    CALL FUN_00572540                   ; 005741ee
        ;   XREF to: 00572540 (UNCONDITIONAL_CALL)  ; undefined FUN_00572540()
    ADD ESP,0x8                         ; 005741f3
    MOV DL,byte ptr [ESP + 0xc]         ; 005741f6
    MOV EBX,EAX                         ; 005741fa
    TEST DL,0x2                         ; 005741fc
    JNZ 0x00574220                      ; 005741ff
        ;   XREF to: 00574220 (CONDITIONAL_JUMP)  ; LAB_00574220
    MOV EAX,EBX                         ; 00574201
    POP EBX                             ; 00574203
    RET                                 ; 00574204
    PUSH 0x5dd5c0                       ; 00574205 | DAT_005dd5c0
        ;   Label: LAB_00574205
    PUSH EBX                            ; 0057420a
    CALL FUN_005a308f                   ; 0057420b
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 00574210
    PUSH EAX                            ; 00574213
    CALL FUN_005a30b6                   ; 00574214
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 00574219
    MOV EAX,EBX                         ; 0057421c
    POP EBX                             ; 0057421e
    RET                                 ; 0057421f
    PUSH EAX                            ; 00574220
        ;   Label: LAB_00574220
    CALL FUN_005a30c4                   ; 00574221
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 00574226
    MOV EAX,EBX                         ; 00574229
    POP EBX                             ; 0057422b
    RET                                 ; 0057422c

