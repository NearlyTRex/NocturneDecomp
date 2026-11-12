; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint engine_pod_cpp_FUN_00512e70(char *param_1,int param_2)
;
;
; Called Functions:
;   crt_stdio.c_fclose_FUN_005a3a90
;   crt_stdio.c_fgetc_FUN_005a32b0
;   crt_stdio.c_fopen_FUN_005a43ec
;   crt_stdio.c_fseek_FUN_005a457c
;   engine_dosio.cpp_getFileSize_FUN_004657f0
;   engine_pod.cpp_crc32UpdateByte_FUN_00512d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00512e70
        ;   Label: engine_pod.cpp_FUN_00512e70
    PUSH ESI                            ; 00512e71
    PUSH EDI                            ; 00512e72
    PUSH EBP                            ; 00512e73
    SUB ESP,0x8                         ; 00512e74
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00512e77
    MOV ESI,dword ptr [ESP + 0x20]      ; 00512e7b
    PUSH EBX                            ; 00512e7f
    PUSH 0x5cc4c6                       ; 00512e80
    CALL engine_dosio.cpp_getFileSize_FUN_004657f0 ; 00512e85
        ;   XREF to: 004657f0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_004657f0(char * directory, char * filename)
    ADD ESP,0x8                         ; 00512e8a
    PUSH 0x5cc4c7                       ; 00512e8d
    SUB EAX,ESI                         ; 00512e92
    PUSH EBX                            ; 00512e94
    MOV dword ptr [ESP + 0x8],EAX       ; 00512e95
    CALL crt_stdio.c_fopen_FUN_005a43ec ; 00512e99
        ;   XREF to: 005a43ec (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_005a43ec(char * filename, char * mode)
    ADD ESP,0x8                         ; 00512e9e
    PUSH 0x0                            ; 00512ea1
    PUSH ESI                            ; 00512ea3
    PUSH EAX                            ; 00512ea4
    MOV EDI,EAX                         ; 00512ea5
    MOV dword ptr [ESP + 0x10],EAX      ; 00512ea7
    CALL crt_stdio.c_fseek_FUN_005a457c ; 00512eab
        ;   XREF to: 005a457c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005a457c(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 00512eb0
    XOR EBX,EBX                         ; 00512eb3
    MOV EBP,dword ptr [ESP]             ; 00512eb5
    MOV ESI,0xffffffff                  ; 00512eb8
    TEST EBP,EBP                        ; 00512ebd
    JLE 0x00512ee0                      ; 00512ebf
        ;   XREF to: 00512ee0 (CONDITIONAL_JUMP)  ; LAB_00512ee0
    PUSH EDI                            ; 00512ec1
        ;   Label: LAB_00512ec1
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 00512ec2
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005a32b0(_FILE * file)
    ADD ESP,0x4                         ; 00512ec7
    AND EAX,0xff                        ; 00512eca
    PUSH EAX                            ; 00512ecf
    PUSH ESI                            ; 00512ed0
    INC EBX                             ; 00512ed1
    CALL engine_pod.cpp_crc32UpdateByte_FUN_00512d60 ; 00512ed2
        ;   XREF to: 00512d60 (UNCONDITIONAL_CALL)  ; uint engine_pod.cpp_crc32UpdateByte_FUN_00512d60(uint current_crc, uchar data_byte)
    ADD ESP,0x8                         ; 00512ed7
    MOV ESI,EAX                         ; 00512eda
    CMP EBX,EBP                         ; 00512edc
    JL 0x00512ec1                       ; 00512ede
        ;   XREF to: 00512ec1 (CONDITIONAL_JUMP)  ; LAB_00512ec1
    MOV ECX,dword ptr [ESP + 0x4]       ; 00512ee0
        ;   Label: LAB_00512ee0
    PUSH ECX                            ; 00512ee4
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 00512ee5
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 00512eea
    MOV EAX,ESI                         ; 00512eed
    ADD ESP,0x8                         ; 00512eef
    POP EBP                             ; 00512ef2
    POP EDI                             ; 00512ef3
    POP ESI                             ; 00512ef4
    POP EBX                             ; 00512ef5
    RET                                 ; 00512ef6

