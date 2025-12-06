; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_level.cpp_CLevelLoader_setVersion_FUN_00504750(CLevelLoader * this_ptr, int value)
;
; Parameters:
; CLevelLoader *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   value
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00504750
        ;   Label: core_level.cpp_CLevelLoader_setVersion_FUN_00504750
    MOV EAX,dword ptr [ESP + 0x8]       ; 00504754
    MOV dword ptr [EDX + 0x8],EAX       ; 00504758
    RET                                 ; 0050475b

