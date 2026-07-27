; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_3d_c_FUN_00408e80(int *param_1)
;
;
; XREF[5]:
;   engine_3d.c_FUN_00404b10 at 00405098
;   engine_3d.c_FUN_00405200 at 0040521b
;   engine_3d.c_FUN_00408fc0 at 0040906e
;   engine_3d.c_oldFunction3_FUN_004051e0 at 004051eb
;   engine_keyframe.c_interpolateCubicKeyframes_FUN_004c3c90 at 004c4011
;
; Referenced Globals:
;   undefined1* PTR_engine_3d.c_badMRGLStruct_FUN_004044a0_005acab8 = 004044a0
;   undefined4 DAT_005b7644
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00408e80
        ;   Label: engine_3d.c_FUN_00408e80
    MOV EDX,EAX                         ; 00408e84
    TEST EAX,EAX                        ; 00408e86
    JZ 0x00408ea1                       ; 00408e88
        ;   XREF to: 00408ea1 (CONDITIONAL_JUMP)  ; LAB_00408ea1
    MOV EAX,dword ptr [EDX]             ; 00408e8a
        ;   Label: LAB_00408e8a
    TEST EAX,EAX                        ; 00408e8c
    JZ 0x00408e97                       ; 00408e8e
        ;   XREF to: 00408e97 (CONDITIONAL_JUMP)  ; LAB_00408e97
    JL 0x00408e97                       ; 00408e90
        ;   XREF to: 00408e97 (CONDITIONAL_JUMP)  ; LAB_00408e97
    CMP EAX,0x43                        ; 00408e92
    JL 0x00408ea2                       ; 00408e95
        ;   XREF to: 00408ea2 (CONDITIONAL_JUMP)  ; LAB_00408ea2
    MOV dword ptr [0x005b7644],0x1      ; 00408e97 | DAT_005b7644
        ;   Label: LAB_00408e97
    RET                                 ; 00408ea1
        ;   Label: LAB_00408ea1
    PUSH EDX                            ; 00408ea2
        ;   Label: LAB_00408ea2
    CALL dword ptr [EAX*0x4 + 0x5acab8] ; 00408ea3 | PTR_engine_3d.c_badMRGLStruct_FUN_004044a0_005acab8
    ADD ESP,0x4                         ; 00408eaa
    MOV EDX,EAX                         ; 00408ead
    JMP 0x00408e8a                      ; 00408eaf
        ;   XREF to: 00408e8a (UNCONDITIONAL_JUMP)  ; LAB_00408e8a

