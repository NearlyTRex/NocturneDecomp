; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; EGroundType __cdecl core_ladder_cpp_CLadder_getGroundType_FUN_004fd890(CLadder *this_ptr)
;
; Parameters:
; CLadder *        Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004fd890
        ;   Label: core_ladder.cpp_CLadder_getGroundType_FUN_004fd890
    MOV EAX,dword ptr [EAX + 0x2fc]     ; 004fd894
    RET                                 ; 004fd89a

