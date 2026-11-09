; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 shape_edittool_cpp_FUN_0047cb1e(CEditorTools *param_1,undefined4 param_2,char *param_3,char *param_4,byte param_5)
;
;
; Called Functions:
;   crt_string.c__strcmp_FUN_005b8c30
;   crt_string.c__stricmp_FUN_005b8130
;   crt_string.c_memmove_FUN_005ba1f0
;   crt_string.c_strupr_FUN_005ba840
;   crt_time.c__localtime_FUN_005ba358
;   crt_time.c__strftime_FUN_005ba3a4
;   crt_unknown.c_FUN_005b7790
;   crt_unknown.c_FUN_005ba2ce
;   crt_unknown.c_FUN_005ba2e0
;   engine_dosio.cpp_CFileFinder_ctor_FUN_00460e10
;   engine_dosio.cpp_CFileFinder_dtor_FUN_00460e30
;   engine_dosio.cpp_CFileFinder_findNext_FUN_00460ed0
;   engine_dosio.cpp_CFileFinder_openSearch_FUN_00460e50
;   engine_dosio.cpp_FUN_00461070
;   engine_dosio.cpp_FUN_004610a0
;   ... and 9 more
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 0047cb1e
        ;   Label: shape_edittool.cpp_FUN_0047cb1e
    PUSH EBX                            ; 0047cb20
    PUSH EBP                            ; 0047cb21
    SUB ESP,0x1ed8                      ; 0047cb22
    MOV EBX,dword ptr [ESP + 0x1ee4]    ; 0047cb28
    PUSH 0x104                          ; 0047cb2f
    LEA EAX,[ESP + 0xa14]               ; 0047cb34
    PUSH EAX                            ; 0047cb3b
    CALL crt_unknown.c_FUN_005ba2ce     ; 0047cb3c
        ;   XREF to: 005ba2ce (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ba2ce()
    ADD ESP,0x8                         ; 0047cb41
    TEST EAX,EAX                        ; 0047cb44
    JZ 0x0047ce1b                       ; 0047cb46
        ;   XREF to: 0047ce1b (CONDITIONAL_JUMP)  ; LAB_0047ce1b
    PUSH EDI                            ; 0047cb4c
    PUSH ESI                            ; 0047cb4d
    MOV ECX,0x41                        ; 0047cb4e
    LEA EDI,[ESP + 0xc20]               ; 0047cb53
    MOV ESI,0x6138f0                    ; 0047cb5a
    MOV AH,byte ptr [ESP + 0x1efc]      ; 0047cb5f
    MOVSD.REP ES:EDI,ESI                ; 0047cb66
    TEST AH,0x1                         ; 0047cb68
    JNZ 0x0047ce34                      ; 0047cb6b
        ;   XREF to: 0047ce34 (CONDITIONAL_JUMP)  ; LAB_0047ce34
    XOR ECX,ECX                         ; 0047cb71
        ;   Label: LAB_0047cb71
    MOV dword ptr [ESP + 0x1ed4],ECX    ; 0047cb73
    MOV ECX,0x41                        ; 0047cb7a
        ;   Label: LAB_0047cb7a
    LEA EDI,[ESP + 0x70c]               ; 0047cb7f
    PUSH 0x104                          ; 0047cb86
    LEA EAX,[ESP + 0x710]               ; 0047cb8b
    MOV ESI,0x6139f8                    ; 0047cb92
    PUSH EAX                            ; 0047cb97
    MOVSD.REP ES:EDI,ESI                ; 0047cb98
    CALL crt_unknown.c_FUN_005ba2ce     ; 0047cb9a
        ;   XREF to: 005ba2ce (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ba2ce()
    ADD ESP,0x8                         ; 0047cb9f
    LEA EAX,[ESP + 0x70c]               ; 0047cba2
    PUSH EAX                            ; 0047cba9
    MOV ESI,dword ptr [ESP + 0x1ef4]    ; 0047cbaa
    PUSH ESI                            ; 0047cbb1
    PUSH 0x5d2097                       ; 0047cbb2
    LEA EAX,[ESP + 0x3d4]               ; 0047cbb7
    PUSH EAX                            ; 0047cbbe
    CALL crt_unknown.c_FUN_005b7790     ; 0047cbbf
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x10                        ; 0047cbc4
    LEA EAX,[ESP + 0x8]                 ; 0047cbc7
    PUSH EAX                            ; 0047cbcb
    CALL shape_edittool.cpp_CPickList_ctor_FUN_00481fc0 ; 0047cbcc
        ;   XREF to: 00481fc0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_00481fc0(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0047cbd1
    LEA EAX,[ESP + 0x5f8]               ; 0047cbd4
    PUSH EAX                            ; 0047cbdb
    CALL engine_dosio.cpp_CFileFinder_ctor_FUN_00460e10 ; 0047cbdc
        ;   XREF to: 00460e10 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.cpp_CFileFinder_ctor_FUN_00460e10(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 0047cbe1
    CMP dword ptr [ESP + 0x1ef4],0x0    ; 0047cbe4
    JNZ 0x0047cbf9                      ; 0047cbec
        ;   XREF to: 0047cbf9 (CONDITIONAL_JUMP)  ; LAB_0047cbf9
    MOV dword ptr [ESP + 0x1ef4],0x5d209d ; 0047cbee
    MOV EAX,dword ptr [ESP + 0x1ef4]    ; 0047cbf9
        ;   Label: LAB_0047cbf9
    PUSH EAX                            ; 0047cc00
    LEA EAX,[ESP + 0x5fc]               ; 0047cc01
    PUSH EAX                            ; 0047cc08
    CALL engine_dosio.cpp_CFileFinder_openSearch_FUN_00460e50 ; 0047cc09
        ;   XREF to: 00460e50 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_CFileFinder_openSearch_FUN_00460e50(CFileFinder * this_ptr, char * search_pattern)
    ADD ESP,0x8                         ; 0047cc0e
    CMP byte ptr [ESP + 0x5f8],0x0      ; 0047cc11
    JZ 0x0047cc43                       ; 0047cc19
        ;   XREF to: 0047cc43 (CONDITIONAL_JUMP)  ; LAB_0047cc43
    TEST byte ptr [ESP + 0x6f8],0x4     ; 0047cc1b
        ;   Label: LAB_0047cc1b
    JZ 0x0047ced1                       ; 0047cc23
        ;   XREF to: 0047ced1 (CONDITIONAL_JUMP)  ; LAB_0047ced1
    LEA EAX,[ESP + 0x5f8]               ; 0047cc29
        ;   Label: LAB_0047cc29
    PUSH EAX                            ; 0047cc30
    CALL engine_dosio.cpp_CFileFinder_findNext_FUN_00460ed0 ; 0047cc31
        ;   XREF to: 00460ed0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_CFileFinder_findNext_FUN_00460ed0(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 0047cc36
    CMP byte ptr [ESP + 0x5f8],0x0      ; 0047cc39
    JNZ 0x0047cc1b                      ; 0047cc41
        ;   XREF to: 0047cc1b (CONDITIONAL_JUMP)  ; LAB_0047cc1b
    LEA EAX,[ESP + 0x8]                 ; 0047cc43
        ;   Label: LAB_0047cc43
    PUSH EAX                            ; 0047cc47
    CALL shape_edittool.cpp_CStrList_sortAll_FUN_00481190 ; 0047cc48
        ;   XREF to: 00481190 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_sortAll_FUN_00481190(CStrList * this_ptr)
    ADD ESP,0x4                         ; 0047cc4d
    MOV ESI,0xffffffff                  ; 0047cc50
    MOV CL,byte ptr [ESP + 0xc20]       ; 0047cc55
    MOV EBP,dword ptr [ESP + 0x8]       ; 0047cc5c
    TEST CL,CL                          ; 0047cc60
    JZ 0x0047ccf6                       ; 0047cc62
        ;   XREF to: 0047ccf6 (CONDITIONAL_JUMP)  ; LAB_0047ccf6
    XOR ESI,ESI                         ; 0047cc68
    TEST EBP,EBP                        ; 0047cc6a
    JLE 0x0047cce2                      ; 0047cc6c
        ;   XREF to: 0047cce2 (CONDITIONAL_JUMP)  ; LAB_0047cce2
    PUSH 0x0                            ; 0047cc6e
        ;   Label: LAB_0047cc6e
    PUSH ESI                            ; 0047cc70
    LEA EAX,[ESP + 0x152c]              ; 0047cc71
    PUSH EAX                            ; 0047cc78
    LEA EAX,[ESP + 0x14]                ; 0047cc79
    PUSH EAX                            ; 0047cc7d
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_00481250 ; 0047cc7e
        ;   XREF to: 00481250 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_getFieldAt_FUN_00481250(CStrList * this_ptr, char * output_buffer, int string_index, int field_number)
    ADD ESP,0x10                        ; 0047cc83
    PUSH 0x1                            ; 0047cc86
    PUSH ESI                            ; 0047cc88
    LEA EAX,[ESP + 0x192c]              ; 0047cc89
    PUSH EAX                            ; 0047cc90
    LEA EAX,[ESP + 0x14]                ; 0047cc91
    PUSH EAX                            ; 0047cc95
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_00481250 ; 0047cc96
        ;   XREF to: 00481250 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_getFieldAt_FUN_00481250(CStrList * this_ptr, char * output_buffer, int string_index, int field_number)
    ADD ESP,0x10                        ; 0047cc9b
    LEA EAX,[ESP + 0x1924]              ; 0047cc9e
    PUSH EAX                            ; 0047cca5
    LEA EAX,[ESP + 0x1528]              ; 0047cca6
    PUSH EAX                            ; 0047ccad
    PUSH 0x0                            ; 0047ccae
    PUSH 0x0                            ; 0047ccb0
    LEA EAX,[ESP + 0x924]               ; 0047ccb2
    PUSH EAX                            ; 0047ccb9
    CALL engine_dosio.cpp_FUN_004610a0  ; 0047ccba
        ;   XREF to: 004610a0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_004610a0(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0047ccbf
    LEA EAX,[ESP + 0xc20]               ; 0047ccc2
    PUSH EAX                            ; 0047ccc9
    LEA EAX,[ESP + 0x918]               ; 0047ccca
    PUSH EAX                            ; 0047ccd1
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0047ccd2
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0047ccd7
    TEST EAX,EAX                        ; 0047ccda
    JNZ 0x0047cfb0                      ; 0047ccdc
        ;   XREF to: 0047cfb0 (CONDITIONAL_JUMP)  ; LAB_0047cfb0
    CMP ESI,dword ptr [ESP + 0x8]       ; 0047cce2
        ;   Label: LAB_0047cce2
    JL 0x0047cced                       ; 0047cce6
        ;   XREF to: 0047cced (CONDITIONAL_JUMP)  ; LAB_0047cced
    MOV ESI,0xffffffff                  ; 0047cce8
    XOR AH,AH                           ; 0047cced
        ;   Label: LAB_0047cced
    MOV byte ptr [ESP + 0xc20],AH       ; 0047ccef
    PUSH 0x5d20c2                       ; 0047ccf6
        ;   Label: LAB_0047ccf6
    LEA EAX,[ESP + 0x5fc]               ; 0047ccfb
    PUSH EAX                            ; 0047cd02
    CALL engine_dosio.cpp_CFileFinder_openSearch_FUN_00460e50 ; 0047cd03
        ;   XREF to: 00460e50 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_CFileFinder_openSearch_FUN_00460e50(CFileFinder * this_ptr, char * search_pattern)
    ADD ESP,0x8                         ; 0047cd08
    CMP byte ptr [ESP + 0x5f8],0x0      ; 0047cd0b
    JZ 0x0047cd68                       ; 0047cd13
        ;   XREF to: 0047cd68 (CONDITIONAL_JUMP)  ; LAB_0047cd68
    TEST byte ptr [ESP + 0x6f8],0x4     ; 0047cd15
        ;   Label: LAB_0047cd15
    JZ 0x0047cd4e                       ; 0047cd1d
        ;   XREF to: 0047cd4e (CONDITIONAL_JUMP)  ; LAB_0047cd4e
    PUSH 0x5d20c6                       ; 0047cd1f
    LEA EAX,[ESP + 0x5fc]               ; 0047cd24
    PUSH EAX                            ; 0047cd2b
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 0047cd2c
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 0047cd31
    TEST EAX,EAX                        ; 0047cd34
    JNZ 0x0047cfc2                      ; 0047cd36
        ;   XREF to: 0047cfc2 (CONDITIONAL_JUMP)  ; LAB_0047cfc2
    PUSH 0x5d20c9                       ; 0047cd3c
    LEA EAX,[ESP + 0xc]                 ; 0047cd41
        ;   Label: LAB_0047cd41
    PUSH EAX                            ; 0047cd45
    CALL shape_edittool.cpp_CStrList_add_FUN_00480e70 ; 0047cd46
        ;   XREF to: 00480e70 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00480e70(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0047cd4b
    LEA EAX,[ESP + 0x5f8]               ; 0047cd4e
        ;   Label: LAB_0047cd4e
    PUSH EAX                            ; 0047cd55
    CALL engine_dosio.cpp_CFileFinder_findNext_FUN_00460ed0 ; 0047cd56
        ;   XREF to: 00460ed0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_CFileFinder_findNext_FUN_00460ed0(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 0047cd5b
    CMP byte ptr [ESP + 0x5f8],0x0      ; 0047cd5e
    JNZ 0x0047cd15                      ; 0047cd66
        ;   XREF to: 0047cd15 (CONDITIONAL_JUMP)  ; LAB_0047cd15
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047cd68
        ;   Label: LAB_0047cd68
    DEC EAX                             ; 0047cd6c
    PUSH EAX                            ; 0047cd6d
    PUSH EBP                            ; 0047cd6e
    LEA EAX,[ESP + 0x10]                ; 0047cd6f
    PUSH EAX                            ; 0047cd73
    CALL shape_edittool.cpp_FUN_00483d80 ; 0047cd74
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00483d80()
    ADD ESP,0xc                         ; 0047cd79
    PUSH 0x5d20e1                       ; 0047cd7c
    LEA EAX,[ESP + 0xc]                 ; 0047cd81
    PUSH EAX                            ; 0047cd85
    CALL shape_edittool.cpp_CStrList_add_FUN_00480e70 ; 0047cd86
        ;   XREF to: 00480e70 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00480e70(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0047cd8b
    PUSH 0x0                            ; 0047cd8e
    PUSH ESI                            ; 0047cd90
    LEA EAX,[ESP + 0x3d0]               ; 0047cd91
    PUSH EAX                            ; 0047cd98
    LEA EAX,[ESP + 0x14]                ; 0047cd99
    PUSH EAX                            ; 0047cd9d
    CALL shape_edittool.cpp_FUN_00482250 ; 0047cd9e
        ;   XREF to: 00482250 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_00482250(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    MOV ESI,EAX                         ; 0047cda3
    ADD ESP,0x10                        ; 0047cda5
    TEST EAX,EAX                        ; 0047cda8
    JL 0x0047d079                       ; 0047cdaa
        ;   XREF to: 0047d079 (CONDITIONAL_JUMP)  ; LAB_0047d079
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047cdb0
    DEC EAX                             ; 0047cdb4
    CMP ESI,EAX                         ; 0047cdb5
    JL 0x0047d0ff                       ; 0047cdb7
        ;   XREF to: 0047d0ff (CONDITIONAL_JUMP)  ; LAB_0047d0ff
    MOV ECX,0x41                        ; 0047cdbd
    LEA EDI,[ESP + 0x810]               ; 0047cdc2
    MOV ESI,0x613b00                    ; 0047cdc9
    MOVSD.REP ES:EDI,ESI                ; 0047cdce
    PUSH 0x1                            ; 0047cdd0
        ;   Label: LAB_0047cdd0
    PUSH 0x104                          ; 0047cdd2
    LEA EAX,[ESP + 0x818]               ; 0047cdd7
    PUSH EAX                            ; 0047cdde
    PUSH 0x5d20ef                       ; 0047cddf
    PUSH EBX                            ; 0047cde4
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_0047dae0 ; 0047cde5
        ;   XREF to: 0047dae0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_0047dae0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 0047cdea
    TEST EAX,EAX                        ; 0047cded
    JNZ 0x0047d0bc                      ; 0047cdef
        ;   XREF to: 0047d0bc (CONDITIONAL_JUMP)  ; LAB_0047d0bc
    PUSH 0x0                            ; 0047cdf5
        ;   Label: LAB_0047cdf5
    LEA EAX,[ESP + 0x5fc]               ; 0047cdf7
    PUSH EAX                            ; 0047cdfe
    CALL engine_dosio.cpp_CFileFinder_dtor_FUN_00460e30 ; 0047cdff
        ;   XREF to: 00460e30 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.cpp_CFileFinder_dtor_FUN_00460e30(CFileFinder * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0047ce04
    PUSH 0x0                            ; 0047ce07
    LEA EAX,[ESP + 0xc]                 ; 0047ce09
    PUSH EAX                            ; 0047ce0d
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004820b0 ; 0047ce0e
        ;   XREF to: 004820b0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004820b0(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0047ce13
    JMP 0x0047cb7a                      ; 0047ce16
        ;   XREF to: 0047cb7a (UNCONDITIONAL_JUMP)  ; LAB_0047cb7a
    PUSH 0x5d2076                       ; 0047ce1b
        ;   Label: LAB_0047ce1b
    PUSH EBX                            ; 0047ce20
    CALL shape_edittool.cpp_FUN_0047be40 ; 0047ce21
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047be40()
    ADD ESP,0x8                         ; 0047ce26
    XOR EAX,EAX                         ; 0047ce29
    ADD ESP,0x1ed8                      ; 0047ce2b
    POP EBP                             ; 0047ce31
    POP EBX                             ; 0047ce32
    RET                                 ; 0047ce33
    LEA EAX,[ESP + 0x1b24]              ; 0047ce34
        ;   Label: LAB_0047ce34
    PUSH EAX                            ; 0047ce3b
    LEA EAX,[ESP + 0x1028]              ; 0047ce3c
    PUSH EAX                            ; 0047ce43
    LEA EAX,[ESP + 0x132c]              ; 0047ce44
    PUSH EAX                            ; 0047ce4b
    LEA EAX,[ESP + 0x1ee8]              ; 0047ce4c
    PUSH EAX                            ; 0047ce53
    MOV EDX,dword ptr [ESP + 0x1f08]    ; 0047ce54
    PUSH EDX                            ; 0047ce5b
    CALL engine_dosio.cpp_FUN_00461070  ; 0047ce5c
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_00461070(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0047ce61
    PUSH 0x0                            ; 0047ce64
    PUSH 0x0                            ; 0047ce66
    LEA EAX,[ESP + 0x132c]              ; 0047ce68
    PUSH EAX                            ; 0047ce6f
    LEA EAX,[ESP + 0x1ee8]              ; 0047ce70
    PUSH EAX                            ; 0047ce77
    LEA EAX,[ESP + 0xb2c]               ; 0047ce78
    PUSH EAX                            ; 0047ce7f
    CALL engine_dosio.cpp_FUN_004610a0  ; 0047ce80
        ;   XREF to: 004610a0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_004610a0(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0047ce85
    LEA EAX,[ESP + 0xb1c]               ; 0047ce88
    PUSH EAX                            ; 0047ce8f
    CALL crt_unknown.c_FUN_005ba2e0     ; 0047ce90
        ;   XREF to: 005ba2e0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ba2e0()
    ADD ESP,0x4                         ; 0047ce95
    LEA EAX,[ESP + 0x1b24]              ; 0047ce98
    PUSH EAX                            ; 0047ce9f
    LEA EAX,[ESP + 0x1028]              ; 0047cea0
    PUSH EAX                            ; 0047cea7
    PUSH 0x0                            ; 0047cea8
    PUSH 0x0                            ; 0047ceaa
    LEA EAX,[ESP + 0xc30]               ; 0047ceac
    PUSH EAX                            ; 0047ceb3
    CALL engine_dosio.cpp_FUN_004610a0  ; 0047ceb4
        ;   XREF to: 004610a0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_004610a0(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0047ceb9
    LEA EAX,[ESP + 0xc20]               ; 0047cebc
    PUSH EAX                            ; 0047cec3
    CALL crt_unknown.c_FUN_005ba2e0     ; 0047cec4
        ;   XREF to: 005ba2e0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ba2e0()
    ADD ESP,0x4                         ; 0047cec9
    JMP 0x0047cb71                      ; 0047cecc
        ;   XREF to: 0047cb71 (UNCONDITIONAL_JUMP)  ; LAB_0047cb71
    LEA EAX,[ESP + 0x1a24]              ; 0047ced1
        ;   Label: LAB_0047ced1
    PUSH EAX                            ; 0047ced8
    LEA EAX,[ESP + 0x1128]              ; 0047ced9
    PUSH EAX                            ; 0047cee0
    PUSH 0x0                            ; 0047cee1
    PUSH 0x0                            ; 0047cee3
    LEA EAX,[ESP + 0x608]               ; 0047cee5
    PUSH EAX                            ; 0047ceec
    CALL engine_dosio.cpp_FUN_00461070  ; 0047ceed
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_00461070(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0047cef2
    CMP byte ptr [ESP + 0x1a24],0x2e    ; 0047cef5
    JNZ 0x0047cf29                      ; 0047cefd
        ;   XREF to: 0047cf29 (CONDITIONAL_JUMP)  ; LAB_0047cf29
    LEA EDI,[ESP + 0x1a24]              ; 0047ceff
    SUB ECX,ECX                         ; 0047cf06
    DEC ECX                             ; 0047cf08
    XOR EAX,EAX                         ; 0047cf09
    SCASB.REPNE ES:EDI                  ; 0047cf0b
    NOT ECX                             ; 0047cf0d
    DEC ECX                             ; 0047cf0f
    PUSH ECX                            ; 0047cf10
    LEA EAX,[ESP + 0x1a29]              ; 0047cf11
    PUSH EAX                            ; 0047cf18
    LEA EAX,[ESP + 0x1a2c]              ; 0047cf19
    PUSH EAX                            ; 0047cf20
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 0047cf21
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0047cf26
    LEA EAX,[ESP + 0x700]               ; 0047cf29
        ;   Label: LAB_0047cf29
    PUSH EAX                            ; 0047cf30
    CALL crt_time.c__localtime_FUN_005ba358 ; 0047cf31
        ;   XREF to: 005ba358 (UNCONDITIONAL_CALL)  ; undefined crt_time.c__localtime_FUN_005ba358()
    ADD ESP,0x4                         ; 0047cf36
    PUSH EAX                            ; 0047cf39
    PUSH 0x5d20a1                       ; 0047cf3a
    PUSH 0x1e                           ; 0047cf3f
    LEA EAX,[ESP + 0x1ec0]              ; 0047cf41
    PUSH EAX                            ; 0047cf48
    CALL crt_time.c__strftime_FUN_005ba3a4 ; 0047cf49
        ;   XREF to: 005ba3a4 (UNCONDITIONAL_CALL)  ; undefined crt_time.c__strftime_FUN_005ba3a4()
    ADD ESP,0x10                        ; 0047cf4e
    LEA EAX,[ESP + 0x1eb4]              ; 0047cf51
    PUSH EAX                            ; 0047cf58
    MOV ECX,dword ptr [ESP + 0x700]     ; 0047cf59
    PUSH ECX                            ; 0047cf60
    LEA EAX,[ESP + 0x1a2c]              ; 0047cf61
    PUSH EAX                            ; 0047cf68
    LEA EAX,[ESP + 0x1130]              ; 0047cf69
    PUSH EAX                            ; 0047cf70
    PUSH 0x5d20b7                       ; 0047cf71
    LEA EAX,[ESP + 0x1e00]              ; 0047cf76
    PUSH EAX                            ; 0047cf7d
    CALL crt_unknown.c_FUN_005b7790     ; 0047cf7e
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x18                        ; 0047cf83
    LEA EAX,[ESP + 0x1dec]              ; 0047cf86
    PUSH EAX                            ; 0047cf8d
    CALL crt_string.c_strupr_FUN_005ba840 ; 0047cf8e
        ;   XREF to: 005ba840 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strupr_FUN_005ba840(char * string)
    ADD ESP,0x4                         ; 0047cf93
    LEA EAX,[ESP + 0x1dec]              ; 0047cf96
    PUSH EAX                            ; 0047cf9d
    LEA EAX,[ESP + 0xc]                 ; 0047cf9e
    PUSH EAX                            ; 0047cfa2
    CALL shape_edittool.cpp_CStrList_add_FUN_00480e70 ; 0047cfa3
        ;   XREF to: 00480e70 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00480e70(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0047cfa8
    JMP 0x0047cc29                      ; 0047cfab
        ;   XREF to: 0047cc29 (UNCONDITIONAL_JUMP)  ; LAB_0047cc29
    MOV EDI,dword ptr [ESP + 0x8]       ; 0047cfb0
        ;   Label: LAB_0047cfb0
    INC ESI                             ; 0047cfb4
    CMP ESI,EDI                         ; 0047cfb5
    JL 0x0047cc6e                       ; 0047cfb7
        ;   XREF to: 0047cc6e (CONDITIONAL_JUMP)  ; LAB_0047cc6e
    JMP 0x0047cce2                      ; 0047cfbd
        ;   XREF to: 0047cce2 (UNCONDITIONAL_JUMP)  ; LAB_0047cce2
    PUSH 0x5d20d3                       ; 0047cfc2
        ;   Label: LAB_0047cfc2
    LEA EAX,[ESP + 0x5fc]               ; 0047cfc7
    PUSH EAX                            ; 0047cfce
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 0047cfcf
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 0047cfd4
    TEST EAX,EAX                        ; 0047cfd7
    JZ 0x0047cd4e                       ; 0047cfd9
        ;   XREF to: 0047cd4e (CONDITIONAL_JUMP)  ; LAB_0047cd4e
    LEA EAX,[ESP + 0x1824]              ; 0047cfdf
    PUSH EAX                            ; 0047cfe6
    LEA EAX,[ESP + 0x1428]              ; 0047cfe7
    PUSH EAX                            ; 0047cfee
    PUSH 0x0                            ; 0047cfef
    PUSH 0x0                            ; 0047cff1
    LEA EAX,[ESP + 0x608]               ; 0047cff3
    PUSH EAX                            ; 0047cffa
    CALL engine_dosio.cpp_FUN_00461070  ; 0047cffb
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_00461070(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0047d000
    CMP byte ptr [ESP + 0x1824],0x2e    ; 0047d003
    JNZ 0x0047d037                      ; 0047d00b
        ;   XREF to: 0047d037 (CONDITIONAL_JUMP)  ; LAB_0047d037
    LEA EDI,[ESP + 0x1824]              ; 0047d00d
    SUB ECX,ECX                         ; 0047d014
    DEC ECX                             ; 0047d016
    XOR EAX,EAX                         ; 0047d017
    SCASB.REPNE ES:EDI                  ; 0047d019
    NOT ECX                             ; 0047d01b
    DEC ECX                             ; 0047d01d
    PUSH ECX                            ; 0047d01e
    LEA EAX,[ESP + 0x1829]              ; 0047d01f
    PUSH EAX                            ; 0047d026
    LEA EAX,[ESP + 0x182c]              ; 0047d027
    PUSH EAX                            ; 0047d02e
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 0047d02f
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0047d034
    LEA EAX,[ESP + 0x1824]              ; 0047d037
        ;   Label: LAB_0047d037
    PUSH EAX                            ; 0047d03e
    LEA EAX,[ESP + 0x1428]              ; 0047d03f
    PUSH EAX                            ; 0047d046
    PUSH 0x5d20d5                       ; 0047d047
    LEA EAX,[ESP + 0x1d30]              ; 0047d04c
    PUSH EAX                            ; 0047d053
    CALL crt_unknown.c_FUN_005b7790     ; 0047d054
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x10                        ; 0047d059
    LEA EAX,[ESP + 0x1d24]              ; 0047d05c
    PUSH EAX                            ; 0047d063
    CALL crt_string.c_strupr_FUN_005ba840 ; 0047d064
        ;   XREF to: 005ba840 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strupr_FUN_005ba840(char * string)
    ADD ESP,0x4                         ; 0047d069
    LEA EAX,[ESP + 0x1d24]              ; 0047d06c
    PUSH EAX                            ; 0047d073
    JMP 0x0047cd41                      ; 0047d074
        ;   XREF to: 0047cd41 (UNCONDITIONAL_JUMP)  ; LAB_0047cd41
    PUSH 0x0                            ; 0047d079
        ;   Label: LAB_0047d079
    LEA EAX,[ESP + 0x5fc]               ; 0047d07b
    PUSH EAX                            ; 0047d082
    CALL engine_dosio.cpp_CFileFinder_dtor_FUN_00460e30 ; 0047d083
        ;   XREF to: 00460e30 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.cpp_CFileFinder_dtor_FUN_00460e30(CFileFinder * this_ptr, uint flags)
        ;   Label: LAB_0047d083
    ADD ESP,0x8                         ; 0047d088
    PUSH 0x0                            ; 0047d08b
    LEA EAX,[ESP + 0xc]                 ; 0047d08d
    PUSH EAX                            ; 0047d091
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004820b0 ; 0047d092
        ;   XREF to: 004820b0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004820b0(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0047d097
    LEA EAX,[ESP + 0xa18]               ; 0047d09a
    PUSH EAX                            ; 0047d0a1
    CALL crt_unknown.c_FUN_005ba2e0     ; 0047d0a2
        ;   XREF to: 005ba2e0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ba2e0()
    ADD ESP,0x4                         ; 0047d0a7
    MOV EAX,dword ptr [ESP + 0x1ed4]    ; 0047d0aa
    POP ESI                             ; 0047d0b1
    POP EDI                             ; 0047d0b2
    ADD ESP,0x1ed8                      ; 0047d0b3
    POP EBP                             ; 0047d0b9
    POP EBX                             ; 0047d0ba
    RET                                 ; 0047d0bb
    LEA EAX,[ESP + 0x810]               ; 0047d0bc
        ;   Label: LAB_0047d0bc
    PUSH EAX                            ; 0047d0c3
    CALL crt_unknown.c_FUN_005ba2e0     ; 0047d0c4
        ;   XREF to: 005ba2e0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ba2e0()
    ADD ESP,0x4                         ; 0047d0c9
    TEST EAX,EAX                        ; 0047d0cc
    JZ 0x0047cdf5                       ; 0047d0ce
        ;   XREF to: 0047cdf5 (CONDITIONAL_JUMP)  ; LAB_0047cdf5
    LEA EAX,[ESP + 0x810]               ; 0047d0d4
    PUSH EAX                            ; 0047d0db
    PUSH 0x5d20fe                       ; 0047d0dc
    PUSH EBX                            ; 0047d0e1
    CALL shape_edittool.cpp_FUN_0047be40 ; 0047d0e2
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047be40()
    ADD ESP,0xc                         ; 0047d0e7
    LEA EAX,[ESP + 0x70c]               ; 0047d0ea
    PUSH EAX                            ; 0047d0f1
    CALL crt_unknown.c_FUN_005ba2e0     ; 0047d0f2
        ;   XREF to: 005ba2e0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ba2e0()
    ADD ESP,0x4                         ; 0047d0f7
    JMP 0x0047cdd0                      ; 0047d0fa
        ;   XREF to: 0047cdd0 (UNCONDITIONAL_JUMP)  ; LAB_0047cdd0
    CMP ESI,EBP                         ; 0047d0ff
        ;   Label: LAB_0047d0ff
    JL 0x0047d191                       ; 0047d101
        ;   XREF to: 0047d191 (CONDITIONAL_JUMP)  ; LAB_0047d191
    PUSH 0x0                            ; 0047d107
    PUSH ESI                            ; 0047d109
    LEA EAX,[ESP + 0xe2c]               ; 0047d10a
    PUSH EAX                            ; 0047d111
    LEA EAX,[ESP + 0x14]                ; 0047d112
    PUSH EAX                            ; 0047d116
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_00481250 ; 0047d117
        ;   XREF to: 00481250 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_getFieldAt_FUN_00481250(CStrList * this_ptr, char * output_buffer, int string_index, int field_number)
    ADD ESP,0x10                        ; 0047d11c
    PUSH 0x1                            ; 0047d11f
    PUSH ESI                            ; 0047d121
    LEA EAX,[ESP + 0xd2c]               ; 0047d122
    PUSH EAX                            ; 0047d129
    LEA EAX,[ESP + 0x14]                ; 0047d12a
    PUSH EAX                            ; 0047d12e
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_00481250 ; 0047d12f
        ;   XREF to: 00481250 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_getFieldAt_FUN_00481250(CStrList * this_ptr, char * output_buffer, int string_index, int field_number)
    ADD ESP,0x10                        ; 0047d134
    LEA EAX,[ESP + 0xd24]               ; 0047d137
    PUSH EAX                            ; 0047d13e
    LEA EAX,[ESP + 0xe28]               ; 0047d13f
    PUSH EAX                            ; 0047d146
    PUSH 0x0                            ; 0047d147
    PUSH 0x0                            ; 0047d149
    LEA EAX,[ESP + 0xf34]               ; 0047d14b
    PUSH EAX                            ; 0047d152
    CALL engine_dosio.cpp_FUN_004610a0  ; 0047d153
        ;   XREF to: 004610a0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_004610a0(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0047d158
    LEA EAX,[ESP + 0xf24]               ; 0047d15b
    PUSH EAX                            ; 0047d162
    CALL crt_unknown.c_FUN_005ba2e0     ; 0047d163
        ;   XREF to: 005ba2e0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ba2e0()
    ADD ESP,0x4                         ; 0047d168
    PUSH 0x0                            ; 0047d16b
    LEA EAX,[ESP + 0x5fc]               ; 0047d16d
    PUSH EAX                            ; 0047d174
    CALL engine_dosio.cpp_CFileFinder_dtor_FUN_00460e30 ; 0047d175
        ;   XREF to: 00460e30 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.cpp_CFileFinder_dtor_FUN_00460e30(CFileFinder * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0047d17a
    PUSH 0x0                            ; 0047d17d
    LEA EAX,[ESP + 0xc]                 ; 0047d17f
    PUSH EAX                            ; 0047d183
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004820b0 ; 0047d184
        ;   XREF to: 004820b0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004820b0(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0047d189
    JMP 0x0047cb7a                      ; 0047d18c
        ;   XREF to: 0047cb7a (UNCONDITIONAL_JUMP)  ; LAB_0047cb7a
    LEA EAX,[ESP + 0x1c24]              ; 0047d191
        ;   Label: LAB_0047d191
    PUSH EAX                            ; 0047d198
    LEA EAX,[ESP + 0x1228]              ; 0047d199
    PUSH EAX                            ; 0047d1a0
    LEA EAX,[ESP + 0x172c]              ; 0047d1a1
    PUSH EAX                            ; 0047d1a8
    LEA EAX,[ESP + 0x1ee4]              ; 0047d1a9
    PUSH EAX                            ; 0047d1b0
    LEA EAX,[ESP + 0x71c]               ; 0047d1b1
    PUSH EAX                            ; 0047d1b8
    CALL engine_dosio.cpp_FUN_00461070  ; 0047d1b9
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_00461070(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0047d1be
    LEA EAX,[ESP + 0x1c24]              ; 0047d1c1
    PUSH EAX                            ; 0047d1c8
    LEA EAX,[ESP + 0x1228]              ; 0047d1c9
    PUSH EAX                            ; 0047d1d0
    LEA EAX,[ESP + 0x172c]              ; 0047d1d1
    PUSH EAX                            ; 0047d1d8
    PUSH 0x0                            ; 0047d1d9
    LEA EAX,[ESP + 0x1634]              ; 0047d1db
    PUSH EAX                            ; 0047d1e2
    CALL engine_dosio.cpp_FUN_004610a0  ; 0047d1e3
        ;   XREF to: 004610a0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_004610a0(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0047d1e8
    PUSH 0x0                            ; 0047d1eb
    PUSH ESI                            ; 0047d1ed
    LEA EAX,[ESP + 0x122c]              ; 0047d1ee
    PUSH EAX                            ; 0047d1f5
    LEA EAX,[ESP + 0x14]                ; 0047d1f6
    PUSH EAX                            ; 0047d1fa
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_00481250 ; 0047d1fb
        ;   XREF to: 00481250 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_getFieldAt_FUN_00481250(CStrList * this_ptr, char * output_buffer, int string_index, int field_number)
    ADD ESP,0x10                        ; 0047d200
    PUSH 0x1                            ; 0047d203
    PUSH ESI                            ; 0047d205
    LEA EAX,[ESP + 0x1c2c]              ; 0047d206
    PUSH EAX                            ; 0047d20d
    LEA EAX,[ESP + 0x14]                ; 0047d20e
    PUSH EAX                            ; 0047d212
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_00481250 ; 0047d213
        ;   XREF to: 00481250 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_getFieldAt_FUN_00481250(CStrList * this_ptr, char * output_buffer, int string_index, int field_number)
    ADD ESP,0x10                        ; 0047d218
    LEA EAX,[ESP + 0x1c24]              ; 0047d21b
    PUSH EAX                            ; 0047d222
    LEA EAX,[ESP + 0x1228]              ; 0047d223
    PUSH EAX                            ; 0047d22a
    LEA EAX,[ESP + 0x162c]              ; 0047d22b
    PUSH EAX                            ; 0047d232
    LEA EAX,[ESP + 0x1ee4]              ; 0047d233
    PUSH EAX                            ; 0047d23a
    MOV EDX,dword ptr [ESP + 0x1f08]    ; 0047d23b
    PUSH EDX                            ; 0047d242
    CALL engine_dosio.cpp_FUN_004610a0  ; 0047d243
        ;   XREF to: 004610a0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_004610a0(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0047d248
    PUSH 0x0                            ; 0047d24b
    LEA EAX,[ESP + 0x5fc]               ; 0047d24d
    MOV ECX,0x1                         ; 0047d254
    PUSH EAX                            ; 0047d259
    MOV dword ptr [ESP + 0x1edc],ECX    ; 0047d25a
    JMP 0x0047d083                      ; 0047d261
        ;   XREF to: 0047d083 (UNCONDITIONAL_JUMP)  ; LAB_0047d083

