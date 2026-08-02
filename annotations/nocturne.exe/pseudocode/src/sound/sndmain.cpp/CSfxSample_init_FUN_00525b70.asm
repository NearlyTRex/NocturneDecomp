; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSfxSample * __cdecl sound_sndmain_cpp_CSfxSample_init_FUN_00525b70(CSfxSample *this_ptr)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   core_event.cpp_CEventList_updateSfxEntries_FUN_00480d60 at 00480e30
;   core_game.cpp_CGame_processFrame_FUN_0049cc10 at 0049d3dd
;   core_sound.cpp_FUN_0052ebc0 at 0052ebd1
;   core_tommygun.cpp_CTommyGun_process_FUN_005464a0 at 00546634
;   sound_sndmain.cpp_CSfxSample_ctor_FUN_00523890 at 00523895
;
; Referenced Globals:
;   float FLOAT_005a216c = 20
;   float FLOAT_005a2170 = 10000
;   undefined4 DAT_005bea88
;   undefined4 DAT_02dbd370
;
; Called Functions:
;   crt_memory.c_memset_FUN_00563cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00525b70
        ;   Label: sound_sndmain.cpp_CSfxSample_init_FUN_00525b70
    MOV EBX,dword ptr [ESP + 0x8]       ; 00525b71
    PUSH 0x128                          ; 00525b75
    PUSH 0x0                            ; 00525b7a
    PUSH EBX                            ; 00525b7c
    CALL crt_memory.c_memset_FUN_00563cc0 ; 00525b7d
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    FLD double ptr [0x005bea88]         ; 00525b82 | DAT_005bea88
    FLD float ptr [0x005a216c]          ; 00525b88 | FLOAT_005a216c
    FMUL ST1                            ; 00525b8e
    FLD float ptr [0x02dbd370]          ; 00525b90 | DAT_02dbd370
    FMUL ST2                            ; 00525b96
    FLD float ptr [0x005a2170]          ; 00525b98 | FLOAT_005a2170
    FMULP ST3                           ; 00525b9e
    ADD ESP,0xc                         ; 00525ba0
    MOV EAX,EBX                         ; 00525ba3
    FXCH                                ; 00525ba5
    FSTP float ptr [EBX + 0x114]        ; 00525ba7
    FSTP float ptr [EBX + 0x118]        ; 00525bad
    FSTP float ptr [EBX + 0x11c]        ; 00525bb3
    POP EBX                             ; 00525bb9
    RET                                 ; 00525bba

