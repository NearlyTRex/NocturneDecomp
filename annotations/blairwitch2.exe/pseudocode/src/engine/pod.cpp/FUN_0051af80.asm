; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint engine_pod_cpp_FUN_0051af80(int param_1,int param_2)
;
;
; XREF[1]:
;   engine_pod.cpp_FUN_0051aa7e at 0051ac62
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_stdio.c_fclose_FUN_005b89c0
;   crt_stdio.c_fgetc_FUN_005b8180
;   crt_stdio.c_fopen_FUN_005b910c
;   crt_stdio.c_fseek_FUN_005b929c
;   engine_pod.cpp_crc32UpdateByte_FUN_00519cb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051af80
        ;   Label: engine_pod.cpp_FUN_0051af80
    PUSH ESI                            ; 0051af81
    PUSH EDI                            ; 0051af82
    PUSH EBP                            ; 0051af83
    SUB ESP,0x4                         ; 0051af84
    MOV EBX,dword ptr [ESP + 0x18]      ; 0051af87
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0051af8b
    TEST EDI,EDI                        ; 0051af8f
    JL 0x0051af9b                       ; 0051af91
        ;   XREF to: 0051af9b (CONDITIONAL_JUMP)  ; LAB_0051af9b
    CMP EDI,dword ptr [EBX + 0x410]     ; 0051af93
    JL 0x0051afbe                       ; 0051af99
        ;   XREF to: 0051afbe (CONDITIONAL_JUMP)  ; LAB_0051afbe
    MOV ECX,0x5e2715                    ; 0051af9b
        ;   Label: LAB_0051af9b
    MOV ESI,0x3a5                       ; 0051afa0
    PUSH 0x5e2727                       ; 0051afa5
    MOV dword ptr [0x01d046a0],ECX      ; 0051afaa | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0051afb0 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0051afb6
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0051afbb
    PUSH 0x5e2753                       ; 0051afbe
        ;   Label: LAB_0051afbe
    LEA ESI,[EBX + 0x4]                 ; 0051afc3
    PUSH ESI                            ; 0051afc6
    CALL crt_stdio.c_fopen_FUN_005b910c ; 0051afc7
        ;   XREF to: 005b910c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_005b910c()
    ADD ESP,0x8                         ; 0051afcc
    MOV dword ptr [ESP],EAX             ; 0051afcf
    TEST EAX,EAX                        ; 0051afd2
    JNZ 0x0051aff9                      ; 0051afd4
        ;   XREF to: 0051aff9 (CONDITIONAL_JUMP)  ; LAB_0051aff9
    PUSH ESI                            ; 0051afd6
    MOV EBP,0x5e2756                    ; 0051afd7
    MOV EAX,0x3aa                       ; 0051afdc
    PUSH 0x5e2768                       ; 0051afe1
    MOV dword ptr [0x01d046a0],EBP      ; 0051afe6 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0051afec | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0051aff1
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 0051aff6
    LEA EAX,[EDI*0x4 + 0x0]             ; 0051aff9
        ;   Label: LAB_0051aff9
    LEA ESI,[EDI + EAX*0x1]             ; 0051b000
    MOV EAX,dword ptr [EBX + 0x414]     ; 0051b003
    SHL ESI,0x2                         ; 0051b009
    PUSH 0x0                            ; 0051b00c
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x8] ; 0051b00e
    PUSH EDX                            ; 0051b012
    MOV ECX,dword ptr [ESP + 0x8]       ; 0051b013
    PUSH ECX                            ; 0051b017
    CALL crt_stdio.c_fseek_FUN_005b929c ; 0051b018
        ;   XREF to: 005b929c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fseek_FUN_005b929c()
    ADD ESP,0xc                         ; 0051b01d
    MOV EAX,dword ptr [EBX + 0x414]     ; 0051b020
    MOV EBP,dword ptr [ESP]             ; 0051b026
    MOV EDI,dword ptr [ESI + EAX*0x1 + 0x4] ; 0051b029
    XOR EBX,EBX                         ; 0051b02d
    MOV ESI,0xffffffff                  ; 0051b02f
    TEST EDI,EDI                        ; 0051b034
    JLE 0x0051b060                      ; 0051b036
        ;   XREF to: 0051b060 (CONDITIONAL_JUMP)  ; LAB_0051b060
    PUSH EBP                            ; 0051b038
        ;   Label: LAB_0051b038
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 0051b039
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005b8180()
    ADD ESP,0x4                         ; 0051b03e
    AND EAX,0xff                        ; 0051b041
    PUSH EAX                            ; 0051b046
    PUSH ESI                            ; 0051b047
    INC EBX                             ; 0051b048
    CALL engine_pod.cpp_crc32UpdateByte_FUN_00519cb0 ; 0051b049
        ;   XREF to: 00519cb0 (UNCONDITIONAL_CALL)  ; uint engine_pod.cpp_crc32UpdateByte_FUN_00519cb0(uint current_crc, uchar data_byte)
    ADD ESP,0x8                         ; 0051b04e
    MOV ESI,EAX                         ; 0051b051
    CMP EBX,EDI                         ; 0051b053
    JL 0x0051b038                       ; 0051b055
        ;   XREF to: 0051b038 (CONDITIONAL_JUMP)  ; LAB_0051b038
    LEA EAX,[EAX]                       ; 0051b057
    LEA EDX,[EDX]                       ; 0051b05d
    MOV EBX,dword ptr [ESP]             ; 0051b060
        ;   Label: LAB_0051b060
    PUSH EBX                            ; 0051b063
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 0051b064
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 0051b069
    MOV EAX,ESI                         ; 0051b06c
    ADD ESP,0x4                         ; 0051b06e
    POP EBP                             ; 0051b071
    POP EDI                             ; 0051b072
    POP ESI                             ; 0051b073
    POP EBX                             ; 0051b074
    RET                                 ; 0051b075

