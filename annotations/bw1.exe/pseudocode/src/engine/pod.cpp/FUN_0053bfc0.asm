; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool engine_pod_cpp_FUN_0053bfc0(int *param_1)
;
;
; XREF[1]:
;   engine_pod.cpp_FUN_0053ce50 at 0053ce80
;
; Referenced Globals:
;   CEditorTools* g_CEditorToolsPtr = 01c3eb54
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_stdio.c_fclose_FUN_005c0d10
;   crt_stdio.c_fgetc_FUN_005c0530
;   crt_stdio.c_fopen_FUN_005c157c
;   crt_stdio.c_fread_FUN_005c0b10
;   crt_stdio.c_fseek_FUN_005c170c
;   engine_dosio.cpp_getFileSize_FUN_00478fb0
;   engine_pod.cpp_crc32UpdateByte_FUN_0053b000
;   engine_pod.cpp_FUN_0053c4c0
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400
;   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004961b0
;   shape_edittool.cpp_CPickList_ctor_FUN_0049a620
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_0049a8b0
;   shape_edittool.cpp_CPickList_dtor_FUN_0049a710
;   shape_edittool.cpp_CStrList_add_FUN_004994d0
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053bfc0
        ;   Label: engine_pod.cpp_FUN_0053bfc0
    PUSH ESI                            ; 0053bfc1
    PUSH EDI                            ; 0053bfc2
    PUSH EBP                            ; 0053bfc3
    SUB ESP,0x3d0                       ; 0053bfc4
    MOV EBX,dword ptr [ESP + 0x3e4]     ; 0053bfca
    MOV EDX,dword ptr [EBX]             ; 0053bfd1
    TEST EDX,EDX                        ; 0053bfd3
    JZ 0x0053c0fa                       ; 0053bfd5
        ;   XREF to: 0053c0fa (CONDITIONAL_JUMP)  ; LAB_0053c0fa
    CMP byte ptr [EBX + 0x4],0x0        ; 0053bfdb
    JZ 0x0053c0fa                       ; 0053bfdf
        ;   XREF to: 0053c0fa (CONDITIONAL_JUMP)  ; LAB_0053c0fa
    CMP EDX,0xc8                        ; 0053bfe5
    JZ 0x0053c109                       ; 0053bfeb
        ;   XREF to: 0053c109 (CONDITIONAL_JUMP)  ; LAB_0053c109
    MOV EDI,dword ptr [EBX]             ; 0053bff1
        ;   Label: LAB_0053bff1
    MOV ESI,0xffffffff                  ; 0053bff3
    CMP EDI,0x1                         ; 0053bff8
    JNZ 0x0053c236                      ; 0053bffb
        ;   XREF to: 0053c236 (CONDITIONAL_JUMP)  ; LAB_0053c236
    MOV ESI,0x54                        ; 0053c001
    LEA EDI,[EBX + 0x4]                 ; 0053c006
        ;   Label: LAB_0053c006
    PUSH EDI                            ; 0053c009
    PUSH 0x5ed79e                       ; 0053c00a
    MOV EBP,dword ptr [0x0061abc0]      ; 0053c00f | g_CEditorToolsPtr
    PUSH EBP                            ; 0053c015
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400 ; 0053c016
        ;   XREF to: 00494400 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 0053c01b
    PUSH 0x5ed7b6                       ; 0053c01e
    PUSH EDI                            ; 0053c023
    CALL crt_stdio.c_fopen_FUN_005c157c ; 0053c024
        ;   XREF to: 005c157c (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_005c157c(char * filename, char * mode)
    MOV EBX,EAX                         ; 0053c029
    ADD ESP,0x8                         ; 0053c02b
    TEST EAX,EAX                        ; 0053c02e
    JZ 0x0053c24d                       ; 0053c030
        ;   XREF to: 0053c24d (CONDITIONAL_JUMP)  ; LAB_0053c24d
    PUSH 0x0                            ; 0053c036
    LEA EAX,[ESI + -0x4]                ; 0053c038
    PUSH EAX                            ; 0053c03b
    PUSH EBX                            ; 0053c03c
    CALL crt_stdio.c_fseek_FUN_005c170c ; 0053c03d
        ;   XREF to: 005c170c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005c170c(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 0053c042
    PUSH EBX                            ; 0053c045
    PUSH 0x1                            ; 0053c046
    PUSH 0x4                            ; 0053c048
    LEA EAX,[ESP + 0x3cc]               ; 0053c04a
    PUSH EAX                            ; 0053c051
    CALL crt_stdio.c_fread_FUN_005c0b10 ; 0053c052
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005c0b10(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0053c057
    PUSH EBX                            ; 0053c05a
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 0053c05b
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 0053c060
    PUSH EDI                            ; 0053c063
    PUSH 0x5ed65e                       ; 0053c064
    CALL engine_dosio.cpp_getFileSize_FUN_00478fb0 ; 0053c069
        ;   XREF to: 00478fb0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_00478fb0(char * directory, char * filename)
    ADD ESP,0x8                         ; 0053c06e
    PUSH 0x5ed65f                       ; 0053c071
    SUB EAX,ESI                         ; 0053c076
    PUSH EDI                            ; 0053c078
    MOV dword ptr [ESP + 0x3cc],EAX     ; 0053c079
    CALL crt_stdio.c_fopen_FUN_005c157c ; 0053c080
        ;   XREF to: 005c157c (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_005c157c(char * filename, char * mode)
    ADD ESP,0x8                         ; 0053c085
    PUSH 0x0                            ; 0053c088
    PUSH ESI                            ; 0053c08a
    PUSH EAX                            ; 0053c08b
    MOV EBP,EAX                         ; 0053c08c
    MOV dword ptr [ESP + 0x3d4],EAX     ; 0053c08e
    CALL crt_stdio.c_fseek_FUN_005c170c ; 0053c095
        ;   XREF to: 005c170c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005c170c(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 0053c09a
    XOR EBX,EBX                         ; 0053c09d
    MOV EDI,dword ptr [ESP + 0x3c4]     ; 0053c09f
    MOV ESI,0xffffffff                  ; 0053c0a6
    TEST EDI,EDI                        ; 0053c0ab
    JLE 0x0053c0d0                      ; 0053c0ad
        ;   XREF to: 0053c0d0 (CONDITIONAL_JUMP)  ; LAB_0053c0d0
    PUSH EBP                            ; 0053c0af
        ;   Label: LAB_0053c0af
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 0053c0b0
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005c0530(_FILE * file)
    ADD ESP,0x4                         ; 0053c0b5
    AND EAX,0xff                        ; 0053c0b8
    PUSH EAX                            ; 0053c0bd
    PUSH ESI                            ; 0053c0be
    INC EBX                             ; 0053c0bf
    CALL engine_pod.cpp_crc32UpdateByte_FUN_0053b000 ; 0053c0c0
        ;   XREF to: 0053b000 (UNCONDITIONAL_CALL)  ; uint engine_pod.cpp_crc32UpdateByte_FUN_0053b000(uint current_crc, uchar data_byte)
    ADD ESP,0x8                         ; 0053c0c5
    MOV ESI,EAX                         ; 0053c0c8
    CMP EBX,EDI                         ; 0053c0ca
    JL 0x0053c0af                       ; 0053c0cc
        ;   XREF to: 0053c0af (CONDITIONAL_JUMP)  ; LAB_0053c0af
    MOV EAX,EAX                         ; 0053c0ce
    MOV EDX,dword ptr [ESP + 0x3c8]     ; 0053c0d0
        ;   Label: LAB_0053c0d0
    PUSH EDX                            ; 0053c0d7
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 0053c0d8
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 0053c0dd
    CMP ESI,dword ptr [ESP + 0x3c0]     ; 0053c0e0
    SETZ AL                             ; 0053c0e7
    MOVZX ESI,AL                        ; 0053c0ea
    MOV EAX,ESI                         ; 0053c0ed
    ADD ESP,0x3d0                       ; 0053c0ef
    POP EBP                             ; 0053c0f5
    POP EDI                             ; 0053c0f6
    POP ESI                             ; 0053c0f7
    POP EBX                             ; 0053c0f8
    RET                                 ; 0053c0f9
    XOR ESI,ESI                         ; 0053c0fa
        ;   Label: LAB_0053c0fa
    MOV EAX,ESI                         ; 0053c0fc
    ADD ESP,0x3d0                       ; 0053c0fe
    POP EBP                             ; 0053c104
    POP EDI                             ; 0053c105
    POP ESI                             ; 0053c106
    POP EBX                             ; 0053c107
    RET                                 ; 0053c108
    PUSH 0x5ed729                       ; 0053c109
        ;   Label: LAB_0053c109
    MOV ESI,dword ptr [0x0061abc0]      ; 0053c10e | g_CEditorToolsPtr
    PUSH ESI                            ; 0053c114
    CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004961b0 ; 0053c115
        ;   XREF to: 004961b0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004961b0(CEditorTools * this_ptr, char * message_text)
    ADD ESP,0x8                         ; 0053c11a
    MOV EAX,ESP                         ; 0053c11d
    PUSH EAX                            ; 0053c11f
    XOR EDI,EDI                         ; 0053c120
    CALL shape_edittool.cpp_CPickList_ctor_FUN_0049a620 ; 0053c122
        ;   XREF to: 0049a620 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_0049a620(CPickList * this_ptr)
    MOV EBP,dword ptr [EBX + 0x410]     ; 0053c127
    ADD ESP,0x4                         ; 0053c12d
    TEST EBP,EBP                        ; 0053c130
    JLE 0x0053c1da                      ; 0053c132
        ;   XREF to: 0053c1da (CONDITIONAL_JUMP)  ; LAB_0053c1da
    XOR ESI,ESI                         ; 0053c138
    MOV EAX,dword ptr [EBX + 0x410]     ; 0053c13a
        ;   Label: LAB_0053c13a
    DEC EAX                             ; 0053c140
    IMUL ECX,EAX,0x14                   ; 0053c141
    MOV EAX,dword ptr [EBX + 0x414]     ; 0053c144
    MOV EDX,dword ptr [ECX + EAX*0x1 + 0x8] ; 0053c14a
    MOV EBP,dword ptr [ECX + EAX*0x1 + 0x4] ; 0053c14e
    MOV ECX,dword ptr [EAX + 0x8]       ; 0053c152
    ADD EDX,EBP                         ; 0053c155
    SUB EDX,ECX                         ; 0053c157
    MOV dword ptr [ESP + 0x3cc],EDX     ; 0053c159
    FILD dword ptr [ESP + 0x3cc]        ; 0053c160
    SUB ESP,0x4                         ; 0053c167
    LEA EDX,[EAX + ESI*0x1]             ; 0053c16a
    FSTP float ptr [ESP]                ; 0053c16d
    MOV EDX,dword ptr [EDX + 0x8]       ; 0053c170
    SUB EDX,ECX                         ; 0053c173
    MOV dword ptr [ESP + 0x3d0],EDX     ; 0053c175
    FILD dword ptr [ESP + 0x3d0]        ; 0053c17c
    SUB ESP,0x4                         ; 0053c183
    MOV EAX,[0x0061abc0]                ; 0053c186 | g_CEditorToolsPtr
    FSTP float ptr [ESP]                ; 0053c18b
    PUSH EAX                            ; 0053c18e
    CALL shape_edittool.cpp_FUN_004962b0 ; 0053c18f
        ;   XREF to: 004962b0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004962b0()
    ADD ESP,0xc                         ; 0053c194
    PUSH EDI                            ; 0053c197
    MOV EAX,dword ptr [EBX + 0x414]     ; 0053c198
    PUSH EBX                            ; 0053c19e
    LEA EBP,[EAX + ESI*0x1]             ; 0053c19f
    CALL engine_pod.cpp_FUN_0053c4c0    ; 0053c1a2
        ;   XREF to: 0053c4c0 (UNCONDITIONAL_CALL)  ; undefined engine_pod.cpp_FUN_0053c4c0()
    MOV EDX,dword ptr [EBP + 0x10]      ; 0053c1a7
    ADD ESP,0x8                         ; 0053c1aa
    CMP EAX,EDX                         ; 0053c1ad
    JZ 0x0053c1c8                       ; 0053c1af
        ;   XREF to: 0053c1c8 (CONDITIONAL_JUMP)  ; LAB_0053c1c8
    MOV EAX,dword ptr [EBX + 0x414]     ; 0053c1b1
    MOV ECX,dword ptr [ESI + EAX*0x1]   ; 0053c1b7
    PUSH ECX                            ; 0053c1ba
    LEA EAX,[ESP + 0x4]                 ; 0053c1bb
    PUSH EAX                            ; 0053c1bf
    CALL shape_edittool.cpp_CStrList_add_FUN_004994d0 ; 0053c1c0
        ;   XREF to: 004994d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004994d0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0053c1c5
    INC EDI                             ; 0053c1c8
        ;   Label: LAB_0053c1c8
    MOV EAX,dword ptr [EBX + 0x410]     ; 0053c1c9
    ADD ESI,0x14                        ; 0053c1cf
    CMP EDI,EAX                         ; 0053c1d2
    JL 0x0053c13a                       ; 0053c1d4
        ;   XREF to: 0053c13a (CONDITIONAL_JUMP)  ; LAB_0053c13a
    MOV EDX,dword ptr [0x0061abc0]      ; 0053c1da | g_CEditorToolsPtr
        ;   Label: LAB_0053c1da
    PUSH EDX                            ; 0053c1e0
    CALL shape_edittool.cpp_FUN_00496dd0 ; 0053c1e1
        ;   XREF to: 00496dd0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00496dd0()
    ADD ESP,0x4                         ; 0053c1e6
    MOV ECX,dword ptr [ESP]             ; 0053c1e9
    TEST ECX,ECX                        ; 0053c1ec
    JNZ 0x0053c203                      ; 0053c1ee
        ;   XREF to: 0053c203 (CONDITIONAL_JUMP)  ; LAB_0053c203
    PUSH ECX                            ; 0053c1f0
    LEA EAX,[ESP + 0x4]                 ; 0053c1f1
    PUSH EAX                            ; 0053c1f5
    CALL shape_edittool.cpp_CPickList_dtor_FUN_0049a710 ; 0053c1f6
        ;   XREF to: 0049a710 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_0049a710(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0053c1fb
    JMP 0x0053bff1                      ; 0053c1fe
        ;   XREF to: 0053bff1 (UNCONDITIONAL_JUMP)  ; LAB_0053bff1
    PUSH 0x0                            ; 0053c203
        ;   Label: LAB_0053c203
    PUSH -0x1                           ; 0053c205
    PUSH 0x5ed747                       ; 0053c207
    LEA EAX,[ESP + 0xc]                 ; 0053c20c
    PUSH EAX                            ; 0053c210
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_0049a8b0 ; 0053c211
        ;   XREF to: 0049a8b0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_0049a8b0(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 0053c216
    XOR ESI,ESI                         ; 0053c219
    PUSH ESI                            ; 0053c21b
    LEA EAX,[ESP + 0x4]                 ; 0053c21c
    PUSH EAX                            ; 0053c220
    CALL shape_edittool.cpp_CPickList_dtor_FUN_0049a710 ; 0053c221
        ;   XREF to: 0049a710 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_0049a710(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0053c226
    MOV EAX,ESI                         ; 0053c229
    ADD ESP,0x3d0                       ; 0053c22b
    POP EBP                             ; 0053c231
    POP EDI                             ; 0053c232
    POP ESI                             ; 0053c233
    POP EBX                             ; 0053c234
    RET                                 ; 0053c235
    CMP EDI,0xc8                        ; 0053c236
        ;   Label: LAB_0053c236
    JNZ 0x0053c248                      ; 0053c23c
        ;   XREF to: 0053c248 (CONDITIONAL_JUMP)  ; LAB_0053c248
    MOV ESI,0x8                         ; 0053c23e
    JMP 0x0053c006                      ; 0053c243
        ;   XREF to: 0053c006 (UNCONDITIONAL_JUMP)  ; LAB_0053c006
    CMP EDI,0x64                        ; 0053c248
        ;   Label: LAB_0053c248
    JNZ 0x0053c25c                      ; 0053c24b
        ;   XREF to: 0053c25c (CONDITIONAL_JUMP)  ; LAB_0053c25c
    XOR ESI,ESI                         ; 0053c24d
        ;   Label: LAB_0053c24d
    MOV EAX,ESI                         ; 0053c24f
    ADD ESP,0x3d0                       ; 0053c251
    POP EBP                             ; 0053c257
    POP EDI                             ; 0053c258
    POP ESI                             ; 0053c259
    POP EBX                             ; 0053c25a
    RET                                 ; 0053c25b
    PUSH EDI                            ; 0053c25c
        ;   Label: LAB_0053c25c
    LEA EAX,[EBX + 0x4]                 ; 0053c25d
    PUSH EAX                            ; 0053c260
    MOV EDX,0x5ed76d                    ; 0053c261
    MOV ECX,0x388                       ; 0053c266
    PUSH 0x5ed77f                       ; 0053c26b
    MOV dword ptr [0x01d1d400],EDX      ; 0053c270 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0053c276 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0053c27c
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0xc                         ; 0053c281
    JMP 0x0053c006                      ; 0053c284
        ;   XREF to: 0053c006 (UNCONDITIONAL_JUMP)  ; LAB_0053c006

