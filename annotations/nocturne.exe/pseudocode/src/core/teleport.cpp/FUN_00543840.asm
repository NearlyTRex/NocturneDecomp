; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_teleport_cpp_FUN_00543840(CDemonActor *param_1)
;
;
; XREF[1]:
;   core_teleport.cpp_FUN_00543810 at 00543823
;
; Referenced Globals:
;   CDemonActor_vtable g_CTeleportDestVTable
;
; Called Functions:
;   core_actor.cpp_FUN_00409d30
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00543840
        ;   Label: core_teleport.cpp_FUN_00543840
    PUSH EDX                            ; 00543844
    CALL core_actor.cpp_FUN_00409d30    ; 00543845
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_FUN_00409d30(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0054384a
    MOV dword ptr [EAX + 0x14c],0x5a2ee4 ; 0054384d | g_CTeleportDestVTable
    RET                                 ; 00543857

