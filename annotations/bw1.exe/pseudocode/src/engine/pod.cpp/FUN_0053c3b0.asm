; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_pod_cpp_FUN_0053c3b0(int param_1,int param_2)
;
;
; XREF[1]:
;   engine_pod.cpp_CPod_resolveDependenciesAndSort_FUN_0053cfa0 at 0053d0f3
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

    PUSH EBX                            ; 0053c3b0
        ;   Label: engine_pod.cpp_FUN_0053c3b0
    PUSH EDI                            ; 0053c3b1
    PUSH EBP                            ; 0053c3b2
    SUB ESP,0x108                       ; 0053c3b3
    MOV EBP,dword ptr [ESP + 0x118]     ; 0053c3b9
    MOV EBX,ESI                         ; 0053c3c0
    MOV EDX,dword ptr [ESP + 0x11c]     ; 0053c3c2
    TEST EDX,EDX                        ; 0053c3c9
    JL 0x0053c3d5                       ; 0053c3cb
        ;   XREF to: 0053c3d5 (CONDITIONAL_JUMP)  ; LAB_0053c3d5
    CMP EDX,dword ptr [EBP + 0x424]     ; 0053c3cd
    JL 0x0053c3f8                       ; 0053c3d3
        ;   XREF to: 0053c3f8 (CONDITIONAL_JUMP)  ; LAB_0053c3f8
    MOV ESI,0x5ed883                    ; 0053c3d5
        ;   Label: LAB_0053c3d5
    MOV EDI,0x3d8                       ; 0053c3da
    PUSH 0x5ed895                       ; 0053c3df
    MOV dword ptr [0x01d1d400],ESI      ; 0053c3e4 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 0053c3ea | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0053c3f0
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0053c3f5
    PUSH 0x5ed8d6                       ; 0053c3f8
        ;   Label: LAB_0053c3f8
    LEA EDI,[EBP + 0x4]                 ; 0053c3fd
    PUSH EDI                            ; 0053c400
    CALL crt_stdio.c_fopen_FUN_005c157c ; 0053c401
        ;   XREF to: 005c157c (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_005c157c(char * filename, char * mode)
    ADD ESP,0x8                         ; 0053c406
    MOV ESI,EAX                         ; 0053c409
    TEST EAX,EAX                        ; 0053c40b
    JNZ 0x0053c432                      ; 0053c40d
        ;   XREF to: 0053c432 (CONDITIONAL_JUMP)  ; LAB_0053c432
    PUSH EDI                            ; 0053c40f
    MOV EAX,0x5ed8d9                    ; 0053c410
    MOV EDX,0x3dd                       ; 0053c415
    PUSH 0x5ed8eb                       ; 0053c41a
    MOV [0x01d1d400],EAX                ; 0053c41f | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0053c424 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0053c42a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 0053c42f
    MOV EDX,dword ptr [ESP + 0x11c]     ; 0053c432
        ;   Label: LAB_0053c432
    MOV EAX,EDX                         ; 0053c439
    SHL EAX,0x5                         ; 0053c43b
    ADD EAX,EDX                         ; 0053c43e
    MOV ECX,dword ptr [EBP + 0x428]     ; 0053c440
    SHL EAX,0x3                         ; 0053c446
    PUSH 0x0                            ; 0053c449
    ADD EAX,ECX                         ; 0053c44b
    PUSH EAX                            ; 0053c44d
    PUSH ESI                            ; 0053c44e
    CALL crt_stdio.c_fseek_FUN_005c170c ; 0053c44f
        ;   XREF to: 005c170c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005c170c(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 0053c454
    PUSH ESI                            ; 0053c457
    PUSH 0x1                            ; 0053c458
    PUSH 0x108                          ; 0053c45a
    LEA EAX,[ESP + 0xc]                 ; 0053c45f
    PUSH EAX                            ; 0053c463
    CALL crt_stdio.c_fread_FUN_005c0b10 ; 0053c464
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005c0b10(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    MOV AH,byte ptr [ESI + 0xc]         ; 0053c469
    ADD ESP,0x10                        ; 0053c46c
    TEST AH,0x20                        ; 0053c46f
    JNZ 0x0053c496                      ; 0053c472
        ;   XREF to: 0053c496 (CONDITIONAL_JUMP)  ; LAB_0053c496
    PUSH ESI                            ; 0053c474
        ;   Label: LAB_0053c474
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 0053c475
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    MOV EDI,EBX                         ; 0053c47a
    MOV ECX,0x42                        ; 0053c47c
    LEA ESI,[ESP + 0x4]                 ; 0053c481
    ADD ESP,0x4                         ; 0053c485
    MOVSD.REP ES:EDI,ESI                ; 0053c488
    MOV EAX,EBX                         ; 0053c48a
    ADD ESP,0x108                       ; 0053c48c
    POP EBP                             ; 0053c492
    POP EDI                             ; 0053c493
    POP EBX                             ; 0053c494
    RET                                 ; 0053c495
    ADD EBP,0x4                         ; 0053c496
        ;   Label: LAB_0053c496
    PUSH EBP                            ; 0053c499
    MOV EDI,0x5ed919                    ; 0053c49a
    MOV EAX,0x3ee                       ; 0053c49f
    PUSH 0x5ed92b                       ; 0053c4a4
    MOV dword ptr [0x01d1d400],EDI      ; 0053c4a9 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0053c4af | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0053c4b4
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 0053c4b9
    JMP 0x0053c474                      ; 0053c4bc
        ;   XREF to: 0053c474 (UNCONDITIONAL_JUMP)  ; LAB_0053c474

