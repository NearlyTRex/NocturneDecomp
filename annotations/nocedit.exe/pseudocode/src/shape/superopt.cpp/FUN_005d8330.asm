; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void shape_superopt_cpp_FUN_005d8330(void)
;
;
; XREF[1]:
;   shape_superopt.cpp_TriListSomething_FUN_005d77a0 at 005d7af3
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005d8330
        ;   Label: shape_superopt.cpp_FUN_005d8330
    MOV EDX,dword ptr [ESP + 0x8]       ; 005d8334
    MOV ECX,dword ptr [EDX]             ; 005d8338
    MOV dword ptr [EAX],ECX             ; 005d833a
    MOV ECX,dword ptr [EDX + 0x4]       ; 005d833c
    MOV dword ptr [EAX + 0x4],ECX       ; 005d833f
    MOV ECX,dword ptr [EDX + 0x8]       ; 005d8342
    MOV dword ptr [EAX + 0x8],ECX       ; 005d8345
    MOV ECX,dword ptr [EDX + 0xc]       ; 005d8348
    MOV dword ptr [EAX + 0xc],ECX       ; 005d834b
    RET                                 ; 005d834e

