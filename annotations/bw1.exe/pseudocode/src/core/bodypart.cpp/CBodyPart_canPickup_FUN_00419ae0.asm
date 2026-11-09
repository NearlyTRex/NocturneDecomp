; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_bodypart_cpp_CBodyPart_canPickup_FUN_00419ae0(CBodyPart *this_ptr,CDemonActor *picker)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00419ae0
        ;   Label: core_bodypart.cpp_CBodyPart_canPickup_FUN_00419ae0
    CMP dword ptr [EAX + 0x158],0x0     ; 00419ae4
    JNZ 0x00419af6                      ; 00419aeb
        ;   XREF to: 00419af6 (CONDITIONAL_JUMP)  ; LAB_00419af6
    CMP dword ptr [EAX + 0xcc4],0x0     ; 00419aed
    JZ 0x00419af9                       ; 00419af4
        ;   XREF to: 00419af9 (CONDITIONAL_JUMP)  ; LAB_00419af9
    XOR EAX,EAX                         ; 00419af6
        ;   Label: LAB_00419af6
    RET                                 ; 00419af8
    MOV EAX,0x3                         ; 00419af9
        ;   Label: LAB_00419af9
    RET                                 ; 00419afe

