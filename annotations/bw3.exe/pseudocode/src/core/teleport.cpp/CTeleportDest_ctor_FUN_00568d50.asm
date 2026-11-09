; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTeleportDest * __cdecl core_teleport_cpp_CTeleportDest_ctor_FUN_00568d50(CTeleportDest *this_ptr)
;
; Parameters:
; CTeleportDest *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_teleport.cpp_factoryFuncTeleportDest_FUN_00568d20 at 00568d33
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408600
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00568d50
        ;   Label: core_teleport.cpp_CTeleportDest_ctor_FUN_00568d50
    PUSH EDX                            ; 00568d54
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408600 ; 00568d55
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408600(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00568d5a
    MOV dword ptr [EAX + 0x154],0x5e5154 ; 00568d5d
    RET                                 ; 00568d67

