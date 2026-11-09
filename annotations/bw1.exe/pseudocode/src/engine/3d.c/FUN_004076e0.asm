; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_3d_c_FUN_004076e0(int *param_1)
;
;
; XREF[2]:
;   engine_3d.c_FUN_00407820 at 004078ce
;   engine_keyframe.c_interpolateCubicKeyframes_FUN_004fcd30 at 004fd0b1
;
; Referenced Globals:
;   undefined1* PTR_engine_3d.c_badMRGLStruct_FUN_004037b0_006104f4 = 004037b0
;   undefined4 DAT_0061b4c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004076e0
        ;   Label: engine_3d.c_FUN_004076e0
    MOV EDX,EAX                         ; 004076e4
    TEST EAX,EAX                        ; 004076e6
    JZ 0x00407701                       ; 004076e8
        ;   XREF to: 00407701 (CONDITIONAL_JUMP)  ; LAB_00407701
    MOV EAX,dword ptr [EDX]             ; 004076ea
        ;   Label: LAB_004076ea
    TEST EAX,EAX                        ; 004076ec
    JZ 0x004076f7                       ; 004076ee
        ;   XREF to: 004076f7 (CONDITIONAL_JUMP)  ; LAB_004076f7
    JL 0x004076f7                       ; 004076f0
        ;   XREF to: 004076f7 (CONDITIONAL_JUMP)  ; LAB_004076f7
    CMP EAX,0x43                        ; 004076f2
    JL 0x00407702                       ; 004076f5
        ;   XREF to: 00407702 (CONDITIONAL_JUMP)  ; LAB_00407702
    MOV dword ptr [0x0061b4c0],0x1      ; 004076f7 | DAT_0061b4c0
        ;   Label: LAB_004076f7
    RET                                 ; 00407701
        ;   Label: LAB_00407701
    PUSH EDX                            ; 00407702
        ;   Label: LAB_00407702
    CALL dword ptr [EAX*0x4 + 0x6104f4] ; 00407703 | PTR_engine_3d.c_badMRGLStruct_FUN_004037b0_006104f4
    ADD ESP,0x4                         ; 0040770a
    MOV EDX,EAX                         ; 0040770d
    TEST EAX,EAX                        ; 0040770f
    JZ 0x004076f7                       ; 00407711
        ;   XREF to: 004076f7 (CONDITIONAL_JUMP)  ; LAB_004076f7
    JMP 0x004076ea                      ; 00407713
        ;   XREF to: 004076ea (UNCONDITIONAL_JUMP)  ; LAB_004076ea

