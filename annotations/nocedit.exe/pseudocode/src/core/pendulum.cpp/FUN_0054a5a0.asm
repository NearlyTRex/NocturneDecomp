; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_pendulum_cpp_FUN_0054a5a0 (undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX,undefined4 param_4, CDemonActor *param_5,undefined4 param_6,char *param_7)
;
; Local Variables:
; undefined8       Stack[-0xc]:8  local_c
;
; XREF[1]:
;   core_pendulum.cpp_FUN_0054a5f0 at 0054a6e3
;
; Referenced Globals:
;   TerminatedCString s_f_0063edb1
;   double DOUBLE_0063edb9 = 0.5
;   undefined4 g_CPendulumClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   crt_stdio.c_sprintf_FUN_005fdbd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054a5a0
        ;   Label: core_pendulum.cpp_FUN_0054a5a0
    MOV EDX,dword ptr [0x030d5050]      ; 0054a5a1 | g_CPendulumClassInfo.name_hash
    PUSH EDX                            ; 0054a5a7
    MOV ECX,dword ptr [ESP + 0xc]       ; 0054a5a8
    PUSH ECX                            ; 0054a5ac
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0054a5ad
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    FLD float ptr [EAX + 0x3a4]         ; 0054a5b2
    ADD ESP,0x8                         ; 0054a5b8
    FMUL double ptr [0x0063edb9]        ; 0054a5bb | DOUBLE_0063edb9
    SUB ESP,0x8                         ; 0054a5c1
    FSTP double ptr [ESP]               ; 0054a5c4
    PUSH 0x63edb1                       ; 0054a5c7 | = "%f"
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0054a5cc
    PUSH EBX                            ; 0054a5d0
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0054a5d1
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0054a5d6
    POP EBX                             ; 0054a5d9
    RET                                 ; 0054a5da

