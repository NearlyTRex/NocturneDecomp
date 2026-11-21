; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_model_c_byteswapMRGLData_FUN_0051f650(SMRGLHeaderExtended *mrgl_data,int data_size)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   mrgl_data
; int              Stack[0x8]:4   data_size
;
; Referenced Globals:
;   undefined1* switchdataD_0051f544 = 0051f67d
;   TerminatedCString s_engine_model_c_005e9f86
;   TerminatedCString s_Need_a_new_byteswap_005e9f98
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_005030e0
;   engine_model.c_getMRGLSize_FUN_0051fee0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051f650
        ;   Label: engine_model.c_byteswapMRGLData_FUN_0051f650
    PUSH ESI                            ; 0051f651
    PUSH EDI                            ; 0051f652
    MOV EDI,dword ptr [ESP + 0x14]      ; 0051f653
    MOV EBX,dword ptr [ESP + 0x10]      ; 0051f657
    TEST EDI,EDI                        ; 0051f65b
    JLE 0x0051f690                      ; 0051f65d
        ;   XREF to: 0051f690 (CONDITIONAL_JUMP)  ; LAB_0051f690
    PUSH EBX                            ; 0051f65f
        ;   Label: LAB_0051f65f
    CALL engine_model.c_getMRGLSize_FUN_0051fee0 ; 0051f660
        ;   XREF to: 0051fee0 (UNCONDITIONAL_CALL)  ; int engine_model.c_getMRGLSize_FUN_0051fee0(SMRGLHeaderExtended * header)
    ADD ESP,0x4                         ; 0051f665
    MOV ESI,EAX                         ; 0051f668
    MOV EDX,EAX                         ; 0051f66a
    MOV EAX,dword ptr [EBX]             ; 0051f66c
    SHR EDX,0x2                         ; 0051f66e
    CMP EAX,0x42                        ; 0051f671
    JA 0x0051f694                       ; 0051f674
        ;   XREF to: 0051f694 (CONDITIONAL_JUMP)  ; caseD_3f
    JMP dword ptr [EAX*0x4 + 0x51f544]  ; 0051f676 | caseD_42 | caseD_40 | caseD_3f
        ;   Label: switchD
    XOR EAX,EAX                         ; 0051f67d
        ;   Label: caseD_0
    TEST EDX,EDX                        ; 0051f67f
    JLE 0x0051f688                      ; 0051f681
        ;   XREF to: 0051f688 (CONDITIONAL_JUMP)  ; caseD_40
    INC EAX                             ; 0051f683
        ;   Label: LAB_0051f683
    CMP EAX,EDX                         ; 0051f684
    JL 0x0051f683                       ; 0051f686
        ;   XREF to: 0051f683 (CONDITIONAL_JUMP)  ; LAB_0051f683
    SUB EDI,ESI                         ; 0051f688
        ;   Label: caseD_d
    ADD EBX,ESI                         ; 0051f68a
    TEST EDI,EDI                        ; 0051f68c
    JG 0x0051f65f                       ; 0051f68e
        ;   XREF to: 0051f65f (CONDITIONAL_JUMP)  ; LAB_0051f65f
    POP EDI                             ; 0051f690
        ;   Label: LAB_0051f690
    POP ESI                             ; 0051f691
    POP EBX                             ; 0051f692
    RET                                 ; 0051f693
    MOV EDX,0x5e9f86                    ; 0051f694 | = "..\\engine\\model.c"
        ;   Label: caseD_13
    MOV ECX,0xce                        ; 0051f699
    PUSH 0x5e9f98                       ; 0051f69e | = "Need a new byteswap!"
    MOV dword ptr [0x01d1d400],EDX      ; 0051f6a3 | g_CurrentFilename
    MOV dword ptr [0x01d1d404],ECX      ; 0051f6a9 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_005030e0 ; 0051f6af
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_005030e0(char * format)
    ADD ESP,0x4                         ; 0051f6b4
    SUB EDI,ESI                         ; 0051f6b7
    ADD EBX,ESI                         ; 0051f6b9
    TEST EDI,EDI                        ; 0051f6bb
    JG 0x0051f65f                       ; 0051f6bd
        ;   XREF to: 0051f65f (CONDITIONAL_JUMP)  ; LAB_0051f65f
    POP EDI                             ; 0051f6bf
    POP ESI                             ; 0051f6c0
    POP EBX                             ; 0051f6c1
    RET                                 ; 0051f6c2

