; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; EGroundType __cdecl core_backgnd_cpp_CBackgroundActor_getGroundType_FUN_0040f120(CBackgroundActor *this_ptr)
;
; Parameters:
; CBackgroundActor * Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040f120
        ;   Label: core_backgnd.cpp_CBackgroundActor_getGroundType_FUN_0040f120
    MOV EAX,dword ptr [EAX + 0x2dc]     ; 0040f124
    RET                                 ; 0040f12a

