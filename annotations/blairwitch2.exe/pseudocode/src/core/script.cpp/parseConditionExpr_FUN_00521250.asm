; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_script_cpp_parseConditionExpr_FUN_00521250(char **cursor,char *out_buffer)
;
; Parameters:
; char * *         Stack[0x4]:4   cursor
; char *           Stack[0x8]:4   out_buffer
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00522350 at 00523fba
;
; Referenced Globals:
;   undefined4 DAT_006141f0
;   undefined4 DAT_01e650f8
;
; Called Functions:
;   core_event.cpp_CEventList_validateCondition_FUN_0048e3a0
;   core_script.cpp_parseArgument_FUN_005211a0
;
; *****************************************************************************

section .text

    PUSH 0x64                           ; 00521250
        ;   Label: core_script.cpp_parseConditionExpr_FUN_00521250
    MOV EDX,dword ptr [ESP + 0xc]       ; 00521252
    PUSH EDX                            ; 00521256
    MOV ECX,dword ptr [ESP + 0xc]       ; 00521257
    PUSH ECX                            ; 0052125b
    CALL core_script.cpp_parseArgument_FUN_005211a0 ; 0052125c
        ;   XREF to: 005211a0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005211a0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 00521261
    TEST EAX,EAX                        ; 00521264
    JNZ 0x00521271                      ; 00521266
        ;   XREF to: 00521271 (CONDITIONAL_JUMP)  ; LAB_00521271
    CMP dword ptr [0x01e650f8],0x0      ; 00521268 | DAT_01e650f8
    JNZ 0x00521272                      ; 0052126f
        ;   XREF to: 00521272 (CONDITIONAL_JUMP)  ; LAB_00521272
    RET                                 ; 00521271
        ;   Label: LAB_00521271
    PUSH EDI                            ; 00521272
        ;   Label: LAB_00521272
    PUSH ESI                            ; 00521273
    MOV ESI,dword ptr [ESP + 0x10]      ; 00521274
    PUSH ESI                            ; 00521278
    MOV EDI,dword ptr [0x006141f0]      ; 00521279 | DAT_006141f0
    PUSH EDI                            ; 0052127f
    CALL core_event.cpp_CEventList_validateCondition_FUN_0048e3a0 ; 00521280
        ;   XREF to: 0048e3a0 (UNCONDITIONAL_CALL)  ; char * core_event.cpp_CEventList_validateCondition_FUN_0048e3a0(CEventList * this_ptr, char * expression)
    ADD ESP,0x8                         ; 00521285
    POP ESI                             ; 00521288
    POP EDI                             ; 00521289
    RET                                 ; 0052128a

