; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_ladder_cpp_CLadder_getGroundType_FUN_00502c90(CLadder *this_ptr)
;
; Parameters:
; CLadder *        Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00502c90
        ;   Label: core_ladder.cpp_CLadder_getGroundType_FUN_00502c90
    MOV EAX,dword ptr [EAX + 0x2fc]     ; 00502c94
    RET                                 ; 00502c9a

