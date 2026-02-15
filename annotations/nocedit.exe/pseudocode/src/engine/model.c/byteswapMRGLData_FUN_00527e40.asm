; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_model_c_byteswapMRGLData_FUN_00527e40(SMRGLHeaderExtended *mrgl_data,int data_size)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   mrgl_data
; int              Stack[0x8]:4   data_size
;
; Referenced Globals:
;   void* switchdataD_00527d34 = 00527e6d
;   TerminatedCString s_engine_model_c_00639a84
;   TerminatedCString s_Need_a_new_byteswap_00639a96
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_model.c_getMRGLSize_FUN_00528700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00527e40
        ;   Label: engine_model.c_byteswapMRGLData_FUN_00527e40
    PUSH ESI                            ; 00527e41
    PUSH EDI                            ; 00527e42
    MOV EDI,dword ptr [ESP + 0x14]      ; 00527e43
    MOV EBX,dword ptr [ESP + 0x10]      ; 00527e47
    TEST EDI,EDI                        ; 00527e4b
    JLE 0x00527e80                      ; 00527e4d
        ;   XREF to: 00527e80 (CONDITIONAL_JUMP)  ; LAB_00527e80
    PUSH EBX                            ; 00527e4f
        ;   Label: LAB_00527e4f
    CALL engine_model.c_getMRGLSize_FUN_00528700 ; 00527e50
        ;   XREF to: 00528700 (UNCONDITIONAL_CALL)  ; int engine_model.c_getMRGLSize_FUN_00528700(SMRGLHeaderExtended * header)
    ADD ESP,0x4                         ; 00527e55
    MOV ESI,EAX                         ; 00527e58
    MOV EDX,EAX                         ; 00527e5a
    MOV EAX,dword ptr [EBX]             ; 00527e5c
    SHR EDX,0x2                         ; 00527e5e
    CMP EAX,0x42                        ; 00527e61
    JA 0x00527e84                       ; 00527e64
        ;   XREF to: 00527e84 (CONDITIONAL_JUMP)  ; caseD_3c
    JMP dword ptr [EAX*0x4 + 0x527d34]  ; 00527e66 | caseD_f | caseD_d | caseD_3c
        ;   Label: switchD
    XOR EAX,EAX                         ; 00527e6d
        ;   Label: caseD_42
    TEST EDX,EDX                        ; 00527e6f
    JLE 0x00527e78                      ; 00527e71
        ;   XREF to: 00527e78 (CONDITIONAL_JUMP)  ; caseD_d
    INC EAX                             ; 00527e73
        ;   Label: LAB_00527e73
    CMP EAX,EDX                         ; 00527e74
    JL 0x00527e73                       ; 00527e76
        ;   XREF to: 00527e73 (CONDITIONAL_JUMP)  ; LAB_00527e73
    SUB EDI,ESI                         ; 00527e78
        ;   Label: caseD_40
    ADD EBX,ESI                         ; 00527e7a
    TEST EDI,EDI                        ; 00527e7c
    JG 0x00527e4f                       ; 00527e7e
        ;   XREF to: 00527e4f (CONDITIONAL_JUMP)  ; LAB_00527e4f
    POP EDI                             ; 00527e80
        ;   Label: LAB_00527e80
    POP ESI                             ; 00527e81
    POP EBX                             ; 00527e82
    RET                                 ; 00527e83
    MOV EDX,0x639a84                    ; 00527e84 | = "..\\engine\\model.c"
        ;   Label: caseD_3f
    MOV ECX,0xce                        ; 00527e89
    PUSH 0x639a96                       ; 00527e8e | = "Need a new byteswap!"
    MOV dword ptr [0x02f0ca48],EDX      ; 00527e93 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00527e99 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00527e9f
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00527ea4
    SUB EDI,ESI                         ; 00527ea7
    ADD EBX,ESI                         ; 00527ea9
    TEST EDI,EDI                        ; 00527eab
    JG 0x00527e4f                       ; 00527ead
        ;   XREF to: 00527e4f (CONDITIONAL_JUMP)  ; LAB_00527e4f
    POP EDI                             ; 00527eaf
    POP ESI                             ; 00527eb0
    POP EBX                             ; 00527eb1
    RET                                 ; 00527eb2

