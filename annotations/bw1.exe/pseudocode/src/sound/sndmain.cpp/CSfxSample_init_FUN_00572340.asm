; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSfxSample * __cdecl sound_sndmain_cpp_CSfxSample_init_FUN_00572340(CSfxSample *this_ptr)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   core_event.cpp_CEventList_updateSfxEntries_FUN_004aa400 at 004aa4d0
;   core_game.cpp_FUN_004ce580 at 004cee44
;   core_sound.cpp_CSound_getSoundDuration_FUN_0057d9e0 at 0057d9f1
;   core_tommygun.cpp_CTommyGun_process_FUN_00598d50 at 00598eb4
;   sound_sndmain.cpp_CSfxSample_ctor_FUN_0056fe10 at 0056fe15
;
; Referenced Globals:
;   undefined4 DAT_00605b08
;   undefined4 DAT_00605b0c
;   undefined4 DAT_00623308
;   undefined4 DAT_02c745e0
;
; Called Functions:
;   crt_memory.c_memset_FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00572340
        ;   Label: sound_sndmain.cpp_CSfxSample_init_FUN_00572340
    MOV EBX,dword ptr [ESP + 0x8]       ; 00572341
    PUSH 0x150                          ; 00572345
    PUSH 0x0                            ; 0057234a
    PUSH EBX                            ; 0057234c
    CALL crt_memory.c_memset_FUN_005bfb70 ; 0057234d
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    FLD float ptr [0x00623308]          ; 00572352 | DAT_00623308
    FLD float ptr [0x00605b08]          ; 00572358 | DAT_00605b08
    FMUL ST1                            ; 0057235e
    FLD float ptr [0x02c745e0]          ; 00572360 | DAT_02c745e0
    FMUL ST2                            ; 00572366
    FLD float ptr [0x00605b0c]          ; 00572368 | DAT_00605b0c
    FMULP ST3                           ; 0057236e
    ADD ESP,0xc                         ; 00572370
    MOV EAX,EBX                         ; 00572373
    FXCH                                ; 00572375
    FSTP float ptr [EBX + 0x114]        ; 00572377
    FSTP float ptr [EBX + 0x118]        ; 0057237d
    FSTP float ptr [EBX + 0x11c]        ; 00572383
    POP EBX                             ; 00572389
    RET                                 ; 0057238a

