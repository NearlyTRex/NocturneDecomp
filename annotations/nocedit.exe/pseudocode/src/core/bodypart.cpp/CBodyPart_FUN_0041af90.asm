; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_bodypart_cpp_CBodyPart_FUN_0041af90(CBodyPart *this_ptr)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModel_dismember_FUN_0059c5e0 at 0059cb10
;
; Referenced Globals:
;   TerminatedCString s_core_bodypart_cpp_00615e6a
;   TerminatedCString s_Too_many_body_part_textu_00615e7f
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_memory.c_memset_FUN_005fde40
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041af90
        ;   Label: core_bodypart.cpp_CBodyPart_FUN_0041af90
    PUSH ESI                            ; 0041af91
    PUSH EDI                            ; 0041af92
    PUSH EBP                            ; 0041af93
    MOV EBX,dword ptr [ESP + 0x14]      ; 0041af94
    MOV EBP,dword ptr [ESP + 0x18]      ; 0041af98
    MOV EDX,dword ptr [EBX + 0x18c]     ; 0041af9c
    XOR ESI,ESI                         ; 0041afa2
    TEST EDX,EDX                        ; 0041afa4
    JLE 0x0041afce                      ; 0041afa6
        ;   XREF to: 0041afce (CONDITIONAL_JUMP)  ; LAB_0041afce
    LEA EDI,[EBX + 0x198]               ; 0041afa8
    PUSH EBP                            ; 0041afae
        ;   Label: LAB_0041afae
    PUSH EDI                            ; 0041afaf
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0041afb0
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0041afb5
    TEST EAX,EAX                        ; 0041afb8
    JZ 0x0041b067                       ; 0041afba
        ;   XREF to: 0041b067 (CONDITIONAL_JUMP)  ; LAB_0041b067
    INC ESI                             ; 0041afc0
    MOV ECX,dword ptr [EBX + 0x18c]     ; 0041afc1
    ADD EDI,0x18                        ; 0041afc7
    CMP ESI,ECX                         ; 0041afca
    JL 0x0041afae                       ; 0041afcc
        ;   XREF to: 0041afae (CONDITIONAL_JUMP)  ; LAB_0041afae
    CMP dword ptr [EBX + 0x18c],0xa     ; 0041afce
        ;   Label: LAB_0041afce
    JL 0x0041aff9                       ; 0041afd5
        ;   XREF to: 0041aff9 (CONDITIONAL_JUMP)  ; LAB_0041aff9
    MOV EDI,0x615e6a                    ; 0041afd7 | = "..\\core\\bodypart.cpp"
    MOV EAX,0x47a                       ; 0041afdc
    PUSH 0x615e7f                       ; 0041afe1 | = "Too many body part textures!"
    MOV dword ptr [0x02f0ca48],EDI      ; 0041afe6 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0041afec | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0041aff1
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0041aff6
    MOV ESI,dword ptr [EBX + 0x18c]     ; 0041aff9
        ;   Label: LAB_0041aff9
    LEA EAX,[ESI*0x4 + 0x0]             ; 0041afff
    PUSH 0x18                           ; 0041b006
    SUB EAX,ESI                         ; 0041b008
    LEA EDI,[EBX + 0x190]               ; 0041b00a
    SHL EAX,0x3                         ; 0041b010
    PUSH 0x0                            ; 0041b013
    ADD EAX,EDI                         ; 0041b015
    PUSH EAX                            ; 0041b017
    CALL crt_memory.c_memset_FUN_005fde40 ; 0041b018
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    MOV ESI,dword ptr [EBX + 0x18c]     ; 0041b01d
    LEA EAX,[ESI*0x4 + 0x0]             ; 0041b023
    SUB EAX,ESI                         ; 0041b02a
    SHL EAX,0x3                         ; 0041b02c
    ADD ESP,0xc                         ; 0041b02f
    ADD EDI,EAX                         ; 0041b032
    MOV ESI,EBP                         ; 0041b034
    ADD EDI,0x8                         ; 0041b036
    PUSH EDI                            ; 0041b039
    MOV AL,byte ptr [ESI]               ; 0041b03a
        ;   Label: LAB_0041b03a
    MOV byte ptr [EDI],AL               ; 0041b03c
    CMP AL,0x0                          ; 0041b03e
    JZ 0x0041b052                       ; 0041b040
        ;   XREF to: 0041b052 (CONDITIONAL_JUMP)  ; LAB_0041b052
    MOV AL,byte ptr [ESI + 0x1]         ; 0041b042
    ADD ESI,0x2                         ; 0041b045
    MOV byte ptr [EDI + 0x1],AL         ; 0041b048
    ADD EDI,0x2                         ; 0041b04b
    CMP AL,0x0                          ; 0041b04e
    JNZ 0x0041b03a                      ; 0041b050
        ;   XREF to: 0041b03a (CONDITIONAL_JUMP)  ; LAB_0041b03a
    POP EDI                             ; 0041b052
        ;   Label: LAB_0041b052
    MOV EAX,dword ptr [EBX + 0x18c]     ; 0041b053
    LEA ESI,[EAX + 0x1]                 ; 0041b059
    MOV dword ptr [EBX + 0x18c],ESI     ; 0041b05c
    POP EBP                             ; 0041b062
    POP EDI                             ; 0041b063
    POP ESI                             ; 0041b064
    POP EBX                             ; 0041b065
    RET                                 ; 0041b066
    MOV EAX,ESI                         ; 0041b067
        ;   Label: LAB_0041b067
    POP EBP                             ; 0041b069
    POP EDI                             ; 0041b06a
    POP ESI                             ; 0041b06b
    POP EBX                             ; 0041b06c
    RET                                 ; 0041b06d

