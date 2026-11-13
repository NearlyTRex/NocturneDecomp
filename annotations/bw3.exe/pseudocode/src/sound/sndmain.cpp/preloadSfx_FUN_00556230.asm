; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_preloadSfx_FUN_00556230(char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
;
; XREF[19]:
;   core_baal.cpp_CBaal_setup_FUN_00596730 at 005967e7
;   core_bindevil.cpp_CBindEvil_setup_FUN_0040f900 at 0040f912
;   core_blundrbs.cpp_CBlunderbus_setup_FUN_00411810 at 00411822
;   core_burncrss.cpp_CBurncross_setup_FUN_004253d0 at 004253e2
;   core_darkwolf.cpp_CDarkwolf_setup_FUN_00598800 at 005989cb
;   core_disease.cpp_CDisease_setup_FUN_0045c0d0 at 0045c0e2
;   core_exorcism.cpp_CExorcism_setup_FUN_0048b690 at 0048b6a3
;   core_fire.cpp_FUN_004a4340 at 004a43a9
;   core_firestff.cpp_CFirestaff_setup_FUN_004a5870 at 004a5882
;   core_flintlck.cpp_CFlintlock_setup_FUN_004af5b0 at 004af5c2
;   ... and 9 more
;
; Called Functions:
;   sound_sndmain.cpp_getSfxSample_FUN_00551d20
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00556230
        ;   Label: sound_sndmain.cpp_preloadSfx_FUN_00556230
    PUSH EDX                            ; 00556234
    CALL sound_sndmain.cpp_getSfxSample_FUN_00551d20 ; 00556235
        ;   XREF to: 00551d20 (UNCONDITIONAL_CALL)  ; CSfxSample * sound_sndmain.cpp_getSfxSample_FUN_00551d20(char * filename)
    ADD ESP,0x4                         ; 0055623a
    RET                                 ; 0055623d

