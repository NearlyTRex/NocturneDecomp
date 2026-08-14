; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; EGroundType __cdecl core_ladder_cpp_CLadder_getGroundType_FUN_004c47c0(CLadder *this_ptr)
;
; Parameters:
; CLadder *        Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c47c0
        ;   Label: core_ladder.cpp_CLadder_getGroundType_FUN_004c47c0
    MOV EAX,dword ptr [EAX + 0x2f4]     ; 004c47c4
    RET                                 ; 004c47ca

