; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CSfxOptions * sound_sndmain.cpp_CSfxOptions_ctor_FUN_005add70(CSfxOptions * this_ptr)
;
; Parameters:
; CSfxOptions *    Stack[0x4]:4   this_ptr
;
; Called Functions:
;   sound_sndmain.cpp_CSfxOptions_reset_FUN_005a8830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005add70
        ;   Label: sound_sndmain.cpp_CSfxOptions_ctor_FUN_005add70
    MOV EBX,dword ptr [ESP + 0x8]       ; 005add71
    PUSH EBX                            ; 005add75
    CALL sound_sndmain.cpp_CSfxOptions_reset_FUN_005a8830 ; 005add76 | void sound_sndmain.cpp_CSfxOptions_reset_FUN_005a8830(CSfxOptions * this_ptr)
        ;   XREF to: 005a8830 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005add7b
    MOV EAX,EBX                         ; 005add7e
    POP EBX                             ; 005add80
    RET                                 ; 005add81

