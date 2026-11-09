; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_script_cpp_parseArgument_FUN_005432d0(char **cursor,char *out_buffer,int max_length)
;
; Parameters:
; char * *         Stack[0x4]:4   cursor
; char *           Stack[0x8]:4   out_buffer
; int              Stack[0xc]:4   max_length
;
; XREF[2]:
;   core_script.cpp_CScript_step_FUN_00544460 at 005461d7
;   core_script.cpp_parseConditionExpr_FUN_00543380 at 0054338c
;
; Referenced Globals:
;   TerminatedCString s_No_opening_parenthesis_005edf8d
;   TerminatedCString s_Argument_too_long_005edfa4
;   TerminatedCString s_Can_t_find_closing_paren_005edfb6
;
; Called Functions:
;   core_script.cpp_skipWhitespace_FUN_005432b0
;   core_script.cpp_trimString_FUN_00543240
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005432d0
        ;   Label: core_script.cpp_parseArgument_FUN_005432d0
    PUSH ESI                            ; 005432d1
    PUSH EDI                            ; 005432d2
    PUSH EBP                            ; 005432d3
    MOV EBX,dword ptr [ESP + 0x14]      ; 005432d4
    MOV EBP,dword ptr [ESP + 0x18]      ; 005432d8
    MOV EDX,dword ptr [EBX]             ; 005432dc
    PUSH EDX                            ; 005432de
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 005432df
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    MOV dword ptr [EBX],EAX             ; 005432e4
    MOV DL,byte ptr [EAX]               ; 005432e6
    ADD ESP,0x4                         ; 005432e8
    CMP DL,0x28                         ; 005432eb
    JNZ 0x0054332b                      ; 005432ee
        ;   XREF to: 0054332b (CONDITIONAL_JUMP)  ; LAB_0054332b
    MOV ECX,dword ptr [ESP + 0x1c]      ; 005432f0
    XOR EAX,EAX                         ; 005432f4
    XOR EDX,EDX                         ; 005432f6
    TEST ECX,ECX                        ; 005432f8
    JLE 0x00543321                      ; 005432fa
        ;   XREF to: 00543321 (CONDITIONAL_JUMP)  ; LAB_00543321
    MOV EDI,dword ptr [EBX]             ; 005432fc
        ;   Label: LAB_005432fc
    INC EDI                             ; 005432fe
    MOV dword ptr [EBX],EDI             ; 005432ff
    MOV CL,byte ptr [EDI]               ; 00543301
    MOV ESI,EDI                         ; 00543303
    TEST CL,CL                          ; 00543305
    JZ 0x00543335                       ; 00543307
        ;   XREF to: 00543335 (CONDITIONAL_JUMP)  ; LAB_00543335
    CMP CL,0x28                         ; 00543309
    JNZ 0x0054333f                      ; 0054330c
        ;   XREF to: 0054333f (CONDITIONAL_JUMP)  ; LAB_0054333f
    INC EAX                             ; 0054330e
    MOV ESI,dword ptr [EBX]             ; 0054330f
        ;   Label: LAB_0054330f
    MOV EDI,EDX                         ; 00543311
    INC EDX                             ; 00543313
    MOV CL,byte ptr [ESI]               ; 00543314
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00543316
    MOV byte ptr [EDI + EBP*0x1],CL     ; 0054331a
    CMP EDX,ESI                         ; 0054331d
    JL 0x005432fc                       ; 0054331f
        ;   XREF to: 005432fc (CONDITIONAL_JUMP)  ; LAB_005432fc
    MOV EAX,0x5edfa4                    ; 00543321 | = "Argument too long"
        ;   Label: LAB_00543321
    POP EBP                             ; 00543326
    POP EDI                             ; 00543327
    POP ESI                             ; 00543328
    POP EBX                             ; 00543329
    RET                                 ; 0054332a
    MOV EAX,0x5edf8d                    ; 0054332b | = "No opening parenthesis"
        ;   Label: LAB_0054332b
    POP EBP                             ; 00543330
    POP EDI                             ; 00543331
    POP ESI                             ; 00543332
    POP EBX                             ; 00543333
    RET                                 ; 00543334
    MOV EAX,0x5edfb6                    ; 00543335 | = "Can't find closing parenthesis"
        ;   Label: LAB_00543335
    POP EBP                             ; 0054333a
    POP EDI                             ; 0054333b
    POP ESI                             ; 0054333c
    POP EBX                             ; 0054333d
    RET                                 ; 0054333e
    CMP CL,0x29                         ; 0054333f
        ;   Label: LAB_0054333f
    JNZ 0x0054330f                      ; 00543342
        ;   XREF to: 0054330f (CONDITIONAL_JUMP)  ; LAB_0054330f
    TEST EAX,EAX                        ; 00543344
    JZ 0x0054334b                       ; 00543346
        ;   XREF to: 0054334b (CONDITIONAL_JUMP)  ; LAB_0054334b
    DEC EAX                             ; 00543348
    JMP 0x0054330f                      ; 00543349
        ;   XREF to: 0054330f (UNCONDITIONAL_JUMP)  ; LAB_0054330f
    LEA ESI,[EDI + 0x1]                 ; 0054334b
        ;   Label: LAB_0054334b
    MOV dword ptr [EBX],ESI             ; 0054334e
    PUSH EBP                            ; 00543350
    MOV byte ptr [EDX + EBP*0x1],0x0    ; 00543351
    CALL core_script.cpp_trimString_FUN_00543240 ; 00543355
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 0054335a
    MOV EBP,dword ptr [EBX]             ; 0054335d
    PUSH EBP                            ; 0054335f
    CALL core_script.cpp_skipWhitespace_FUN_005432b0 ; 00543360
        ;   XREF to: 005432b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_005432b0(char * str)
    ADD ESP,0x4                         ; 00543365
    MOV dword ptr [EBX],EAX             ; 00543368
    XOR EAX,EAX                         ; 0054336a
    POP EBP                             ; 0054336c
    POP EDI                             ; 0054336d
    POP ESI                             ; 0054336e
    POP EBX                             ; 0054336f
    RET                                 ; 00543370

