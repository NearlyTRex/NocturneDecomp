; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_teleport_cpp_CTeleport_FUN_005dab70(CTeleport *this_ptr)
;
; Parameters:
; CTeleport *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_onActorDeleted_FUN_0040d000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005dab70
        ;   Label: core_teleport.cpp_CTeleport_FUN_005dab70
    MOV EBX,dword ptr [ESP + 0x8]       ; 005dab71
    MOV EDX,dword ptr [ESP + 0xc]       ; 005dab75
    PUSH EDX                            ; 005dab79
    PUSH EBX                            ; 005dab7a
    CALL core_actor.cpp_CDemonActor_onActorDeleted_FUN_0040d000 ; 005dab7b
        ;   XREF to: 0040d000 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_onActorDeleted_FUN_0040d000(CDemonActor * this_ptr, CDemonActor * deleted_actor)
    ADD ESP,0x8                         ; 005dab80
    MOV ECX,dword ptr [EBX + 0x164]     ; 005dab83
    CMP ECX,dword ptr [ESP + 0xc]       ; 005dab89
    JZ 0x005dab91                       ; 005dab8d
        ;   XREF to: 005dab91 (CONDITIONAL_JUMP)  ; LAB_005dab91
    POP EBX                             ; 005dab8f
    RET                                 ; 005dab90
    MOV dword ptr [EBX + 0x164],0x0     ; 005dab91
        ;   Label: LAB_005dab91
    POP EBX                             ; 005dab9b
    RET                                 ; 005dab9c

