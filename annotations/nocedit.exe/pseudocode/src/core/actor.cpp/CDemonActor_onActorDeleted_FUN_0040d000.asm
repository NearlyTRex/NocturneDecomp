; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_actor_cpp_CDemonActor_onActorDeleted_FUN_0040d000 (CDemonActor *this_ptr,CDemonActor *deleted_actor)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   deleted_actor
;
; XREF[3]:
;   core_charactr.cpp_CCharacter_FUN_0042f8a0 at 0042f8ac
;   core_stairs.cpp_FUN_005babf0 at 005babfa
;   core_teleport.cpp_CTeleport_FUN_005dab70 at 005dab7b
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d000
        ;   Label: core_actor.cpp_CDemonActor_onActorDeleted_FUN_0040d000
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040d001
    PUSH EBX                            ; 0040d005
    MOV EAX,dword ptr [EBX + 0x154]     ; 0040d006
    CALL dword ptr [EAX + 0x8c]         ; 0040d00c
    ADD ESP,0x4                         ; 0040d012
    CMP EAX,dword ptr [ESP + 0xc]       ; 0040d015
    JZ 0x0040d01d                       ; 0040d019
        ;   XREF to: 0040d01d (CONDITIONAL_JUMP)  ; LAB_0040d01d
    POP EBX                             ; 0040d01b
    RET                                 ; 0040d01c
    PUSH 0x0                            ; 0040d01d
        ;   Label: LAB_0040d01d
    MOV EAX,dword ptr [EBX + 0x154]     ; 0040d01f
    PUSH EBX                            ; 0040d025
    CALL dword ptr [EAX + 0x84]         ; 0040d026
    ADD ESP,0x8                         ; 0040d02c
    POP EBX                             ; 0040d02f
    RET                                 ; 0040d030

