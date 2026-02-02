; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl char * __cdecl core_script_cpp_parseArgument_FUN_005593f0(char **cursor,char *out_buffer,int max_length)
;
; Parameters:
; char * *         Stack[0x4]:4   cursor
; char *           Stack[0x8]:4   out_buffer
; int              Stack[0xc]:4   max_length
;
; XREF[2]:
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055c1ab
;   core_script.cpp_parseConditionExpr_FUN_005594a0 at 005594ac
;
; Referenced Globals:
;   TerminatedCString s_No_opening_parenthesis_0064151e
;   TerminatedCString s_Argument_too_long_00641535
;   TerminatedCString s_Can_t_find_closing_paren_00641547
;
; Called Functions:
;   core_script.cpp_skipWhitespaceFUN_005593d0
;   core_script.cpp_trimString_FUN_00559360
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005593f0
        ;   Label: core_script.cpp_parseArgument_FUN_005593f0
    PUSH ESI                            ; 005593f1
    PUSH EDI                            ; 005593f2
    PUSH EBP                            ; 005593f3
    MOV EBX,dword ptr [ESP + 0x14]      ; 005593f4
    MOV EBP,dword ptr [ESP + 0x18]      ; 005593f8
    MOV EDX,dword ptr [EBX]             ; 005593fc
    PUSH EDX                            ; 005593fe
    CALL core_script.cpp_skipWhitespaceFUN_005593d0 ; 005593ff
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespaceFUN_005593d0(char * str)
    MOV dword ptr [EBX],EAX             ; 00559404
    MOV DL,byte ptr [EAX]               ; 00559406
    ADD ESP,0x4                         ; 00559408
    CMP DL,0x28                         ; 0055940b
    JNZ 0x0055944b                      ; 0055940e
        ;   XREF to: 0055944b (CONDITIONAL_JUMP)  ; LAB_0055944b
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00559410
    XOR EAX,EAX                         ; 00559414
    XOR EDX,EDX                         ; 00559416
    TEST ECX,ECX                        ; 00559418
    JLE 0x00559441                      ; 0055941a
        ;   XREF to: 00559441 (CONDITIONAL_JUMP)  ; LAB_00559441
    MOV EDI,dword ptr [EBX]             ; 0055941c
        ;   Label: LAB_0055941c
    INC EDI                             ; 0055941e
    MOV dword ptr [EBX],EDI             ; 0055941f
    MOV CL,byte ptr [EDI]               ; 00559421
    MOV ESI,EDI                         ; 00559423
    TEST CL,CL                          ; 00559425
    JZ 0x00559455                       ; 00559427
        ;   XREF to: 00559455 (CONDITIONAL_JUMP)  ; LAB_00559455
    CMP CL,0x28                         ; 00559429
    JNZ 0x0055945f                      ; 0055942c
        ;   XREF to: 0055945f (CONDITIONAL_JUMP)  ; LAB_0055945f
    INC EAX                             ; 0055942e
    MOV ESI,dword ptr [EBX]             ; 0055942f
        ;   Label: LAB_0055942f
    MOV EDI,EDX                         ; 00559431
    INC EDX                             ; 00559433
    MOV CL,byte ptr [ESI]               ; 00559434
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00559436
    MOV byte ptr [EDI + EBP*0x1],CL     ; 0055943a
    CMP EDX,ESI                         ; 0055943d
    JL 0x0055941c                       ; 0055943f
        ;   XREF to: 0055941c (CONDITIONAL_JUMP)  ; LAB_0055941c
    MOV EAX,0x641535                    ; 00559441 | = "Argument too long"
        ;   Label: LAB_00559441
    POP EBP                             ; 00559446
    POP EDI                             ; 00559447
    POP ESI                             ; 00559448
    POP EBX                             ; 00559449
    RET                                 ; 0055944a
    MOV EAX,0x64151e                    ; 0055944b | = "No opening parenthesis"
        ;   Label: LAB_0055944b
    POP EBP                             ; 00559450
    POP EDI                             ; 00559451
    POP ESI                             ; 00559452
    POP EBX                             ; 00559453
    RET                                 ; 00559454
    MOV EAX,0x641547                    ; 00559455 | = "Can't find closing parenthesis"
        ;   Label: LAB_00559455
    POP EBP                             ; 0055945a
    POP EDI                             ; 0055945b
    POP ESI                             ; 0055945c
    POP EBX                             ; 0055945d
    RET                                 ; 0055945e
    CMP CL,0x29                         ; 0055945f
        ;   Label: LAB_0055945f
    JNZ 0x0055942f                      ; 00559462
        ;   XREF to: 0055942f (CONDITIONAL_JUMP)  ; LAB_0055942f
    TEST EAX,EAX                        ; 00559464
    JZ 0x0055946b                       ; 00559466
        ;   XREF to: 0055946b (CONDITIONAL_JUMP)  ; LAB_0055946b
    DEC EAX                             ; 00559468
    JMP 0x0055942f                      ; 00559469
        ;   XREF to: 0055942f (UNCONDITIONAL_JUMP)  ; LAB_0055942f
    LEA ESI,[EDI + 0x1]                 ; 0055946b
        ;   Label: LAB_0055946b
    MOV dword ptr [EBX],ESI             ; 0055946e
    PUSH EBP                            ; 00559470
    MOV byte ptr [EDX + EBP*0x1],0x0    ; 00559471
    CALL core_script.cpp_trimString_FUN_00559360 ; 00559475
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00559360(char * str)
    ADD ESP,0x4                         ; 0055947a
    MOV EBP,dword ptr [EBX]             ; 0055947d
    PUSH EBP                            ; 0055947f
    CALL core_script.cpp_skipWhitespaceFUN_005593d0 ; 00559480
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespaceFUN_005593d0(char * str)
    ADD ESP,0x4                         ; 00559485
    MOV dword ptr [EBX],EAX             ; 00559488
    XOR EAX,EAX                         ; 0055948a
    POP EBP                             ; 0055948c
    POP EDI                             ; 0055948d
    POP ESI                             ; 0055948e
    POP EBX                             ; 0055948f
    RET                                 ; 00559490

