; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_flamecan.cpp_FUN_004cb200()
;
; Local Variables:
; undefined1       Stack[-0x38]:1  local_38
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cb200
        ;   Label: core_flamecan.cpp_FUN_004cb200
    PUSH EBP                            ; 004cb201
    MOV EBP,ESP                         ; 004cb202
    SUB ESP,0x40                        ; 004cb204
    AND ESP,0xfffffff8                  ; 004cb207
    MOV EBX,dword ptr [EBP + 0xc]       ; 004cb20a
    PUSH EBX                            ; 004cb20d
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 004cb20e
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)

