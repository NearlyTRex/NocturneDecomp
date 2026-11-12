; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_pod_cpp_FUN_0053c290(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_stdio.c_fclose_FUN_005c0d10
;   crt_stdio.c_fopen_FUN_005c157c
;   crt_stdio.c_fread_FUN_005c0b10
;   crt_stdio.c_fseek_FUN_005c170c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053c290
        ;   Label: engine_pod.cpp_FUN_0053c290
    PUSH EDI                            ; 0053c291
    PUSH EBP                            ; 0053c292
    SUB ESP,0x138                       ; 0053c293
    MOV EBP,dword ptr [ESP + 0x148]     ; 0053c299
    MOV EBX,ESI                         ; 0053c2a0
    MOV EDX,dword ptr [ESP + 0x14c]     ; 0053c2a2
    TEST EDX,EDX                        ; 0053c2a9
    JL 0x0053c2b5                       ; 0053c2ab
        ;   XREF to: 0053c2b5 (CONDITIONAL_JUMP)  ; LAB_0053c2b5
    CMP EDX,dword ptr [EBP + 0x41c]     ; 0053c2ad
    JL 0x0053c2d8                       ; 0053c2b3
        ;   XREF to: 0053c2d8 (CONDITIONAL_JUMP)  ; LAB_0053c2d8
    MOV ESI,0x5ed7b9                    ; 0053c2b5
        ;   Label: LAB_0053c2b5
    MOV EDI,0x3ab                       ; 0053c2ba
    PUSH 0x5ed7cb                       ; 0053c2bf
    MOV dword ptr [0x01d1d400],ESI      ; 0053c2c4 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 0053c2ca | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0053c2d0
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0053c2d5
    PUSH 0x5ed807                       ; 0053c2d8
        ;   Label: LAB_0053c2d8
    LEA EDI,[EBP + 0x4]                 ; 0053c2dd
    PUSH EDI                            ; 0053c2e0
    CALL crt_stdio.c_fopen_FUN_005c157c ; 0053c2e1
        ;   XREF to: 005c157c (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_005c157c(char * filename, char * mode)
    ADD ESP,0x8                         ; 0053c2e6
    MOV ESI,EAX                         ; 0053c2e9
    TEST EAX,EAX                        ; 0053c2eb
    JNZ 0x0053c312                      ; 0053c2ed
        ;   XREF to: 0053c312 (CONDITIONAL_JUMP)  ; LAB_0053c312
    PUSH EDI                            ; 0053c2ef
    MOV EAX,0x5ed80a                    ; 0053c2f0
    MOV EDX,0x3b0                       ; 0053c2f5
    PUSH 0x5ed81c                       ; 0053c2fa
    MOV [0x01d1d400],EAX                ; 0053c2ff | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0053c304 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0053c30a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 0053c30f
    MOV EDX,dword ptr [ESP + 0x14c]     ; 0053c312
        ;   Label: LAB_0053c312
    LEA EAX,[EDX*0x4 + 0x0]             ; 0053c319
    ADD EAX,EDX                         ; 0053c320
    SHL EAX,0x3                         ; 0053c322
    SUB EAX,EDX                         ; 0053c325
    MOV ECX,dword ptr [EBP + 0x420]     ; 0053c327
    SHL EAX,0x3                         ; 0053c32d
    PUSH 0x0                            ; 0053c330
    ADD EAX,ECX                         ; 0053c332
    PUSH EAX                            ; 0053c334
    PUSH ESI                            ; 0053c335
    CALL crt_stdio.c_fseek_FUN_005c170c ; 0053c336
        ;   XREF to: 005c170c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005c170c(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 0053c33b
    PUSH ESI                            ; 0053c33e
    PUSH 0x1                            ; 0053c33f
    PUSH 0x138                          ; 0053c341
    LEA EAX,[ESP + 0xc]                 ; 0053c346
    PUSH EAX                            ; 0053c34a
    CALL crt_stdio.c_fread_FUN_005c0b10 ; 0053c34b
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005c0b10(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    MOV AH,byte ptr [ESI + 0xc]         ; 0053c350
    ADD ESP,0x10                        ; 0053c353
    TEST AH,0x20                        ; 0053c356
    JNZ 0x0053c37d                      ; 0053c359
        ;   XREF to: 0053c37d (CONDITIONAL_JUMP)  ; LAB_0053c37d
    PUSH ESI                            ; 0053c35b
        ;   Label: LAB_0053c35b
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 0053c35c
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    MOV EDI,EBX                         ; 0053c361
    MOV ECX,0x4e                        ; 0053c363
    LEA ESI,[ESP + 0x4]                 ; 0053c368
    ADD ESP,0x4                         ; 0053c36c
    MOVSD.REP ES:EDI,ESI                ; 0053c36f
    MOV EAX,EBX                         ; 0053c371
    ADD ESP,0x138                       ; 0053c373
    POP EBP                             ; 0053c379
    POP EDI                             ; 0053c37a
    POP EBX                             ; 0053c37b
    RET                                 ; 0053c37c
    ADD EBP,0x4                         ; 0053c37d
        ;   Label: LAB_0053c37d
    PUSH EBP                            ; 0053c380
    MOV EDI,0x5ed845                    ; 0053c381
    MOV EAX,0x3c5                       ; 0053c386
    PUSH 0x5ed857                       ; 0053c38b
    MOV dword ptr [0x01d1d400],EDI      ; 0053c390 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0053c396 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0053c39b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 0053c3a0
    JMP 0x0053c35b                      ; 0053c3a3
        ;   XREF to: 0053c35b (UNCONDITIONAL_JUMP)  ; LAB_0053c35b

