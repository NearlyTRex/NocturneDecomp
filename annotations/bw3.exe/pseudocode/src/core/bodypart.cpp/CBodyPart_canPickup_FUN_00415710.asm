; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_bodypart_cpp_CBodyPart_canPickup_FUN_00415710(CBodyPart *this_ptr,CDemonActor *picker)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00415710
        ;   Label: core_bodypart.cpp_CBodyPart_canPickup_FUN_00415710
    CMP dword ptr [EAX + 0x158],0x0     ; 00415714
    JNZ 0x00415726                      ; 0041571b
        ;   XREF to: 00415726 (CONDITIONAL_JUMP)  ; LAB_00415726
    CMP dword ptr [EAX + 0xcc4],0x0     ; 0041571d
    JZ 0x00415729                       ; 00415724
        ;   XREF to: 00415729 (CONDITIONAL_JUMP)  ; LAB_00415729
    XOR EAX,EAX                         ; 00415726
        ;   Label: LAB_00415726
    RET                                 ; 00415728
    MOV EAX,0x3                         ; 00415729
        ;   Label: LAB_00415729
    RET                                 ; 0041572e

