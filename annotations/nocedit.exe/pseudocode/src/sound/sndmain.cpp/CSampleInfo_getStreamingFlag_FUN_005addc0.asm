; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int sound_sndmain.cpp_CSampleInfo_getStreamingFlag_FUN_005addc0(CSampleInfo * this_ptr)
;
; Parameters:
; CSampleInfo *    Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005addc0
        ;   Label: sound_sndmain.cpp_CSampleInfo_getStreamingFlag_FUN_005addc0
    MOV EAX,dword ptr [EAX + 0x100]     ; 005addc4
    RET                                 ; 005addca

