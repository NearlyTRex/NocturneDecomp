; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_script_cpp_skipWhitespace_FUN_00521180(char *str)
;
; Parameters:
; char *           Stack[0x4]:4   str
;
; XREF[3]:
;   core_script.cpp_CScript_findLabelIndex_FUN_005299b0 at 005299eb
;   core_script.cpp_CScript_step_FUN_00522350 at 00522466
;   core_script.cpp_parseArgument_FUN_005211a0 at 005211af
;
; Referenced Globals:
;   undefined4 DAT_0061ed94
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00521180
        ;   Label: core_script.cpp_skipWhitespace_FUN_00521180
    MOV DL,byte ptr [EAX]               ; 00521184
        ;   Label: LAB_00521184
    INC DL                              ; 00521186
    AND EDX,0xff                        ; 00521188
    TEST byte ptr [EDX + 0x61ed94],0x2  ; 0052118e | DAT_0061ed94
    JZ 0x0052115e                       ; 00521195
        ;   XREF to: 0052115e (CONDITIONAL_JUMP)  ; LAB_0052115e
    INC EAX                             ; 00521197
    JMP 0x00521184                      ; 00521198
        ;   XREF to: 00521184 (UNCONDITIONAL_JUMP)  ; LAB_00521184

