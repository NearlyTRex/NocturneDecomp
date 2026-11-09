; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 shape_edittool_cpp_FUN_0047dd1e(CEditorTools *param_1,undefined4 param_2,char *param_3,char *param_4,byte param_5)
;
;
; Called Functions:
;   crt_string.c__strcmp_FUN_005a3d00
;   crt_string.c__stricmp_FUN_005a3260
;   crt_string.c_memmove_FUN_005a54c0
;   crt_string.c_strupr_FUN_005a5b10
;   crt_time.c__localtime_FUN_005a5628
;   crt_time.c__strftime_FUN_005a5674
;   crt_unknown.c_FUN_005a28c0
;   crt_unknown.c_FUN_005a559e
;   crt_unknown.c_FUN_005a55b0
;   engine_dosio.cpp_CFileFinder_ctor_FUN_00465b60
;   engine_dosio.cpp_CFileFinder_dtor_FUN_00465b80
;   engine_dosio.cpp_CFileFinder_findNext_FUN_00465c20
;   engine_dosio.cpp_CFileFinder_openSearch_FUN_00465ba0
;   engine_dosio.cpp_FUN_00465e50
;   engine_dosio.cpp_FUN_00465e80
;   ... and 9 more
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 0047dd1e
        ;   Label: shape_edittool.cpp_FUN_0047dd1e
    PUSH EBX                            ; 0047dd20
    PUSH EBP                            ; 0047dd21
    SUB ESP,0x1ed8                      ; 0047dd22
    MOV EBX,dword ptr [ESP + 0x1ee4]    ; 0047dd28
    PUSH 0x104                          ; 0047dd2f
    LEA EAX,[ESP + 0xa14]               ; 0047dd34
    PUSH EAX                            ; 0047dd3b
    CALL crt_unknown.c_FUN_005a559e     ; 0047dd3c
        ;   XREF to: 005a559e (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a559e()
    ADD ESP,0x8                         ; 0047dd41
    TEST EAX,EAX                        ; 0047dd44
    JZ 0x0047e01b                       ; 0047dd46
        ;   XREF to: 0047e01b (CONDITIONAL_JUMP)  ; LAB_0047e01b
    PUSH EDI                            ; 0047dd4c
    PUSH ESI                            ; 0047dd4d
    MOV ECX,0x41                        ; 0047dd4e
    LEA EDI,[ESP + 0xc20]               ; 0047dd53
    MOV ESI,0x5fb150                    ; 0047dd5a
    MOV AH,byte ptr [ESP + 0x1efc]      ; 0047dd5f
    MOVSD.REP ES:EDI,ESI                ; 0047dd66
    TEST AH,0x1                         ; 0047dd68
    JNZ 0x0047e034                      ; 0047dd6b
        ;   XREF to: 0047e034 (CONDITIONAL_JUMP)  ; LAB_0047e034
    XOR ECX,ECX                         ; 0047dd71
        ;   Label: LAB_0047dd71
    MOV dword ptr [ESP + 0x1ed4],ECX    ; 0047dd73
    MOV ECX,0x41                        ; 0047dd7a
        ;   Label: LAB_0047dd7a
    LEA EDI,[ESP + 0x70c]               ; 0047dd7f
    PUSH 0x104                          ; 0047dd86
    LEA EAX,[ESP + 0x710]               ; 0047dd8b
    MOV ESI,0x5fb258                    ; 0047dd92
    PUSH EAX                            ; 0047dd97
    MOVSD.REP ES:EDI,ESI                ; 0047dd98
    CALL crt_unknown.c_FUN_005a559e     ; 0047dd9a
        ;   XREF to: 005a559e (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a559e()
    ADD ESP,0x8                         ; 0047dd9f
    LEA EAX,[ESP + 0x70c]               ; 0047dda2
    PUSH EAX                            ; 0047dda9
    MOV ESI,dword ptr [ESP + 0x1ef4]    ; 0047ddaa
    PUSH ESI                            ; 0047ddb1
    PUSH 0x5bcef2                       ; 0047ddb2
    LEA EAX,[ESP + 0x3d4]               ; 0047ddb7
    PUSH EAX                            ; 0047ddbe
    CALL crt_unknown.c_FUN_005a28c0     ; 0047ddbf
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 0047ddc4
    LEA EAX,[ESP + 0x8]                 ; 0047ddc7
    PUSH EAX                            ; 0047ddcb
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004831c0 ; 0047ddcc
        ;   XREF to: 004831c0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004831c0(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0047ddd1
    LEA EAX,[ESP + 0x5f8]               ; 0047ddd4
    PUSH EAX                            ; 0047dddb
    CALL engine_dosio.cpp_CFileFinder_ctor_FUN_00465b60 ; 0047dddc
        ;   XREF to: 00465b60 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.cpp_CFileFinder_ctor_FUN_00465b60(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 0047dde1
    CMP dword ptr [ESP + 0x1ef4],0x0    ; 0047dde4
    JNZ 0x0047ddf9                      ; 0047ddec
        ;   XREF to: 0047ddf9 (CONDITIONAL_JUMP)  ; LAB_0047ddf9
    MOV dword ptr [ESP + 0x1ef4],0x5bcef8 ; 0047ddee
    MOV EAX,dword ptr [ESP + 0x1ef4]    ; 0047ddf9
        ;   Label: LAB_0047ddf9
    PUSH EAX                            ; 0047de00
    LEA EAX,[ESP + 0x5fc]               ; 0047de01
    PUSH EAX                            ; 0047de08
    CALL engine_dosio.cpp_CFileFinder_openSearch_FUN_00465ba0 ; 0047de09
        ;   XREF to: 00465ba0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_CFileFinder_openSearch_FUN_00465ba0(CFileFinder * this_ptr, char * search_pattern)
    ADD ESP,0x8                         ; 0047de0e
    CMP byte ptr [ESP + 0x5f8],0x0      ; 0047de11
    JZ 0x0047de43                       ; 0047de19
        ;   XREF to: 0047de43 (CONDITIONAL_JUMP)  ; LAB_0047de43
    TEST byte ptr [ESP + 0x6f8],0x4     ; 0047de1b
        ;   Label: LAB_0047de1b
    JZ 0x0047e0d1                       ; 0047de23
        ;   XREF to: 0047e0d1 (CONDITIONAL_JUMP)  ; LAB_0047e0d1
    LEA EAX,[ESP + 0x5f8]               ; 0047de29
        ;   Label: LAB_0047de29
    PUSH EAX                            ; 0047de30
    CALL engine_dosio.cpp_CFileFinder_findNext_FUN_00465c20 ; 0047de31
        ;   XREF to: 00465c20 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_CFileFinder_findNext_FUN_00465c20(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 0047de36
    CMP byte ptr [ESP + 0x5f8],0x0      ; 0047de39
    JNZ 0x0047de1b                      ; 0047de41
        ;   XREF to: 0047de1b (CONDITIONAL_JUMP)  ; LAB_0047de1b
    LEA EAX,[ESP + 0x8]                 ; 0047de43
        ;   Label: LAB_0047de43
    PUSH EAX                            ; 0047de47
    CALL shape_edittool.cpp_CStrList_sortAll_FUN_00482390 ; 0047de48
        ;   XREF to: 00482390 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_sortAll_FUN_00482390(CStrList * this_ptr)
    ADD ESP,0x4                         ; 0047de4d
    MOV ESI,0xffffffff                  ; 0047de50
    MOV CL,byte ptr [ESP + 0xc20]       ; 0047de55
    MOV EBP,dword ptr [ESP + 0x8]       ; 0047de5c
    TEST CL,CL                          ; 0047de60
    JZ 0x0047def6                       ; 0047de62
        ;   XREF to: 0047def6 (CONDITIONAL_JUMP)  ; LAB_0047def6
    XOR ESI,ESI                         ; 0047de68
    TEST EBP,EBP                        ; 0047de6a
    JLE 0x0047dee2                      ; 0047de6c
        ;   XREF to: 0047dee2 (CONDITIONAL_JUMP)  ; LAB_0047dee2
    PUSH 0x0                            ; 0047de6e
        ;   Label: LAB_0047de6e
    PUSH ESI                            ; 0047de70
    LEA EAX,[ESP + 0x152c]              ; 0047de71
    PUSH EAX                            ; 0047de78
    LEA EAX,[ESP + 0x14]                ; 0047de79
    PUSH EAX                            ; 0047de7d
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_00482450 ; 0047de7e
        ;   XREF to: 00482450 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_getFieldAt_FUN_00482450(CStrList * this_ptr, char * output_buffer, int string_index, int field_number)
    ADD ESP,0x10                        ; 0047de83
    PUSH 0x1                            ; 0047de86
    PUSH ESI                            ; 0047de88
    LEA EAX,[ESP + 0x192c]              ; 0047de89
    PUSH EAX                            ; 0047de90
    LEA EAX,[ESP + 0x14]                ; 0047de91
    PUSH EAX                            ; 0047de95
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_00482450 ; 0047de96
        ;   XREF to: 00482450 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_getFieldAt_FUN_00482450(CStrList * this_ptr, char * output_buffer, int string_index, int field_number)
    ADD ESP,0x10                        ; 0047de9b
    LEA EAX,[ESP + 0x1924]              ; 0047de9e
    PUSH EAX                            ; 0047dea5
    LEA EAX,[ESP + 0x1528]              ; 0047dea6
    PUSH EAX                            ; 0047dead
    PUSH 0x0                            ; 0047deae
    PUSH 0x0                            ; 0047deb0
    LEA EAX,[ESP + 0x924]               ; 0047deb2
    PUSH EAX                            ; 0047deb9
    CALL engine_dosio.cpp_FUN_00465e80  ; 0047deba
        ;   XREF to: 00465e80 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_00465e80(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0047debf
    LEA EAX,[ESP + 0xc20]               ; 0047dec2
    PUSH EAX                            ; 0047dec9
    LEA EAX,[ESP + 0x918]               ; 0047deca
    PUSH EAX                            ; 0047ded1
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0047ded2
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0047ded7
    TEST EAX,EAX                        ; 0047deda
    JNZ 0x0047e1b0                      ; 0047dedc
        ;   XREF to: 0047e1b0 (CONDITIONAL_JUMP)  ; LAB_0047e1b0
    CMP ESI,dword ptr [ESP + 0x8]       ; 0047dee2
        ;   Label: LAB_0047dee2
    JL 0x0047deed                       ; 0047dee6
        ;   XREF to: 0047deed (CONDITIONAL_JUMP)  ; LAB_0047deed
    MOV ESI,0xffffffff                  ; 0047dee8
    XOR AH,AH                           ; 0047deed
        ;   Label: LAB_0047deed
    MOV byte ptr [ESP + 0xc20],AH       ; 0047deef
    PUSH 0x5bcf1d                       ; 0047def6
        ;   Label: LAB_0047def6
    LEA EAX,[ESP + 0x5fc]               ; 0047defb
    PUSH EAX                            ; 0047df02
    CALL engine_dosio.cpp_CFileFinder_openSearch_FUN_00465ba0 ; 0047df03
        ;   XREF to: 00465ba0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_CFileFinder_openSearch_FUN_00465ba0(CFileFinder * this_ptr, char * search_pattern)
    ADD ESP,0x8                         ; 0047df08
    CMP byte ptr [ESP + 0x5f8],0x0      ; 0047df0b
    JZ 0x0047df68                       ; 0047df13
        ;   XREF to: 0047df68 (CONDITIONAL_JUMP)  ; LAB_0047df68
    TEST byte ptr [ESP + 0x6f8],0x4     ; 0047df15
        ;   Label: LAB_0047df15
    JZ 0x0047df4e                       ; 0047df1d
        ;   XREF to: 0047df4e (CONDITIONAL_JUMP)  ; LAB_0047df4e
    PUSH 0x5bcf21                       ; 0047df1f
    LEA EAX,[ESP + 0x5fc]               ; 0047df24
    PUSH EAX                            ; 0047df2b
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 0047df2c
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 0047df31
    TEST EAX,EAX                        ; 0047df34
    JNZ 0x0047e1c2                      ; 0047df36
        ;   XREF to: 0047e1c2 (CONDITIONAL_JUMP)  ; LAB_0047e1c2
    PUSH 0x5bcf24                       ; 0047df3c
    LEA EAX,[ESP + 0xc]                 ; 0047df41
        ;   Label: LAB_0047df41
    PUSH EAX                            ; 0047df45
    CALL shape_edittool.cpp_CStrList_add_FUN_00482070 ; 0047df46
        ;   XREF to: 00482070 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00482070(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0047df4b
    LEA EAX,[ESP + 0x5f8]               ; 0047df4e
        ;   Label: LAB_0047df4e
    PUSH EAX                            ; 0047df55
    CALL engine_dosio.cpp_CFileFinder_findNext_FUN_00465c20 ; 0047df56
        ;   XREF to: 00465c20 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_CFileFinder_findNext_FUN_00465c20(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 0047df5b
    CMP byte ptr [ESP + 0x5f8],0x0      ; 0047df5e
    JNZ 0x0047df15                      ; 0047df66
        ;   XREF to: 0047df15 (CONDITIONAL_JUMP)  ; LAB_0047df15
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047df68
        ;   Label: LAB_0047df68
    DEC EAX                             ; 0047df6c
    PUSH EAX                            ; 0047df6d
    PUSH EBP                            ; 0047df6e
    LEA EAX,[ESP + 0x10]                ; 0047df6f
    PUSH EAX                            ; 0047df73
    CALL shape_edittool.cpp_FUN_00484f80 ; 0047df74
        ;   XREF to: 00484f80 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00484f80()
    ADD ESP,0xc                         ; 0047df79
    PUSH 0x5bcf3c                       ; 0047df7c
    LEA EAX,[ESP + 0xc]                 ; 0047df81
    PUSH EAX                            ; 0047df85
    CALL shape_edittool.cpp_CStrList_add_FUN_00482070 ; 0047df86
        ;   XREF to: 00482070 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00482070(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0047df8b
    PUSH 0x0                            ; 0047df8e
    PUSH ESI                            ; 0047df90
    LEA EAX,[ESP + 0x3d0]               ; 0047df91
    PUSH EAX                            ; 0047df98
    LEA EAX,[ESP + 0x14]                ; 0047df99
    PUSH EAX                            ; 0047df9d
    CALL shape_edittool.cpp_FUN_00483450 ; 0047df9e
        ;   XREF to: 00483450 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_00483450(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    MOV ESI,EAX                         ; 0047dfa3
    ADD ESP,0x10                        ; 0047dfa5
    TEST EAX,EAX                        ; 0047dfa8
    JL 0x0047e279                       ; 0047dfaa
        ;   XREF to: 0047e279 (CONDITIONAL_JUMP)  ; LAB_0047e279
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047dfb0
    DEC EAX                             ; 0047dfb4
    CMP ESI,EAX                         ; 0047dfb5
    JL 0x0047e2ff                       ; 0047dfb7
        ;   XREF to: 0047e2ff (CONDITIONAL_JUMP)  ; LAB_0047e2ff
    MOV ECX,0x41                        ; 0047dfbd
    LEA EDI,[ESP + 0x810]               ; 0047dfc2
    MOV ESI,0x5fb360                    ; 0047dfc9
    MOVSD.REP ES:EDI,ESI                ; 0047dfce
    PUSH 0x1                            ; 0047dfd0
        ;   Label: LAB_0047dfd0
    PUSH 0x104                          ; 0047dfd2
    LEA EAX,[ESP + 0x818]               ; 0047dfd7
    PUSH EAX                            ; 0047dfde
    PUSH 0x5bcf4a                       ; 0047dfdf
    PUSH EBX                            ; 0047dfe4
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_0047ecf0 ; 0047dfe5
        ;   XREF to: 0047ecf0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_0047ecf0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 0047dfea
    TEST EAX,EAX                        ; 0047dfed
    JNZ 0x0047e2bc                      ; 0047dfef
        ;   XREF to: 0047e2bc (CONDITIONAL_JUMP)  ; LAB_0047e2bc
    PUSH 0x0                            ; 0047dff5
        ;   Label: LAB_0047dff5
    LEA EAX,[ESP + 0x5fc]               ; 0047dff7
    PUSH EAX                            ; 0047dffe
    CALL engine_dosio.cpp_CFileFinder_dtor_FUN_00465b80 ; 0047dfff
        ;   XREF to: 00465b80 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.cpp_CFileFinder_dtor_FUN_00465b80(CFileFinder * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0047e004
    PUSH 0x0                            ; 0047e007
    LEA EAX,[ESP + 0xc]                 ; 0047e009
    PUSH EAX                            ; 0047e00d
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004832b0 ; 0047e00e
        ;   XREF to: 004832b0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004832b0(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0047e013
    JMP 0x0047dd7a                      ; 0047e016
        ;   XREF to: 0047dd7a (UNCONDITIONAL_JUMP)  ; LAB_0047dd7a
    PUSH 0x5bced1                       ; 0047e01b
        ;   Label: LAB_0047e01b
    PUSH EBX                            ; 0047e020
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40 ; 0047e021
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0047e026
    XOR EAX,EAX                         ; 0047e029
    ADD ESP,0x1ed8                      ; 0047e02b
    POP EBP                             ; 0047e031
    POP EBX                             ; 0047e032
    RET                                 ; 0047e033
    LEA EAX,[ESP + 0x1b24]              ; 0047e034
        ;   Label: LAB_0047e034
    PUSH EAX                            ; 0047e03b
    LEA EAX,[ESP + 0x1028]              ; 0047e03c
    PUSH EAX                            ; 0047e043
    LEA EAX,[ESP + 0x132c]              ; 0047e044
    PUSH EAX                            ; 0047e04b
    LEA EAX,[ESP + 0x1ee8]              ; 0047e04c
    PUSH EAX                            ; 0047e053
    MOV EDX,dword ptr [ESP + 0x1f08]    ; 0047e054
    PUSH EDX                            ; 0047e05b
    CALL engine_dosio.cpp_FUN_00465e50  ; 0047e05c
        ;   XREF to: 00465e50 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_00465e50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0047e061
    PUSH 0x0                            ; 0047e064
    PUSH 0x0                            ; 0047e066
    LEA EAX,[ESP + 0x132c]              ; 0047e068
    PUSH EAX                            ; 0047e06f
    LEA EAX,[ESP + 0x1ee8]              ; 0047e070
    PUSH EAX                            ; 0047e077
    LEA EAX,[ESP + 0xb2c]               ; 0047e078
    PUSH EAX                            ; 0047e07f
    CALL engine_dosio.cpp_FUN_00465e80  ; 0047e080
        ;   XREF to: 00465e80 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_00465e80(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0047e085
    LEA EAX,[ESP + 0xb1c]               ; 0047e088
    PUSH EAX                            ; 0047e08f
    CALL crt_unknown.c_FUN_005a55b0     ; 0047e090
        ;   XREF to: 005a55b0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a55b0()
    ADD ESP,0x4                         ; 0047e095
    LEA EAX,[ESP + 0x1b24]              ; 0047e098
    PUSH EAX                            ; 0047e09f
    LEA EAX,[ESP + 0x1028]              ; 0047e0a0
    PUSH EAX                            ; 0047e0a7
    PUSH 0x0                            ; 0047e0a8
    PUSH 0x0                            ; 0047e0aa
    LEA EAX,[ESP + 0xc30]               ; 0047e0ac
    PUSH EAX                            ; 0047e0b3
    CALL engine_dosio.cpp_FUN_00465e80  ; 0047e0b4
        ;   XREF to: 00465e80 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_00465e80(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0047e0b9
    LEA EAX,[ESP + 0xc20]               ; 0047e0bc
    PUSH EAX                            ; 0047e0c3
    CALL crt_unknown.c_FUN_005a55b0     ; 0047e0c4
        ;   XREF to: 005a55b0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a55b0()
    ADD ESP,0x4                         ; 0047e0c9
    JMP 0x0047dd71                      ; 0047e0cc
        ;   XREF to: 0047dd71 (UNCONDITIONAL_JUMP)  ; LAB_0047dd71
    LEA EAX,[ESP + 0x1a24]              ; 0047e0d1
        ;   Label: LAB_0047e0d1
    PUSH EAX                            ; 0047e0d8
    LEA EAX,[ESP + 0x1128]              ; 0047e0d9
    PUSH EAX                            ; 0047e0e0
    PUSH 0x0                            ; 0047e0e1
    PUSH 0x0                            ; 0047e0e3
    LEA EAX,[ESP + 0x608]               ; 0047e0e5
    PUSH EAX                            ; 0047e0ec
    CALL engine_dosio.cpp_FUN_00465e50  ; 0047e0ed
        ;   XREF to: 00465e50 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_00465e50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0047e0f2
    CMP byte ptr [ESP + 0x1a24],0x2e    ; 0047e0f5
    JNZ 0x0047e129                      ; 0047e0fd
        ;   XREF to: 0047e129 (CONDITIONAL_JUMP)  ; LAB_0047e129
    LEA EDI,[ESP + 0x1a24]              ; 0047e0ff
    SUB ECX,ECX                         ; 0047e106
    DEC ECX                             ; 0047e108
    XOR EAX,EAX                         ; 0047e109
    SCASB.REPNE ES:EDI                  ; 0047e10b
    NOT ECX                             ; 0047e10d
    DEC ECX                             ; 0047e10f
    PUSH ECX                            ; 0047e110
    LEA EAX,[ESP + 0x1a29]              ; 0047e111
    PUSH EAX                            ; 0047e118
    LEA EAX,[ESP + 0x1a2c]              ; 0047e119
    PUSH EAX                            ; 0047e120
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0047e121
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0047e126
    LEA EAX,[ESP + 0x700]               ; 0047e129
        ;   Label: LAB_0047e129
    PUSH EAX                            ; 0047e130
    CALL crt_time.c__localtime_FUN_005a5628 ; 0047e131
        ;   XREF to: 005a5628 (UNCONDITIONAL_CALL)  ; undefined crt_time.c__localtime_FUN_005a5628()
    ADD ESP,0x4                         ; 0047e136
    PUSH EAX                            ; 0047e139
    PUSH 0x5bcefc                       ; 0047e13a
    PUSH 0x1e                           ; 0047e13f
    LEA EAX,[ESP + 0x1ec0]              ; 0047e141
    PUSH EAX                            ; 0047e148
    CALL crt_time.c__strftime_FUN_005a5674 ; 0047e149
        ;   XREF to: 005a5674 (UNCONDITIONAL_CALL)  ; undefined crt_time.c__strftime_FUN_005a5674()
    ADD ESP,0x10                        ; 0047e14e
    LEA EAX,[ESP + 0x1eb4]              ; 0047e151
    PUSH EAX                            ; 0047e158
    MOV ECX,dword ptr [ESP + 0x700]     ; 0047e159
    PUSH ECX                            ; 0047e160
    LEA EAX,[ESP + 0x1a2c]              ; 0047e161
    PUSH EAX                            ; 0047e168
    LEA EAX,[ESP + 0x1130]              ; 0047e169
    PUSH EAX                            ; 0047e170
    PUSH 0x5bcf12                       ; 0047e171
    LEA EAX,[ESP + 0x1e00]              ; 0047e176
    PUSH EAX                            ; 0047e17d
    CALL crt_unknown.c_FUN_005a28c0     ; 0047e17e
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x18                        ; 0047e183
    LEA EAX,[ESP + 0x1dec]              ; 0047e186
    PUSH EAX                            ; 0047e18d
    CALL crt_string.c_strupr_FUN_005a5b10 ; 0047e18e
        ;   XREF to: 005a5b10 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strupr_FUN_005a5b10(char * string)
    ADD ESP,0x4                         ; 0047e193
    LEA EAX,[ESP + 0x1dec]              ; 0047e196
    PUSH EAX                            ; 0047e19d
    LEA EAX,[ESP + 0xc]                 ; 0047e19e
    PUSH EAX                            ; 0047e1a2
    CALL shape_edittool.cpp_CStrList_add_FUN_00482070 ; 0047e1a3
        ;   XREF to: 00482070 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00482070(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0047e1a8
    JMP 0x0047de29                      ; 0047e1ab
        ;   XREF to: 0047de29 (UNCONDITIONAL_JUMP)  ; LAB_0047de29
    MOV EDI,dword ptr [ESP + 0x8]       ; 0047e1b0
        ;   Label: LAB_0047e1b0
    INC ESI                             ; 0047e1b4
    CMP ESI,EDI                         ; 0047e1b5
    JL 0x0047de6e                       ; 0047e1b7
        ;   XREF to: 0047de6e (CONDITIONAL_JUMP)  ; LAB_0047de6e
    JMP 0x0047dee2                      ; 0047e1bd
        ;   XREF to: 0047dee2 (UNCONDITIONAL_JUMP)  ; LAB_0047dee2
    PUSH 0x5bcf2e                       ; 0047e1c2
        ;   Label: LAB_0047e1c2
    LEA EAX,[ESP + 0x5fc]               ; 0047e1c7
    PUSH EAX                            ; 0047e1ce
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 0047e1cf
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 0047e1d4
    TEST EAX,EAX                        ; 0047e1d7
    JZ 0x0047df4e                       ; 0047e1d9
        ;   XREF to: 0047df4e (CONDITIONAL_JUMP)  ; LAB_0047df4e
    LEA EAX,[ESP + 0x1824]              ; 0047e1df
    PUSH EAX                            ; 0047e1e6
    LEA EAX,[ESP + 0x1428]              ; 0047e1e7
    PUSH EAX                            ; 0047e1ee
    PUSH 0x0                            ; 0047e1ef
    PUSH 0x0                            ; 0047e1f1
    LEA EAX,[ESP + 0x608]               ; 0047e1f3
    PUSH EAX                            ; 0047e1fa
    CALL engine_dosio.cpp_FUN_00465e50  ; 0047e1fb
        ;   XREF to: 00465e50 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_00465e50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0047e200
    CMP byte ptr [ESP + 0x1824],0x2e    ; 0047e203
    JNZ 0x0047e237                      ; 0047e20b
        ;   XREF to: 0047e237 (CONDITIONAL_JUMP)  ; LAB_0047e237
    LEA EDI,[ESP + 0x1824]              ; 0047e20d
    SUB ECX,ECX                         ; 0047e214
    DEC ECX                             ; 0047e216
    XOR EAX,EAX                         ; 0047e217
    SCASB.REPNE ES:EDI                  ; 0047e219
    NOT ECX                             ; 0047e21b
    DEC ECX                             ; 0047e21d
    PUSH ECX                            ; 0047e21e
    LEA EAX,[ESP + 0x1829]              ; 0047e21f
    PUSH EAX                            ; 0047e226
    LEA EAX,[ESP + 0x182c]              ; 0047e227
    PUSH EAX                            ; 0047e22e
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0047e22f
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0047e234
    LEA EAX,[ESP + 0x1824]              ; 0047e237
        ;   Label: LAB_0047e237
    PUSH EAX                            ; 0047e23e
    LEA EAX,[ESP + 0x1428]              ; 0047e23f
    PUSH EAX                            ; 0047e246
    PUSH 0x5bcf30                       ; 0047e247
    LEA EAX,[ESP + 0x1d30]              ; 0047e24c
    PUSH EAX                            ; 0047e253
    CALL crt_unknown.c_FUN_005a28c0     ; 0047e254
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 0047e259
    LEA EAX,[ESP + 0x1d24]              ; 0047e25c
    PUSH EAX                            ; 0047e263
    CALL crt_string.c_strupr_FUN_005a5b10 ; 0047e264
        ;   XREF to: 005a5b10 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strupr_FUN_005a5b10(char * string)
    ADD ESP,0x4                         ; 0047e269
    LEA EAX,[ESP + 0x1d24]              ; 0047e26c
    PUSH EAX                            ; 0047e273
    JMP 0x0047df41                      ; 0047e274
        ;   XREF to: 0047df41 (UNCONDITIONAL_JUMP)  ; LAB_0047df41
    PUSH 0x0                            ; 0047e279
        ;   Label: LAB_0047e279
    LEA EAX,[ESP + 0x5fc]               ; 0047e27b
    PUSH EAX                            ; 0047e282
    CALL engine_dosio.cpp_CFileFinder_dtor_FUN_00465b80 ; 0047e283
        ;   XREF to: 00465b80 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.cpp_CFileFinder_dtor_FUN_00465b80(CFileFinder * this_ptr, uint flags)
        ;   Label: LAB_0047e283
    ADD ESP,0x8                         ; 0047e288
    PUSH 0x0                            ; 0047e28b
    LEA EAX,[ESP + 0xc]                 ; 0047e28d
    PUSH EAX                            ; 0047e291
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004832b0 ; 0047e292
        ;   XREF to: 004832b0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004832b0(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0047e297
    LEA EAX,[ESP + 0xa18]               ; 0047e29a
    PUSH EAX                            ; 0047e2a1
    CALL crt_unknown.c_FUN_005a55b0     ; 0047e2a2
        ;   XREF to: 005a55b0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a55b0()
    ADD ESP,0x4                         ; 0047e2a7
    MOV EAX,dword ptr [ESP + 0x1ed4]    ; 0047e2aa
    POP ESI                             ; 0047e2b1
    POP EDI                             ; 0047e2b2
    ADD ESP,0x1ed8                      ; 0047e2b3
    POP EBP                             ; 0047e2b9
    POP EBX                             ; 0047e2ba
    RET                                 ; 0047e2bb
    LEA EAX,[ESP + 0x810]               ; 0047e2bc
        ;   Label: LAB_0047e2bc
    PUSH EAX                            ; 0047e2c3
    CALL crt_unknown.c_FUN_005a55b0     ; 0047e2c4
        ;   XREF to: 005a55b0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a55b0()
    ADD ESP,0x4                         ; 0047e2c9
    TEST EAX,EAX                        ; 0047e2cc
    JZ 0x0047dff5                       ; 0047e2ce
        ;   XREF to: 0047dff5 (CONDITIONAL_JUMP)  ; LAB_0047dff5
    LEA EAX,[ESP + 0x810]               ; 0047e2d4
    PUSH EAX                            ; 0047e2db
    PUSH 0x5bcf59                       ; 0047e2dc
    PUSH EBX                            ; 0047e2e1
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40 ; 0047e2e2
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 0047e2e7
    LEA EAX,[ESP + 0x70c]               ; 0047e2ea
    PUSH EAX                            ; 0047e2f1
    CALL crt_unknown.c_FUN_005a55b0     ; 0047e2f2
        ;   XREF to: 005a55b0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a55b0()
    ADD ESP,0x4                         ; 0047e2f7
    JMP 0x0047dfd0                      ; 0047e2fa
        ;   XREF to: 0047dfd0 (UNCONDITIONAL_JUMP)  ; LAB_0047dfd0
    CMP ESI,EBP                         ; 0047e2ff
        ;   Label: LAB_0047e2ff
    JL 0x0047e391                       ; 0047e301
        ;   XREF to: 0047e391 (CONDITIONAL_JUMP)  ; LAB_0047e391
    PUSH 0x0                            ; 0047e307
    PUSH ESI                            ; 0047e309
    LEA EAX,[ESP + 0xe2c]               ; 0047e30a
    PUSH EAX                            ; 0047e311
    LEA EAX,[ESP + 0x14]                ; 0047e312
    PUSH EAX                            ; 0047e316
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_00482450 ; 0047e317
        ;   XREF to: 00482450 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_getFieldAt_FUN_00482450(CStrList * this_ptr, char * output_buffer, int string_index, int field_number)
    ADD ESP,0x10                        ; 0047e31c
    PUSH 0x1                            ; 0047e31f
    PUSH ESI                            ; 0047e321
    LEA EAX,[ESP + 0xd2c]               ; 0047e322
    PUSH EAX                            ; 0047e329
    LEA EAX,[ESP + 0x14]                ; 0047e32a
    PUSH EAX                            ; 0047e32e
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_00482450 ; 0047e32f
        ;   XREF to: 00482450 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_getFieldAt_FUN_00482450(CStrList * this_ptr, char * output_buffer, int string_index, int field_number)
    ADD ESP,0x10                        ; 0047e334
    LEA EAX,[ESP + 0xd24]               ; 0047e337
    PUSH EAX                            ; 0047e33e
    LEA EAX,[ESP + 0xe28]               ; 0047e33f
    PUSH EAX                            ; 0047e346
    PUSH 0x0                            ; 0047e347
    PUSH 0x0                            ; 0047e349
    LEA EAX,[ESP + 0xf34]               ; 0047e34b
    PUSH EAX                            ; 0047e352
    CALL engine_dosio.cpp_FUN_00465e80  ; 0047e353
        ;   XREF to: 00465e80 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_00465e80(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0047e358
    LEA EAX,[ESP + 0xf24]               ; 0047e35b
    PUSH EAX                            ; 0047e362
    CALL crt_unknown.c_FUN_005a55b0     ; 0047e363
        ;   XREF to: 005a55b0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a55b0()
    ADD ESP,0x4                         ; 0047e368
    PUSH 0x0                            ; 0047e36b
    LEA EAX,[ESP + 0x5fc]               ; 0047e36d
    PUSH EAX                            ; 0047e374
    CALL engine_dosio.cpp_CFileFinder_dtor_FUN_00465b80 ; 0047e375
        ;   XREF to: 00465b80 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.cpp_CFileFinder_dtor_FUN_00465b80(CFileFinder * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0047e37a
    PUSH 0x0                            ; 0047e37d
    LEA EAX,[ESP + 0xc]                 ; 0047e37f
    PUSH EAX                            ; 0047e383
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004832b0 ; 0047e384
        ;   XREF to: 004832b0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004832b0(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0047e389
    JMP 0x0047dd7a                      ; 0047e38c
        ;   XREF to: 0047dd7a (UNCONDITIONAL_JUMP)  ; LAB_0047dd7a
    LEA EAX,[ESP + 0x1c24]              ; 0047e391
        ;   Label: LAB_0047e391
    PUSH EAX                            ; 0047e398
    LEA EAX,[ESP + 0x1228]              ; 0047e399
    PUSH EAX                            ; 0047e3a0
    LEA EAX,[ESP + 0x172c]              ; 0047e3a1
    PUSH EAX                            ; 0047e3a8
    LEA EAX,[ESP + 0x1ee4]              ; 0047e3a9
    PUSH EAX                            ; 0047e3b0
    LEA EAX,[ESP + 0x71c]               ; 0047e3b1
    PUSH EAX                            ; 0047e3b8
    CALL engine_dosio.cpp_FUN_00465e50  ; 0047e3b9
        ;   XREF to: 00465e50 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_00465e50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0047e3be
    LEA EAX,[ESP + 0x1c24]              ; 0047e3c1
    PUSH EAX                            ; 0047e3c8
    LEA EAX,[ESP + 0x1228]              ; 0047e3c9
    PUSH EAX                            ; 0047e3d0
    LEA EAX,[ESP + 0x172c]              ; 0047e3d1
    PUSH EAX                            ; 0047e3d8
    PUSH 0x0                            ; 0047e3d9
    LEA EAX,[ESP + 0x1634]              ; 0047e3db
    PUSH EAX                            ; 0047e3e2
    CALL engine_dosio.cpp_FUN_00465e80  ; 0047e3e3
        ;   XREF to: 00465e80 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_00465e80(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0047e3e8
    PUSH 0x0                            ; 0047e3eb
    PUSH ESI                            ; 0047e3ed
    LEA EAX,[ESP + 0x122c]              ; 0047e3ee
    PUSH EAX                            ; 0047e3f5
    LEA EAX,[ESP + 0x14]                ; 0047e3f6
    PUSH EAX                            ; 0047e3fa
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_00482450 ; 0047e3fb
        ;   XREF to: 00482450 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_getFieldAt_FUN_00482450(CStrList * this_ptr, char * output_buffer, int string_index, int field_number)
    ADD ESP,0x10                        ; 0047e400
    PUSH 0x1                            ; 0047e403
    PUSH ESI                            ; 0047e405
    LEA EAX,[ESP + 0x1c2c]              ; 0047e406
    PUSH EAX                            ; 0047e40d
    LEA EAX,[ESP + 0x14]                ; 0047e40e
    PUSH EAX                            ; 0047e412
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_00482450 ; 0047e413
        ;   XREF to: 00482450 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_getFieldAt_FUN_00482450(CStrList * this_ptr, char * output_buffer, int string_index, int field_number)
    ADD ESP,0x10                        ; 0047e418
    LEA EAX,[ESP + 0x1c24]              ; 0047e41b
    PUSH EAX                            ; 0047e422
    LEA EAX,[ESP + 0x1228]              ; 0047e423
    PUSH EAX                            ; 0047e42a
    LEA EAX,[ESP + 0x162c]              ; 0047e42b
    PUSH EAX                            ; 0047e432
    LEA EAX,[ESP + 0x1ee4]              ; 0047e433
    PUSH EAX                            ; 0047e43a
    MOV EDX,dword ptr [ESP + 0x1f08]    ; 0047e43b
    PUSH EDX                            ; 0047e442
    CALL engine_dosio.cpp_FUN_00465e80  ; 0047e443
        ;   XREF to: 00465e80 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_00465e80(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0047e448
    PUSH 0x0                            ; 0047e44b
    LEA EAX,[ESP + 0x5fc]               ; 0047e44d
    MOV ECX,0x1                         ; 0047e454
    PUSH EAX                            ; 0047e459
    MOV dword ptr [ESP + 0x1edc],ECX    ; 0047e45a
    JMP 0x0047e283                      ; 0047e461
        ;   XREF to: 0047e283 (UNCONDITIONAL_JUMP)  ; LAB_0047e283

