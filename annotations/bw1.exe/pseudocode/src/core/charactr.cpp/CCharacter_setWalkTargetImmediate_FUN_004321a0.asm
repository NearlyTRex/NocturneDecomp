; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_setWalkTargetImmediate_FUN_004321a0(CCharacter *this_ptr,CDemonActor *target)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   target
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004321a0
        ;   Label: core_charactr.cpp_CCharacter_setWalkTargetImmediate_FUN_004321a0
    MOV dword ptr [EAX + 0x273c],0x1    ; 004321a4
    MOV EDX,dword ptr [ESP + 0x8]       ; 004321ae
    MOV dword ptr [EAX + 0x2708],0xbf800000 ; 004321b2
    PUSH 0xbf800000                     ; 004321bc
    MOV dword ptr [EAX + 0x2704],EDX    ; 004321c1
    PUSH EAX                            ; 004321c7
    MOV EDX,dword ptr [EAX + 0x154]     ; 004321c8
    MOV dword ptr [EAX + 0x270c],0x7149f2ca ; 004321ce
    CALL dword ptr [EDX + 0x138]        ; 004321d8
    ADD ESP,0x8                         ; 004321de
    RET                                 ; 004321e1

