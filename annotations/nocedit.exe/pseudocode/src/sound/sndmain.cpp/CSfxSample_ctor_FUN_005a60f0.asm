; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CSfxSample * sound_sndmain.cpp_CSfxSample_ctor_FUN_005a60f0(CSfxSample * this_ptr)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSample_init_FUN_005a8480
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a60f0
        ;   Label: sound_sndmain.cpp_CSfxSample_ctor_FUN_005a60f0
    PUSH EDX                            ; 005a60f4
    CALL sound_sndmain.cpp_CSfxSample_init_FUN_005a8480 ; 005a60f5 | CSfxSample * sound_sndmain.cpp_CSfxSample_init_FUN_005a8480(CSfxSample * this_ptr)
        ;   XREF to: 005a8480 (UNCONDITIONAL_CALL)
    MOV dword ptr [EAX + 0x120],0x0     ; 005a60fa
    MOV dword ptr [EAX + 0x154],0x0     ; 005a6104
    MOV dword ptr [EAX + 0x158],0x0     ; 005a610e
    MOV dword ptr [EAX + 0x150],0x0     ; 005a6118
    MOV dword ptr [EAX + 0x15c],0xffffffff ; 005a6122
    MOV dword ptr [EAX + 0x174],0x0     ; 005a612c
    MOV dword ptr [EAX + 0x16c],0x0     ; 005a6136
    ADD ESP,0x4                         ; 005a6140
    MOV dword ptr [EAX + 0x17c],0x0     ; 005a6143
    RET                                 ; 005a614d

