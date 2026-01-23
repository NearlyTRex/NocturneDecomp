; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_ladder.cpp_CLadder_FUN_00502e90(CLadder * this_ptr)
;
; Parameters:
; CLadder *        Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00502e90
        ;   Label: core_ladder.cpp_CLadder_FUN_00502e90
    MOV EDX,dword ptr [ESP + 0x8]       ; 00502e94
    CMP EDX,dword ptr [EAX + 0x2e0]     ; 00502e98
    JZ 0x00502ea1                       ; 00502e9e
        ;   XREF to: 00502ea1 (CONDITIONAL_JUMP)  ; LAB_00502ea1
    RET                                 ; 00502ea0
    MOV dword ptr [EAX + 0x2e0],0x0     ; 00502ea1
        ;   Label: LAB_00502ea1
    RET                                 ; 00502eab

