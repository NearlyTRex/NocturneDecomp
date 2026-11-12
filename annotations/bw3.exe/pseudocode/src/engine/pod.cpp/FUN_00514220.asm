; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint engine_pod_cpp_FUN_00514220(int param_1,int param_2)
;
;
; XREF[1]:
;   engine_pod.cpp_FUN_00513d20 at 00513f02
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_stdio.c_fclose_FUN_005a3a90
;   crt_stdio.c_fgetc_FUN_005a32b0
;   crt_stdio.c_fopen_FUN_005a43ec
;   crt_stdio.c_fseek_FUN_005a457c
;   engine_pod.cpp_crc32UpdateByte_FUN_00512d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00514220
        ;   Label: engine_pod.cpp_FUN_00514220
    PUSH ESI                            ; 00514221
    PUSH EDI                            ; 00514222
    PUSH EBP                            ; 00514223
    SUB ESP,0x4                         ; 00514224
    MOV EBX,dword ptr [ESP + 0x18]      ; 00514227
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0051422b
    TEST EDI,EDI                        ; 0051422f
    JL 0x0051423b                       ; 00514231
        ;   XREF to: 0051423b (CONDITIONAL_JUMP)  ; LAB_0051423b
    CMP EDI,dword ptr [EBX + 0x410]     ; 00514233
    JL 0x0051425e                       ; 00514239
        ;   XREF to: 0051425e (CONDITIONAL_JUMP)  ; LAB_0051425e
    MOV ECX,0x5cc7c4                    ; 0051423b
        ;   Label: LAB_0051423b
    MOV ESI,0x401                       ; 00514240
    PUSH 0x5cc7d6                       ; 00514245
    MOV dword ptr [0x01d71de0],ECX      ; 0051424a | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 00514250 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00514256
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0051425b
    PUSH 0x5cc802                       ; 0051425e
        ;   Label: LAB_0051425e
    LEA ESI,[EBX + 0x4]                 ; 00514263
    PUSH ESI                            ; 00514266
    CALL crt_stdio.c_fopen_FUN_005a43ec ; 00514267
        ;   XREF to: 005a43ec (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_005a43ec()
    ADD ESP,0x8                         ; 0051426c
    MOV dword ptr [ESP],EAX             ; 0051426f
    TEST EAX,EAX                        ; 00514272
    JNZ 0x00514299                      ; 00514274
        ;   XREF to: 00514299 (CONDITIONAL_JUMP)  ; LAB_00514299
    PUSH ESI                            ; 00514276
    MOV EBP,0x5cc805                    ; 00514277
    MOV EAX,0x406                       ; 0051427c
    PUSH 0x5cc817                       ; 00514281
    MOV dword ptr [0x01d71de0],EBP      ; 00514286 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 0051428c | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00514291
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 00514296
    LEA EAX,[EDI*0x4 + 0x0]             ; 00514299
        ;   Label: LAB_00514299
    LEA ESI,[EDI + EAX*0x1]             ; 005142a0
    MOV EAX,dword ptr [EBX + 0x414]     ; 005142a3
    SHL ESI,0x2                         ; 005142a9
    PUSH 0x0                            ; 005142ac
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x8] ; 005142ae
    PUSH EDX                            ; 005142b2
    MOV ECX,dword ptr [ESP + 0x8]       ; 005142b3
    PUSH ECX                            ; 005142b7
    CALL crt_stdio.c_fseek_FUN_005a457c ; 005142b8
        ;   XREF to: 005a457c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fseek_FUN_005a457c()
    ADD ESP,0xc                         ; 005142bd
    MOV EAX,dword ptr [EBX + 0x414]     ; 005142c0
    MOV EBP,dword ptr [ESP]             ; 005142c6
    MOV EDI,dword ptr [ESI + EAX*0x1 + 0x4] ; 005142c9
    XOR EBX,EBX                         ; 005142cd
    MOV ESI,0xffffffff                  ; 005142cf
    TEST EDI,EDI                        ; 005142d4
    JLE 0x00514300                      ; 005142d6
        ;   XREF to: 00514300 (CONDITIONAL_JUMP)  ; LAB_00514300
    PUSH EBP                            ; 005142d8
        ;   Label: LAB_005142d8
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 005142d9
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005a32b0()
    ADD ESP,0x4                         ; 005142de
    AND EAX,0xff                        ; 005142e1
    PUSH EAX                            ; 005142e6
    PUSH ESI                            ; 005142e7
    INC EBX                             ; 005142e8
    CALL engine_pod.cpp_crc32UpdateByte_FUN_00512d60 ; 005142e9
        ;   XREF to: 00512d60 (UNCONDITIONAL_CALL)  ; uint engine_pod.cpp_crc32UpdateByte_FUN_00512d60(uint current_crc, uchar data_byte)
    ADD ESP,0x8                         ; 005142ee
    MOV ESI,EAX                         ; 005142f1
    CMP EBX,EDI                         ; 005142f3
    JL 0x005142d8                       ; 005142f5
        ;   XREF to: 005142d8 (CONDITIONAL_JUMP)  ; LAB_005142d8
    LEA EAX,[EAX]                       ; 005142f7
    LEA EDX,[EDX]                       ; 005142fd
    MOV EBX,dword ptr [ESP]             ; 00514300
        ;   Label: LAB_00514300
    PUSH EBX                            ; 00514303
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 00514304
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 00514309
    MOV EAX,ESI                         ; 0051430c
    ADD ESP,0x4                         ; 0051430e
    POP EBP                             ; 00514311
    POP EDI                             ; 00514312
    POP ESI                             ; 00514313
    POP EBX                             ; 00514314
    RET                                 ; 00514315

