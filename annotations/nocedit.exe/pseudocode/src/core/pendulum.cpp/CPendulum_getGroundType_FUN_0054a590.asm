; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_pendulum_cpp_CPendulum_getGroundType_FUN_0054a590(CPendulum *this_ptr)
;
; Parameters:
; CPendulum *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0054a590
        ;   Label: core_pendulum.cpp_CPendulum_getGroundType_FUN_0054a590
    MOV EAX,dword ptr [EAX + 0x438]     ; 0054a594
    RET                                 ; 0054a59a

