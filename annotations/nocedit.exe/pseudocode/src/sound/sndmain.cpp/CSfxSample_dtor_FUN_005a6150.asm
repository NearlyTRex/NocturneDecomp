; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSfxSample * __cdecl sound_sndmain_cpp_CSfxSample_dtor_FUN_005a6150(CSfxSample *this_ptr,uint flags)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a6150
        ;   Label: sound_sndmain.cpp_CSfxSample_dtor_FUN_005a6150
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a6151
    PUSH EBX                            ; 005a6155
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0 ; 005a6156
        ;   XREF to: 005a62c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 005a615b
    MOV EAX,EBX                         ; 005a615e
    POP EBX                             ; 005a6160
    RET                                 ; 005a6161

