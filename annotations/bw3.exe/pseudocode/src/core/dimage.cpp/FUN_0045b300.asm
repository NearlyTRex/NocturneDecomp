; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dimage_cpp_FUN_0045b300(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_dimage.cpp_CDemonImage_allocMemory_FUN_0045b210
;   core_dimage.cpp_CDemonImage_packColor_FUN_0045b2a0
;   core_main.c_FUN_004e4330
;   crt_stdio.c_fclose_FUN_005a3a90
;   crt_stdio.c_fread_FUN_005a3890
;   engine_dosio.cpp_FUN_004659c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045b300
        ;   Label: core_dimage.cpp_FUN_0045b300
    PUSH ESI                            ; 0045b301
    PUSH EDI                            ; 0045b302
    PUSH EBP                            ; 0045b303
    SUB ESP,0x10c                       ; 0045b304
    MOV ESI,dword ptr [ESP + 0x124]     ; 0045b30a
    MOV EBP,dword ptr [ESP + 0x128]     ; 0045b311
    MOV EDI,ESP                         ; 0045b318
    PUSH EDI                            ; 0045b31a
    MOV AL,byte ptr [ESI]               ; 0045b31b
        ;   Label: LAB_0045b31b
    MOV byte ptr [EDI],AL               ; 0045b31d
    CMP AL,0x0                          ; 0045b31f
    JZ 0x0045b333                       ; 0045b321
        ;   XREF to: 0045b333 (CONDITIONAL_JUMP)  ; LAB_0045b333
    MOV AL,byte ptr [ESI + 0x1]         ; 0045b323
    ADD ESI,0x2                         ; 0045b326
    MOV byte ptr [EDI + 0x1],AL         ; 0045b329
    ADD EDI,0x2                         ; 0045b32c
    CMP AL,0x0                          ; 0045b32f
    JNZ 0x0045b31b                      ; 0045b331
        ;   XREF to: 0045b31b (CONDITIONAL_JUMP)  ; LAB_0045b31b
    POP EDI                             ; 0045b333
        ;   Label: LAB_0045b333
    PUSH 0x5bb036                       ; 0045b334
    LEA EAX,[ESP + 0x4]                 ; 0045b339
    PUSH EAX                            ; 0045b33d
    PUSH 0x5bb039                       ; 0045b33e
    CALL engine_dosio.cpp_FUN_004659c0  ; 0045b343
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_004659c0(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0045b348
    MOV EBX,EAX                         ; 0045b34b
    TEST EAX,EAX                        ; 0045b34d
    JZ 0x0045b4f3                       ; 0045b34f
        ;   XREF to: 0045b4f3 (CONDITIONAL_JUMP)  ; LAB_0045b4f3
    MOV EAX,dword ptr [ESP + 0x120]     ; 0045b355
        ;   Label: LAB_0045b355
    MOV ESI,dword ptr [ESP + 0x120]     ; 0045b35c
    MOV dword ptr [EAX + 0x304],EBP     ; 0045b363
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0045b369
    PUSH ESI                            ; 0045b370
    MOV dword ptr [ESI + 0x308],EAX     ; 0045b371
    CALL core_dimage.cpp_CDemonImage_allocMemory_FUN_0045b210 ; 0045b377
        ;   XREF to: 0045b210 (UNCONDITIONAL_CALL)  ; void core_dimage.cpp_CDemonImage_allocMemory_FUN_0045b210(CDemonImage * this_ptr)
    ADD ESP,0x4                         ; 0045b37c
    PUSH EBX                            ; 0045b37f
    MOV EDI,dword ptr [ESP + 0x130]     ; 0045b380
    PUSH EDI                            ; 0045b387
    PUSH EBP                            ; 0045b388
    MOV EBP,dword ptr [ESI + 0x300]     ; 0045b389
    PUSH EBP                            ; 0045b38f
    CALL crt_stdio.c_fread_FUN_005a3890 ; 0045b390
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005a3890(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0045b395
    PUSH EBX                            ; 0045b398
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 0045b399
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 0045b39e
    MOV ESI,ESP                         ; 0045b3a1
    MOV DL,0x2e                         ; 0045b3a3
    MOV AL,byte ptr [ESI]               ; 0045b3a5
        ;   Label: LAB_0045b3a5
    CMP AL,DL                           ; 0045b3a7
    JZ 0x0045b3bd                       ; 0045b3a9
        ;   XREF to: 0045b3bd (CONDITIONAL_JUMP)  ; LAB_0045b3bd
    CMP AL,0x0                          ; 0045b3ab
    JZ 0x0045b3bb                       ; 0045b3ad
        ;   XREF to: 0045b3bb (CONDITIONAL_JUMP)  ; LAB_0045b3bb
    INC ESI                             ; 0045b3af
    MOV AL,byte ptr [ESI]               ; 0045b3b0
    CMP AL,DL                           ; 0045b3b2
    JZ 0x0045b3bd                       ; 0045b3b4
        ;   XREF to: 0045b3bd (CONDITIONAL_JUMP)  ; LAB_0045b3bd
    INC ESI                             ; 0045b3b6
    CMP AL,0x0                          ; 0045b3b7
    JNZ 0x0045b3a5                      ; 0045b3b9
        ;   XREF to: 0045b3a5 (CONDITIONAL_JUMP)  ; LAB_0045b3a5
    SUB ESI,ESI                         ; 0045b3bb
        ;   Label: LAB_0045b3bb
    MOV EDI,ESI                         ; 0045b3bd
        ;   Label: LAB_0045b3bd
    TEST ESI,ESI                        ; 0045b3bf
    JNZ 0x0045b3e5                      ; 0045b3c1
        ;   XREF to: 0045b3e5 (CONDITIONAL_JUMP)  ; LAB_0045b3e5
    MOV EAX,0x5bb07a                    ; 0045b3c3
    MOV EDX,0x7b                        ; 0045b3c8
    PUSH 0x5bb08d                       ; 0045b3cd
    MOV [0x01d71de0],EAX                ; 0045b3d2 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 0045b3d7 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0045b3dd
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0045b3e2
    MOV ESI,0x5bb0bb                    ; 0045b3e5
        ;   Label: LAB_0045b3e5
    PUSH EDI                            ; 0045b3ea
    MOV AL,byte ptr [ESI]               ; 0045b3eb
        ;   Label: LAB_0045b3eb
    MOV byte ptr [EDI],AL               ; 0045b3ed
    CMP AL,0x0                          ; 0045b3ef
    JZ 0x0045b403                       ; 0045b3f1
        ;   XREF to: 0045b403 (CONDITIONAL_JUMP)  ; LAB_0045b403
    MOV AL,byte ptr [ESI + 0x1]         ; 0045b3f3
    ADD ESI,0x2                         ; 0045b3f6
    MOV byte ptr [EDI + 0x1],AL         ; 0045b3f9
    ADD EDI,0x2                         ; 0045b3fc
    CMP AL,0x0                          ; 0045b3ff
    JNZ 0x0045b3eb                      ; 0045b401
        ;   XREF to: 0045b3eb (CONDITIONAL_JUMP)  ; LAB_0045b3eb
    POP EDI                             ; 0045b403
        ;   Label: LAB_0045b403
    PUSH 0x5bb0c0                       ; 0045b404
    LEA EAX,[ESP + 0x4]                 ; 0045b409
    PUSH EAX                            ; 0045b40d
    PUSH 0x5bb0c3                       ; 0045b40e
    CALL engine_dosio.cpp_FUN_004659c0  ; 0045b413
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_004659c0(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0045b418
    MOV EBX,EAX                         ; 0045b41b
    TEST EAX,EAX                        ; 0045b41d
    JZ 0x0045b51b                       ; 0045b41f
        ;   XREF to: 0045b51b (CONDITIONAL_JUMP)  ; LAB_0045b51b
    PUSH EBX                            ; 0045b425
        ;   Label: LAB_0045b425
    PUSH 0x3                            ; 0045b426
    MOV EAX,dword ptr [ESP + 0x128]     ; 0045b428
    PUSH 0x100                          ; 0045b42f
    ADD EAX,0x30c                       ; 0045b434
    PUSH EAX                            ; 0045b439
    CALL crt_stdio.c_fread_FUN_005a3890 ; 0045b43a
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005a3890(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0045b43f
    PUSH EBX                            ; 0045b442
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 0045b443
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 0045b448
    MOV EDI,dword ptr [ESP + 0x120]     ; 0045b44b
    MOV ESI,EDI                         ; 0045b452
    MOV EBX,EDI                         ; 0045b454
    LEA EAX,[EDI + 0x200]               ; 0045b456
    MOV dword ptr [ESP + 0x108],EAX     ; 0045b45c
    XOR EAX,EAX                         ; 0045b463
        ;   Label: LAB_0045b463
    MOV AL,byte ptr [EBX + 0x30c]       ; 0045b465
    MOV dword ptr [ESP + 0x100],EAX     ; 0045b46b
    XOR EAX,EAX                         ; 0045b472
    MOV AL,byte ptr [EBX + 0x30e]       ; 0045b474
    PUSH EAX                            ; 0045b47a
    MOVZX EBP,byte ptr [EBX + 0x30d]    ; 0045b47b
    PUSH EBP                            ; 0045b482
    MOV EDX,dword ptr [ESP + 0x108]     ; 0045b483
    PUSH EDX                            ; 0045b48a
    MOV ECX,dword ptr [ESP + 0x12c]     ; 0045b48b
    PUSH ECX                            ; 0045b492
    MOV dword ptr [ESP + 0x114],EAX     ; 0045b493
    CALL core_dimage.cpp_CDemonImage_packColor_FUN_0045b2a0 ; 0045b49a
        ;   XREF to: 0045b2a0 (UNCONDITIONAL_CALL)  ; ushort core_dimage.cpp_CDemonImage_packColor_FUN_0045b2a0(CDemonImage * this_ptr, uint red, uint green, uint blue)
    ADD ESP,0x10                        ; 0045b49f
    MOV word ptr [ESI + 0x100],AX       ; 0045b4a2
    MOV EAX,dword ptr [ESP + 0x100]     ; 0045b4a9
    SHR EBP,0x3                         ; 0045b4b0
    SHR EAX,0x3                         ; 0045b4b3
    SHL EBP,0x5                         ; 0045b4b6
    SHL EAX,0xa                         ; 0045b4b9
    INC EDI                             ; 0045b4bc
    ADD EBP,EAX                         ; 0045b4bd
    MOV EAX,dword ptr [ESP + 0x104]     ; 0045b4bf
    ADD ESI,0x2                         ; 0045b4c6
    SHR EAX,0x3                         ; 0045b4c9
    ADD EBX,0x3                         ; 0045b4cc
    MOV AL,byte ptr [EAX + EBP*0x1 + 0x1c62070] ; 0045b4cf
    MOV EBP,dword ptr [ESP + 0x108]     ; 0045b4d6
    MOV byte ptr [EDI + -0x1],AL        ; 0045b4dd
    CMP ESI,EBP                         ; 0045b4e0
    JNZ 0x0045b463                      ; 0045b4e2
        ;   XREF to: 0045b463 (CONDITIONAL_JUMP)  ; LAB_0045b463
    ADD ESP,0x10c                       ; 0045b4e8
    POP EBP                             ; 0045b4ee
    POP EDI                             ; 0045b4ef
    POP ESI                             ; 0045b4f0
    POP EBX                             ; 0045b4f1
    RET                                 ; 0045b4f2
    MOV EDX,0x5bb03d                    ; 0045b4f3
        ;   Label: LAB_0045b4f3
    MOV ECX,0x68                        ; 0045b4f8
    PUSH 0x5bb050                       ; 0045b4fd
    MOV dword ptr [0x01d71de0],EDX      ; 0045b502 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0045b508 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0045b50e
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0045b513
    JMP 0x0045b355                      ; 0045b516
        ;   XREF to: 0045b355 (UNCONDITIONAL_JUMP)  ; LAB_0045b355
    MOV ECX,0x5bb0c7                    ; 0045b51b
        ;   Label: LAB_0045b51b
    MOV ESI,0x7f                        ; 0045b520
    PUSH 0x5bb0da                       ; 0045b525
    MOV dword ptr [0x01d71de0],ECX      ; 0045b52a | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0045b530 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0045b536
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0045b53b
    JMP 0x0045b425                      ; 0045b53e
        ;   XREF to: 0045b425 (UNCONDITIONAL_JUMP)  ; LAB_0045b425

