; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl support_newmsg_cpp_FUN_005445a0(void)
;
;
; Referenced Globals:
;   int g_MouseX
;   int g_MouseY
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005445a0
        ;   Label: support_newmsg.cpp_FUN_005445a0
    MOV EAX,[0x02cf6a8c]                ; 005445a4 | g_MouseX
    MOV dword ptr [EDX],EAX             ; 005445a9
    MOV EDX,dword ptr [ESP + 0xc]       ; 005445ab
    MOV EAX,[0x02cf6a90]                ; 005445af | g_MouseY
    MOV dword ptr [EDX],EAX             ; 005445b4
    RET                                 ; 005445b6

