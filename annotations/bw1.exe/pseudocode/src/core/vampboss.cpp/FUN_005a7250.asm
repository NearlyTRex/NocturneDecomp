; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vampboss_cpp_FUN_005a7250(CVampireBoss *this_ptr)
;
; Parameters:
; CVampireBoss *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_vampboss.cpp_FUN_005a5550 at 005a6246
;
; Referenced Globals:
;   TerminatedCString s_voicubat_wav_005f8f0c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a7250
        ;   Label: core_vampboss.cpp_FUN_005a7250
    MOV dword ptr [EAX + 0xbe79c],0x1   ; 005a7254
    MOV dword ptr [EAX + 0xbf3e0],0x1   ; 005a725e
    PUSH 0x5f8f0c                       ; 005a7268 | = "voicubat.wav"
    MOV EDX,dword ptr [EAX + 0x154]     ; 005a726d
    PUSH EAX                            ; 005a7273
    MOV dword ptr [EAX + 0xbf3d0],0x40000000 ; 005a7274
    CALL dword ptr [EDX + 0x2c]         ; 005a727e
    ADD ESP,0x8                         ; 005a7281
    RET                                 ; 005a7284

