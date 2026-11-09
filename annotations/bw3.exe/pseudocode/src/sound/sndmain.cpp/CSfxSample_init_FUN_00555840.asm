; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSfxSample * __cdecl sound_sndmain_cpp_CSfxSample_init_FUN_00555840(CSfxSample *this_ptr)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   core_event.cpp_CEventList_updateSfxEntries_FUN_00495280 at 00495350
;   core_game.cpp_FUN_004b6f30 at 004b77f4
;   core_sound.cpp_CSound_getSoundDuration_FUN_00560b10 at 00560b21
;   core_tommygun.cpp_FUN_0056bd40 at 0056bea4
;   sound_sndmain.cpp_CSfxSample_ctor_FUN_00553310 at 00553315
;
; Referenced Globals:
;   undefined4 DAT_005e4854
;   undefined4 DAT_005e4858
;   undefined4 DAT_00604244
;   undefined4 DAT_02ce7210
;
; Called Functions:
;   crt_memory.c_memset_FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00555840
        ;   Label: sound_sndmain.cpp_CSfxSample_init_FUN_00555840
    MOV EBX,dword ptr [ESP + 0x8]       ; 00555841
    PUSH 0x150                          ; 00555845
    PUSH 0x0                            ; 0055584a
    PUSH EBX                            ; 0055584c
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0055584d
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    FLD float ptr [0x00604244]          ; 00555852 | DAT_00604244
    FLD float ptr [0x005e4854]          ; 00555858 | DAT_005e4854
    FMUL ST1                            ; 0055585e
    FLD float ptr [0x02ce7210]          ; 00555860 | DAT_02ce7210
    FMUL ST2                            ; 00555866
    FLD float ptr [0x005e4858]          ; 00555868 | DAT_005e4858
    FMULP ST3                           ; 0055586e
    ADD ESP,0xc                         ; 00555870
    MOV EAX,EBX                         ; 00555873
    FXCH                                ; 00555875
    FSTP float ptr [EBX + 0x114]        ; 00555877
    FSTP float ptr [EBX + 0x118]        ; 0055587d
    FSTP float ptr [EBX + 0x11c]        ; 00555883
    POP EBX                             ; 00555889
    RET                                 ; 0055588a

