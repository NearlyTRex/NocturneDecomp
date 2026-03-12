; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_script_cpp_CScript_findText_FUN_00566cc0(CScript *this_ptr,char *search_str,int start_col,int start_line,uint *found_col,int *found_line,uint *found_end_col,int direction)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   search_str
; int              Stack[0xc]:4   start_col
; int              Stack[0x10]:4   start_line
; uint *           Stack[0x14]:4   found_col
; int *            Stack[0x18]:4   found_line
; uint *           Stack[0x1c]:4   found_end_col
; int              Stack[0x20]:4   direction
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_script.cpp_CScript_processEditorInput_FUN_00565130 at 005655d7
;
; Called Functions:
;   core_script.cpp_CScript_editorIndex2X_FUN_00566b30
;   core_script.cpp_CScript_editorX2Index_FUN_00566a90
;   crt_string.c__strnicmp_FUN_005ff070
;   shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566cc0
        ;   Label: core_script.cpp_CScript_findText_FUN_00566cc0
    PUSH ESI                            ; 00566cc1
    PUSH EDI                            ; 00566cc2
    PUSH EBP                            ; 00566cc3
    SUB ESP,0x18                        ; 00566cc4
    MOV EBX,dword ptr [ESP + 0x34]      ; 00566cc7
    MOV EDX,dword ptr [ESP + 0x30]      ; 00566ccb
    TEST EDX,EDX                        ; 00566ccf
    JNZ 0x00566cdd                      ; 00566cd1
        ;   XREF to: 00566cdd (CONDITIONAL_JUMP)  ; LAB_00566cdd
    XOR EAX,EAX                         ; 00566cd3
        ;   Label: LAB_00566cd3
    ADD ESP,0x18                        ; 00566cd5
    POP EBP                             ; 00566cd8
    POP EDI                             ; 00566cd9
    POP ESI                             ; 00566cda
    POP EBX                             ; 00566cdb
    RET                                 ; 00566cdc
    MOV EDI,EDX                         ; 00566cdd
        ;   Label: LAB_00566cdd
    SUB ECX,ECX                         ; 00566cdf
    DEC ECX                             ; 00566ce1
    XOR EAX,EAX                         ; 00566ce2
    SCASB.REPNE ES:EDI                  ; 00566ce4
    NOT ECX                             ; 00566ce6
    DEC ECX                             ; 00566ce8
    MOV EBP,ECX                         ; 00566ce9
    CMP ECX,0x1                         ; 00566ceb
    JL 0x00566cd3                       ; 00566cee
        ;   XREF to: 00566cd3 (CONDITIONAL_JUMP)  ; LAB_00566cd3
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00566cf0
    ADD EAX,0x38                        ; 00566cf4
    PUSH EAX                            ; 00566cf7
    CALL shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0 ; 00566cf8
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0(CStrList * this_ptr)
    ADD ESP,0x4                         ; 00566cfd
    CMP EAX,0x1                         ; 00566d00
    JL 0x00566cd3                       ; 00566d03
        ;   XREF to: 00566cd3 (CONDITIONAL_JUMP)  ; LAB_00566cd3
    TEST EBX,EBX                        ; 00566d05
    JL 0x00566df5                       ; 00566d07
        ;   XREF to: 00566df5 (CONDITIONAL_JUMP)  ; LAB_00566df5
    CMP dword ptr [ESP + 0x38],0x0      ; 00566d0d
        ;   Label: LAB_00566d0d
    JGE 0x00566d27                      ; 00566d12
        ;   XREF to: 00566d27 (CONDITIONAL_JUMP)  ; LAB_00566d27
    CMP dword ptr [ESP + 0x48],0x0      ; 00566d14
    JL 0x00566e08                       ; 00566d19
        ;   XREF to: 00566e08 (CONDITIONAL_JUMP)  ; LAB_00566e08
    XOR EAX,EAX                         ; 00566d1f
    XOR EBX,EBX                         ; 00566d21
    MOV dword ptr [ESP + 0x38],EAX      ; 00566d23
        ;   Label: LAB_00566d23
    PUSH EBX                            ; 00566d27
        ;   Label: LAB_00566d27
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00566d28
    PUSH EDX                            ; 00566d2c
    MOV ECX,dword ptr [ESP + 0x34]      ; 00566d2d
    PUSH ECX                            ; 00566d31
    CALL core_script.cpp_CScript_editorX2Index_FUN_00566a90 ; 00566d32
        ;   XREF to: 00566a90 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_editorX2Index_FUN_00566a90(CScript * this_ptr, int line_number, int visual_column)
    ADD ESP,0xc                         ; 00566d37
    MOV EBX,EAX                         ; 00566d3a
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00566d3c
    MOV EDI,dword ptr [ESP + 0x48]      ; 00566d40
    ADD ESI,0x38                        ; 00566d44
    TEST EDI,EDI                        ; 00566d47
    JLE 0x00566e68                      ; 00566d49
        ;   XREF to: 00566e68 (CONDITIONAL_JUMP)  ; LAB_00566e68
    MOV dword ptr [ESP],ESI             ; 00566d4f
    XOR EDI,EDI                         ; 00566d52
    MOV dword ptr [ESP + 0x4],ESI       ; 00566d54
    MOV dword ptr [ESP + 0xc],EDI       ; 00566d58
    MOV ESI,dword ptr [ESP + 0x4]       ; 00566d5c
        ;   Label: LAB_00566d5c
    PUSH ESI                            ; 00566d60
    CALL shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0 ; 00566d61
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0(CStrList * this_ptr)
    ADD ESP,0x4                         ; 00566d66
    ADD EAX,0x2                         ; 00566d69
    CMP EAX,dword ptr [ESP + 0xc]       ; 00566d6c
    JLE 0x00566cd3                      ; 00566d70
        ;   XREF to: 00566cd3 (CONDITIONAL_JUMP)  ; LAB_00566cd3
    PUSH ESI                            ; 00566d76
    CALL shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0 ; 00566d77
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0(CStrList * this_ptr)
    ADD ESP,0x4                         ; 00566d7c
    CMP EAX,dword ptr [ESP + 0x38]      ; 00566d7f
    JG 0x00566d8d                       ; 00566d83
        ;   XREF to: 00566d8d (CONDITIONAL_JUMP)  ; LAB_00566d8d
    XOR ECX,ECX                         ; 00566d85
    XOR EBX,EBX                         ; 00566d87
    MOV dword ptr [ESP + 0x38],ECX      ; 00566d89
    MOV ESI,dword ptr [ESP + 0x38]      ; 00566d8d
        ;   Label: LAB_00566d8d
    PUSH ESI                            ; 00566d91
    MOV EDI,dword ptr [ESP + 0x4]       ; 00566d92
    PUSH EDI                            ; 00566d96
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 00566d97
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 00566d9c
    MOV EDI,EAX                         ; 00566d9f
    MOV EDX,EAX                         ; 00566da1
    SUB ECX,ECX                         ; 00566da3
    DEC ECX                             ; 00566da5
    XOR EAX,EAX                         ; 00566da6
    SCASB.REPNE ES:EDI                  ; 00566da8
    NOT ECX                             ; 00566daa
    DEC ECX                             ; 00566dac
    MOV dword ptr [ESP + 0x14],ECX      ; 00566dad
    LEA EAX,[EBX + EBP*0x1]             ; 00566db1
    MOV EDI,EDX                         ; 00566db4
    MOV ESI,EAX                         ; 00566db6
    ADD EDI,EBX                         ; 00566db8
    CMP EAX,ECX                         ; 00566dba
    JG 0x00566ddc                       ; 00566dbc
        ;   XREF to: 00566ddc (CONDITIONAL_JUMP)  ; LAB_00566ddc
    PUSH EBP                            ; 00566dbe
        ;   Label: LAB_00566dbe
    MOV EAX,dword ptr [ESP + 0x34]      ; 00566dbf
    PUSH EAX                            ; 00566dc3
    PUSH EDI                            ; 00566dc4
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 00566dc5
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00566dca
    TEST EAX,EAX                        ; 00566dcd
    JZ 0x00566e23                       ; 00566dcf
        ;   XREF to: 00566e23 (CONDITIONAL_JUMP)  ; LAB_00566e23
    MOV EAX,dword ptr [ESP + 0x14]      ; 00566dd1
    INC ESI                             ; 00566dd5
    INC EDI                             ; 00566dd6
    INC EBX                             ; 00566dd7
    CMP ESI,EAX                         ; 00566dd8
    JLE 0x00566dbe                      ; 00566dda
        ;   XREF to: 00566dbe (CONDITIONAL_JUMP)  ; LAB_00566dbe
    MOV EDX,dword ptr [ESP + 0x38]      ; 00566ddc
        ;   Label: LAB_00566ddc
    MOV ECX,dword ptr [ESP + 0xc]       ; 00566de0
    XOR EBX,EBX                         ; 00566de4
    INC EDX                             ; 00566de6
    INC ECX                             ; 00566de7
    MOV dword ptr [ESP + 0x38],EDX      ; 00566de8
    MOV dword ptr [ESP + 0xc],ECX       ; 00566dec
    JMP 0x00566d5c                      ; 00566df0
        ;   XREF to: 00566d5c (UNCONDITIONAL_JUMP)  ; LAB_00566d5c
    MOV ECX,dword ptr [ESP + 0x38]      ; 00566df5
        ;   Label: LAB_00566df5
    DEC ECX                             ; 00566df9
    MOV EBX,0x270f                      ; 00566dfa
    MOV dword ptr [ESP + 0x38],ECX      ; 00566dff
    JMP 0x00566d0d                      ; 00566e03
        ;   XREF to: 00566d0d (UNCONDITIONAL_JUMP)  ; LAB_00566d0d
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00566e08
        ;   Label: LAB_00566e08
    ADD EAX,0x38                        ; 00566e0c
    PUSH EAX                            ; 00566e0f
    CALL shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0 ; 00566e10
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0(CStrList * this_ptr)
    ADD ESP,0x4                         ; 00566e15
    DEC EAX                             ; 00566e18
    MOV EBX,0x270f                      ; 00566e19
    JMP 0x00566d23                      ; 00566e1e
        ;   XREF to: 00566d23 (UNCONDITIONAL_JUMP)  ; LAB_00566d23
    PUSH EBX                            ; 00566e23
        ;   Label: LAB_00566e23
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00566e24
    PUSH EDX                            ; 00566e28
    MOV ECX,dword ptr [ESP + 0x34]      ; 00566e29
    PUSH ECX                            ; 00566e2d
    CALL core_script.cpp_CScript_editorIndex2X_FUN_00566b30 ; 00566e2e
        ;   XREF to: 00566b30 (UNCONDITIONAL_CALL)  ; uint core_script.cpp_CScript_editorIndex2X_FUN_00566b30(CScript * this_ptr, int line_number, uint buffer_index)
    ADD ESP,0xc                         ; 00566e33
    PUSH ESI                            ; 00566e36
    MOV EBX,dword ptr [ESP + 0x3c]      ; 00566e37
    PUSH EBX                            ; 00566e3b
    MOV ESI,dword ptr [ESP + 0x34]      ; 00566e3c
    MOV EDX,dword ptr [ESP + 0x44]      ; 00566e40
    PUSH ESI                            ; 00566e44
    MOV dword ptr [EDX],EAX             ; 00566e45
    CALL core_script.cpp_CScript_editorIndex2X_FUN_00566b30 ; 00566e47
        ;   XREF to: 00566b30 (UNCONDITIONAL_CALL)  ; uint core_script.cpp_CScript_editorIndex2X_FUN_00566b30(CScript * this_ptr, int line_number, uint buffer_index)
    ADD ESP,0xc                         ; 00566e4c
    MOV EDX,dword ptr [ESP + 0x44]      ; 00566e4f
    MOV dword ptr [EDX],EAX             ; 00566e53
    MOV EDX,dword ptr [ESP + 0x40]      ; 00566e55
    MOV EAX,0x1                         ; 00566e59
    MOV dword ptr [EDX],EBX             ; 00566e5e
    ADD ESP,0x18                        ; 00566e60
    POP EBP                             ; 00566e63
    POP EDI                             ; 00566e64
    POP ESI                             ; 00566e65
    POP EBX                             ; 00566e66
    RET                                 ; 00566e67
    PUSH ESI                            ; 00566e68
        ;   Label: LAB_00566e68
    CALL shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0 ; 00566e69
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0(CStrList * this_ptr)
    ADD ESP,0x4                         ; 00566e6e
    CMP EAX,dword ptr [ESP + 0x38]      ; 00566e71
    JLE 0x00566ef7                      ; 00566e75
        ;   XREF to: 00566ef7 (CONDITIONAL_JUMP)  ; LAB_00566ef7
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00566e7b
        ;   Label: LAB_00566e7b
    XOR ECX,ECX                         ; 00566e7f
    ADD EAX,0x38                        ; 00566e81
    MOV dword ptr [ESP + 0x8],ECX       ; 00566e84
    MOV dword ptr [ESP + 0x10],EAX      ; 00566e88
    MOV EAX,dword ptr [ESP + 0x10]      ; 00566e8c
        ;   Label: LAB_00566e8c
    PUSH EAX                            ; 00566e90
    CALL shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0 ; 00566e91
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0(CStrList * this_ptr)
    ADD ESP,0x4                         ; 00566e96
    ADD EAX,0x2                         ; 00566e99
    CMP EAX,dword ptr [ESP + 0x8]       ; 00566e9c
    JLE 0x00566cd3                      ; 00566ea0
        ;   XREF to: 00566cd3 (CONDITIONAL_JUMP)  ; LAB_00566cd3
    CMP dword ptr [ESP + 0x38],0x0      ; 00566ea6
    JL 0x00566f2b                       ; 00566eab
        ;   XREF to: 00566f2b (CONDITIONAL_JUMP)  ; LAB_00566f2b
    MOV EDI,dword ptr [ESP + 0x38]      ; 00566eb1
        ;   Label: LAB_00566eb1
    PUSH EDI                            ; 00566eb5
    MOV EAX,dword ptr [ESP + 0x14]      ; 00566eb6
    PUSH EAX                            ; 00566eba
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 00566ebb
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 00566ec0
    MOV EDI,EAX                         ; 00566ec3
    MOV EDX,EAX                         ; 00566ec5
    SUB ECX,ECX                         ; 00566ec7
    DEC ECX                             ; 00566ec9
    XOR EAX,EAX                         ; 00566eca
    SCASB.REPNE ES:EDI                  ; 00566ecc
    NOT ECX                             ; 00566ece
    DEC ECX                             ; 00566ed0
    MOV EAX,ECX                         ; 00566ed1
    SUB EAX,EBP                         ; 00566ed3
    CMP EBX,EAX                         ; 00566ed5
    JG 0x00566f42                       ; 00566ed7
        ;   XREF to: 00566f42 (CONDITIONAL_JUMP)  ; LAB_00566f42
    MOV EDI,dword ptr [ESP + 0x30]      ; 00566ed9
        ;   Label: LAB_00566ed9
    LEA ESI,[EBX + EDX*0x1]             ; 00566edd
    TEST EBX,EBX                        ; 00566ee0
        ;   Label: LAB_00566ee0
    JLE 0x00566f0f                      ; 00566ee2
        ;   XREF to: 00566f0f (CONDITIONAL_JUMP)  ; LAB_00566f0f
    PUSH EBP                            ; 00566ee4
    PUSH EDI                            ; 00566ee5
    PUSH ESI                            ; 00566ee6
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 00566ee7
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00566eec
    TEST EAX,EAX                        ; 00566eef
    JZ 0x00566f46                       ; 00566ef1
        ;   XREF to: 00566f46 (CONDITIONAL_JUMP)  ; LAB_00566f46
    DEC EBX                             ; 00566ef3
    DEC ESI                             ; 00566ef4
    JMP 0x00566ee0                      ; 00566ef5
        ;   XREF to: 00566ee0 (UNCONDITIONAL_JUMP)  ; LAB_00566ee0
    PUSH ESI                            ; 00566ef7
        ;   Label: LAB_00566ef7
    CALL shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0 ; 00566ef8
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0(CStrList * this_ptr)
    ADD ESP,0x4                         ; 00566efd
    DEC EAX                             ; 00566f00
    MOV EBX,0x270f                      ; 00566f01
    MOV dword ptr [ESP + 0x38],EAX      ; 00566f06
    JMP 0x00566e7b                      ; 00566f0a
        ;   XREF to: 00566e7b (UNCONDITIONAL_JUMP)  ; LAB_00566e7b
    MOV EDX,dword ptr [ESP + 0x38]      ; 00566f0f
        ;   Label: LAB_00566f0f
    MOV ECX,dword ptr [ESP + 0x8]       ; 00566f13
    MOV EBX,0x270f                      ; 00566f17
    DEC EDX                             ; 00566f1c
    INC ECX                             ; 00566f1d
    MOV dword ptr [ESP + 0x38],EDX      ; 00566f1e
    MOV dword ptr [ESP + 0x8],ECX       ; 00566f22
    JMP 0x00566e8c                      ; 00566f26
        ;   XREF to: 00566e8c (UNCONDITIONAL_JUMP)  ; LAB_00566e8c
    MOV ESI,dword ptr [ESP + 0x10]      ; 00566f2b
        ;   Label: LAB_00566f2b
    PUSH ESI                            ; 00566f2f
    CALL shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0 ; 00566f30
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0(CStrList * this_ptr)
    ADD ESP,0x4                         ; 00566f35
    DEC EAX                             ; 00566f38
    MOV dword ptr [ESP + 0x38],EAX      ; 00566f39
    JMP 0x00566eb1                      ; 00566f3d
        ;   XREF to: 00566eb1 (UNCONDITIONAL_JUMP)  ; LAB_00566eb1
    MOV EBX,EAX                         ; 00566f42
        ;   Label: LAB_00566f42
    JMP 0x00566ed9                      ; 00566f44
        ;   XREF to: 00566ed9 (UNCONDITIONAL_JUMP)  ; LAB_00566ed9
    PUSH EBX                            ; 00566f46
        ;   Label: LAB_00566f46
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00566f47
    PUSH EAX                            ; 00566f4b
    MOV EDX,dword ptr [ESP + 0x34]      ; 00566f4c
    PUSH EDX                            ; 00566f50
    CALL core_script.cpp_CScript_editorIndex2X_FUN_00566b30 ; 00566f51
        ;   XREF to: 00566b30 (UNCONDITIONAL_CALL)  ; uint core_script.cpp_CScript_editorIndex2X_FUN_00566b30(CScript * this_ptr, int line_number, uint buffer_index)
    ADD ESP,0xc                         ; 00566f56
    ADD EBX,EBP                         ; 00566f59
    PUSH EBX                            ; 00566f5b
    MOV ECX,dword ptr [ESP + 0x3c]      ; 00566f5c
    PUSH ECX                            ; 00566f60
    MOV EBX,dword ptr [ESP + 0x34]      ; 00566f61
    MOV EDX,dword ptr [ESP + 0x44]      ; 00566f65
    PUSH EBX                            ; 00566f69
    MOV dword ptr [EDX],EAX             ; 00566f6a
    CALL core_script.cpp_CScript_editorIndex2X_FUN_00566b30 ; 00566f6c
        ;   XREF to: 00566b30 (UNCONDITIONAL_CALL)  ; uint core_script.cpp_CScript_editorIndex2X_FUN_00566b30(CScript * this_ptr, int line_number, uint buffer_index)
    ADD ESP,0xc                         ; 00566f71
    MOV EDX,dword ptr [ESP + 0x44]      ; 00566f74
    MOV dword ptr [EDX],EAX             ; 00566f78
    MOV EDX,dword ptr [ESP + 0x40]      ; 00566f7a
    MOV EAX,dword ptr [ESP + 0x38]      ; 00566f7e
    MOV dword ptr [EDX],EAX             ; 00566f82
    MOV EAX,0x1                         ; 00566f84
    ADD ESP,0x18                        ; 00566f89
    POP EBP                             ; 00566f8c
    POP EDI                             ; 00566f8d
    POP ESI                             ; 00566f8e
    POP EBX                             ; 00566f8f
    RET                                 ; 00566f90

