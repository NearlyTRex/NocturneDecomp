; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_actor_cpp_FUN_0040e130(void)
;
;
; XREF[8]:
;   core_msnedit.cpp_CDemonMission_FUN_0053d8b0 at 0053da21
;   core_msnedit.cpp_CDemonMission_FUN_0053ea30 at 0053ea59
;   core_msnedit.cpp_CDemonMission_FUN_0053ec80 at 0053eced
;   core_msnedit.cpp_CDemonMission_deleteActor_FUN_00538ea0 at 00538eed
;   core_msnedit.cpp_CDemonMission_editActorAtIndex_FUN_0053b030 at 0053b11e
;   core_msnedit.cpp_CDemonMission_editActorDetailed_FUN_0053b510 at 0053b5fe
;   core_msnedit.cpp_staticInit_FUN_00535c30 at 00535c35
;   core_script.cpp_CScript_FUN_005677a0 at 00567ac0
;
; Called Functions:
;   core_actor.cpp_FUN_0040e150
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e130
        ;   Label: core_actor.cpp_FUN_0040e130
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040e131
    PUSH EBX                            ; 0040e135
    MOV dword ptr [EBX],0x0             ; 0040e136
    CALL core_actor.cpp_FUN_0040e150    ; 0040e13c
        ;   XREF to: 0040e150 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040e150()
    ADD ESP,0x4                         ; 0040e141
    MOV EAX,EBX                         ; 0040e144
    POP EBX                             ; 0040e146
    RET                                 ; 0040e147

