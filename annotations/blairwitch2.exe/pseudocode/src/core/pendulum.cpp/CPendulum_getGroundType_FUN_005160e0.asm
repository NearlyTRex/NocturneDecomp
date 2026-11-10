; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; EGroundType __cdecl core_pendulum_cpp_CPendulum_getGroundType_FUN_005160e0(CPendulum *this_ptr)
;
; Parameters:
; CPendulum *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005160e0
        ;   Label: core_pendulum.cpp_CPendulum_getGroundType_FUN_005160e0
    MOV EAX,dword ptr [EAX + 0x594]     ; 005160e4
    RET                                 ; 005160ea

