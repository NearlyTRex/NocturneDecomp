; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl uint sound_sndmain.cpp_startSfxTrackedFloatPosition_FUN_005a95e0(char * filename, CVector3f * position_source_ptr)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; CVector3f *      Stack[0x8]:4   position_source_ptr
;
; Called Functions:
;   sound_sndmain.cpp_clearNextSfxFlagBits_FUN_005a8bb0
;   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
;   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
;   sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_005a8940
;   sound_sndmain.cpp_startSfx_FUN_005a8e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a95e0
        ;   Label: sound_sndmain.cpp_startSfxTrackedFloatPosition_FUN_005a95e0
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 ; 005a95e1 | void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
        ;   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
    PUSH 0x1                            ; 005a95e6
    CALL sound_sndmain.cpp_clearNextSfxFlagBits_FUN_005a8bb0 ; 005a95e8 | void sound_sndmain.cpp_clearNextSfxFlagBits_FUN_005a8bb0(uint flag_mask)
        ;   XREF to: 005a8bb0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005a95ed
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a95f0
    PUSH EDX                            ; 005a95f4
    CALL sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_005a8940 ; 005a95f5 | void sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_005a8940(CVector3f * position_source_ptr)
        ;   XREF to: 005a8940 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005a95fa
    MOV ECX,dword ptr [ESP + 0x8]       ; 005a95fd
    PUSH ECX                            ; 005a9601
    CALL sound_sndmain.cpp_startSfx_FUN_005a8e90 ; 005a9602 | uint sound_sndmain.cpp_startSfx_FUN_005a8e90(char * filename)
        ;   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005a9607
    MOV EBX,EAX                         ; 005a960a
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0 ; 005a960c | void sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0()
        ;   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
    MOV EAX,EBX                         ; 005a9611
    POP EBX                             ; 005a9613
    RET                                 ; 005a9614

