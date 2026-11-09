; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_script_cpp_parseConditionExpr_FUN_00528970(char **cursor,char *out_buffer)
;
; Parameters:
; char * *         Stack[0x4]:4   cursor
; char *           Stack[0x8]:4   out_buffer
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052b556
;
; Referenced Globals:
;   undefined4 DAT_005fba60
;   undefined4 DAT_01ed6808
;
; Called Functions:
;   core_event.cpp_CEventList_validateCondition_FUN_00491b00
;   core_script.cpp_parseArgument_FUN_005288c0
;
; *****************************************************************************

section .text

    PUSH 0x64                           ; 00528970
        ;   Label: core_script.cpp_parseConditionExpr_FUN_00528970
    MOV EDX,dword ptr [ESP + 0xc]       ; 00528972
    PUSH EDX                            ; 00528976
    MOV ECX,dword ptr [ESP + 0xc]       ; 00528977
    PUSH ECX                            ; 0052897b
    CALL core_script.cpp_parseArgument_FUN_005288c0 ; 0052897c
        ;   XREF to: 005288c0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005288c0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 00528981
    TEST EAX,EAX                        ; 00528984
    JNZ 0x00528991                      ; 00528986
        ;   XREF to: 00528991 (CONDITIONAL_JUMP)  ; LAB_00528991
    CMP dword ptr [0x01ed6808],0x0      ; 00528988 | DAT_01ed6808
    JNZ 0x00528992                      ; 0052898f
        ;   XREF to: 00528992 (CONDITIONAL_JUMP)  ; LAB_00528992
    RET                                 ; 00528991
        ;   Label: LAB_00528991
    PUSH EDI                            ; 00528992
        ;   Label: LAB_00528992
    PUSH ESI                            ; 00528993
    MOV ESI,dword ptr [ESP + 0x10]      ; 00528994
    PUSH ESI                            ; 00528998
    MOV EDI,dword ptr [0x005fba60]      ; 00528999 | DAT_005fba60
    PUSH EDI                            ; 0052899f
    CALL core_event.cpp_CEventList_validateCondition_FUN_00491b00 ; 005289a0
        ;   XREF to: 00491b00 (UNCONDITIONAL_CALL)  ; char * core_event.cpp_CEventList_validateCondition_FUN_00491b00(CEventList * this_ptr, char * expression)
    ADD ESP,0x8                         ; 005289a5
    POP ESI                             ; 005289a8
    POP EDI                             ; 005289a9
    RET                                 ; 005289aa

