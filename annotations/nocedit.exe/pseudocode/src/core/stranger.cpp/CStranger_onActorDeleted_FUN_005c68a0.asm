; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_stranger_cpp_CStranger_onActorDeleted_FUN_005c68a0(CStranger *this_ptr,CDemonActor *deleted_actor)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   deleted_actor
;
; Called Functions:
;   core_charactr.cpp_CCharacter_onActorDeleted_FUN_0042f8a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c68a0
        ;   Label: core_stranger.cpp_CStranger_onActorDeleted_FUN_005c68a0
    PUSH ESI                            ; 005c68a1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005c68a2
    MOV ESI,dword ptr [ESP + 0x10]      ; 005c68a6
    PUSH ESI                            ; 005c68aa
    PUSH EBX                            ; 005c68ab
    CALL core_charactr.cpp_CCharacter_onActorDeleted_FUN_0042f8a0 ; 005c68ac
        ;   XREF to: 0042f8a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_onActorDeleted_FUN_0042f8a0(CCharacter * this_ptr, CDemonActor * deleted_actor)
    MOV EDX,dword ptr [EBX + 0x1fc00]   ; 005c68b1
    ADD ESP,0x8                         ; 005c68b7
    CMP ESI,EDX                         ; 005c68ba
    JZ 0x005c68c9                       ; 005c68bc
        ;   XREF to: 005c68c9 (CONDITIONAL_JUMP)  ; LAB_005c68c9
    CMP ESI,dword ptr [EBX + 0x1fc20]   ; 005c68be
    JZ 0x005c68de                       ; 005c68c4
        ;   XREF to: 005c68de (CONDITIONAL_JUMP)  ; LAB_005c68de
    POP ESI                             ; 005c68c6
    POP EBX                             ; 005c68c7
    RET                                 ; 005c68c8
    MOV dword ptr [EBX + 0x1fc00],0x0   ; 005c68c9
        ;   Label: LAB_005c68c9
    CMP ESI,dword ptr [EBX + 0x1fc20]   ; 005c68d3
    JZ 0x005c68de                       ; 005c68d9
        ;   XREF to: 005c68de (CONDITIONAL_JUMP)  ; LAB_005c68de
    POP ESI                             ; 005c68db
    POP EBX                             ; 005c68dc
    RET                                 ; 005c68dd
    MOV dword ptr [EBX + 0x1fc20],0x0   ; 005c68de
        ;   Label: LAB_005c68de
    POP ESI                             ; 005c68e8
    POP EBX                             ; 005c68e9
    RET                                 ; 005c68ea

