; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint engine_pod_cpp_FUN_00519dc0(char *param_1,int param_2)
;
;
; Called Functions:
;   crt_stdio.c_fclose_FUN_005b89c0
;   crt_stdio.c_fgetc_FUN_005b8180
;   crt_stdio.c_fopen_FUN_005b910c
;   crt_stdio.c_fseek_FUN_005b929c
;   engine_dosio.cpp_getFileSize_FUN_00460aa0
;   engine_pod.cpp_crc32UpdateByte_FUN_00519cb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00519dc0
        ;   Label: engine_pod.cpp_FUN_00519dc0
    PUSH ESI                            ; 00519dc1
    PUSH EDI                            ; 00519dc2
    PUSH EBP                            ; 00519dc3
    SUB ESP,0x8                         ; 00519dc4
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00519dc7
    MOV ESI,dword ptr [ESP + 0x20]      ; 00519dcb
    PUSH EBX                            ; 00519dcf
    PUSH 0x5e2403                       ; 00519dd0
    CALL engine_dosio.cpp_getFileSize_FUN_00460aa0 ; 00519dd5
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_00460aa0(char * directory, char * filename)
    ADD ESP,0x8                         ; 00519dda
    PUSH 0x5e2404                       ; 00519ddd
    SUB EAX,ESI                         ; 00519de2
    PUSH EBX                            ; 00519de4
    MOV dword ptr [ESP + 0x8],EAX       ; 00519de5
    CALL crt_stdio.c_fopen_FUN_005b910c ; 00519de9
        ;   XREF to: 005b910c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_005b910c()
    ADD ESP,0x8                         ; 00519dee
    PUSH 0x0                            ; 00519df1
    PUSH ESI                            ; 00519df3
    PUSH EAX                            ; 00519df4
    MOV EDI,EAX                         ; 00519df5
    MOV dword ptr [ESP + 0x10],EAX      ; 00519df7
    CALL crt_stdio.c_fseek_FUN_005b929c ; 00519dfb
        ;   XREF to: 005b929c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fseek_FUN_005b929c()
    ADD ESP,0xc                         ; 00519e00
    XOR EBX,EBX                         ; 00519e03
    MOV EBP,dword ptr [ESP]             ; 00519e05
    MOV ESI,0xffffffff                  ; 00519e08
    TEST EBP,EBP                        ; 00519e0d
    JLE 0x00519e30                      ; 00519e0f
        ;   XREF to: 00519e30 (CONDITIONAL_JUMP)  ; LAB_00519e30
    PUSH EDI                            ; 00519e11
        ;   Label: LAB_00519e11
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 00519e12
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005b8180()
    ADD ESP,0x4                         ; 00519e17
    AND EAX,0xff                        ; 00519e1a
    PUSH EAX                            ; 00519e1f
    PUSH ESI                            ; 00519e20
    INC EBX                             ; 00519e21
    CALL engine_pod.cpp_crc32UpdateByte_FUN_00519cb0 ; 00519e22
        ;   XREF to: 00519cb0 (UNCONDITIONAL_CALL)  ; uint engine_pod.cpp_crc32UpdateByte_FUN_00519cb0(uint current_crc, uchar data_byte)
    ADD ESP,0x8                         ; 00519e27
    MOV ESI,EAX                         ; 00519e2a
    CMP EBX,EBP                         ; 00519e2c
    JL 0x00519e11                       ; 00519e2e
        ;   XREF to: 00519e11 (CONDITIONAL_JUMP)  ; LAB_00519e11
    MOV ECX,dword ptr [ESP + 0x4]       ; 00519e30
        ;   Label: LAB_00519e30
    PUSH ECX                            ; 00519e34
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 00519e35
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 00519e3a
    MOV EAX,ESI                         ; 00519e3d
    ADD ESP,0x8                         ; 00519e3f
    POP EBP                             ; 00519e42
    POP EDI                             ; 00519e43
    POP ESI                             ; 00519e44
    POP EBX                             ; 00519e45
    RET                                 ; 00519e46

