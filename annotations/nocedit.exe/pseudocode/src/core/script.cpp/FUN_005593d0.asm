; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_script_cpp_FUN_005593d0(char *param_1)
;
; Parameters:
; char *           Stack[0x4]:4   param_1
;
; XREF[3]:
;   core_script.cpp_CScript_FUN_00560160 at 0056019b
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055a926
;   core_script.cpp_FUN_005593f0 at 00559480
;
; Referenced Globals:
;   char[256] g_CharacterClassificationTable
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005593d0
        ;   Label: core_script.cpp_FUN_005593d0
    MOV DL,byte ptr [EAX]               ; 005593d4
        ;   Label: LAB_005593d4
    INC DL                              ; 005593d6
    AND EDX,0xff                        ; 005593d8
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 005593de | g_CharacterClassificationTable
    JZ 0x005593ae                       ; 005593e5
        ;   XREF to: 005593ae (CONDITIONAL_JUMP)  ; LAB_005593ae
    INC EAX                             ; 005593e7
    JMP 0x005593d4                      ; 005593e8
        ;   XREF to: 005593d4 (UNCONDITIONAL_JUMP)  ; LAB_005593d4

