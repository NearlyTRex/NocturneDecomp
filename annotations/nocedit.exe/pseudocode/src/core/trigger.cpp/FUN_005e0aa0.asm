; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_trigger.cpp_FUN_005e0aa0()
;
;
; XREF[5]:
;   core_crossbow.cpp_CCrossbow_FUN_00448f20 at 0044926d
;   core_gun.cpp_FUN_004f0350 at 004f0a62
;   core_lightgun.cpp_FUN_00505c70 at 005061f3
;   core_tommygun.cpp_FUN_005ddb30 at 005de27b
;   core_turret.cpp_FUN_005e3750 at 005e3b89
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005e0aa0
        ;   Label: core_trigger.cpp_FUN_005e0aa0
    CMP dword ptr [EAX + 0x174],0x4     ; 005e0aa4
    JZ 0x005e0aae                       ; 005e0aab | LAB_005e0aae
        ;   XREF to: 005e0aae (CONDITIONAL_JUMP)
    RET                                 ; 005e0aad
    MOV dword ptr [EAX + 0x2f0],0x1     ; 005e0aae
        ;   Label: LAB_005e0aae
    RET                                 ; 005e0ab8

