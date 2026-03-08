; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; EGroundType __cdecl core_backgnd_cpp_CBackgroundActor_getGroundType_FUN_00412a30(CBackgroundActor *this_ptr)
;
; Parameters:
; CBackgroundActor * Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00412a30
        ;   Label: core_backgnd.cpp_CBackgroundActor_getGroundType_FUN_00412a30
    MOV EAX,dword ptr [EAX + 0x2d8]     ; 00412a34
    RET                                 ; 00412a3a

