; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flamecan_cpp_CFlameCan_setup_FUN_004cb200(CFlameCan *this_ptr)
;
; Parameters:
; CFlameCan *      Stack[0x4]:4   this_ptr
; Local Variables:
; CBoundingBox3D   Stack[-0x38]:24  local_38
; float[6]         Stack[-0x20]:24  afStack_20
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cb200
        ;   Label: core_flamecan.cpp_CFlameCan_setup_FUN_004cb200
    PUSH EBP                            ; 004cb201
    MOV EBP,ESP                         ; 004cb202
    SUB ESP,0x40                        ; 004cb204
    AND ESP,0xfffffff8                  ; 004cb207
    MOV EBX,dword ptr [EBP + 0xc]       ; 004cb20a
    PUSH EBX                            ; 004cb20d
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 004cb20e
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)

