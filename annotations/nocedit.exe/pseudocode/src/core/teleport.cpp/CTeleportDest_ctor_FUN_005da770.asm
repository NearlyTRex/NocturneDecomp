; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CTeleportDest * core_teleport.cpp_CTeleportDest_ctor_FUN_005da770(CTeleportDest * this_ptr)
;
; Parameters:
; CTeleportDest *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_teleport.cpp_FUN_005da730 at 005da74a
;
; Referenced Globals:
;   CDemonActor_vtable g_CTeleportDestVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005da770
        ;   Label: core_teleport.cpp_CTeleportDest_ctor_FUN_005da770
    PUSH EDX                            ; 005da774
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 005da775 | CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005da77a
    MOV dword ptr [EAX + 0x154],0x664234 ; 005da77d | CDemonActor_vtable g_CTeleportDestVTable
    RET                                 ; 005da787

