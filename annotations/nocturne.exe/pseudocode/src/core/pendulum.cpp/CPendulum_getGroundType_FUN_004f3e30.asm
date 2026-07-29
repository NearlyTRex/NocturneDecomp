; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; EGroundType __cdecl core_pendulum_cpp_CPendulum_getGroundType_FUN_004f3e30(CPendulum *this_ptr)
;
; Parameters:
; CPendulum *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f3e30
        ;   Label: core_pendulum.cpp_CPendulum_getGroundType_FUN_004f3e30
    MOV EAX,dword ptr [EAX + 0x430]     ; 004f3e34
    RET                                 ; 004f3e3a

