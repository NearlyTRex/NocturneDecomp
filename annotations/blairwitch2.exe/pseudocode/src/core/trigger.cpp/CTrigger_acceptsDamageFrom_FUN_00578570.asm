; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_00578570(CTrigger *this_ptr,CDemonActor *actor)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
;
; XREF[8]:
;   core_actor.cpp_FUN_0040a050 at 0040a5d4
;   core_crossbow.cpp_FUN_0043a7a0 at 0043aae2
;   core_elephant.cpp_FUN_00485b40 at 00486074
;   core_gun.cpp_FUN_004cbdc0 at 004cc5cc
;   core_lightgun.cpp_FUN_004e2e70 at 004e32e5
;   core_shotgun.cpp_FUN_0053f170 at 0053f695
;   core_tommygun.cpp_FUN_00575800 at 0057604b
;   core_turret.cpp_FUN_0057fc20 at 0058010b
;
; Called Functions:
;   shape_edittool.cpp_wildcardStringMatch_FUN_00485840
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00578570
        ;   Label: core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_00578570
    MOV EDX,dword ptr [ESP + 0x8]       ; 00578574
    TEST EDX,EDX                        ; 00578578
    JZ 0x00578050                       ; 0057857a
        ;   XREF to: 00578050 (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x2d0],0x7     ; 00578580
    JNZ 0x00578050                      ; 00578587
        ;   XREF to: 00578050 (CONDITIONAL_JUMP)
    CMP byte ptr [EAX + 0x464],0x0      ; 0057858d
    JNZ 0x0057859c                      ; 00578594
        ;   XREF to: 0057859c (CONDITIONAL_JUMP)  ; LAB_0057859c
    MOV EAX,0x1                         ; 00578596
    RET                                 ; 0057859b
    PUSH 0x0                            ; 0057859c
        ;   Label: LAB_0057859c
    PUSH EDX                            ; 0057859e
    ADD EAX,0x464                       ; 0057859f
    PUSH EAX                            ; 005785a4
    CALL shape_edittool.cpp_wildcardStringMatch_FUN_00485840 ; 005785a5
        ;   XREF to: 00485840 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_wildcardStringMatch_FUN_00485840(char * pattern, char * target_string, int case_sensitive)
    ADD ESP,0xc                         ; 005785aa
    RET                                 ; 005785ad

