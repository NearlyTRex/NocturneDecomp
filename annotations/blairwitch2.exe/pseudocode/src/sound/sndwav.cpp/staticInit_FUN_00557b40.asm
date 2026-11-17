; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndwav_cpp_staticInit_FUN_00557b40(void)
;
;
; Referenced Globals:
;   CWavOutDevice g_CWavOutDevice_0264b27c
;   CWavInDevice g_CWavInDevice_0264b280
;
; *****************************************************************************

section .text

    MOV ECX,0x5fbd18                    ; 00557b40
        ;   Label: sound_sndwav.cpp_staticInit_FUN_00557b40
    MOV EDX,0x5fbd30                    ; 00557b45
    MOV dword ptr [0x0264b280],ECX      ; 00557b4a | g_CWavInDevice_0264b280
    MOV dword ptr [0x0264b27c],EDX      ; 00557b50 | g_CWavOutDevice_0264b27c
    RET                                 ; 00557b56

