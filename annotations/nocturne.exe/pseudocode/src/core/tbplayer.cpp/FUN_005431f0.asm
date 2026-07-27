; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_tbplayer_cpp_FUN_005431f0(void)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005431f0
        ;   Label: core_tbplayer.cpp_FUN_005431f0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005431f4
    MOV dword ptr [EAX],EDX             ; 005431f8
    MOV EDX,dword ptr [ESP + 0xc]       ; 005431fa
    MOV dword ptr [EAX + 0x8],EDX       ; 005431fe
    MOV EDX,dword ptr [ESP + 0x10]      ; 00543201
    MOV dword ptr [EAX + 0x4],EDX       ; 00543205
    RET                                 ; 00543208

