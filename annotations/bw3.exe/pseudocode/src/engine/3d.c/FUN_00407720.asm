; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_3d_c_FUN_00407720(int *param_1)
;
;
; XREF[2]:
;   engine_3d.c_dispatchMRGLToRenderer_FUN_00407860 at 0040790e
;   engine_keyframe.c_interpolateCubicKeyframes_FUN_004df050 at 004df3d1
;
; Referenced Globals:
;   undefined1* PTR_engine_3d.c_badMRGLStruct_FUN_004037b0_005f07c4 = 004037b0
;   undefined4 DAT_005fba40
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00407720
        ;   Label: engine_3d.c_FUN_00407720
    MOV EDX,EAX                         ; 00407724
    TEST EAX,EAX                        ; 00407726
    JZ 0x00407741                       ; 00407728
        ;   XREF to: 00407741 (CONDITIONAL_JUMP)  ; LAB_00407741
    MOV EAX,dword ptr [EDX]             ; 0040772a
        ;   Label: LAB_0040772a
    TEST EAX,EAX                        ; 0040772c
    JZ 0x00407737                       ; 0040772e
        ;   XREF to: 00407737 (CONDITIONAL_JUMP)  ; LAB_00407737
    JL 0x00407737                       ; 00407730
        ;   XREF to: 00407737 (CONDITIONAL_JUMP)  ; LAB_00407737
    CMP EAX,0x43                        ; 00407732
    JL 0x00407742                       ; 00407735
        ;   XREF to: 00407742 (CONDITIONAL_JUMP)  ; LAB_00407742
    MOV dword ptr [0x005fba40],0x1      ; 00407737 | DAT_005fba40
        ;   Label: LAB_00407737
    RET                                 ; 00407741
        ;   Label: LAB_00407741
    PUSH EDX                            ; 00407742
        ;   Label: LAB_00407742
    CALL dword ptr [EAX*0x4 + 0x5f07c4] ; 00407743 | PTR_engine_3d.c_badMRGLStruct_FUN_004037b0_005f07c4
    ADD ESP,0x4                         ; 0040774a
    MOV EDX,EAX                         ; 0040774d
    TEST EAX,EAX                        ; 0040774f
    JZ 0x00407737                       ; 00407751
        ;   XREF to: 00407737 (CONDITIONAL_JUMP)  ; LAB_00407737
    JMP 0x0040772a                      ; 00407753
        ;   XREF to: 0040772a (UNCONDITIONAL_JUMP)  ; LAB_0040772a

