; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f7ea0(SMRGLHeaderExtended *param_1,int param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_004f7d94 = 004f7ecd
;   TerminatedCString s_engine_model_c_005c8f2c
;   TerminatedCString s_Need_a_new_byteswap_005c8f3e
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004e4330
;   engine_model.c_getMRGLSize_FUN_004f8730
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f7ea0
        ;   Label: FUN_004f7ea0
    PUSH ESI                            ; 004f7ea1
    PUSH EDI                            ; 004f7ea2
    MOV EDI,dword ptr [ESP + 0x14]      ; 004f7ea3
    MOV EBX,dword ptr [ESP + 0x10]      ; 004f7ea7
    TEST EDI,EDI                        ; 004f7eab
    JLE 0x004f7ee0                      ; 004f7ead
        ;   XREF to: 004f7ee0 (CONDITIONAL_JUMP)  ; LAB_004f7ee0
    PUSH EBX                            ; 004f7eaf
        ;   Label: LAB_004f7eaf
    CALL engine_model.c_getMRGLSize_FUN_004f8730 ; 004f7eb0
        ;   XREF to: 004f8730 (UNCONDITIONAL_CALL)  ; int engine_model.c_getMRGLSize_FUN_004f8730(SMRGLHeaderExtended * header)
    ADD ESP,0x4                         ; 004f7eb5
    MOV ESI,EAX                         ; 004f7eb8
    MOV EDX,EAX                         ; 004f7eba
    MOV EAX,dword ptr [EBX]             ; 004f7ebc
    SHR EDX,0x2                         ; 004f7ebe
    CMP EAX,0x42                        ; 004f7ec1
    JA 0x004f7ee4                       ; 004f7ec4
        ;   XREF to: 004f7ee4 (CONDITIONAL_JUMP)  ; caseD_3f
    JMP dword ptr [EAX*0x4 + 0x4f7d94]  ; 004f7ec6 | caseD_42 | caseD_40 | caseD_3f
        ;   Label: switchD
    XOR EAX,EAX                         ; 004f7ecd
        ;   Label: caseD_0
    TEST EDX,EDX                        ; 004f7ecf
    JLE 0x004f7ed8                      ; 004f7ed1
        ;   XREF to: 004f7ed8 (CONDITIONAL_JUMP)  ; caseD_40
    INC EAX                             ; 004f7ed3
        ;   Label: LAB_004f7ed3
    CMP EAX,EDX                         ; 004f7ed4
    JL 0x004f7ed3                       ; 004f7ed6
        ;   XREF to: 004f7ed3 (CONDITIONAL_JUMP)  ; LAB_004f7ed3
    SUB EDI,ESI                         ; 004f7ed8
        ;   Label: caseD_d
    ADD EBX,ESI                         ; 004f7eda
    TEST EDI,EDI                        ; 004f7edc
    JG 0x004f7eaf                       ; 004f7ede
        ;   XREF to: 004f7eaf (CONDITIONAL_JUMP)  ; LAB_004f7eaf
    POP EDI                             ; 004f7ee0
        ;   Label: LAB_004f7ee0
    POP ESI                             ; 004f7ee1
    POP EBX                             ; 004f7ee2
    RET                                 ; 004f7ee3
    MOV EDX,0x5c8f2c                    ; 004f7ee4 | = "..\\engine\\model.c"
        ;   Label: caseD_13
    MOV ECX,0xce                        ; 004f7ee9
    PUSH 0x5c8f3e                       ; 004f7eee | = "Need a new byteswap!"
    MOV dword ptr [0x01d71de0],EDX      ; 004f7ef3 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004f7ef9 | DAT_01d71de4
    CALL core_main.c_displayErrorAndQuit_FUN_004e4330 ; 004f7eff
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004e4330(char * format)
    ADD ESP,0x4                         ; 004f7f04
    SUB EDI,ESI                         ; 004f7f07
    ADD EBX,ESI                         ; 004f7f09
    TEST EDI,EDI                        ; 004f7f0b
    JG 0x004f7eaf                       ; 004f7f0d
        ;   XREF to: 004f7eaf (CONDITIONAL_JUMP)  ; LAB_004f7eaf
    POP EDI                             ; 004f7f0f
    POP ESI                             ; 004f7f10
    POP EBX                             ; 004f7f11
    RET                                 ; 004f7f12

