; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dmodel.cpp_CKeyFramedModel_readBinaryModel_FUN_00476f20(CKeyFramedModel * this_ptr, FILE * file)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; FILE *           Stack[0x8]:4   file
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0 at 00476f0d
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_0061f37f
;   TerminatedCString s_Error_reading_keyframed__0061f392
;   TerminatedCString s_core_dmodel_cpp_0061f3b5
;   TerminatedCString s_KFM_file_is_invalid_vers_0061f3c8
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_allocate_FUN_00477bf0
;   core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00478830
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_memory.c_memset_FUN_005fde40
;   crt_stdio.c_fread_FUN_005fd990
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00476f20
        ;   Label: core_dmodel.cpp_CKeyFramedModel_readBinaryModel_FUN_00476f20
    PUSH ESI                            ; 00476f21
    PUSH EDI                            ; 00476f22
    PUSH EBP                            ; 00476f23
    SUB ESP,0x1c                        ; 00476f24
    MOV EBX,dword ptr [ESP + 0x30]      ; 00476f27
    MOV ESI,dword ptr [ESP + 0x34]      ; 00476f2b
    PUSH ESI                            ; 00476f2f
    PUSH 0x1                            ; 00476f30
    PUSH 0x18                           ; 00476f32
    LEA EAX,[ESP + 0xc]                 ; 00476f34
    PUSH EAX                            ; 00476f38
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00476f39
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 00476f3e
    CMP EAX,0x1                         ; 00476f41
    JNZ 0x00476f99                      ; 00476f44
        ;   XREF to: 00476f99 (CONDITIONAL_JUMP)  ; LAB_00476f99
    MOV EDI,dword ptr [ESP]             ; 00476f46
        ;   Label: LAB_00476f46
    CMP EDI,0x3                         ; 00476f49
    JGE 0x00476fbe                      ; 00476f4c
        ;   XREF to: 00476fbe (CONDITIONAL_JUMP)  ; LAB_00476fbe
    MOV ECX,dword ptr [ESP]             ; 00476f4e
        ;   Label: LAB_00476f4e
    PUSH ECX                            ; 00476f51
    MOV EAX,0x61f3b5                    ; 00476f52 | = "..\\core\\dmodel.cpp"
    MOV EDX,0xed                        ; 00476f57
    PUSH 0x61f3c8                       ; 00476f5c | = "KFM file is invalid version %d"
    MOV [0x02f0ca48],EAX                ; 00476f61 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00476f66 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00476f6c
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 00476f71
    XOR EDI,EDI                         ; 00476f74
        ;   Label: LAB_00476f74
    MOV EBP,dword ptr [ESP]             ; 00476f76
    MOV dword ptr [ESP + 0x18],EDI      ; 00476f79
    CMP EBP,0x4                         ; 00476f7d
    JL 0x00476fc5                       ; 00476f80
        ;   XREF to: 00476fc5 (CONDITIONAL_JUMP)  ; LAB_00476fc5
    PUSH ESI                            ; 00476f82
    PUSH 0x1                            ; 00476f83
    PUSH 0x4                            ; 00476f85
    LEA EAX,[ESP + 0x24]                ; 00476f87
    PUSH EAX                            ; 00476f8b
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00476f8c
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 00476f91
    CMP EAX,0x1                         ; 00476f94
    JZ 0x00476fc5                       ; 00476f97
        ;   XREF to: 00476fc5 (CONDITIONAL_JUMP)  ; LAB_00476fc5
    MOV EDX,0x61f37f                    ; 00476f99 | = "..\\core\\dmodel.cpp"
        ;   Label: LAB_00476f99
    MOV ECX,0xe7                        ; 00476f9e
    PUSH 0x61f392                       ; 00476fa3 | = "Error reading keyframed model file"
    MOV dword ptr [0x02f0ca48],EDX      ; 00476fa8 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00476fae | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00476fb4
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00476fb9
    JMP 0x00476f46                      ; 00476fbc
        ;   XREF to: 00476f46 (UNCONDITIONAL_JUMP)  ; LAB_00476f46
    CMP EDI,0x4                         ; 00476fbe
        ;   Label: LAB_00476fbe
    JG 0x00476f4e                       ; 00476fc1
        ;   XREF to: 00476f4e (CONDITIONAL_JUMP)  ; LAB_00476f4e
    JMP 0x00476f74                      ; 00476fc3
        ;   XREF to: 00476f74 (UNCONDITIONAL_JUMP)  ; LAB_00476f74
    MOV EAX,dword ptr [ESP + 0x14]      ; 00476fc5
        ;   Label: LAB_00476fc5
    PUSH EAX                            ; 00476fc9
    MOV EDX,dword ptr [ESP + 0x14]      ; 00476fca
    PUSH EDX                            ; 00476fce
    MOV ECX,dword ptr [ESP + 0x14]      ; 00476fcf
    PUSH ECX                            ; 00476fd3
    MOV EDI,dword ptr [ESP + 0x14]      ; 00476fd4
    PUSH EDI                            ; 00476fd8
    MOV EBP,dword ptr [ESP + 0x14]      ; 00476fd9
    PUSH EBP                            ; 00476fdd
    PUSH EBX                            ; 00476fde
    CALL core_dmodel.cpp_CKeyFramedModel_allocate_FUN_00477bf0 ; 00476fdf
        ;   XREF to: 00477bf0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_allocate_FUN_00477bf0(CKeyFramedModel * this_ptr, int vertex_count, int poly_count, int texture_count, ...)
    MOV EDI,dword ptr [EBX + 0x104]     ; 00476fe4
    IMUL EDI,dword ptr [EBX + 0x100]    ; 00476fea
    ADD ESP,0x18                        ; 00476ff1
    LEA EAX,[EDI*0x4 + 0x0]             ; 00476ff4
    PUSH ESI                            ; 00476ffb
    SUB EAX,EDI                         ; 00476ffc
    PUSH 0x1                            ; 00476ffe
    SHL EAX,0x2                         ; 00477000
    PUSH EAX                            ; 00477003
    MOV ECX,dword ptr [EBX + 0x10c]     ; 00477004
    PUSH ECX                            ; 0047700a
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0047700b
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 00477010
    CMP EAX,0x1                         ; 00477013
    JNZ 0x00476f99                      ; 00477016
        ;   XREF to: 00476f99 (CONDITIONAL_JUMP)  ; LAB_00476f99
    MOV EDI,dword ptr [EBX + 0x110]     ; 00477018
    TEST EDI,EDI                        ; 0047701e
    JLE 0x0047706d                      ; 00477020
        ;   XREF to: 0047706d (CONDITIONAL_JUMP)  ; LAB_0047706d
    PUSH ESI                            ; 00477022
    PUSH EAX                            ; 00477023
    LEA EAX,[EDI*0x8 + 0x0]             ; 00477024
    ADD EAX,EDI                         ; 0047702b
    SHL EAX,0x3                         ; 0047702d
    PUSH EAX                            ; 00477030
    MOV EBP,dword ptr [EBX + 0x114]     ; 00477031
    PUSH EBP                            ; 00477037
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00477038
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 0047703d
    CMP EAX,0x1                         ; 00477040
    JNZ 0x00476f99                      ; 00477043
        ;   XREF to: 00476f99 (CONDITIONAL_JUMP)  ; LAB_00476f99
    PUSH ESI                            ; 00477049
    PUSH EAX                            ; 0047704a
    MOV EAX,dword ptr [EBX + 0x110]     ; 0047704b
    SHL EAX,0x2                         ; 00477051
    PUSH EAX                            ; 00477054
    MOV EAX,dword ptr [EBX + 0x118]     ; 00477055
    PUSH EAX                            ; 0047705b
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0047705c
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 00477061
    CMP EAX,0x1                         ; 00477064
    JNZ 0x00476f99                      ; 00477067
        ;   XREF to: 00476f99 (CONDITIONAL_JUMP)  ; LAB_00476f99
    CMP dword ptr [EBX + 0x120],0x0     ; 0047706d
        ;   Label: LAB_0047706d
    JLE 0x004770c5                      ; 00477074
        ;   XREF to: 004770c5 (CONDITIONAL_JUMP)  ; LAB_004770c5
    PUSH 0x5460                         ; 00477076
    PUSH 0x0                            ; 0047707b
    LEA EAX,[EBX + 0x124]               ; 0047707d
    PUSH EAX                            ; 00477083
    XOR EDI,EDI                         ; 00477084
    CALL crt_memory.c_memset_FUN_005fde40 ; 00477086
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0047708b
    CMP EDI,dword ptr [EBX + 0x120]     ; 0047708e
        ;   Label: LAB_0047708e
    JGE 0x004770c5                      ; 00477094
        ;   XREF to: 004770c5 (CONDITIONAL_JUMP)  ; LAB_004770c5
    PUSH ESI                            ; 00477096
    LEA EAX,[EDI*0x8 + 0x0]             ; 00477097
    LEA EDX,[EBX + 0x124]               ; 0047709e
    ADD EAX,EDI                         ; 004770a4
    PUSH 0x1                            ; 004770a6
    SHL EAX,0x3                         ; 004770a8
    PUSH 0x18                           ; 004770ab
    ADD EAX,EDX                         ; 004770ad
    PUSH EAX                            ; 004770af
    CALL crt_stdio.c_fread_FUN_005fd990 ; 004770b0
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 004770b5
    CMP EAX,0x1                         ; 004770b8
    JNZ 0x00476f99                      ; 004770bb
        ;   XREF to: 00476f99 (CONDITIONAL_JUMP)  ; LAB_00476f99
    ADD EDI,EAX                         ; 004770c1
    JMP 0x0047708e                      ; 004770c3
        ;   XREF to: 0047708e (UNCONDITIONAL_JUMP)  ; LAB_0047708e
    PUSH ESI                            ; 004770c5
        ;   Label: LAB_004770c5
    MOV EAX,dword ptr [EBX + 0x5584]    ; 004770c6
    PUSH 0x1                            ; 004770cc
    SHL EAX,0x3                         ; 004770ce
    PUSH EAX                            ; 004770d1
    LEA EAX,[EBX + 0x5588]              ; 004770d2
    PUSH EAX                            ; 004770d8
    CALL crt_stdio.c_fread_FUN_005fd990 ; 004770d9
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 004770de
    CMP EAX,0x1                         ; 004770e1
    JNZ 0x00476f99                      ; 004770e4
        ;   XREF to: 00476f99 (CONDITIONAL_JUMP)  ; LAB_00476f99
    CMP dword ptr [ESP + 0x18],0x0      ; 004770ea
    JNZ 0x004770f9                      ; 004770ef
        ;   XREF to: 004770f9 (CONDITIONAL_JUMP)  ; LAB_004770f9
    ADD ESP,0x1c                        ; 004770f1
    POP EBP                             ; 004770f4
    POP EDI                             ; 004770f5
    POP ESI                             ; 004770f6
    POP EBX                             ; 004770f7
    RET                                 ; 004770f8
    PUSH EBX                            ; 004770f9
        ;   Label: LAB_004770f9
    CALL core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00478830 ; 004770fa
        ;   XREF to: 00478830 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00478830(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 004770ff
    ADD ESP,0x1c                        ; 00477102
    POP EBP                             ; 00477105
    POP EDI                             ; 00477106
    POP ESI                             ; 00477107
    POP EBX                             ; 00477108
    RET                                 ; 00477109

