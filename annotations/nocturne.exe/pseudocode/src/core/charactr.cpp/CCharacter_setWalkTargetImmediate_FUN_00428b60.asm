; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_setWalkTargetImmediate_FUN_00428b60(CCharacter *this_ptr,CDemonActor *target)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   target
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00428b60
        ;   Label: core_charactr.cpp_CCharacter_setWalkTargetImmediate_FUN_00428b60
    MOV dword ptr [EAX + 0x25a8],0x1    ; 00428b64
    MOV EDX,dword ptr [ESP + 0x8]       ; 00428b6e
    MOV dword ptr [EAX + 0x259c],0xbf800000 ; 00428b72
    PUSH 0xbf800000                     ; 00428b7c
    MOV dword ptr [EAX + 0x2598],EDX    ; 00428b81
    PUSH EAX                            ; 00428b87
    MOV EDX,dword ptr [EAX + 0x14c]     ; 00428b88
    MOV dword ptr [EAX + 0x25a0],0x7149f2ca ; 00428b8e
    CALL dword ptr [EDX + 0x130]        ; 00428b98
    ADD ESP,0x8                         ; 00428b9e
    RET                                 ; 00428ba1

