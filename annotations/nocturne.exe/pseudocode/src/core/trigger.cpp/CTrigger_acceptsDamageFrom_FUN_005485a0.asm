; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_005485a0(CTrigger *this_ptr,CDemonActor *actor)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
;
; XREF[8]:
;   core_actor.cpp_FUN_0040b300 at 0040b630
;   core_crossbow.cpp_FUN_0043d1c0 at 0043d547
;   core_elephant.cpp_FUN_00477890 at 00477d3e
;   core_gun.cpp_FUN_004b27c0 at 004b2f07
;   core_lightgun.cpp_FUN_004c71a0 at 004c7720
;   core_shotgun.cpp_FUN_00515ea0 at 005163a6
;   core_tommygun.cpp_FUN_00545c30 at 005463c1
;   core_turret.cpp_CTurret_fire_FUN_0054ab10 at 0054af53
;
; Called Functions:
;   shape_edittool.cpp_wildcardStringMatch_FUN_004775b0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005485a0
        ;   Label: core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_005485a0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005485a4
    TEST EDX,EDX                        ; 005485a8
    JZ 0x00548100                       ; 005485aa
        ;   XREF to: 00548100 (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x16c],0x7     ; 005485b0
    JNZ 0x00548100                      ; 005485b7
        ;   XREF to: 00548100 (CONDITIONAL_JUMP)
    CMP byte ptr [EAX + 0x2fc],0x0      ; 005485bd
    JNZ 0x005485cc                      ; 005485c4
        ;   XREF to: 005485cc (CONDITIONAL_JUMP)  ; LAB_005485cc
    MOV EAX,0x1                         ; 005485c6
    RET                                 ; 005485cb
    PUSH 0x0                            ; 005485cc
        ;   Label: LAB_005485cc
    PUSH EDX                            ; 005485ce
    ADD EAX,0x2fc                       ; 005485cf
    PUSH EAX                            ; 005485d4
    CALL shape_edittool.cpp_wildcardStringMatch_FUN_004775b0 ; 005485d5
        ;   XREF to: 004775b0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_wildcardStringMatch_FUN_004775b0(char * pattern, char * target_string, int case_sensitive)
    ADD ESP,0xc                         ; 005485da
    RET                                 ; 005485dd

