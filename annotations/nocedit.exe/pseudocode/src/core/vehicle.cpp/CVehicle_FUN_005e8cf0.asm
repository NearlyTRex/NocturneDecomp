; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_vehicle_cpp_CVehicle_FUN_005e8cf0(CVehicle *this_ptr)
;
; Parameters:
; CVehicle *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005e8cf0
        ;   Label: core_vehicle.cpp_CVehicle_FUN_005e8cf0
    PUSH EDX                            ; 005e8cf4
    CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040 ; 005e8cf5
        ;   XREF to: 0040d040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005e8cfa
    RET                                 ; 005e8cfd

