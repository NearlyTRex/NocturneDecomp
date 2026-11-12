; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool engine_pod_cpp_FUN_00513d20(int *param_1)
;
;
; XREF[1]:
;   engine_pod.cpp_FUN_00514bb0 at 00514be0
;
; Referenced Globals:
;   CEditorTools* g_CEditorToolsPtr = 01c5b0e4
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_stdio.c_fclose_FUN_005a3a90
;   crt_stdio.c_fgetc_FUN_005a32b0
;   crt_stdio.c_fopen_FUN_005a43ec
;   crt_stdio.c_fread_FUN_005a3890
;   crt_stdio.c_fseek_FUN_005a457c
;   engine_dosio.cpp_getFileSize_FUN_004657f0
;   engine_pod.cpp_crc32UpdateByte_FUN_00512d60
;   engine_pod.cpp_FUN_00514220
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047cfa0
;   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_0047ed50
;   shape_edittool.cpp_CPickList_ctor_FUN_004831c0
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00483450
;   shape_edittool.cpp_CPickList_dtor_FUN_004832b0
;   shape_edittool.cpp_CStrList_add_FUN_00482070
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00513d20
        ;   Label: engine_pod.cpp_FUN_00513d20
    PUSH ESI                            ; 00513d21
    PUSH EDI                            ; 00513d22
    PUSH EBP                            ; 00513d23
    SUB ESP,0x3d0                       ; 00513d24
    MOV EBX,dword ptr [ESP + 0x3e4]     ; 00513d2a
    MOV EDX,dword ptr [EBX]             ; 00513d31
    TEST EDX,EDX                        ; 00513d33
    JZ 0x00513e5a                       ; 00513d35
        ;   XREF to: 00513e5a (CONDITIONAL_JUMP)  ; LAB_00513e5a
    CMP byte ptr [EBX + 0x4],0x0        ; 00513d3b
    JZ 0x00513e5a                       ; 00513d3f
        ;   XREF to: 00513e5a (CONDITIONAL_JUMP)  ; LAB_00513e5a
    CMP EDX,0xc8                        ; 00513d45
    JZ 0x00513e69                       ; 00513d4b
        ;   XREF to: 00513e69 (CONDITIONAL_JUMP)  ; LAB_00513e69
    MOV EDI,dword ptr [EBX]             ; 00513d51
        ;   Label: LAB_00513d51
    MOV ESI,0xffffffff                  ; 00513d53
    CMP EDI,0x1                         ; 00513d58
    JNZ 0x00513f96                      ; 00513d5b
        ;   XREF to: 00513f96 (CONDITIONAL_JUMP)  ; LAB_00513f96
    MOV ESI,0x54                        ; 00513d61
    LEA EDI,[EBX + 0x4]                 ; 00513d66
        ;   Label: LAB_00513d66
    PUSH EDI                            ; 00513d69
    PUSH 0x5cc606                       ; 00513d6a
    MOV EBP,dword ptr [0x005fb140]      ; 00513d6f | g_CEditorToolsPtr
    PUSH EBP                            ; 00513d75
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047cfa0 ; 00513d76
        ;   XREF to: 0047cfa0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047cfa0(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 00513d7b
    PUSH 0x5cc61e                       ; 00513d7e
    PUSH EDI                            ; 00513d83
    CALL crt_stdio.c_fopen_FUN_005a43ec ; 00513d84
        ;   XREF to: 005a43ec (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_005a43ec()
    MOV EBX,EAX                         ; 00513d89
    ADD ESP,0x8                         ; 00513d8b
    TEST EAX,EAX                        ; 00513d8e
    JZ 0x00513fad                       ; 00513d90
        ;   XREF to: 00513fad (CONDITIONAL_JUMP)  ; LAB_00513fad
    PUSH 0x0                            ; 00513d96
    LEA EAX,[ESI + -0x4]                ; 00513d98
    PUSH EAX                            ; 00513d9b
    PUSH EBX                            ; 00513d9c
    CALL crt_stdio.c_fseek_FUN_005a457c ; 00513d9d
        ;   XREF to: 005a457c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fseek_FUN_005a457c()
    ADD ESP,0xc                         ; 00513da2
    PUSH EBX                            ; 00513da5
    PUSH 0x1                            ; 00513da6
    PUSH 0x4                            ; 00513da8
    LEA EAX,[ESP + 0x3cc]               ; 00513daa
    PUSH EAX                            ; 00513db1
    CALL crt_stdio.c_fread_FUN_005a3890 ; 00513db2
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005a3890()
    ADD ESP,0x10                        ; 00513db7
    PUSH EBX                            ; 00513dba
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 00513dbb
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 00513dc0
    PUSH EDI                            ; 00513dc3
    PUSH 0x5cc4c6                       ; 00513dc4
    CALL engine_dosio.cpp_getFileSize_FUN_004657f0 ; 00513dc9
        ;   XREF to: 004657f0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_004657f0(char * directory, char * filename)
    ADD ESP,0x8                         ; 00513dce
    PUSH 0x5cc4c7                       ; 00513dd1
    SUB EAX,ESI                         ; 00513dd6
    PUSH EDI                            ; 00513dd8
    MOV dword ptr [ESP + 0x3cc],EAX     ; 00513dd9
    CALL crt_stdio.c_fopen_FUN_005a43ec ; 00513de0
        ;   XREF to: 005a43ec (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_005a43ec()
    ADD ESP,0x8                         ; 00513de5
    PUSH 0x0                            ; 00513de8
    PUSH ESI                            ; 00513dea
    PUSH EAX                            ; 00513deb
    MOV EBP,EAX                         ; 00513dec
    MOV dword ptr [ESP + 0x3d4],EAX     ; 00513dee
    CALL crt_stdio.c_fseek_FUN_005a457c ; 00513df5
        ;   XREF to: 005a457c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fseek_FUN_005a457c()
    ADD ESP,0xc                         ; 00513dfa
    XOR EBX,EBX                         ; 00513dfd
    MOV EDI,dword ptr [ESP + 0x3c4]     ; 00513dff
    MOV ESI,0xffffffff                  ; 00513e06
    TEST EDI,EDI                        ; 00513e0b
    JLE 0x00513e30                      ; 00513e0d
        ;   XREF to: 00513e30 (CONDITIONAL_JUMP)  ; LAB_00513e30
    PUSH EBP                            ; 00513e0f
        ;   Label: LAB_00513e0f
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 00513e10
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005a32b0()
    ADD ESP,0x4                         ; 00513e15
    AND EAX,0xff                        ; 00513e18
    PUSH EAX                            ; 00513e1d
    PUSH ESI                            ; 00513e1e
    INC EBX                             ; 00513e1f
    CALL engine_pod.cpp_crc32UpdateByte_FUN_00512d60 ; 00513e20
        ;   XREF to: 00512d60 (UNCONDITIONAL_CALL)  ; uint engine_pod.cpp_crc32UpdateByte_FUN_00512d60(uint current_crc, uchar data_byte)
    ADD ESP,0x8                         ; 00513e25
    MOV ESI,EAX                         ; 00513e28
    CMP EBX,EDI                         ; 00513e2a
    JL 0x00513e0f                       ; 00513e2c
        ;   XREF to: 00513e0f (CONDITIONAL_JUMP)  ; LAB_00513e0f
    MOV EAX,EAX                         ; 00513e2e
    MOV EDX,dword ptr [ESP + 0x3c8]     ; 00513e30
        ;   Label: LAB_00513e30
    PUSH EDX                            ; 00513e37
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 00513e38
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 00513e3d
    CMP ESI,dword ptr [ESP + 0x3c0]     ; 00513e40
    SETZ AL                             ; 00513e47
    MOVZX ESI,AL                        ; 00513e4a
    MOV EAX,ESI                         ; 00513e4d
    ADD ESP,0x3d0                       ; 00513e4f
    POP EBP                             ; 00513e55
    POP EDI                             ; 00513e56
    POP ESI                             ; 00513e57
    POP EBX                             ; 00513e58
    RET                                 ; 00513e59
    XOR ESI,ESI                         ; 00513e5a
        ;   Label: LAB_00513e5a
    MOV EAX,ESI                         ; 00513e5c
    ADD ESP,0x3d0                       ; 00513e5e
    POP EBP                             ; 00513e64
    POP EDI                             ; 00513e65
    POP ESI                             ; 00513e66
    POP EBX                             ; 00513e67
    RET                                 ; 00513e68
    PUSH 0x5cc591                       ; 00513e69
        ;   Label: LAB_00513e69
    MOV ESI,dword ptr [0x005fb140]      ; 00513e6e | g_CEditorToolsPtr
    PUSH ESI                            ; 00513e74
    CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_0047ed50 ; 00513e75
        ;   XREF to: 0047ed50 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_0047ed50(CEditorTools * this_ptr, char * message_text)
    ADD ESP,0x8                         ; 00513e7a
    MOV EAX,ESP                         ; 00513e7d
    PUSH EAX                            ; 00513e7f
    XOR EDI,EDI                         ; 00513e80
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004831c0 ; 00513e82
        ;   XREF to: 004831c0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004831c0(CPickList * this_ptr)
    MOV EBP,dword ptr [EBX + 0x410]     ; 00513e87
    ADD ESP,0x4                         ; 00513e8d
    TEST EBP,EBP                        ; 00513e90
    JLE 0x00513f3a                      ; 00513e92
        ;   XREF to: 00513f3a (CONDITIONAL_JUMP)  ; LAB_00513f3a
    XOR ESI,ESI                         ; 00513e98
    MOV EAX,dword ptr [EBX + 0x410]     ; 00513e9a
        ;   Label: LAB_00513e9a
    DEC EAX                             ; 00513ea0
    IMUL ECX,EAX,0x14                   ; 00513ea1
    MOV EAX,dword ptr [EBX + 0x414]     ; 00513ea4
    MOV EDX,dword ptr [ECX + EAX*0x1 + 0x8] ; 00513eaa
    MOV EBP,dword ptr [ECX + EAX*0x1 + 0x4] ; 00513eae
    MOV ECX,dword ptr [EAX + 0x8]       ; 00513eb2
    ADD EDX,EBP                         ; 00513eb5
    SUB EDX,ECX                         ; 00513eb7
    MOV dword ptr [ESP + 0x3cc],EDX     ; 00513eb9
    FILD dword ptr [ESP + 0x3cc]        ; 00513ec0
    SUB ESP,0x4                         ; 00513ec7
    LEA EDX,[EAX + ESI*0x1]             ; 00513eca
    FSTP float ptr [ESP]                ; 00513ecd
    MOV EDX,dword ptr [EDX + 0x8]       ; 00513ed0
    SUB EDX,ECX                         ; 00513ed3
    MOV dword ptr [ESP + 0x3d0],EDX     ; 00513ed5
    FILD dword ptr [ESP + 0x3d0]        ; 00513edc
    SUB ESP,0x4                         ; 00513ee3
    MOV EAX,[0x005fb140]                ; 00513ee6 | g_CEditorToolsPtr
    FSTP float ptr [ESP]                ; 00513eeb
    PUSH EAX                            ; 00513eee
    CALL shape_edittool.cpp_FUN_0047ee50 ; 00513eef
        ;   XREF to: 0047ee50 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047ee50()
    ADD ESP,0xc                         ; 00513ef4
    PUSH EDI                            ; 00513ef7
    MOV EAX,dword ptr [EBX + 0x414]     ; 00513ef8
    PUSH EBX                            ; 00513efe
    LEA EBP,[EAX + ESI*0x1]             ; 00513eff
    CALL engine_pod.cpp_FUN_00514220    ; 00513f02
        ;   XREF to: 00514220 (UNCONDITIONAL_CALL)  ; undefined engine_pod.cpp_FUN_00514220()
    MOV EDX,dword ptr [EBP + 0x10]      ; 00513f07
    ADD ESP,0x8                         ; 00513f0a
    CMP EAX,EDX                         ; 00513f0d
    JZ 0x00513f28                       ; 00513f0f
        ;   XREF to: 00513f28 (CONDITIONAL_JUMP)  ; LAB_00513f28
    MOV EAX,dword ptr [EBX + 0x414]     ; 00513f11
    MOV ECX,dword ptr [ESI + EAX*0x1]   ; 00513f17
    PUSH ECX                            ; 00513f1a
    LEA EAX,[ESP + 0x4]                 ; 00513f1b
    PUSH EAX                            ; 00513f1f
    CALL shape_edittool.cpp_CStrList_add_FUN_00482070 ; 00513f20
        ;   XREF to: 00482070 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00482070(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00513f25
    INC EDI                             ; 00513f28
        ;   Label: LAB_00513f28
    MOV EAX,dword ptr [EBX + 0x410]     ; 00513f29
    ADD ESI,0x14                        ; 00513f2f
    CMP EDI,EAX                         ; 00513f32
    JL 0x00513e9a                       ; 00513f34
        ;   XREF to: 00513e9a (CONDITIONAL_JUMP)  ; LAB_00513e9a
    MOV EDX,dword ptr [0x005fb140]      ; 00513f3a | g_CEditorToolsPtr
        ;   Label: LAB_00513f3a
    PUSH EDX                            ; 00513f40
    CALL shape_edittool.cpp_FUN_0047f970 ; 00513f41
        ;   XREF to: 0047f970 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047f970()
    ADD ESP,0x4                         ; 00513f46
    MOV ECX,dword ptr [ESP]             ; 00513f49
    TEST ECX,ECX                        ; 00513f4c
    JNZ 0x00513f63                      ; 00513f4e
        ;   XREF to: 00513f63 (CONDITIONAL_JUMP)  ; LAB_00513f63
    PUSH ECX                            ; 00513f50
    LEA EAX,[ESP + 0x4]                 ; 00513f51
    PUSH EAX                            ; 00513f55
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004832b0 ; 00513f56
        ;   XREF to: 004832b0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004832b0(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00513f5b
    JMP 0x00513d51                      ; 00513f5e
        ;   XREF to: 00513d51 (UNCONDITIONAL_JUMP)  ; LAB_00513d51
    PUSH 0x0                            ; 00513f63
        ;   Label: LAB_00513f63
    PUSH -0x1                           ; 00513f65
    PUSH 0x5cc5af                       ; 00513f67
    LEA EAX,[ESP + 0xc]                 ; 00513f6c
    PUSH EAX                            ; 00513f70
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00483450 ; 00513f71
        ;   XREF to: 00483450 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00483450(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 00513f76
    XOR ESI,ESI                         ; 00513f79
    PUSH ESI                            ; 00513f7b
    LEA EAX,[ESP + 0x4]                 ; 00513f7c
    PUSH EAX                            ; 00513f80
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004832b0 ; 00513f81
        ;   XREF to: 004832b0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004832b0(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00513f86
    MOV EAX,ESI                         ; 00513f89
    ADD ESP,0x3d0                       ; 00513f8b
    POP EBP                             ; 00513f91
    POP EDI                             ; 00513f92
    POP ESI                             ; 00513f93
    POP EBX                             ; 00513f94
    RET                                 ; 00513f95
    CMP EDI,0xc8                        ; 00513f96
        ;   Label: LAB_00513f96
    JNZ 0x00513fa8                      ; 00513f9c
        ;   XREF to: 00513fa8 (CONDITIONAL_JUMP)  ; LAB_00513fa8
    MOV ESI,0x8                         ; 00513f9e
    JMP 0x00513d66                      ; 00513fa3
        ;   XREF to: 00513d66 (UNCONDITIONAL_JUMP)  ; LAB_00513d66
    CMP EDI,0x64                        ; 00513fa8
        ;   Label: LAB_00513fa8
    JNZ 0x00513fbc                      ; 00513fab
        ;   XREF to: 00513fbc (CONDITIONAL_JUMP)  ; LAB_00513fbc
    XOR ESI,ESI                         ; 00513fad
        ;   Label: LAB_00513fad
    MOV EAX,ESI                         ; 00513faf
    ADD ESP,0x3d0                       ; 00513fb1
    POP EBP                             ; 00513fb7
    POP EDI                             ; 00513fb8
    POP ESI                             ; 00513fb9
    POP EBX                             ; 00513fba
    RET                                 ; 00513fbb
    PUSH EDI                            ; 00513fbc
        ;   Label: LAB_00513fbc
    LEA EAX,[EBX + 0x4]                 ; 00513fbd
    PUSH EAX                            ; 00513fc0
    MOV EDX,0x5cc5d5                    ; 00513fc1
    MOV ECX,0x388                       ; 00513fc6
    PUSH 0x5cc5e7                       ; 00513fcb
    MOV dword ptr [0x01d71de0],EDX      ; 00513fd0 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00513fd6 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00513fdc
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0xc                         ; 00513fe1
    JMP 0x00513d66                      ; 00513fe4
        ;   XREF to: 00513d66 (UNCONDITIONAL_JUMP)  ; LAB_00513d66

