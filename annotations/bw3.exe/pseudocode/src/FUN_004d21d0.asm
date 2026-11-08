; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004d21d0(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e14d0
;
; Called Functions:
;   FUN_00408770
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d21d0
        ;   Label: FUN_004d21d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d21d1
    TEST byte ptr [ESP + 0xc],0x4       ; 004d21d5
    JNZ 0x004d21f6                      ; 004d21da
        ;   XREF to: 004d21f6 (CONDITIONAL_JUMP)  ; LAB_004d21f6
    PUSH 0x1                            ; 004d21dc
    PUSH EBX                            ; 004d21de
    CALL FUN_00408770                   ; 004d21df
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 004d21e4
    MOV DL,byte ptr [ESP + 0xc]         ; 004d21e7
    MOV EBX,EAX                         ; 004d21eb
    TEST DL,0x2                         ; 004d21ed
    JNZ 0x004d2211                      ; 004d21f0
        ;   XREF to: 004d2211 (CONDITIONAL_JUMP)  ; LAB_004d2211
    MOV EAX,EBX                         ; 004d21f2
    POP EBX                             ; 004d21f4
    RET                                 ; 004d21f5
    PUSH 0x5e14d0                       ; 004d21f6 | DAT_005e14d0
        ;   Label: LAB_004d21f6
    PUSH EBX                            ; 004d21fb
    CALL FUN_005a308f                   ; 004d21fc
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 004d2201
    PUSH EAX                            ; 004d2204
    CALL FUN_005a30b6                   ; 004d2205
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 004d220a
    MOV EAX,EBX                         ; 004d220d
    POP EBX                             ; 004d220f
    RET                                 ; 004d2210
    PUSH EAX                            ; 004d2211
        ;   Label: LAB_004d2211
    CALL FUN_005a30c4                   ; 004d2212
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 004d2217
    MOV EAX,EBX                         ; 004d221a
    POP EBX                             ; 004d221c
    RET                                 ; 004d221d

