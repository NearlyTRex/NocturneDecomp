; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_matrix_c_integerSquareRoot_FUN_0050d890(int value)
;
; Parameters:
; int              Stack[0x4]:4   value
;
; XREF[1]:
;   engine_matrix.c_normalizeVector3DFixed_FUN_0050d970 at 0050d992
;
; Referenced Globals:
;   TerminatedCString s_engine_matrix_c_00635aba
;   TerminatedCString s_sqrt_out_of_domain_00635acd
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050d890
        ;   Label: engine_matrix.c_integerSquareRoot_FUN_0050d890
    MOV EBX,dword ptr [ESP + 0x8]       ; 0050d891
    CMP EBX,0x1                         ; 0050d895
    JL 0x0050d939                       ; 0050d898
        ;   XREF to: 0050d939 (CONDITIONAL_JUMP)  ; LAB_0050d939
    MOV ECX,0xc8                        ; 0050d89e
        ;   Label: LAB_0050d89e
    MOV EDX,EBX                         ; 0050d8a3
    MOV EAX,EBX                         ; 0050d8a5
    SAR EDX,0x1f                        ; 0050d8a7
    IDIV ECX                            ; 0050d8aa
    LEA ECX,[EAX + 0x2]                 ; 0050d8ac
    MOV EDX,EBX                         ; 0050d8af
    MOV EAX,EBX                         ; 0050d8b1
    SAR EDX,0x1f                        ; 0050d8b3
    IDIV ECX                            ; 0050d8b6
    LEA EDX,[EAX + ECX*0x1]             ; 0050d8b8
    MOV EAX,EDX                         ; 0050d8bb
    SAR EDX,0x1f                        ; 0050d8bd
    SUB EAX,EDX                         ; 0050d8c0
    SAR EAX,0x1                         ; 0050d8c2
    MOV ECX,EAX                         ; 0050d8c4
    MOV EDX,EBX                         ; 0050d8c6
    MOV EAX,EBX                         ; 0050d8c8
    SAR EDX,0x1f                        ; 0050d8ca
    IDIV ECX                            ; 0050d8cd
    LEA EDX,[EAX + ECX*0x1]             ; 0050d8cf
    MOV EAX,EDX                         ; 0050d8d2
    SAR EDX,0x1f                        ; 0050d8d4
    SUB EAX,EDX                         ; 0050d8d7
    SAR EAX,0x1                         ; 0050d8d9
    MOV ECX,EAX                         ; 0050d8db
    MOV EDX,EBX                         ; 0050d8dd
    MOV EAX,EBX                         ; 0050d8df
    SAR EDX,0x1f                        ; 0050d8e1
    IDIV ECX                            ; 0050d8e4
    LEA EDX,[EAX + ECX*0x1]             ; 0050d8e6
    MOV EAX,EDX                         ; 0050d8e9
    SAR EDX,0x1f                        ; 0050d8eb
    SUB EAX,EDX                         ; 0050d8ee
    SAR EAX,0x1                         ; 0050d8f0
    MOV ECX,EAX                         ; 0050d8f2
    MOV EDX,EBX                         ; 0050d8f4
    MOV EAX,EBX                         ; 0050d8f6
    SAR EDX,0x1f                        ; 0050d8f8
    IDIV ECX                            ; 0050d8fb
    LEA EDX,[EAX + ECX*0x1]             ; 0050d8fd
    MOV EAX,EDX                         ; 0050d900
    SAR EDX,0x1f                        ; 0050d902
    SUB EAX,EDX                         ; 0050d905
    SAR EAX,0x1                         ; 0050d907
    MOV ECX,EAX                         ; 0050d909
    MOV EDX,EBX                         ; 0050d90b
    MOV EAX,EBX                         ; 0050d90d
    SAR EDX,0x1f                        ; 0050d90f
    IDIV ECX                            ; 0050d912
    LEA EDX,[EAX + ECX*0x1]             ; 0050d914
    MOV EAX,EDX                         ; 0050d917
    SAR EDX,0x1f                        ; 0050d919
    SUB EAX,EDX                         ; 0050d91c
    SAR EAX,0x1                         ; 0050d91e
    MOV ECX,EAX                         ; 0050d920
    MOV EDX,EBX                         ; 0050d922
    MOV EAX,EBX                         ; 0050d924
    SAR EDX,0x1f                        ; 0050d926
    IDIV ECX                            ; 0050d929
    LEA EDX,[EAX + ECX*0x1]             ; 0050d92b
    MOV EAX,EDX                         ; 0050d92e
    SAR EDX,0x1f                        ; 0050d930
    SUB EAX,EDX                         ; 0050d933
    SAR EAX,0x1                         ; 0050d935
    POP EBX                             ; 0050d937
    RET                                 ; 0050d938
    MOV EDX,0x635aba                    ; 0050d939 | = "..\\engine\\matrix.c"
        ;   Label: LAB_0050d939
    MOV ECX,0x391                       ; 0050d93e
    PUSH 0x635acd                       ; 0050d943 | = "sqrt out of domain!"
    MOV dword ptr [0x02f0ca48],EDX      ; 0050d948 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0050d94e | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0050d954
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0050d959
    JMP 0x0050d89e                      ; 0050d95c
        ;   XREF to: 0050d89e (UNCONDITIONAL_JUMP)  ; LAB_0050d89e

