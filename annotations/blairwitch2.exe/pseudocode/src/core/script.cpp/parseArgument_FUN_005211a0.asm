; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_script_cpp_parseArgument_FUN_005211a0(char **cursor,char *out_buffer,int max_length)
;
; Parameters:
; char * *         Stack[0x4]:4   cursor
; char *           Stack[0x8]:4   out_buffer
; int              Stack[0xc]:4   max_length
;
; XREF[2]:
;   core_script.cpp_FUN_00522350 at 00524322
;   core_script.cpp_parseConditionExpr_FUN_00521250 at 0052125c
;
; Referenced Globals:
;   TerminatedCString s_No_opening_parenthesis_005e2c81
;   TerminatedCString s_Argument_too_long_005e2c98
;   TerminatedCString s_Can_t_find_closing_paren_005e2caa
;
; Called Functions:
;   core_script.cpp_skipWhitespace_FUN_00521180
;   core_script.cpp_trimString_FUN_00521110
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005211a0
        ;   Label: core_script.cpp_parseArgument_FUN_005211a0
    PUSH ESI                            ; 005211a1
    PUSH EDI                            ; 005211a2
    PUSH EBP                            ; 005211a3
    MOV EBX,dword ptr [ESP + 0x14]      ; 005211a4
    MOV EBP,dword ptr [ESP + 0x18]      ; 005211a8
    MOV EDX,dword ptr [EBX]             ; 005211ac
    PUSH EDX                            ; 005211ae
    CALL core_script.cpp_skipWhitespace_FUN_00521180 ; 005211af
        ;   XREF to: 00521180 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_00521180(char * str)
    MOV dword ptr [EBX],EAX             ; 005211b4
    MOV DL,byte ptr [EAX]               ; 005211b6
    ADD ESP,0x4                         ; 005211b8
    CMP DL,0x28                         ; 005211bb
    JNZ 0x005211fb                      ; 005211be
        ;   XREF to: 005211fb (CONDITIONAL_JUMP)  ; LAB_005211fb
    MOV ECX,dword ptr [ESP + 0x1c]      ; 005211c0
    XOR EAX,EAX                         ; 005211c4
    XOR EDX,EDX                         ; 005211c6
    TEST ECX,ECX                        ; 005211c8
    JLE 0x005211f1                      ; 005211ca
        ;   XREF to: 005211f1 (CONDITIONAL_JUMP)  ; LAB_005211f1
    MOV EDI,dword ptr [EBX]             ; 005211cc
        ;   Label: LAB_005211cc
    INC EDI                             ; 005211ce
    MOV dword ptr [EBX],EDI             ; 005211cf
    MOV CL,byte ptr [EDI]               ; 005211d1
    MOV ESI,EDI                         ; 005211d3
    TEST CL,CL                          ; 005211d5
    JZ 0x00521205                       ; 005211d7
        ;   XREF to: 00521205 (CONDITIONAL_JUMP)  ; LAB_00521205
    CMP CL,0x28                         ; 005211d9
    JNZ 0x0052120f                      ; 005211dc
        ;   XREF to: 0052120f (CONDITIONAL_JUMP)  ; LAB_0052120f
    INC EAX                             ; 005211de
    MOV ESI,dword ptr [EBX]             ; 005211df
        ;   Label: LAB_005211df
    MOV EDI,EDX                         ; 005211e1
    INC EDX                             ; 005211e3
    MOV CL,byte ptr [ESI]               ; 005211e4
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005211e6
    MOV byte ptr [EDI + EBP*0x1],CL     ; 005211ea
    CMP EDX,ESI                         ; 005211ed
    JL 0x005211cc                       ; 005211ef
        ;   XREF to: 005211cc (CONDITIONAL_JUMP)  ; LAB_005211cc
    MOV EAX,0x5e2c98                    ; 005211f1 | = "Argument too long"
        ;   Label: LAB_005211f1
    POP EBP                             ; 005211f6
    POP EDI                             ; 005211f7
    POP ESI                             ; 005211f8
    POP EBX                             ; 005211f9
    RET                                 ; 005211fa
    MOV EAX,0x5e2c81                    ; 005211fb | = "No opening parenthesis"
        ;   Label: LAB_005211fb
    POP EBP                             ; 00521200
    POP EDI                             ; 00521201
    POP ESI                             ; 00521202
    POP EBX                             ; 00521203
    RET                                 ; 00521204
    MOV EAX,0x5e2caa                    ; 00521205 | = "Can't find closing parenthesis"
        ;   Label: LAB_00521205
    POP EBP                             ; 0052120a
    POP EDI                             ; 0052120b
    POP ESI                             ; 0052120c
    POP EBX                             ; 0052120d
    RET                                 ; 0052120e
    CMP CL,0x29                         ; 0052120f
        ;   Label: LAB_0052120f
    JNZ 0x005211df                      ; 00521212
        ;   XREF to: 005211df (CONDITIONAL_JUMP)  ; LAB_005211df
    TEST EAX,EAX                        ; 00521214
    JZ 0x0052121b                       ; 00521216
        ;   XREF to: 0052121b (CONDITIONAL_JUMP)  ; LAB_0052121b
    DEC EAX                             ; 00521218
    JMP 0x005211df                      ; 00521219
        ;   XREF to: 005211df (UNCONDITIONAL_JUMP)  ; LAB_005211df
    LEA ESI,[EDI + 0x1]                 ; 0052121b
        ;   Label: LAB_0052121b
    MOV dword ptr [EBX],ESI             ; 0052121e
    PUSH EBP                            ; 00521220
    MOV byte ptr [EDX + EBP*0x1],0x0    ; 00521221
    CALL core_script.cpp_trimString_FUN_00521110 ; 00521225
        ;   XREF to: 00521110 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00521110(char * str)
    ADD ESP,0x4                         ; 0052122a
    MOV EBP,dword ptr [EBX]             ; 0052122d
    PUSH EBP                            ; 0052122f
    CALL core_script.cpp_skipWhitespace_FUN_00521180 ; 00521230
        ;   XREF to: 00521180 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_skipWhitespace_FUN_00521180(char * str)
    ADD ESP,0x4                         ; 00521235
    MOV dword ptr [EBX],EAX             ; 00521238
    XOR EAX,EAX                         ; 0052123a
    POP EBP                             ; 0052123c
    POP EDI                             ; 0052123d
    POP ESI                             ; 0052123e
    POP EBX                             ; 0052123f
    RET                                 ; 00521240

