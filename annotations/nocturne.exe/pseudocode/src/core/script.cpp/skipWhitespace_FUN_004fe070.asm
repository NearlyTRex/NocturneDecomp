; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_script_cpp_skipWhitespace_FUN_004fe070(char *str)
;
; Parameters:
; char *           Stack[0x4]:4   str
;
; XREF[3]:
;   core_script.cpp_CScript_findLabelIndex_FUN_00504c10 at 00504c4b
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 004ff3d6
;   core_script.cpp_parseArgument_FUN_004fe090 at 004fe09f
;
; Referenced Globals:
;   undefined4 DAT_005c168c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004fe070
        ;   Label: core_script.cpp_skipWhitespace_FUN_004fe070
    MOV DL,byte ptr [EAX]               ; 004fe074
        ;   Label: LAB_004fe074
    INC DL                              ; 004fe076
    AND EDX,0xff                        ; 004fe078
    TEST byte ptr [EDX + 0x5c168c],0x2  ; 004fe07e | DAT_005c168c
    JZ 0x004fe04e                       ; 004fe085
        ;   XREF to: 004fe04e (CONDITIONAL_JUMP)  ; LAB_004fe04e
    INC EAX                             ; 004fe087
    JMP 0x004fe074                      ; 004fe088
        ;   XREF to: 004fe074 (UNCONDITIONAL_JUMP)  ; LAB_004fe074

