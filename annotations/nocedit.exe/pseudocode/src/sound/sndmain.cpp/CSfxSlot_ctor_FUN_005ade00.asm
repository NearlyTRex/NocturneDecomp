; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CSfxSlot * __cdecl sound_sndmain_cpp_CSfxSlot_ctor_FUN_005ade00(CSfxSlot *this_ptr)
;
; Parameters:
; CSfxSlot *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   sound_sndmain.cpp_CSfxOptions_reset_FUN_005a8830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ade00
        ;   Label: sound_sndmain.cpp_CSfxSlot_ctor_FUN_005ade00
    MOV EBX,dword ptr [ESP + 0x8]       ; 005ade01
    PUSH EBX                            ; 005ade05
    CALL sound_sndmain.cpp_CSfxOptions_reset_FUN_005a8830 ; 005ade06
        ;   XREF to: 005a8830 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxOptions_reset_FUN_005a8830(CSfxOptions * this_ptr)
    ADD ESP,0x4                         ; 005ade0b
    MOV EAX,EBX                         ; 005ade0e
    POP EBX                             ; 005ade10
    RET                                 ; 005ade11

