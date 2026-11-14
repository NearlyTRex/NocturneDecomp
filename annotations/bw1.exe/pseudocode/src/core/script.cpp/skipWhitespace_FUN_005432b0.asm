; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_script_cpp_skipWhitespace_FUN_005432b0(char *str)
;
; Parameters:
; char *           Stack[0x4]:4   str
;
; XREF[3]:
;   core_script.cpp_CScript_findLabelIndex_FUN_0054acc0 at 0054acfb
;   core_script.cpp_CScript_step_FUN_00544460 at 00544576
;   core_script.cpp_parseArgument_FUN_005432d0 at 005432df
;
; Referenced Globals:
;   undefined4 DAT_00626114
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005432b0
        ;   Label: core_script.cpp_skipWhitespace_FUN_005432b0
    MOV DL,byte ptr [EAX]               ; 005432b4
        ;   Label: LAB_005432b4
    INC DL                              ; 005432b6
    AND EDX,0xff                        ; 005432b8
    TEST byte ptr [EDX + 0x626114],0x2  ; 005432be | DAT_00626114
    JZ 0x0054328e                       ; 005432c5
        ;   XREF to: 0054328e (CONDITIONAL_JUMP)  ; LAB_0054328e
    INC EAX                             ; 005432c7
    JMP 0x005432b4                      ; 005432c8
        ;   XREF to: 005432b4 (UNCONDITIONAL_JUMP)  ; LAB_005432b4

