; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndwav_cpp_staticInit_FUN_0055d6a0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02cf5678
;   undefined4 DAT_02cf567c
;
; *****************************************************************************

section .text

    MOV ECX,0x5e4938                    ; 0055d6a0
        ;   Label: sound_sndwav.cpp_staticInit_FUN_0055d6a0
    MOV EDX,0x5e4950                    ; 0055d6a5
    MOV dword ptr [0x02cf567c],ECX      ; 0055d6aa | DAT_02cf567c
    MOV dword ptr [0x02cf5678],EDX      ; 0055d6b0 | DAT_02cf5678
    RET                                 ; 0055d6b6

