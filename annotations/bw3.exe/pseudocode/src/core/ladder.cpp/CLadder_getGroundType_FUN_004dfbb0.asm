; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; EGroundType __cdecl core_ladder_cpp_CLadder_getGroundType_FUN_004dfbb0(CLadder *this_ptr)
;
; Parameters:
; CLadder *        Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004dfbb0
        ;   Label: core_ladder.cpp_CLadder_getGroundType_FUN_004dfbb0
    MOV EAX,dword ptr [EAX + 0x2fc]     ; 004dfbb4
    RET                                 ; 004dfbba

