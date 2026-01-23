; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_ladder.cpp_CLadder_FUN_00502530(CLadder * this_ptr)
;
; Parameters:
; CLadder *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CLadderClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x2dcd7d8                   ; 00502530 | g_CLadderClassInfo
        ;   Label: core_ladder.cpp_CLadder_FUN_00502530
    RET                                 ; 00502535

