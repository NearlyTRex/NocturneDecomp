; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CSfxSample * sound_sndmain.cpp_CSfxSample_init_FUN_005a8480(CSfxSample * this_ptr)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   core_event.cpp_CEventList_FUN_004b0db0 at 004b0e80
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004da941
;   core_sound.cpp_CSound_getSoundDuration_FUN_005b3ba0 at 005b3bb1
;   core_tommygun.cpp_CTommyGun_process_FUN_005de360 at 005de4c4
;   sound_sndmain.cpp_CSfxSample_ctor_FUN_005a60f0 at 005a60f5
;   sound_sndmain.cpp_testSoundFile_FUN_005ad3b0 at 005ad3c2
;
; Referenced Globals:
;   float g_SoundReferenceDistanceConstant = 20
;   float FLOAT_00663160 = 10000
;   double DOUBLE_00681b38 = 1
;   float g_SoundReferenceVolumeDistance
;
; Called Functions:
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a8480
        ;   Label: sound_sndmain.cpp_CSfxSample_init_FUN_005a8480
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a8481
    PUSH 0x150                          ; 005a8485
    PUSH 0x0                            ; 005a848a
    PUSH EBX                            ; 005a848c
    CALL crt_memory.c_memset_FUN_005fde40 ; 005a848d
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    FLD double ptr [0x00681b38]         ; 005a8492 | DOUBLE_00681b38
    FLD float ptr [0x0066315c]          ; 005a8498 | g_SoundReferenceDistanceConstant
    FMUL ST1                            ; 005a849e
    FLD float ptr [0x03f5daa0]          ; 005a84a0 | g_SoundReferenceVolumeDistance
    FMUL ST2                            ; 005a84a6
    FLD float ptr [0x00663160]          ; 005a84a8 | FLOAT_00663160
    FMULP ST3                           ; 005a84ae
    ADD ESP,0xc                         ; 005a84b0
    MOV EAX,EBX                         ; 005a84b3
    FXCH                                ; 005a84b5
    FSTP float ptr [EBX + 0x114]        ; 005a84b7
    FSTP float ptr [EBX + 0x118]        ; 005a84bd
    FSTP float ptr [EBX + 0x11c]        ; 005a84c3
    POP EBX                             ; 005a84c9
    RET                                 ; 005a84ca

