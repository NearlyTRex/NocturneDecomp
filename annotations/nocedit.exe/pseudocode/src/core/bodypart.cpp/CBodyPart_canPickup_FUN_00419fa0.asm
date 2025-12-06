; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_bodypart.cpp_CBodyPart_canPickup_FUN_00419fa0(CBodyPart * this_ptr, CDemonActor * picker)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00419fa0
        ;   Label: core_bodypart.cpp_CBodyPart_canPickup_FUN_00419fa0
    CMP dword ptr [EAX + 0x158],0x0     ; 00419fa4
    JNZ 0x00419fb6                      ; 00419fab | LAB_00419fb6
        ;   XREF to: 00419fb6 (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0xcc4],0x0     ; 00419fad
    JZ 0x00419fb9                       ; 00419fb4 | LAB_00419fb9
        ;   XREF to: 00419fb9 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 00419fb6
        ;   Label: LAB_00419fb6
    RET                                 ; 00419fb8
    MOV EAX,0x3                         ; 00419fb9
        ;   Label: LAB_00419fb9
    RET                                 ; 00419fbe

