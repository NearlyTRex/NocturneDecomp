; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_vampboss_cpp_CVampireBoss_FUN_005e7480(CVampireBoss *this_ptr)
;
; Parameters:
; CVampireBoss *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 at 005e6561
;
; Referenced Globals:
;   TerminatedCString s_voicubat_wav_00656cdf
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005e7480
        ;   Label: core_vampboss.cpp_CVampireBoss_FUN_005e7480
    MOV dword ptr [EAX + 0xcdcc0],0x1   ; 005e7484
    MOV dword ptr [EAX + 0xce904],0x1   ; 005e748e
    PUSH 0x656cdf                       ; 005e7498 | = "voicubat.wav"
    MOV EDX,dword ptr [EAX + 0x154]     ; 005e749d
    PUSH EAX                            ; 005e74a3
    MOV dword ptr [EAX + 0xce8f4],0x40000000 ; 005e74a4
    CALL dword ptr [EDX + 0x24]         ; 005e74ae
    ADD ESP,0x8                         ; 005e74b1
    RET                                 ; 005e74b4

