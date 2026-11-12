; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_dosio_cpp_FUN_00461260(char *param_1,char *param_2,char *param_3)
;
;
; XREF[1]:
;   shape_edittool.cpp_FUN_00481ca0 at 00481cd4
;
; Called Functions:
;   engine_dosio.cpp_FUN_004610d0
;   engine_dosio.cpp_makePath_FUN_004610a0
;   engine_dosio.cpp_splitPath_FUN_00461070
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00461260
        ;   Label: engine_dosio.cpp_FUN_00461260
    PUSH ESI                            ; 00461261
    PUSH EDI                            ; 00461262
    SUB ESP,0x508                       ; 00461263
    MOV EDI,dword ptr [ESP + 0x51c]     ; 00461269
    MOV EBX,dword ptr [ESP + 0x520]     ; 00461270
    LEA ESI,[ESP + 0x200]               ; 00461277
    PUSH ESI                            ; 0046127e
    LEA ESI,[ESP + 0x304]               ; 0046127f
    PUSH ESI                            ; 00461286
    LEA ESI,[ESP + 0x408]               ; 00461287
    PUSH ESI                            ; 0046128e
    LEA ESI,[ESP + 0x50c]               ; 0046128f
    PUSH ESI                            ; 00461296
    PUSH EDI                            ; 00461297
    CALL engine_dosio.cpp_splitPath_FUN_00461070 ; 00461298
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00461070(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0046129d
    CMP byte ptr [ESP + 0x500],0x0      ; 004612a0
    JNZ 0x0046136f                      ; 004612a8
        ;   XREF to: 0046136f (CONDITIONAL_JUMP)  ; LAB_0046136f
    MOV DL,byte ptr [ESP + 0x400]       ; 004612ae
    CMP DL,0x5c                         ; 004612b5
    JNZ 0x00461361                      ; 004612b8
        ;   XREF to: 00461361 (CONDITIONAL_JUMP)  ; LAB_00461361
    MOV CL,byte ptr [ESP + 0x401]       ; 004612be
        ;   Label: LAB_004612be
    CMP CL,0x5c                         ; 004612c5
    JZ 0x0046136f                       ; 004612c8
        ;   XREF to: 0046136f (CONDITIONAL_JUMP)  ; LAB_0046136f
    CMP CL,0x2f                         ; 004612ce
    JZ 0x0046136f                       ; 004612d1
        ;   XREF to: 0046136f (CONDITIONAL_JUMP)  ; LAB_0046136f
    MOV ESI,ESP                         ; 004612d7
        ;   Label: LAB_004612d7
    PUSH ESI                            ; 004612d9
    LEA ESI,[ESP + 0x508]               ; 004612da
    PUSH ESI                            ; 004612e1
    MOV EDX,dword ptr [ESP + 0x520]     ; 004612e2
    PUSH EDX                            ; 004612e9
    CALL engine_dosio.cpp_FUN_004610d0  ; 004612ea
        ;   XREF to: 004610d0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_004610d0(char * input_path, char * drive, char * output_path)
    ADD ESP,0xc                         ; 004612ef
    MOV AL,byte ptr [ESP + 0x400]       ; 004612f2
    CMP AL,0x2f                         ; 004612f9
    JNZ 0x00461397                      ; 004612fb
        ;   XREF to: 00461397 (CONDITIONAL_JUMP)  ; LAB_00461397
    XOR DL,DL                           ; 00461301
        ;   Label: LAB_00461301
    MOV byte ptr [ESP],DL               ; 00461303
    LEA ESI,[ESP + 0x400]               ; 00461306
        ;   Label: LAB_00461306
    MOV EDI,ESP                         ; 0046130d
    PUSH EDI                            ; 0046130f
    SUB ECX,ECX                         ; 00461310
    DEC ECX                             ; 00461312
    MOV AL,0x0                          ; 00461313
    SCASB.REPNE ES:EDI                  ; 00461315
    DEC EDI                             ; 00461317
    MOV AL,byte ptr [ESI]               ; 00461318
        ;   Label: LAB_00461318
    MOV byte ptr [EDI],AL               ; 0046131a
    CMP AL,0x0                          ; 0046131c
    JZ 0x00461330                       ; 0046131e
        ;   XREF to: 00461330 (CONDITIONAL_JUMP)  ; LAB_00461330
    MOV AL,byte ptr [ESI + 0x1]         ; 00461320
    ADD ESI,0x2                         ; 00461323
    MOV byte ptr [EDI + 0x1],AL         ; 00461326
    ADD EDI,0x2                         ; 00461329
    CMP AL,0x0                          ; 0046132c
    JNZ 0x00461318                      ; 0046132e
        ;   XREF to: 00461318 (CONDITIONAL_JUMP)  ; LAB_00461318
    POP EDI                             ; 00461330
        ;   Label: LAB_00461330
    LEA ESI,[ESP + 0x200]               ; 00461331
    PUSH ESI                            ; 00461338
    LEA ESI,[ESP + 0x304]               ; 00461339
    PUSH ESI                            ; 00461340
    LEA ESI,[ESP + 0x8]                 ; 00461341
    PUSH ESI                            ; 00461345
    LEA ESI,[ESP + 0x510]               ; 00461346
    PUSH ESI                            ; 0046134d
    PUSH EBX                            ; 0046134e
    CALL engine_dosio.cpp_makePath_FUN_004610a0 ; 0046134f
        ;   XREF to: 004610a0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_makePath_FUN_004610a0(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00461354
    ADD ESP,0x508                       ; 00461357
    POP EDI                             ; 0046135d
    POP ESI                             ; 0046135e
    POP EBX                             ; 0046135f
    RET                                 ; 00461360
    CMP DL,0x2f                         ; 00461361
        ;   Label: LAB_00461361
    JZ 0x004612be                       ; 00461364
        ;   XREF to: 004612be (CONDITIONAL_JUMP)  ; LAB_004612be
    JMP 0x004612d7                      ; 0046136a
        ;   XREF to: 004612d7 (UNCONDITIONAL_JUMP)  ; LAB_004612d7
    MOV ESI,EDI                         ; 0046136f
        ;   Label: LAB_0046136f
    MOV EDI,EBX                         ; 00461371
    PUSH EDI                            ; 00461373
    MOV AL,byte ptr [ESI]               ; 00461374
        ;   Label: LAB_00461374
    MOV byte ptr [EDI],AL               ; 00461376
    CMP AL,0x0                          ; 00461378
    JZ 0x0046138c                       ; 0046137a
        ;   XREF to: 0046138c (CONDITIONAL_JUMP)  ; LAB_0046138c
    MOV AL,byte ptr [ESI + 0x1]         ; 0046137c
    ADD ESI,0x2                         ; 0046137f
    MOV byte ptr [EDI + 0x1],AL         ; 00461382
    ADD EDI,0x2                         ; 00461385
    CMP AL,0x0                          ; 00461388
    JNZ 0x00461374                      ; 0046138a
        ;   XREF to: 00461374 (CONDITIONAL_JUMP)  ; LAB_00461374
    POP EDI                             ; 0046138c
        ;   Label: LAB_0046138c
    ADD ESP,0x508                       ; 0046138d
    POP EDI                             ; 00461393
    POP ESI                             ; 00461394
    POP EBX                             ; 00461395
    RET                                 ; 00461396
    CMP AL,0x5c                         ; 00461397
        ;   Label: LAB_00461397
    JZ 0x00461301                       ; 00461399
        ;   XREF to: 00461301 (CONDITIONAL_JUMP)  ; LAB_00461301
    JMP 0x00461306                      ; 0046139f
        ;   XREF to: 00461306 (UNCONDITIONAL_JUMP)  ; LAB_00461306

