; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_pod_cpp_FUN_0053cc5c(undefined4 param_1,char *param_2)
;
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
;   crt_stdio.c_fseek_FUN_005c170c
;   crt_stdio.c_fwrite_FUN_005c1a70
;   engine_dosio.cpp_getFileSize_FUN_00478fb0
;   engine_pod.cpp_CPodFile_cleanup_FUN_0053be30
;   engine_pod.cpp_CPodFile_ctor_FUN_0053b1a0
;   engine_pod.cpp_CPodFile_dtor_FUN_0053b210
;   engine_pod.cpp_crc32UpdateByte_FUN_0053b000
;   engine_pod.cpp_FUN_0053b250
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 0053cc5c
        ;   Label: engine_pod.cpp_FUN_0053cc5c
    PUSH EBX                            ; 0053cc60
    PUSH ESI                            ; 0053cc61
    PUSH EDI                            ; 0053cc62
    PUSH EBP                            ; 0053cc63
    SUB ESP,0x43c                       ; 0053cc64
    MOV EDX,dword ptr [ESP + 0x454]     ; 0053cc6a
    PUSH EDX                            ; 0053cc71
    PUSH 0x5eda5f                       ; 0053cc72
    MOV ECX,dword ptr [0x0061abc0]      ; 0053cc77 | g_CEditorToolsPtr
    PUSH ECX                            ; 0053cc7d
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400 ; 0053cc7e
        ;   XREF to: 00494400 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 0053cc83
    MOV EAX,ESP                         ; 0053cc86
    PUSH EAX                            ; 0053cc88
    CALL engine_pod.cpp_CPodFile_ctor_FUN_0053b1a0 ; 0053cc89
        ;   XREF to: 0053b1a0 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_ctor_FUN_0053b1a0(CPodFile * this_ptr)
    ADD ESP,0x4                         ; 0053cc8e
    PUSH 0x0                            ; 0053cc91
    MOV EBX,dword ptr [ESP + 0x458]     ; 0053cc93
    PUSH EBX                            ; 0053cc9a
    LEA EAX,[ESP + 0x8]                 ; 0053cc9b
    PUSH EAX                            ; 0053cc9f
    CALL engine_pod.cpp_FUN_0053b250    ; 0053cca0
        ;   XREF to: 0053b250 (UNCONDITIONAL_CALL)  ; undefined engine_pod.cpp_FUN_0053b250()
    ADD ESP,0xc                         ; 0053cca5
    TEST EAX,EAX                        ; 0053cca8
    JNZ 0x0053ccd0                      ; 0053ccaa
        ;   XREF to: 0053ccd0 (CONDITIONAL_JUMP)  ; LAB_0053ccd0
    PUSH EBX                            ; 0053ccac
    MOV ESI,0x5eda84                    ; 0053ccad
    MOV EDI,0x55e                       ; 0053ccb2
    PUSH 0x5eda96                       ; 0053ccb7
    MOV dword ptr [0x01d1d400],ESI      ; 0053ccbc | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 0053ccc2 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0053ccc8
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 0053cccd
    MOV EAX,ESP                         ; 0053ccd0
        ;   Label: LAB_0053ccd0
    PUSH EAX                            ; 0053ccd2
    MOV EBX,dword ptr [ESP + 0x4]       ; 0053ccd3
    CALL engine_pod.cpp_CPodFile_cleanup_FUN_0053be30 ; 0053ccd7
        ;   XREF to: 0053be30 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPodFile_cleanup_FUN_0053be30(CPodFile * this_ptr)
    MOV EAX,0xffffffff                  ; 0053ccdc
    ADD ESP,0x4                         ; 0053cce1
    MOV dword ptr [ESP + 0x434],EAX     ; 0053cce4
    CMP EBX,0x1                         ; 0053cceb
    JNZ 0x0053cdfc                      ; 0053ccee
        ;   XREF to: 0053cdfc (CONDITIONAL_JUMP)  ; LAB_0053cdfc
    MOV dword ptr [ESP + 0x434],0x54    ; 0053ccf4
    MOV EBP,dword ptr [ESP + 0x454]     ; 0053ccff
        ;   Label: LAB_0053ccff
    PUSH EBP                            ; 0053cd06
    PUSH 0x5ed65e                       ; 0053cd07
    CALL engine_dosio.cpp_getFileSize_FUN_00478fb0 ; 0053cd0c
        ;   XREF to: 00478fb0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_00478fb0(char * directory, char * filename)
    ADD ESP,0x8                         ; 0053cd11
    MOV EDX,dword ptr [ESP + 0x434]     ; 0053cd14
    PUSH 0x5ed65f                       ; 0053cd1b
    SUB EAX,EDX                         ; 0053cd20
    PUSH EBP                            ; 0053cd22
    MOV dword ptr [ESP + 0x438],EAX     ; 0053cd23
    CALL crt_stdio.c_fopen_FUN_005c157c ; 0053cd2a
        ;   XREF to: 005c157c (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_005c157c(char * filename, char * mode)
    ADD ESP,0x8                         ; 0053cd2f
    PUSH 0x0                            ; 0053cd32
    MOV EBX,dword ptr [ESP + 0x438]     ; 0053cd34
    PUSH EBX                            ; 0053cd3b
    PUSH EAX                            ; 0053cd3c
    MOV EDI,EAX                         ; 0053cd3d
    MOV dword ptr [ESP + 0x444],EAX     ; 0053cd3f
    CALL crt_stdio.c_fseek_FUN_005c170c ; 0053cd46
        ;   XREF to: 005c170c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005c170c(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 0053cd4b
    MOV ESI,0xffffffff                  ; 0053cd4e
    MOV EBP,dword ptr [ESP + 0x430]     ; 0053cd53
    XOR EBX,EBX                         ; 0053cd5a
    TEST EBP,EBP                        ; 0053cd5c
    JLE 0x0053cd80                      ; 0053cd5e
        ;   XREF to: 0053cd80 (CONDITIONAL_JUMP)  ; LAB_0053cd80
    PUSH EDI                            ; 0053cd60
        ;   Label: LAB_0053cd60
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 0053cd61
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005c0530(_FILE * file)
    ADD ESP,0x4                         ; 0053cd66
    AND EAX,0xff                        ; 0053cd69
    PUSH EAX                            ; 0053cd6e
    PUSH ESI                            ; 0053cd6f
    INC EBX                             ; 0053cd70
    CALL engine_pod.cpp_crc32UpdateByte_FUN_0053b000 ; 0053cd71
        ;   XREF to: 0053b000 (UNCONDITIONAL_CALL)  ; uint engine_pod.cpp_crc32UpdateByte_FUN_0053b000(uint current_crc, uchar data_byte)
    ADD ESP,0x8                         ; 0053cd76
    MOV ESI,EAX                         ; 0053cd79
    CMP EBX,EBP                         ; 0053cd7b
    JL 0x0053cd60                       ; 0053cd7d
        ;   XREF to: 0053cd60 (CONDITIONAL_JUMP)  ; LAB_0053cd60
    NOP                                 ; 0053cd7f
    MOV EDX,dword ptr [ESP + 0x438]     ; 0053cd80
        ;   Label: LAB_0053cd80
    PUSH EDX                            ; 0053cd87
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 0053cd88
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 0053cd8d
    PUSH 0x5edae7                       ; 0053cd90
    MOV ECX,dword ptr [ESP + 0x458]     ; 0053cd95
    PUSH ECX                            ; 0053cd9c
    MOV dword ptr [ESP + 0x434],ESI     ; 0053cd9d
    CALL crt_stdio.c_fopen_FUN_005c157c ; 0053cda4
        ;   XREF to: 005c157c (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_005c157c(char * filename, char * mode)
    ADD ESP,0x8                         ; 0053cda9
    MOV EBX,EAX                         ; 0053cdac
    MOV EAX,dword ptr [ESP + 0x434]     ; 0053cdae
    PUSH 0x0                            ; 0053cdb5
    SUB EAX,0x4                         ; 0053cdb7
    PUSH EAX                            ; 0053cdba
    PUSH EBX                            ; 0053cdbb
    CALL crt_stdio.c_fseek_FUN_005c170c ; 0053cdbc
        ;   XREF to: 005c170c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005c170c(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 0053cdc1
    PUSH EBX                            ; 0053cdc4
    PUSH 0x1                            ; 0053cdc5
    PUSH 0x4                            ; 0053cdc7
    LEA EAX,[ESP + 0x438]               ; 0053cdc9
    PUSH EAX                            ; 0053cdd0
    CALL crt_stdio.c_fwrite_FUN_005c1a70 ; 0053cdd1
        ;   XREF to: 005c1a70 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005c1a70(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0053cdd6
    PUSH EBX                            ; 0053cdd9
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 0053cdda
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 0053cddf
    PUSH 0x0                            ; 0053cde2
        ;   Label: LAB_0053cde2
    LEA EAX,[ESP + 0x4]                 ; 0053cde4
    PUSH EAX                            ; 0053cde8
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0053b210 ; 0053cde9
        ;   XREF to: 0053b210 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0053b210(CPodFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0053cdee
    ADD ESP,0x43c                       ; 0053cdf1
    POP EBP                             ; 0053cdf7
    POP EDI                             ; 0053cdf8
    POP ESI                             ; 0053cdf9
    POP EBX                             ; 0053cdfa
    RET                                 ; 0053cdfb
    CMP EBX,0xc8                        ; 0053cdfc
        ;   Label: LAB_0053cdfc
    JNZ 0x0053ce14                      ; 0053ce02
        ;   XREF to: 0053ce14 (CONDITIONAL_JUMP)  ; LAB_0053ce14
    MOV dword ptr [ESP + 0x434],0x8     ; 0053ce04
    JMP 0x0053ccff                      ; 0053ce0f
        ;   XREF to: 0053ccff (UNCONDITIONAL_JUMP)  ; LAB_0053ccff
    CMP EBX,0x64                        ; 0053ce14
        ;   Label: LAB_0053ce14
    JZ 0x0053cde2                       ; 0053ce17
        ;   XREF to: 0053cde2 (CONDITIONAL_JUMP)  ; LAB_0053cde2
    PUSH EBX                            ; 0053ce19
    MOV EBX,dword ptr [ESP + 0x458]     ; 0053ce1a
    PUSH EBX                            ; 0053ce21
    MOV EDX,0x5edab6                    ; 0053ce22
    MOV ECX,0x56f                       ; 0053ce27
    PUSH 0x5edac8                       ; 0053ce2c
    MOV dword ptr [0x01d1d400],EDX      ; 0053ce31 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0053ce37 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0053ce3d
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0xc                         ; 0053ce42
    JMP 0x0053ccff                      ; 0053ce45
        ;   XREF to: 0053ccff (UNCONDITIONAL_JUMP)  ; LAB_0053ccff

