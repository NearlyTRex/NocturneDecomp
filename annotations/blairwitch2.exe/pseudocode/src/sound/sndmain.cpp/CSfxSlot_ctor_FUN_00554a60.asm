; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSfxSlot * __cdecl sound_sndmain_cpp_CSfxSlot_ctor_FUN_00554a60(CSfxSlot *this_ptr)
;
; Parameters:
; CSfxSlot *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   sound_sndmain.cpp_CSfxOptions_reset_FUN_00550070
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00554a60
        ;   Label: sound_sndmain.cpp_CSfxSlot_ctor_FUN_00554a60
    MOV EBX,dword ptr [ESP + 0x8]       ; 00554a61
    PUSH EBX                            ; 00554a65
    CALL sound_sndmain.cpp_CSfxOptions_reset_FUN_00550070 ; 00554a66
        ;   XREF to: 00550070 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxOptions_reset_FUN_00550070(CSfxOptions * this_ptr)
    ADD ESP,0x4                         ; 00554a6b
    MOV EAX,EBX                         ; 00554a6e
    POP EBX                             ; 00554a70
    RET                                 ; 00554a71

