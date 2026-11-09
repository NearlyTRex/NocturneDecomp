; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_trimString_FUN_00528830(char *str)
;
; Parameters:
; char *           Stack[0x4]:4   str
;
; XREF[3]:
;   core_script.cpp_CScript_dbLoad_FUN_00530610 at 0053075a
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052b356
;   core_script.cpp_parseArgument_FUN_005288c0 at 00528945
;
; Referenced Globals:
;   undefined4 DAT_006074b8
;
; Called Functions:
;   crt_string.c_memmove_FUN_005a54c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00528830
        ;   Label: core_script.cpp_trimString_FUN_00528830
    PUSH ESI                            ; 00528831
    PUSH EDI                            ; 00528832
    MOV ESI,dword ptr [ESP + 0x10]      ; 00528833
    MOV EDI,ESI                         ; 00528837
    SUB ECX,ECX                         ; 00528839
    DEC ECX                             ; 0052883b
    XOR EAX,EAX                         ; 0052883c
    SCASB.REPNE ES:EDI                  ; 0052883e
    NOT ECX                             ; 00528840
    DEC ECX                             ; 00528842
    MOV EBX,ECX                         ; 00528843
    TEST ECX,ECX                        ; 00528845
    JLE 0x00528860                      ; 00528847
        ;   XREF to: 00528860 (CONDITIONAL_JUMP)  ; LAB_00528860
    LEA EAX,[ECX + ESI*0x1]             ; 00528849
    MOV DL,byte ptr [EAX + -0x1]        ; 0052884c
        ;   Label: LAB_0052884c
    INC DL                              ; 0052884f
    AND EDX,0xff                        ; 00528851
    TEST byte ptr [EDX + 0x6074b8],0x2  ; 00528857 | DAT_006074b8
    JNZ 0x0052887f                      ; 0052885e
        ;   XREF to: 0052887f (CONDITIONAL_JUMP)  ; LAB_0052887f
    LEA EAX,[ESI + EBX*0x1]             ; 00528860
        ;   Label: LAB_00528860
    LEA EDI,[ESI + 0x1]                 ; 00528863
    MOV byte ptr [EAX],0x0              ; 00528866
    MOV AL,byte ptr [ESI]               ; 00528869
        ;   Label: LAB_00528869
    INC AL                              ; 0052886b
    AND EAX,0xff                        ; 0052886d
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 00528872 | DAT_006074b8
    JNZ 0x00528887                      ; 00528879
        ;   XREF to: 00528887 (CONDITIONAL_JUMP)  ; LAB_00528887
    POP EDI                             ; 0052887b
    POP ESI                             ; 0052887c
    POP EBX                             ; 0052887d
    RET                                 ; 0052887e
        ;   Label: LAB_0052887e
    DEC EBX                             ; 0052887f
        ;   Label: LAB_0052887f
    DEC EAX                             ; 00528880
    TEST EBX,EBX                        ; 00528881
    JG 0x0052884c                       ; 00528883
        ;   XREF to: 0052884c (CONDITIONAL_JUMP)  ; LAB_0052884c
    JMP 0x00528860                      ; 00528885
        ;   XREF to: 00528860 (UNCONDITIONAL_JUMP)  ; LAB_00528860
    PUSH EBX                            ; 00528887
        ;   Label: LAB_00528887
    PUSH EDI                            ; 00528888
    PUSH ESI                            ; 00528889
    DEC EBX                             ; 0052888a
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0052888b
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00528890
    JMP 0x00528869                      ; 00528893
        ;   XREF to: 00528869 (UNCONDITIONAL_JUMP)  ; LAB_00528869

