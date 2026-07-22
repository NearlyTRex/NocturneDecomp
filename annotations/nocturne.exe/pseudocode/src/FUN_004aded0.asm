; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004aded0(int param_1)
;
;
; XREF[8]:
;   FUN_0043d1c0 at 0043d791
;   FUN_00477890 at 00477f26
;   FUN_004b27c0 at 004b2ecf
;   FUN_00515ea0 at 0051656d
;   FUN_00545c30 at 00546389
;   core_actor.cpp_FUN_0040b300 at 0040b787
;   core_set.cpp_CDemonSet_processActors_FUN_00509140 at 005094ea
;   core_turret.cpp_CTurret_fire_FUN_0054ab10 at 0054af9f
;
; Referenced Globals:
;   undefined4 DAT_005b7650
;
; Called Functions:
;   core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004aded0
        ;   Label: FUN_004aded0
    ADD EAX,0x304                       ; 004aded4
    PUSH EAX                            ; 004aded9
    MOV EDX,dword ptr [0x005b7650]      ; 004adeda | DAT_005b7650
    PUSH EDX                            ; 004adee0
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 004adee1
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30()
    ADD ESP,0x8                         ; 004adee6
    RET                                 ; 004adee9

