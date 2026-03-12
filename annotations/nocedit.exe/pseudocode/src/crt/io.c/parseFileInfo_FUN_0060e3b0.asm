; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_io_c_parseFileInfo_FUN_0060e3b0(void)
;
; Local Variables:
; char[12]         Stack[-0x20]:12  local_20
; long             Stack[-0x14]:4  local_14
;
; XREF[1]:
;   crt_environ.c_staticInit_FUN_0060c650 at 0060c729
;
; Referenced Globals:
;   TerminatedCString s_C_FILE_INFO_00659734
;   TerminatedCString s_C_FILE_INFO_00659740
;
; Called Functions:
;   crt_env.c_getenv_FUN_006013f0
;   crt_env.c_putenv_internal_FUN_0060ee80
;   crt_io.c_setFileDescriptorFlags_FUN_00608908
;   crt_stdlib.c_strtol_FUN_0060edfc
;   crt_string.c__strncpy_FUN_00600f40
;   crt_unknown.c_SetStdHandleToSomething_FUN_00608a1c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060e3b0
        ;   Label: crt_io.c_parseFileInfo_FUN_0060e3b0
    PUSH ESI                            ; 0060e3b1
    PUSH EDI                            ; 0060e3b2
    PUSH EBP                            ; 0060e3b3
    SUB ESP,0x10                        ; 0060e3b4
    PUSH 0x659734                       ; 0060e3b7 | = "C_FILE_INFO"
    CALL crt_env.c_getenv_FUN_006013f0  ; 0060e3bc
        ;   XREF to: 006013f0 (UNCONDITIONAL_CALL)  ; char * crt_env.c_getenv_FUN_006013f0(char * name)
    ADD ESP,0x4                         ; 0060e3c1
    MOV EBX,EAX                         ; 0060e3c4
    TEST EAX,EAX                        ; 0060e3c6
    JZ 0x0060e4e6                       ; 0060e3c8
        ;   XREF to: 0060e4e6 (CONDITIONAL_JUMP)  ; LAB_0060e4e6
    CMP byte ptr [EBX],0x0              ; 0060e3ce
        ;   Label: LAB_0060e3ce
    JZ 0x0060e4d9                       ; 0060e3d1
        ;   XREF to: 0060e4d9 (CONDITIONAL_JUMP)  ; LAB_0060e4d9
    MOV DL,0x3a                         ; 0060e3d7
    MOV ESI,EBX                         ; 0060e3d9
    MOV AL,byte ptr [ESI]               ; 0060e3db
        ;   Label: LAB_0060e3db
    CMP AL,DL                           ; 0060e3dd
    JZ 0x0060e3f3                       ; 0060e3df
        ;   XREF to: 0060e3f3 (CONDITIONAL_JUMP)  ; LAB_0060e3f3
    CMP AL,0x0                          ; 0060e3e1
    JZ 0x0060e3f1                       ; 0060e3e3
        ;   XREF to: 0060e3f1 (CONDITIONAL_JUMP)  ; LAB_0060e3f1
    INC ESI                             ; 0060e3e5
    MOV AL,byte ptr [ESI]               ; 0060e3e6
    CMP AL,DL                           ; 0060e3e8
    JZ 0x0060e3f3                       ; 0060e3ea
        ;   XREF to: 0060e3f3 (CONDITIONAL_JUMP)  ; LAB_0060e3f3
    INC ESI                             ; 0060e3ec
    CMP AL,0x0                          ; 0060e3ed
    JNZ 0x0060e3db                      ; 0060e3ef
        ;   XREF to: 0060e3db (CONDITIONAL_JUMP)  ; LAB_0060e3db
    SUB ESI,ESI                         ; 0060e3f1
        ;   Label: LAB_0060e3f1
    MOV EDI,ESI                         ; 0060e3f3
        ;   Label: LAB_0060e3f3
    SUB ESI,EBX                         ; 0060e3f5
    PUSH ESI                            ; 0060e3f7
    PUSH EBX                            ; 0060e3f8
    LEA EBX,[ESP + 0x8]                 ; 0060e3f9
    PUSH EBX                            ; 0060e3fd
    CALL crt_string.c__strncpy_FUN_00600f40 ; 0060e3fe
        ;   XREF to: 00600f40 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_00600f40(char * dest, char * src, SIZE_T count)
    ADD ESP,0xc                         ; 0060e403
    PUSH 0x10                           ; 0060e406
    PUSH 0x0                            ; 0060e408
    LEA EBX,[ESP + 0x8]                 ; 0060e40a
    XOR DL,DL                           ; 0060e40e
    PUSH EBX                            ; 0060e410
    MOV byte ptr [ESP + ESI*0x1 + 0xc],DL ; 0060e411
    LEA ESI,[EDI + 0x1]                 ; 0060e415
    CALL crt_stdlib.c_strtol_FUN_0060edfc ; 0060e418
        ;   XREF to: 0060edfc (UNCONDITIONAL_CALL)  ; long crt_stdlib.c_strtol_FUN_0060edfc(char * str, char * * endptr, int base)
    MOV DL,0x3a                         ; 0060e41d
    ADD ESP,0xc                         ; 0060e41f
    MOV EBP,EAX                         ; 0060e422
    MOV EBX,ESI                         ; 0060e424
    MOV AL,byte ptr [ESI]               ; 0060e426
        ;   Label: LAB_0060e426
    CMP AL,DL                           ; 0060e428
    JZ 0x0060e43e                       ; 0060e42a
        ;   XREF to: 0060e43e (CONDITIONAL_JUMP)  ; LAB_0060e43e
    CMP AL,0x0                          ; 0060e42c
    JZ 0x0060e43c                       ; 0060e42e
        ;   XREF to: 0060e43c (CONDITIONAL_JUMP)  ; LAB_0060e43c
    INC ESI                             ; 0060e430
    MOV AL,byte ptr [ESI]               ; 0060e431
    CMP AL,DL                           ; 0060e433
    JZ 0x0060e43e                       ; 0060e435
        ;   XREF to: 0060e43e (CONDITIONAL_JUMP)  ; LAB_0060e43e
    INC ESI                             ; 0060e437
    CMP AL,0x0                          ; 0060e438
    JNZ 0x0060e426                      ; 0060e43a
        ;   XREF to: 0060e426 (CONDITIONAL_JUMP)  ; LAB_0060e426
    SUB ESI,ESI                         ; 0060e43c
        ;   Label: LAB_0060e43c
    MOV EDI,ESI                         ; 0060e43e
        ;   Label: LAB_0060e43e
    SUB ESI,EBX                         ; 0060e440
    PUSH ESI                            ; 0060e442
    PUSH EBX                            ; 0060e443
    LEA EBX,[ESP + 0x8]                 ; 0060e444
    PUSH EBX                            ; 0060e448
    CALL crt_string.c__strncpy_FUN_00600f40 ; 0060e449
        ;   XREF to: 00600f40 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_00600f40(char * dest, char * src, SIZE_T count)
    ADD ESP,0xc                         ; 0060e44e
    PUSH 0x10                           ; 0060e451
    PUSH 0x0                            ; 0060e453
    LEA EBX,[ESP + 0x8]                 ; 0060e455
    XOR DH,DH                           ; 0060e459
    PUSH EBX                            ; 0060e45b
    MOV byte ptr [ESP + ESI*0x1 + 0xc],DH ; 0060e45c
    LEA ESI,[EDI + 0x1]                 ; 0060e460
    CALL crt_stdlib.c_strtol_FUN_0060edfc ; 0060e463
        ;   XREF to: 0060edfc (UNCONDITIONAL_CALL)  ; long crt_stdlib.c_strtol_FUN_0060edfc(char * str, char * * endptr, int base)
    MOV dword ptr [ESP + 0x18],EAX      ; 0060e468
    ADD ESP,0xc                         ; 0060e46c
    MOV DL,0x2a                         ; 0060e46f
    MOV EBX,ESI                         ; 0060e471
    MOV AL,byte ptr [ESI]               ; 0060e473
        ;   Label: LAB_0060e473
    CMP AL,DL                           ; 0060e475
    JZ 0x0060e48b                       ; 0060e477
        ;   XREF to: 0060e48b (CONDITIONAL_JUMP)  ; LAB_0060e48b
    CMP AL,0x0                          ; 0060e479
    JZ 0x0060e489                       ; 0060e47b
        ;   XREF to: 0060e489 (CONDITIONAL_JUMP)  ; LAB_0060e489
    INC ESI                             ; 0060e47d
    MOV AL,byte ptr [ESI]               ; 0060e47e
    CMP AL,DL                           ; 0060e480
    JZ 0x0060e48b                       ; 0060e482
        ;   XREF to: 0060e48b (CONDITIONAL_JUMP)  ; LAB_0060e48b
    INC ESI                             ; 0060e484
    CMP AL,0x0                          ; 0060e485
    JNZ 0x0060e473                      ; 0060e487
        ;   XREF to: 0060e473 (CONDITIONAL_JUMP)  ; LAB_0060e473
    SUB ESI,ESI                         ; 0060e489
        ;   Label: LAB_0060e489
    MOV EDI,ESI                         ; 0060e48b
        ;   Label: LAB_0060e48b
    SUB ESI,EBX                         ; 0060e48d
    PUSH ESI                            ; 0060e48f
    PUSH EBX                            ; 0060e490
    LEA EBX,[ESP + 0x8]                 ; 0060e491
    PUSH EBX                            ; 0060e495
    CALL crt_string.c__strncpy_FUN_00600f40 ; 0060e496
        ;   XREF to: 00600f40 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_00600f40(char * dest, char * src, SIZE_T count)
    ADD ESP,0xc                         ; 0060e49b
    PUSH 0x10                           ; 0060e49e
    XOR BL,BL                           ; 0060e4a0
    PUSH 0x0                            ; 0060e4a2
    MOV byte ptr [ESP + ESI*0x1 + 0x8],BL ; 0060e4a4
    LEA EBX,[ESP + 0x8]                 ; 0060e4a8
    PUSH EBX                            ; 0060e4ac
    CALL crt_stdlib.c_strtol_FUN_0060edfc ; 0060e4ad
        ;   XREF to: 0060edfc (UNCONDITIONAL_CALL)  ; long crt_stdlib.c_strtol_FUN_0060edfc(char * str, char * * endptr, int base)
    ADD ESP,0xc                         ; 0060e4b2
    PUSH EBP                            ; 0060e4b5
    MOV EDX,dword ptr [ESP + 0x10]      ; 0060e4b6
    PUSH EDX                            ; 0060e4ba
    MOV EBX,EAX                         ; 0060e4bb
    CALL crt_unknown.c_SetStdHandleToSomething_FUN_00608a1c ; 0060e4bd
        ;   XREF to: 00608a1c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_SetStdHandleToSomething_FUN_00608a1c()
    ADD ESP,0x8                         ; 0060e4c2
    PUSH EBX                            ; 0060e4c5
    PUSH EBP                            ; 0060e4c6
    LEA ESI,[EDI + 0x1]                 ; 0060e4c7
    CALL crt_io.c_setFileDescriptorFlags_FUN_00608908 ; 0060e4ca
        ;   XREF to: 00608908 (UNCONDITIONAL_CALL)  ; void crt_io.c_setFileDescriptorFlags_FUN_00608908(int file_handle_index, uint flags)
    MOV EBX,ESI                         ; 0060e4cf
    ADD ESP,0x8                         ; 0060e4d1
    JMP 0x0060e3ce                      ; 0060e4d4
        ;   XREF to: 0060e3ce (UNCONDITIONAL_JUMP)  ; LAB_0060e3ce
    PUSH 0x659740                       ; 0060e4d9 | = "C_FILE_INFO="
        ;   Label: LAB_0060e4d9
    CALL crt_env.c_putenv_internal_FUN_0060ee80 ; 0060e4de
        ;   XREF to: 0060ee80 (UNCONDITIONAL_CALL)  ; int crt_env.c_putenv_internal_FUN_0060ee80(char * envstr)
    ADD ESP,0x4                         ; 0060e4e3
    ADD ESP,0x10                        ; 0060e4e6
        ;   Label: LAB_0060e4e6
    POP EBP                             ; 0060e4e9
    POP EDI                             ; 0060e4ea
    POP ESI                             ; 0060e4eb
    POP EBX                             ; 0060e4ec
    RET                                 ; 0060e4ed

