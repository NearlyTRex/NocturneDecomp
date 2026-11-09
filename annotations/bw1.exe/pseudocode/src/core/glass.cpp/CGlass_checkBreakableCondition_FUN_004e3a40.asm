; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_glass_cpp_CGlass_checkBreakableCondition_FUN_004e3a40(CGlass *this_ptr)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
;
; XREF[9]:
;   core_actor.cpp_FUN_00409f20 at 0040a4e1
;   core_crossbow.cpp_FUN_00449a50 at 0044a04c
;   core_elephant.cpp_FUN_0049e1a0 at 0049e916
;   core_gun.cpp_FUN_004e8630 at 004e8e05
;   core_rifle.cpp_FUN_00540080 at 00540725
;   core_set.cpp_FUN_0054fc20 at 0054ffed
;   core_shotgun.cpp_FUN_00561760 at 00561ed9
;   core_tommygun.cpp_FUN_00598420 at 00598c3a
;   core_turret.cpp_FUN_005a3870 at 005a3da7
;
; Referenced Globals:
;   undefined4 DAT_0061b4d0
;
; Called Functions:
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e3a40
        ;   Label: core_glass.cpp_CGlass_checkBreakableCondition_FUN_004e3a40
    ADD EAX,0x30c                       ; 004e3a44
    PUSH EAX                            ; 004e3a49
    MOV EDX,dword ptr [0x0061b4d0]      ; 004e3a4a | DAT_0061b4d0
    PUSH EDX                            ; 004e3a50
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 004e3a51
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004e3a56
    RET                                 ; 004e3a59

