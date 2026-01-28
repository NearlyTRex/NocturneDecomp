; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CTeleport * __cdecl core_teleport_cpp_CTeleport_ctor_FUN_005da9e0(CTeleport *this_ptr)
;
; Parameters:
; CTeleport *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_teleport.cpp_factoryFunc_FUN_005da9a0 at 005da9bd
;
; Referenced Globals:
;   CDemonActor_vtable g_CTeleportVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005da9e0
        ;   Label: core_teleport.cpp_CTeleport_ctor_FUN_005da9e0
    PUSH EDX                            ; 005da9e4
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 005da9e5
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
    MOV dword ptr [EAX + 0x154],0x664324 ; 005da9ea | g_CTeleportVTable
    MOV dword ptr [EAX + 0x158],0x40a00000 ; 005da9f4
    MOV dword ptr [EAX + 0x15c],0x41100000 ; 005da9fe
    MOV dword ptr [EAX + 0x160],0x40a00000 ; 005daa08
    ADD ESP,0x4                         ; 005daa12
    MOV dword ptr [EAX + 0x164],0x0     ; 005daa15
    RET                                 ; 005daa1f

