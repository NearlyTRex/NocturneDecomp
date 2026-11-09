; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSfxSlot * __cdecl sound_sndmain_cpp_CSfxSlot_ctor_FUN_0055a600(CSfxSlot *this_ptr)
;
; Parameters:
; CSfxSlot *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   sound_sndmain.cpp_FUN_00555bf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055a600
        ;   Label: sound_sndmain.cpp_CSfxSlot_ctor_FUN_0055a600
    MOV EBX,dword ptr [ESP + 0x8]       ; 0055a601
    PUSH EBX                            ; 0055a605
    CALL sound_sndmain.cpp_FUN_00555bf0 ; 0055a606
        ;   XREF to: 00555bf0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00555bf0(CSfxOptions * this_ptr)
    ADD ESP,0x4                         ; 0055a60b
    MOV EAX,EBX                         ; 0055a60e
    POP EBX                             ; 0055a610
    RET                                 ; 0055a611

