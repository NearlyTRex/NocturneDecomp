; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_trigger_cpp_FUN_005e0ac0(void)
;
;
; XREF[6]:
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210 at 0040ab09
;   core_crossbow.cpp_CCrossbow_FUN_00448f20 at 00449277
;   core_gun.cpp_FUN_004f0350 at 004f0a6c
;   core_lightgun.cpp_FUN_00505c70 at 00506200
;   core_tommygun.cpp_FUN_005ddb30 at 005de285
;   core_turret.cpp_FUN_005e3750 at 005e3b93
;
; Called Functions:
;   shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005e0ac0
        ;   Label: core_trigger.cpp_FUN_005e0ac0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005e0ac4
    TEST EDX,EDX                        ; 005e0ac8
    JZ 0x005e0ae4                       ; 005e0aca
        ;   XREF to: 005e0ae4 (CONDITIONAL_JUMP)  ; LAB_005e0ae4
    CMP dword ptr [EAX + 0x174],0x7     ; 005e0acc
    JNZ 0x005e0ae4                      ; 005e0ad3
        ;   XREF to: 005e0ae4 (CONDITIONAL_JUMP)  ; LAB_005e0ae4
    CMP byte ptr [EAX + 0x304],0x0      ; 005e0ad5
    JNZ 0x005e0ae7                      ; 005e0adc
        ;   XREF to: 005e0ae7 (CONDITIONAL_JUMP)  ; LAB_005e0ae7
    MOV EAX,0x1                         ; 005e0ade
    RET                                 ; 005e0ae3
    XOR EAX,EAX                         ; 005e0ae4
        ;   Label: LAB_005e0ae4
    RET                                 ; 005e0ae6
    PUSH 0x0                            ; 005e0ae7
        ;   Label: LAB_005e0ae7
    PUSH EDX                            ; 005e0ae9
    ADD EAX,0x304                       ; 005e0aea
    PUSH EAX                            ; 005e0aef
    CALL shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20 ; 005e0af0
        ;   XREF to: 004a6e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20(char * pattern, char * target_string, int case_sensitive)
    ADD ESP,0xc                         ; 005e0af5
    RET                                 ; 005e0af8

