; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_pod_cpp_FUN_005149c0(void)
;
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
;   crt_stdio.c_fseek_FUN_005a457c
;   crt_stdio.c_fwrite_FUN_005a48e0
;   engine_dosio.cpp_getFileSize_FUN_004657f0
;   engine_pod.cpp_CPodFile_cleanup_FUN_00513b90
;   engine_pod.cpp_CPodFile_ctor_FUN_00512f00
;   engine_pod.cpp_CPodFile_dtor_FUN_00512f70
;   engine_pod.cpp_crc32UpdateByte_FUN_00512d60
;   engine_pod.cpp_FUN_00512fb0
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047cfa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005149c0
        ;   Label: engine_pod.cpp_FUN_005149c0
    PUSH ESI                            ; 005149c1
    PUSH EDI                            ; 005149c2
    PUSH EBP                            ; 005149c3
    SUB ESP,0x43c                       ; 005149c4
    MOV EDX,dword ptr [ESP + 0x454]     ; 005149ca
    PUSH EDX                            ; 005149d1
    PUSH 0x5cc8c7                       ; 005149d2
    MOV ECX,dword ptr [0x005fb140]      ; 005149d7 | g_CEditorToolsPtr
    PUSH ECX                            ; 005149dd
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047cfa0 ; 005149de
        ;   XREF to: 0047cfa0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047cfa0(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 005149e3
    MOV EAX,ESP                         ; 005149e6
    PUSH EAX                            ; 005149e8
    CALL engine_pod.cpp_CPodFile_ctor_FUN_00512f00 ; 005149e9
        ;   XREF to: 00512f00 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_ctor_FUN_00512f00(CPodFile * this_ptr)
    ADD ESP,0x4                         ; 005149ee
    PUSH 0x0                            ; 005149f1
    MOV EBX,dword ptr [ESP + 0x458]     ; 005149f3
    PUSH EBX                            ; 005149fa
    LEA EAX,[ESP + 0x8]                 ; 005149fb
    PUSH EAX                            ; 005149ff
    CALL engine_pod.cpp_FUN_00512fb0    ; 00514a00
        ;   XREF to: 00512fb0 (UNCONDITIONAL_CALL)  ; undefined engine_pod.cpp_FUN_00512fb0()
    ADD ESP,0xc                         ; 00514a05
    TEST EAX,EAX                        ; 00514a08
    JNZ 0x00514a30                      ; 00514a0a
        ;   XREF to: 00514a30 (CONDITIONAL_JUMP)  ; LAB_00514a30
    PUSH EBX                            ; 00514a0c
    MOV ESI,0x5cc8ec                    ; 00514a0d
    MOV EDI,0x55e                       ; 00514a12
    PUSH 0x5cc8fe                       ; 00514a17
    MOV dword ptr [0x01d71de0],ESI      ; 00514a1c | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 00514a22 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00514a28
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 00514a2d
    MOV EAX,ESP                         ; 00514a30
        ;   Label: LAB_00514a30
    PUSH EAX                            ; 00514a32
    MOV EBX,dword ptr [ESP + 0x4]       ; 00514a33
    CALL engine_pod.cpp_CPodFile_cleanup_FUN_00513b90 ; 00514a37
        ;   XREF to: 00513b90 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPodFile_cleanup_FUN_00513b90(CPodFile * this_ptr)
    MOV EAX,0xffffffff                  ; 00514a3c
    ADD ESP,0x4                         ; 00514a41
    MOV dword ptr [ESP + 0x434],EAX     ; 00514a44
    CMP EBX,0x1                         ; 00514a4b
    JNZ 0x00514b5c                      ; 00514a4e
        ;   XREF to: 00514b5c (CONDITIONAL_JUMP)  ; LAB_00514b5c
    MOV dword ptr [ESP + 0x434],0x54    ; 00514a54
    MOV EBP,dword ptr [ESP + 0x454]     ; 00514a5f
        ;   Label: LAB_00514a5f
    PUSH EBP                            ; 00514a66
    PUSH 0x5cc4c6                       ; 00514a67
    CALL engine_dosio.cpp_getFileSize_FUN_004657f0 ; 00514a6c
        ;   XREF to: 004657f0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_004657f0(char * directory, char * filename)
    ADD ESP,0x8                         ; 00514a71
    MOV EDX,dword ptr [ESP + 0x434]     ; 00514a74
    PUSH 0x5cc4c7                       ; 00514a7b
    SUB EAX,EDX                         ; 00514a80
    PUSH EBP                            ; 00514a82
    MOV dword ptr [ESP + 0x438],EAX     ; 00514a83
    CALL crt_stdio.c_fopen_FUN_005a43ec ; 00514a8a
        ;   XREF to: 005a43ec (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_005a43ec(char * filename, char * mode)
    ADD ESP,0x8                         ; 00514a8f
    PUSH 0x0                            ; 00514a92
    MOV EBX,dword ptr [ESP + 0x438]     ; 00514a94
    PUSH EBX                            ; 00514a9b
    PUSH EAX                            ; 00514a9c
    MOV EDI,EAX                         ; 00514a9d
    MOV dword ptr [ESP + 0x444],EAX     ; 00514a9f
    CALL crt_stdio.c_fseek_FUN_005a457c ; 00514aa6
        ;   XREF to: 005a457c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005a457c(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 00514aab
    MOV ESI,0xffffffff                  ; 00514aae
    MOV EBP,dword ptr [ESP + 0x430]     ; 00514ab3
    XOR EBX,EBX                         ; 00514aba
    TEST EBP,EBP                        ; 00514abc
    JLE 0x00514ae0                      ; 00514abe
        ;   XREF to: 00514ae0 (CONDITIONAL_JUMP)  ; LAB_00514ae0
    PUSH EDI                            ; 00514ac0
        ;   Label: LAB_00514ac0
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 00514ac1
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005a32b0(_FILE * file)
    ADD ESP,0x4                         ; 00514ac6
    AND EAX,0xff                        ; 00514ac9
    PUSH EAX                            ; 00514ace
    PUSH ESI                            ; 00514acf
    INC EBX                             ; 00514ad0
    CALL engine_pod.cpp_crc32UpdateByte_FUN_00512d60 ; 00514ad1
        ;   XREF to: 00512d60 (UNCONDITIONAL_CALL)  ; uint engine_pod.cpp_crc32UpdateByte_FUN_00512d60(uint current_crc, uchar data_byte)
    ADD ESP,0x8                         ; 00514ad6
    MOV ESI,EAX                         ; 00514ad9
    CMP EBX,EBP                         ; 00514adb
    JL 0x00514ac0                       ; 00514add
        ;   XREF to: 00514ac0 (CONDITIONAL_JUMP)  ; LAB_00514ac0
    NOP                                 ; 00514adf
    MOV EDX,dword ptr [ESP + 0x438]     ; 00514ae0
        ;   Label: LAB_00514ae0
    PUSH EDX                            ; 00514ae7
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 00514ae8
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 00514aed
    PUSH 0x5cc94f                       ; 00514af0
    MOV ECX,dword ptr [ESP + 0x458]     ; 00514af5
    PUSH ECX                            ; 00514afc
    MOV dword ptr [ESP + 0x434],ESI     ; 00514afd
    CALL crt_stdio.c_fopen_FUN_005a43ec ; 00514b04
        ;   XREF to: 005a43ec (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_005a43ec(char * filename, char * mode)
    ADD ESP,0x8                         ; 00514b09
    MOV EBX,EAX                         ; 00514b0c
    MOV EAX,dword ptr [ESP + 0x434]     ; 00514b0e
    PUSH 0x0                            ; 00514b15
    SUB EAX,0x4                         ; 00514b17
    PUSH EAX                            ; 00514b1a
    PUSH EBX                            ; 00514b1b
    CALL crt_stdio.c_fseek_FUN_005a457c ; 00514b1c
        ;   XREF to: 005a457c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005a457c(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 00514b21
    PUSH EBX                            ; 00514b24
    PUSH 0x1                            ; 00514b25
    PUSH 0x4                            ; 00514b27
    LEA EAX,[ESP + 0x438]               ; 00514b29
    PUSH EAX                            ; 00514b30
    CALL crt_stdio.c_fwrite_FUN_005a48e0 ; 00514b31
        ;   XREF to: 005a48e0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005a48e0(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 00514b36
    PUSH EBX                            ; 00514b39
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 00514b3a
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 00514b3f
    PUSH 0x0                            ; 00514b42
        ;   Label: LAB_00514b42
    LEA EAX,[ESP + 0x4]                 ; 00514b44
    PUSH EAX                            ; 00514b48
    CALL engine_pod.cpp_CPodFile_dtor_FUN_00512f70 ; 00514b49
        ;   XREF to: 00512f70 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_00512f70(CPodFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00514b4e
    ADD ESP,0x43c                       ; 00514b51
    POP EBP                             ; 00514b57
    POP EDI                             ; 00514b58
    POP ESI                             ; 00514b59
    POP EBX                             ; 00514b5a
    RET                                 ; 00514b5b
    CMP EBX,0xc8                        ; 00514b5c
        ;   Label: LAB_00514b5c
    JNZ 0x00514b74                      ; 00514b62
        ;   XREF to: 00514b74 (CONDITIONAL_JUMP)  ; LAB_00514b74
    MOV dword ptr [ESP + 0x434],0x8     ; 00514b64
    JMP 0x00514a5f                      ; 00514b6f
        ;   XREF to: 00514a5f (UNCONDITIONAL_JUMP)  ; LAB_00514a5f
    CMP EBX,0x64                        ; 00514b74
        ;   Label: LAB_00514b74
    JZ 0x00514b42                       ; 00514b77
        ;   XREF to: 00514b42 (CONDITIONAL_JUMP)  ; LAB_00514b42
    PUSH EBX                            ; 00514b79
    MOV EBX,dword ptr [ESP + 0x458]     ; 00514b7a
    PUSH EBX                            ; 00514b81
    MOV EDX,0x5cc91e                    ; 00514b82
    MOV ECX,0x56f                       ; 00514b87
    PUSH 0x5cc930                       ; 00514b8c
    MOV dword ptr [0x01d71de0],EDX      ; 00514b91 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00514b97 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00514b9d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0xc                         ; 00514ba2
    JMP 0x00514a5f                      ; 00514ba5
        ;   XREF to: 00514a5f (UNCONDITIONAL_JUMP)  ; LAB_00514a5f

