; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTeleport * __cdecl core_teleport_cpp_CTeleport_ctor_FUN_00568e00(CTeleport *this_ptr)
;
; Parameters:
; CTeleport *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_teleport.cpp_FUN_00568dd0 at 00568de3
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408600
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00568e00
        ;   Label: core_teleport.cpp_CTeleport_ctor_FUN_00568e00
    PUSH EDX                            ; 00568e04
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408600 ; 00568e05
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408600(CDemonActor * this_ptr)
    MOV dword ptr [EAX + 0x154],0x5e5234 ; 00568e0a
    MOV dword ptr [EAX + 0x158],0x40a00000 ; 00568e14
    MOV dword ptr [EAX + 0x15c],0x41100000 ; 00568e1e
    MOV dword ptr [EAX + 0x160],0x40a00000 ; 00568e28
    ADD ESP,0x4                         ; 00568e32
    MOV dword ptr [EAX + 0x164],0x0     ; 00568e35
    RET                                 ; 00568e3f

