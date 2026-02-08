; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_vehicle_cpp_CVehicle_setup_FUN_005e7b90(CVehicle *this_ptr)
;
; Parameters:
; CVehicle *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e7b90
        ;   Label: core_vehicle.cpp_CVehicle_setup_FUN_005e7b90
    PUSH ESI                            ; 005e7b91
    PUSH EDI                            ; 005e7b92
    PUSH EBP                            ; 005e7b93
    SUB ESP,0x24                        ; 005e7b94
    MOV EBX,dword ptr [ESP + 0x38]      ; 005e7b97
    PUSH EBX                            ; 005e7b9b
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 005e7b9c
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)

