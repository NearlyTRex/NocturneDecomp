; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl uint sound_sndmain.cpp_startSfxTrackedDoublePosition_FUN_005a9620(char * filename, CVector3d * position_source_ptr)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; CVector3d *      Stack[0x8]:4   position_source_ptr
;
; Called Functions:
;   sound_sndmain.cpp_clearNextSfxFlagBits_FUN_005a8bb0
;   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
;   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
;   sound_sndmain.cpp_setNextSfxTrackedDoublePosition_FUN_005a8970
;   sound_sndmain.cpp_startSfx_FUN_005a8e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9620
        ;   Label: sound_sndmain.cpp_startSfxTrackedDoublePosition_FUN_005a9620
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 ; 005a9621 | void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
        ;   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
    PUSH 0x1                            ; 005a9626
    CALL sound_sndmain.cpp_clearNextSfxFlagBits_FUN_005a8bb0 ; 005a9628 | void sound_sndmain.cpp_clearNextSfxFlagBits_FUN_005a8bb0(uint flag_mask)
        ;   XREF to: 005a8bb0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005a962d
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a9630
    PUSH EDX                            ; 005a9634
    CALL sound_sndmain.cpp_setNextSfxTrackedDoublePosition_FUN_005a8970 ; 005a9635 | void sound_sndmain.cpp_setNextSfxTrackedDoublePosition_FUN_005a8970(CVector3d * position_source_ptr)
        ;   XREF to: 005a8970 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005a963a
    MOV ECX,dword ptr [ESP + 0x8]       ; 005a963d
    PUSH ECX                            ; 005a9641
    CALL sound_sndmain.cpp_startSfx_FUN_005a8e90 ; 005a9642 | uint sound_sndmain.cpp_startSfx_FUN_005a8e90(char * filename)
        ;   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005a9647
    MOV EBX,EAX                         ; 005a964a
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0 ; 005a964c | void sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0()
        ;   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
    MOV EAX,EBX                         ; 005a9651
    POP EBX                             ; 005a9653
    RET                                 ; 005a9654

