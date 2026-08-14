; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl core_stranger_cpp_FUN_00540a10(void *ptr)
;
; Parameters:
; void *           Stack[0x4]:4   ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00540a10
        ;   Label: core_stranger.cpp_FUN_00540a10
    MOV EAX,dword ptr [EAX + 0x8]       ; 00540a14
    RET                                 ; 00540a17

