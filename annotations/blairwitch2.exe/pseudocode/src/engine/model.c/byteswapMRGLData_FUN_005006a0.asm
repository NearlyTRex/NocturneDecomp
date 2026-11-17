; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_model_c_byteswapMRGLData_FUN_005006a0(SMRGLHeaderExtended *mrgl_data,int data_size)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   mrgl_data
; int              Stack[0x8]:4   data_size
;
; Referenced Globals:
;   undefined1* switchdataD_00500594 = 005006cd
;   TerminatedCString s_engine_model_c_005def39
;   TerminatedCString s_Need_a_new_byteswap_005def4b
;   char* g_CHAR_PTR_01d046a0
;   int g_INT_01d046a4
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004e4500
;   engine_model.c_getMRGLSize_FUN_00500f30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005006a0
        ;   Label: engine_model.c_byteswapMRGLData_FUN_005006a0
    PUSH ESI                            ; 005006a1
    PUSH EDI                            ; 005006a2
    MOV EDI,dword ptr [ESP + 0x14]      ; 005006a3
    MOV EBX,dword ptr [ESP + 0x10]      ; 005006a7
    TEST EDI,EDI                        ; 005006ab
    JLE 0x005006e0                      ; 005006ad
        ;   XREF to: 005006e0 (CONDITIONAL_JUMP)  ; LAB_005006e0
    PUSH EBX                            ; 005006af
        ;   Label: LAB_005006af
    CALL engine_model.c_getMRGLSize_FUN_00500f30 ; 005006b0
        ;   XREF to: 00500f30 (UNCONDITIONAL_CALL)  ; int engine_model.c_getMRGLSize_FUN_00500f30(SMRGLHeaderExtended * header)
    ADD ESP,0x4                         ; 005006b5
    MOV ESI,EAX                         ; 005006b8
    MOV EDX,EAX                         ; 005006ba
    MOV EAX,dword ptr [EBX]             ; 005006bc
    SHR EDX,0x2                         ; 005006be
    CMP EAX,0x42                        ; 005006c1
    JA 0x005006e4                       ; 005006c4
        ;   XREF to: 005006e4 (CONDITIONAL_JUMP)  ; caseD_3f
    JMP dword ptr [EAX*0x4 + 0x500594]  ; 005006c6 | caseD_42 | caseD_40 | caseD_3f
        ;   Label: switchD
    XOR EAX,EAX                         ; 005006cd
        ;   Label: caseD_0
    TEST EDX,EDX                        ; 005006cf
    JLE 0x005006d8                      ; 005006d1
        ;   XREF to: 005006d8 (CONDITIONAL_JUMP)  ; caseD_40
    INC EAX                             ; 005006d3
        ;   Label: LAB_005006d3
    CMP EAX,EDX                         ; 005006d4
    JL 0x005006d3                       ; 005006d6
        ;   XREF to: 005006d3 (CONDITIONAL_JUMP)  ; LAB_005006d3
    SUB EDI,ESI                         ; 005006d8
        ;   Label: caseD_d
    ADD EBX,ESI                         ; 005006da
    TEST EDI,EDI                        ; 005006dc
    JG 0x005006af                       ; 005006de
        ;   XREF to: 005006af (CONDITIONAL_JUMP)  ; LAB_005006af
    POP EDI                             ; 005006e0
        ;   Label: LAB_005006e0
    POP ESI                             ; 005006e1
    POP EBX                             ; 005006e2
    RET                                 ; 005006e3
    MOV EDX,0x5def39                    ; 005006e4 | = "..\\engine\\model.c"
        ;   Label: caseD_13
    MOV ECX,0xce                        ; 005006e9
    PUSH 0x5def4b                       ; 005006ee | = "Need a new byteswap!"
    MOV dword ptr [0x01d046a0],EDX      ; 005006f3 | g_CHAR_PTR_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 005006f9 | g_INT_01d046a4
    CALL core_main.c_displayErrorAndQuit_FUN_004e4500 ; 005006ff
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004e4500(char * format)
    ADD ESP,0x4                         ; 00500704
    SUB EDI,ESI                         ; 00500707
    ADD EBX,ESI                         ; 00500709
    TEST EDI,EDI                        ; 0050070b
    JG 0x005006af                       ; 0050070d
        ;   XREF to: 005006af (CONDITIONAL_JUMP)  ; LAB_005006af
    POP EDI                             ; 0050070f
    POP ESI                             ; 00500710
    POP EBX                             ; 00500711
    RET                                 ; 00500712

