; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vampboss_cpp_CVampireBoss_transformToBat_FUN_0054e1a0(CVampireBoss *this_ptr)
;
; Parameters:
; CVampireBoss *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_vampboss.cpp_CVampireBoss_process_FUN_0054c690 at 0054d281
;
; Referenced Globals:
;   TerminatedCString s_voicubat_wav_00597249
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0054e1a0
        ;   Label: core_vampboss.cpp_CVampireBoss_transformToBat_FUN_0054e1a0
    MOV dword ptr [EAX + 0xbe168],0x1   ; 0054e1a4
    MOV dword ptr [EAX + 0xbedac],0x1   ; 0054e1ae
    PUSH 0x597249                       ; 0054e1b8 | = "voicubat.wav"
    MOV EDX,dword ptr [EAX + 0x14c]     ; 0054e1bd
    PUSH EAX                            ; 0054e1c3
    MOV dword ptr [EAX + 0xbed9c],0x40000000 ; 0054e1c4
    CALL dword ptr [EDX + 0x24]         ; 0054e1ce
    ADD ESP,0x8                         ; 0054e1d1
    RET                                 ; 0054e1d4

