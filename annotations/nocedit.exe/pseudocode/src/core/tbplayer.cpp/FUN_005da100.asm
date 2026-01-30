; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_tbplayer_cpp_FUN_005da100(void)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005da100
        ;   Label: core_tbplayer.cpp_FUN_005da100
    MOV EDX,dword ptr [ESP + 0x8]       ; 005da104
    MOV dword ptr [EAX],EDX             ; 005da108
    MOV EDX,dword ptr [ESP + 0xc]       ; 005da10a
    MOV dword ptr [EAX + 0x8],EDX       ; 005da10e
    MOV EDX,dword ptr [ESP + 0x10]      ; 005da111
    MOV dword ptr [EAX + 0x4],EDX       ; 005da115
    RET                                 ; 005da118

