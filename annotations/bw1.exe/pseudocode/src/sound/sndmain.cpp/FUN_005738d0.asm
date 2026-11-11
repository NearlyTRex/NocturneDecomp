; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_sndmain_cpp_FUN_005738d0(uint param_1,void *param_2)
;
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createFireball_FUN_004b5e00 at 004b5e94
;
; Called Functions:
;   sound_sndmain.cpp_FUN_0056fa10
;   sound_sndmain.cpp_FUN_00573e70
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 005738d0
        ;   Label: sound_sndmain.cpp_FUN_005738d0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005738d2
    PUSH EDX                            ; 005738d6
    CALL sound_sndmain.cpp_FUN_0056fa10 ; 005738d7
        ;   XREF to: 0056fa10 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_FUN_0056fa10(uint sfx_handle, int check_hardware_playback)
    ADD ESP,0x8                         ; 005738dc
    TEST EAX,EAX                        ; 005738df
    JNZ 0x005738e4                      ; 005738e1
        ;   XREF to: 005738e4 (CONDITIONAL_JUMP)  ; LAB_005738e4
    RET                                 ; 005738e3
    MOV EDX,dword ptr [ESP + 0x8]       ; 005738e4
        ;   Label: LAB_005738e4
    MOV dword ptr [EAX + 0x30],EDX      ; 005738e8
    MOV DL,byte ptr [EAX + 0x118]       ; 005738eb
    MOV dword ptr [EAX + 0x34],0x1      ; 005738f1
    OR DL,0x4                           ; 005738f8
    MOV byte ptr [EAX + 0x118],DL       ; 005738fb
    CALL sound_sndmain.cpp_FUN_00573e70 ; 00573901
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00573e70()
    MOV EAX,0x1                         ; 00573906
    RET                                 ; 0057390b

