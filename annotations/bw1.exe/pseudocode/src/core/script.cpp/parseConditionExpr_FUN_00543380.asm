; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_script_cpp_parseConditionExpr_FUN_00543380(char **cursor,char *out_buffer)
;
; Parameters:
; char * *         Stack[0x4]:4   cursor
; char *           Stack[0x8]:4   out_buffer
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00544460 at 00545e6f
;
; Referenced Globals:
;   undefined4 DAT_0061b4d0
;   undefined4 DAT_01e810a8
;
; Called Functions:
;   core_event.cpp_CEventList_validateCondition_FUN_004a6c90
;   core_script.cpp_parseArgument_FUN_005432d0
;
; *****************************************************************************

section .text

    PUSH 0x64                           ; 00543380
        ;   Label: core_script.cpp_parseConditionExpr_FUN_00543380
    MOV EDX,dword ptr [ESP + 0xc]       ; 00543382
    PUSH EDX                            ; 00543386
    MOV ECX,dword ptr [ESP + 0xc]       ; 00543387
    PUSH ECX                            ; 0054338b
    CALL core_script.cpp_parseArgument_FUN_005432d0 ; 0054338c
        ;   XREF to: 005432d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005432d0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 00543391
    TEST EAX,EAX                        ; 00543394
    JNZ 0x005433a1                      ; 00543396
        ;   XREF to: 005433a1 (CONDITIONAL_JUMP)  ; LAB_005433a1
    CMP dword ptr [0x01e810a8],0x0      ; 00543398 | DAT_01e810a8
    JNZ 0x005433a2                      ; 0054339f
        ;   XREF to: 005433a2 (CONDITIONAL_JUMP)  ; LAB_005433a2
    RET                                 ; 005433a1
        ;   Label: LAB_005433a1
    PUSH EDI                            ; 005433a2
        ;   Label: LAB_005433a2
    PUSH ESI                            ; 005433a3
    MOV ESI,dword ptr [ESP + 0x10]      ; 005433a4
    PUSH ESI                            ; 005433a8
    MOV EDI,dword ptr [0x0061b4d0]      ; 005433a9 | DAT_0061b4d0
    PUSH EDI                            ; 005433af
    CALL core_event.cpp_CEventList_validateCondition_FUN_004a6c90 ; 005433b0
        ;   XREF to: 004a6c90 (UNCONDITIONAL_CALL)  ; char * core_event.cpp_CEventList_validateCondition_FUN_004a6c90(CEventList * this_ptr, char * expression)
    ADD ESP,0x8                         ; 005433b5
    POP ESI                             ; 005433b8
    POP EDI                             ; 005433b9
    RET                                 ; 005433ba

