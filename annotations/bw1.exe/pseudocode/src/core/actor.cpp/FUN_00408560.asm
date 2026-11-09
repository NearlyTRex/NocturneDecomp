; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_actor_cpp_FUN_00408560(int param_1)
;
;
; XREF[3]:
;   core_inv.cpp_FUN_004f7690 at 004f887b
;   core_inv.cpp_FUN_004f8d00 at 004f8dae
;   core_mission.cpp_CDemonMission_removeActor_FUN_0051b4d0 at 0051b4f1
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00408560
        ;   Label: core_actor.cpp_FUN_00408560
    TEST EAX,EAX                        ; 00408564
    JZ 0x0040856a                       ; 00408566
        ;   XREF to: 0040856a (CONDITIONAL_JUMP)  ; LAB_0040856a
    JNZ 0x0040856b                      ; 00408568
        ;   XREF to: 0040856b (CONDITIONAL_JUMP)  ; LAB_0040856b
    RET                                 ; 0040856a
        ;   Label: LAB_0040856a
    PUSH 0x2                            ; 0040856b
        ;   Label: LAB_0040856b
    MOV EDX,dword ptr [EAX + 0x154]     ; 0040856d
    PUSH EAX                            ; 00408573
    CALL dword ptr [EDX + 0xd0]         ; 00408574
    ADD ESP,0x8                         ; 0040857a
    RET                                 ; 0040857d

