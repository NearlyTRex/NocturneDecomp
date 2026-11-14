; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_script_cpp_skipWhitespace_FUN_005288a0(char *str)
;
; Parameters:
; char *           Stack[0x4]:4   str
;
; XREF[3]:
;   core_script.cpp_CScript_findLabelIndex_FUN_005303b0 at 005303eb
;   core_script.cpp_CScript_step_FUN_00529a70 at 00529b86
;   core_script.cpp_parseArgument_FUN_005288c0 at 005288cf
;
; Referenced Globals:
;   undefined4 DAT_006074b8
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005288a0
        ;   Label: core_script.cpp_skipWhitespace_FUN_005288a0
    MOV DL,byte ptr [EAX]               ; 005288a4
        ;   Label: LAB_005288a4
    INC DL                              ; 005288a6
    AND EDX,0xff                        ; 005288a8
    TEST byte ptr [EDX + 0x6074b8],0x2  ; 005288ae | DAT_006074b8
    JZ 0x0052887e                       ; 005288b5
        ;   XREF to: 0052887e (CONDITIONAL_JUMP)  ; LAB_0052887e
    INC EAX                             ; 005288b7
    JMP 0x005288a4                      ; 005288b8
        ;   XREF to: 005288a4 (UNCONDITIONAL_JUMP)  ; LAB_005288a4

