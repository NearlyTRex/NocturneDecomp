; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSfxOptions * __cdecl sound_sndmain_cpp_CSfxOptions_ctor_FUN_005299e0(CSfxOptions *this_ptr)
;
; Parameters:
; CSfxOptions *    Stack[0x4]:4   this_ptr
;
; Called Functions:
;   sound_sndmain.cpp_CSfxOptions_reset_FUN_00525eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005299e0
        ;   Label: sound_sndmain.cpp_CSfxOptions_ctor_FUN_005299e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005299e1
    PUSH EBX                            ; 005299e5
    CALL sound_sndmain.cpp_CSfxOptions_reset_FUN_00525eb0 ; 005299e6
        ;   XREF to: 00525eb0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxOptions_reset_FUN_00525eb0(CSfxOptions * this_ptr)
    ADD ESP,0x4                         ; 005299eb
    MOV EAX,EBX                         ; 005299ee
    POP EBX                             ; 005299f0
    RET                                 ; 005299f1

