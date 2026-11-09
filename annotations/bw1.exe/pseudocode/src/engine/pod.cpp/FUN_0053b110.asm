; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint engine_pod_cpp_FUN_0053b110(char *param_1,int param_2)
;
;
; Called Functions:
;   crt_stdio.c_fclose_FUN_005c0d10
;   crt_stdio.c_fgetc_FUN_005c0530
;   crt_stdio.c_fopen_FUN_005c157c
;   crt_stdio.c_fseek_FUN_005c170c
;   engine_dosio.cpp_getFileSize_FUN_00478fb0
;   engine_pod.cpp_crc32UpdateByte_FUN_0053b000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053b110
        ;   Label: engine_pod.cpp_FUN_0053b110
    PUSH ESI                            ; 0053b111
    PUSH EDI                            ; 0053b112
    PUSH EBP                            ; 0053b113
    SUB ESP,0x8                         ; 0053b114
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0053b117
    MOV ESI,dword ptr [ESP + 0x20]      ; 0053b11b
    PUSH EBX                            ; 0053b11f
    PUSH 0x5ed65e                       ; 0053b120
    CALL engine_dosio.cpp_getFileSize_FUN_00478fb0 ; 0053b125
        ;   XREF to: 00478fb0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_00478fb0(char * directory, char * filename)
    ADD ESP,0x8                         ; 0053b12a
    PUSH 0x5ed65f                       ; 0053b12d
    SUB EAX,ESI                         ; 0053b132
    PUSH EBX                            ; 0053b134
    MOV dword ptr [ESP + 0x8],EAX       ; 0053b135
    CALL crt_stdio.c_fopen_FUN_005c157c ; 0053b139
        ;   XREF to: 005c157c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_005c157c()
    ADD ESP,0x8                         ; 0053b13e
    PUSH 0x0                            ; 0053b141
    PUSH ESI                            ; 0053b143
    PUSH EAX                            ; 0053b144
    MOV EDI,EAX                         ; 0053b145
    MOV dword ptr [ESP + 0x10],EAX      ; 0053b147
    CALL crt_stdio.c_fseek_FUN_005c170c ; 0053b14b
        ;   XREF to: 005c170c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fseek_FUN_005c170c()
    ADD ESP,0xc                         ; 0053b150
    XOR EBX,EBX                         ; 0053b153
    MOV EBP,dword ptr [ESP]             ; 0053b155
    MOV ESI,0xffffffff                  ; 0053b158
    TEST EBP,EBP                        ; 0053b15d
    JLE 0x0053b180                      ; 0053b15f
        ;   XREF to: 0053b180 (CONDITIONAL_JUMP)  ; LAB_0053b180
    PUSH EDI                            ; 0053b161
        ;   Label: LAB_0053b161
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 0053b162
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005c0530()
    ADD ESP,0x4                         ; 0053b167
    AND EAX,0xff                        ; 0053b16a
    PUSH EAX                            ; 0053b16f
    PUSH ESI                            ; 0053b170
    INC EBX                             ; 0053b171
    CALL engine_pod.cpp_crc32UpdateByte_FUN_0053b000 ; 0053b172
        ;   XREF to: 0053b000 (UNCONDITIONAL_CALL)  ; uint engine_pod.cpp_crc32UpdateByte_FUN_0053b000(uint current_crc, uchar data_byte)
    ADD ESP,0x8                         ; 0053b177
    MOV ESI,EAX                         ; 0053b17a
    CMP EBX,EBP                         ; 0053b17c
    JL 0x0053b161                       ; 0053b17e
        ;   XREF to: 0053b161 (CONDITIONAL_JUMP)  ; LAB_0053b161
    MOV ECX,dword ptr [ESP + 0x4]       ; 0053b180
        ;   Label: LAB_0053b180
    PUSH ECX                            ; 0053b184
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 0053b185
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 0053b18a
    MOV EAX,ESI                         ; 0053b18d
    ADD ESP,0x8                         ; 0053b18f
    POP EBP                             ; 0053b192
    POP EDI                             ; 0053b193
    POP ESI                             ; 0053b194
    POP EBX                             ; 0053b195
    RET                                 ; 0053b196

