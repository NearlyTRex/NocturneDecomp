; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl sound_sndmain_cpp_CSampleInfo_getBitDepth_FUN_005addd0(CSampleInfo *this_ptr)
;
; Parameters:
; CSampleInfo *    Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005addd0
        ;   Label: sound_sndmain.cpp_CSampleInfo_getBitDepth_FUN_005addd0
    MOV EAX,dword ptr [EAX + 0x104]     ; 005addd4
    RET                                 ; 005addda

