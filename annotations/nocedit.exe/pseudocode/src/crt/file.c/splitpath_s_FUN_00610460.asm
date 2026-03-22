; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_file_c_splitpath_s_FUN_00610460(char *path,char *buffer,char *drive,char *dir,char *fname,char *ext)
;
; Parameters:
; char *           Stack[0x4]:4   path
; char *           Stack[0x8]:4   buffer
; char *           Stack[0xc]:4   drive
; char *           Stack[0x10]:4   dir
; char *           Stack[0x14]:4   fname
; char *           Stack[0x18]:4   ext
;
; Called Functions:
;   crt_file.c_extract_path_component_FUN_00610400
;   crt_string.c_mbtowc_next_FUN_00605a70
;   crt_string.c_mbtowc_peek_FUN_006059e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00610460
        ;   Label: crt_file.c_splitpath_s_FUN_00610460
    PUSH ESI                            ; 00610461
    PUSH EDI                            ; 00610462
    PUSH EBP                            ; 00610463
    SUB ESP,0x4                         ; 00610464
    MOV EBX,dword ptr [ESP + 0x18]      ; 00610467
    MOV ESI,dword ptr [ESP + 0x20]      ; 0061046b
    MOV AH,byte ptr [EBX]               ; 0061046f
    MOV EDI,EBX                         ; 00610471
    CMP AH,0x5c                         ; 00610473
    JZ 0x0061047d                       ; 00610476
        ;   XREF to: 0061047d (CONDITIONAL_JUMP)  ; LAB_0061047d
    CMP AH,0x2f                         ; 00610478
    JNZ 0x006104cc                      ; 0061047b
        ;   XREF to: 006104cc (CONDITIONAL_JUMP)  ; LAB_006104cc
    MOV DH,byte ptr [EBX + 0x1]         ; 0061047d
        ;   Label: LAB_0061047d
    CMP DH,0x5c                         ; 00610480
    JZ 0x0061048a                       ; 00610483
        ;   XREF to: 0061048a (CONDITIONAL_JUMP)  ; LAB_0061048a
    CMP DH,0x2f                         ; 00610485
    JNZ 0x006104cc                      ; 00610488
        ;   XREF to: 006104cc (CONDITIONAL_JUMP)  ; LAB_006104cc
    MOV AH,byte ptr [EBX + 0x2]         ; 0061048a
        ;   Label: LAB_0061048a
    ADD EBX,0x2                         ; 0061048d
    TEST AH,AH                          ; 00610490
    JZ 0x006104b6                       ; 00610492
        ;   XREF to: 006104b6 (CONDITIONAL_JUMP)  ; LAB_006104b6
    MOV DH,byte ptr [EBX]               ; 00610494
        ;   Label: LAB_00610494
    CMP DH,0x5c                         ; 00610496
    JZ 0x006104b6                       ; 00610499
        ;   XREF to: 006104b6 (CONDITIONAL_JUMP)  ; LAB_006104b6
    CMP DH,0x2f                         ; 0061049b
    JZ 0x006104b6                       ; 0061049e
        ;   XREF to: 006104b6 (CONDITIONAL_JUMP)  ; LAB_006104b6
    CMP DH,0x2e                         ; 006104a0
    JZ 0x006104b6                       ; 006104a3
        ;   XREF to: 006104b6 (CONDITIONAL_JUMP)  ; LAB_006104b6
    PUSH EBX                            ; 006104a5
    CALL crt_string.c_mbtowc_next_FUN_00605a70 ; 006104a6
        ;   XREF to: 00605a70 (UNCONDITIONAL_CALL)  ; char * crt_string.c_mbtowc_next_FUN_00605a70(char * str)
    ADD ESP,0x4                         ; 006104ab
    MOV DL,byte ptr [EAX]               ; 006104ae
    MOV EBX,EAX                         ; 006104b0
    TEST DL,DL                          ; 006104b2
    JNZ 0x00610494                      ; 006104b4
        ;   XREF to: 00610494 (CONDITIONAL_JUMP)  ; LAB_00610494
    PUSH EBX                            ; 006104b6
        ;   Label: LAB_006104b6
    PUSH EDI                            ; 006104b7
    MOV EDI,dword ptr [ESP + 0x24]      ; 006104b8
    PUSH EDI                            ; 006104bc
    PUSH ESI                            ; 006104bd
    CALL crt_file.c_extract_path_component_FUN_00610400 ; 006104be
        ;   XREF to: 00610400 (UNCONDITIONAL_CALL)  ; char * crt_file.c_extract_path_component_FUN_00610400(char * * component_ptr, char * buffer, char * source, char * buffer_end)
    ADD ESP,0x10                        ; 006104c3
    MOV dword ptr [ESP + 0x1c],EAX      ; 006104c6
    JMP 0x00610511                      ; 006104ca
        ;   XREF to: 00610511 (UNCONDITIONAL_JUMP)  ; LAB_00610511
    CMP byte ptr [EBX],0x0              ; 006104cc
        ;   Label: LAB_006104cc
    JZ 0x006104fd                       ; 006104cf
        ;   XREF to: 006104fd (CONDITIONAL_JUMP)  ; LAB_006104fd
    CMP byte ptr [EBX + 0x1],0x3a       ; 006104d1
    JNZ 0x006104fd                      ; 006104d5
        ;   XREF to: 006104fd (CONDITIONAL_JUMP)  ; LAB_006104fd
    TEST ESI,ESI                        ; 006104d7
    JZ 0x006104f8                       ; 006104d9
        ;   XREF to: 006104f8 (CONDITIONAL_JUMP)  ; LAB_006104f8
    MOV EAX,dword ptr [ESP + 0x1c]      ; 006104db
    MOV dword ptr [ESI],EAX             ; 006104df
    MOV ESI,dword ptr [ESP + 0x1c]      ; 006104e1
    MOV AL,byte ptr [EBX]               ; 006104e5
    MOV byte ptr [ESI + 0x1],0x3a       ; 006104e7
    MOV byte ptr [ESI + 0x2],0x0        ; 006104eb
    LEA ECX,[ESI + 0x3]                 ; 006104ef
    MOV byte ptr [ESI],AL               ; 006104f2
    MOV dword ptr [ESP + 0x1c],ECX      ; 006104f4
    ADD EBX,0x2                         ; 006104f8
        ;   Label: LAB_006104f8
    JMP 0x00610511                      ; 006104fb
        ;   XREF to: 00610511 (UNCONDITIONAL_JUMP)  ; LAB_00610511
    TEST ESI,ESI                        ; 006104fd
        ;   Label: LAB_006104fd
    JZ 0x00610511                       ; 006104ff
        ;   XREF to: 00610511 (CONDITIONAL_JUMP)  ; LAB_00610511
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00610501
    MOV dword ptr [ESI],EAX             ; 00610505
    LEA EDX,[EAX + 0x1]                 ; 00610507
    MOV byte ptr [EAX],0x0              ; 0061050a
    MOV dword ptr [ESP + 0x1c],EDX      ; 0061050d
    MOV EBP,EBX                         ; 00610511
        ;   Label: LAB_00610511
    MOV dword ptr [ESP],EBX             ; 00610513
    XOR EDI,EDI                         ; 00610516
        ;   Label: LAB_00610516
    PUSH EBX                            ; 00610518
        ;   Label: LAB_00610518
    CALL crt_string.c_mbtowc_peek_FUN_006059e0 ; 00610519
        ;   XREF to: 006059e0 (UNCONDITIONAL_CALL)  ; int crt_string.c_mbtowc_peek_FUN_006059e0(char * str)
    MOV ESI,EAX                         ; 0061051e
    ADD ESP,0x4                         ; 00610520
    TEST EAX,EAX                        ; 00610523
    JZ 0x0061054a                       ; 00610525
        ;   XREF to: 0061054a (CONDITIONAL_JUMP)  ; LAB_0061054a
    CMP EAX,0x2e                        ; 00610527
    JNZ 0x00610531                      ; 0061052a
        ;   XREF to: 00610531 (CONDITIONAL_JUMP)  ; LAB_00610531
    MOV EDI,EBX                         ; 0061052c
    INC EBX                             ; 0061052e
    JMP 0x00610518                      ; 0061052f
        ;   XREF to: 00610518 (UNCONDITIONAL_JUMP)  ; LAB_00610518
    PUSH EBX                            ; 00610531
        ;   Label: LAB_00610531
    CALL crt_string.c_mbtowc_next_FUN_00605a70 ; 00610532
        ;   XREF to: 00605a70 (UNCONDITIONAL_CALL)  ; char * crt_string.c_mbtowc_next_FUN_00605a70(char * str)
    ADD ESP,0x4                         ; 00610537
    MOV EBX,EAX                         ; 0061053a
    CMP ESI,0x5c                        ; 0061053c
    JZ 0x00610546                       ; 0061053f
        ;   XREF to: 00610546 (CONDITIONAL_JUMP)  ; LAB_00610546
    CMP ESI,0x2f                        ; 00610541
    JNZ 0x00610518                      ; 00610544
        ;   XREF to: 00610518 (CONDITIONAL_JUMP)  ; LAB_00610518
    MOV EBP,EBX                         ; 00610546
        ;   Label: LAB_00610546
    JMP 0x00610516                      ; 00610548
        ;   XREF to: 00610516 (UNCONDITIONAL_JUMP)  ; LAB_00610516
    PUSH EBP                            ; 0061054a
        ;   Label: LAB_0061054a
    MOV EAX,dword ptr [ESP + 0x4]       ; 0061054b
    PUSH EAX                            ; 0061054f
    MOV EDX,dword ptr [ESP + 0x24]      ; 00610550
    PUSH EDX                            ; 00610554
    MOV ECX,dword ptr [ESP + 0x30]      ; 00610555
    PUSH ECX                            ; 00610559
    CALL crt_file.c_extract_path_component_FUN_00610400 ; 0061055a
        ;   XREF to: 00610400 (UNCONDITIONAL_CALL)  ; char * crt_file.c_extract_path_component_FUN_00610400(char * * component_ptr, char * buffer, char * source, char * buffer_end)
    ADD ESP,0x10                        ; 0061055f
    MOV dword ptr [ESP + 0x1c],EAX      ; 00610562
    TEST EDI,EDI                        ; 00610566
    JNZ 0x0061056c                      ; 00610568
        ;   XREF to: 0061056c (CONDITIONAL_JUMP)  ; LAB_0061056c
    MOV EDI,EBX                         ; 0061056a
    PUSH EDI                            ; 0061056c
        ;   Label: LAB_0061056c
    PUSH EBP                            ; 0061056d
    MOV ESI,dword ptr [ESP + 0x24]      ; 0061056e
    PUSH ESI                            ; 00610572
    MOV EBP,dword ptr [ESP + 0x34]      ; 00610573
    PUSH EBP                            ; 00610577
    CALL crt_file.c_extract_path_component_FUN_00610400 ; 00610578
        ;   XREF to: 00610400 (UNCONDITIONAL_CALL)  ; char * crt_file.c_extract_path_component_FUN_00610400(char * * component_ptr, char * buffer, char * source, char * buffer_end)
    ADD ESP,0x10                        ; 0061057d
    PUSH EBX                            ; 00610580
    PUSH EDI                            ; 00610581
    PUSH EAX                            ; 00610582
    MOV EAX,dword ptr [ESP + 0x38]      ; 00610583
    PUSH EAX                            ; 00610587
    CALL crt_file.c_extract_path_component_FUN_00610400 ; 00610588
        ;   XREF to: 00610400 (UNCONDITIONAL_CALL)  ; char * crt_file.c_extract_path_component_FUN_00610400(char * * component_ptr, char * buffer, char * source, char * buffer_end)
    ADD ESP,0x10                        ; 0061058d
    ADD ESP,0x4                         ; 00610590
    POP EBP                             ; 00610593
    POP EDI                             ; 00610594
    POP ESI                             ; 00610595
    POP EBX                             ; 00610596
    RET                                 ; 00610597

