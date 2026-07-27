; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_model_c_byteswapMRGLData_FUN_004dcc90(undefined4 *param_1,int param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_004dcb84 = 004dccbd
;   TerminatedCString s_engine_model_c_0058a4cd
;   TerminatedCString s_Need_a_new_byteswap_0058a4df
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   engine_model.c_getMRGLSize_FUN_004dd520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dcc90
        ;   Label: engine_model.c_byteswapMRGLData_FUN_004dcc90
    PUSH ESI                            ; 004dcc91
    PUSH EDI                            ; 004dcc92
    MOV EDI,dword ptr [ESP + 0x14]      ; 004dcc93
    MOV EBX,dword ptr [ESP + 0x10]      ; 004dcc97
    TEST EDI,EDI                        ; 004dcc9b
    JLE 0x004dccd0                      ; 004dcc9d
        ;   XREF to: 004dccd0 (CONDITIONAL_JUMP)  ; LAB_004dccd0
    PUSH EBX                            ; 004dcc9f
        ;   Label: LAB_004dcc9f
    CALL engine_model.c_getMRGLSize_FUN_004dd520 ; 004dcca0
        ;   XREF to: 004dd520 (UNCONDITIONAL_CALL)  ; undefined engine_model.c_getMRGLSize_FUN_004dd520()
    ADD ESP,0x4                         ; 004dcca5
    MOV ESI,EAX                         ; 004dcca8
    MOV EDX,EAX                         ; 004dccaa
    MOV EAX,dword ptr [EBX]             ; 004dccac
    SHR EDX,0x2                         ; 004dccae
    CMP EAX,0x42                        ; 004dccb1
    JA 0x004dccd4                       ; 004dccb4
        ;   XREF to: 004dccd4 (CONDITIONAL_JUMP)  ; caseD_3f
    JMP dword ptr [EAX*0x4 + 0x4dcb84]  ; 004dccb6 | caseD_42 | caseD_40 | caseD_3f
        ;   Label: switchD
    XOR EAX,EAX                         ; 004dccbd
        ;   Label: caseD_0
    TEST EDX,EDX                        ; 004dccbf
    JLE 0x004dccc8                      ; 004dccc1
        ;   XREF to: 004dccc8 (CONDITIONAL_JUMP)  ; caseD_40
    INC EAX                             ; 004dccc3
        ;   Label: LAB_004dccc3
    CMP EAX,EDX                         ; 004dccc4
    JL 0x004dccc3                       ; 004dccc6
        ;   XREF to: 004dccc3 (CONDITIONAL_JUMP)  ; LAB_004dccc3
    SUB EDI,ESI                         ; 004dccc8
        ;   Label: caseD_d
    ADD EBX,ESI                         ; 004dccca
    TEST EDI,EDI                        ; 004dcccc
    JG 0x004dcc9f                       ; 004dccce
        ;   XREF to: 004dcc9f (CONDITIONAL_JUMP)  ; LAB_004dcc9f
    POP EDI                             ; 004dccd0
        ;   Label: LAB_004dccd0
    POP ESI                             ; 004dccd1
    POP EBX                             ; 004dccd2
    RET                                 ; 004dccd3
    MOV EDX,0x58a4cd                    ; 004dccd4 | = "..\\engine\\model.c"
        ;   Label: caseD_13
    MOV ECX,0xce                        ; 004dccd9
    PUSH 0x58a4df                       ; 004dccde | = "Need a new byteswap!"
    MOV dword ptr [0x01cc4800],EDX      ; 004dcce3 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004dcce9 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004dccef
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004dccf4
    SUB EDI,ESI                         ; 004dccf7
    ADD EBX,ESI                         ; 004dccf9
    TEST EDI,EDI                        ; 004dccfb
    JG 0x004dcc9f                       ; 004dccfd
        ;   XREF to: 004dcc9f (CONDITIONAL_JUMP)  ; LAB_004dcc9f
    POP EDI                             ; 004dccff
    POP ESI                             ; 004dcd00
    POP EBX                             ; 004dcd01
    RET                                 ; 004dcd02

