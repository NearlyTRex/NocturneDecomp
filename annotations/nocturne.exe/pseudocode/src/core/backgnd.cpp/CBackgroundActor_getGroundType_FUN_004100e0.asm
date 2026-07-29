; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; EGroundType __cdecl core_backgnd_cpp_CBackgroundActor_getGroundType_FUN_004100e0(CBackgroundActor *this_ptr)
;
; Parameters:
; CBackgroundActor * Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004100e0
        ;   Label: core_backgnd.cpp_CBackgroundActor_getGroundType_FUN_004100e0
    MOV EAX,dword ptr [EAX + 0x2d0]     ; 004100e4
    RET                                 ; 004100ea

