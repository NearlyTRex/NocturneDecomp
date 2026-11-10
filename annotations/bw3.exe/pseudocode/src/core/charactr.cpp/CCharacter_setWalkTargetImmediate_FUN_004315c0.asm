; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_setWalkTargetImmediate_FUN_004315c0(CCharacter *this_ptr,CDemonActor *target)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   target
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004315c0
        ;   Label: core_charactr.cpp_CCharacter_setWalkTargetImmediate_FUN_004315c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004315c1
    MOV dword ptr [EBX + 0x273c],0x1    ; 004315c5
    MOV EAX,dword ptr [ESP + 0xc]       ; 004315cf
    MOV dword ptr [EBX + 0x2708],0xbf800000 ; 004315d3
    PUSH 0x40000000                     ; 004315dd
    MOV dword ptr [EBX + 0x2704],EAX    ; 004315e2
    PUSH EBX                            ; 004315e8
    MOV EAX,dword ptr [EBX + 0x154]     ; 004315e9
    MOV dword ptr [EBX + 0x270c],0x7149f2ca ; 004315ef
    CALL dword ptr [EAX + 0x138]        ; 004315f9
    ADD ESP,0x8                         ; 004315ff
    MOV dword ptr [EBX + 0xcdc8],0x1    ; 00431602
    POP EBX                             ; 0043160c
    RET                                 ; 0043160d

