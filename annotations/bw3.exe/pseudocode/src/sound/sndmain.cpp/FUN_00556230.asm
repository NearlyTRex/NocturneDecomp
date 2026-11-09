; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_00556230(char *param_1)
;
;
; XREF[19]:
;   core_baal.cpp_FUN_00596730 at 005967e7
;   core_bindevil.cpp_FUN_0040f900 at 0040f912
;   core_blundrbs.cpp_FUN_00411810 at 00411822
;   core_burncrss.cpp_FUN_004253d0 at 004253e2
;   core_disease.cpp_FUN_0045c0d0 at 0045c0e2
;   core_exorcism.cpp_FUN_0048b690 at 0048b6a3
;   core_fire.cpp_FUN_004a4340 at 004a43a9
;   core_firestff.cpp_FUN_004a5870 at 004a5882
;   core_flintlck.cpp_FUN_004af5b0 at 004af5c2
;   core_heal.cpp_FUN_004d1c80 at 004d1c92
;   ... and 9 more
;
; Called Functions:
;   sound_sndmain.cpp_FUN_00551d20
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00556230
        ;   Label: sound_sndmain.cpp_FUN_00556230
    PUSH EDX                            ; 00556234
    CALL sound_sndmain.cpp_FUN_00551d20 ; 00556235
        ;   XREF to: 00551d20 (UNCONDITIONAL_CALL)  ; CSfxSample * sound_sndmain.cpp_FUN_00551d20(char * filename)
    ADD ESP,0x4                         ; 0055623a
    RET                                 ; 0055623d

