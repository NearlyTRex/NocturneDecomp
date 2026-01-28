; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl crt_stdio_c_fputs_FUN_0060ebb0(char *str,FILE *file)
;
; Parameters:
; char *           Stack[0x4]:4   str
; FILE *           Stack[0x8]:4   file
;
; XREF[1]:
;   crt_math.c_print_error_message_FUN_0060e298 at 0060e2c2
;
; Referenced Globals:
;   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
;   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
;
; Called Functions:
;   crt_stdio.c_fflushInternal_FUN_006039d0
;   crt_stdio.c_fputc_FUN_006007a0
;   crt_stdio.c_InitializeFileBuffer_FUN_006027e0
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060ebb0
        ;   Label: crt_stdio.c_fputs_FUN_0060ebb0
    PUSH ESI                            ; 0060ebb1
    PUSH EDI                            ; 0060ebb2
    PUSH EBP                            ; 0060ebb3
    SUB ESP,0x4                         ; 0060ebb4
    MOV EBX,dword ptr [ESP + 0x18]      ; 0060ebb7
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0060ebbb
    MOV EDX,dword ptr [ESI + 0x10]      ; 0060ebbf
    PUSH EDX                            ; 0060ebc2
    CALL dword ptr [0x00684ee8]         ; 0060ebc3 | PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8
    MOV EAX,dword ptr [ESI + 0x8]       ; 0060ebc9
    MOV ECX,dword ptr [EAX + 0x8]       ; 0060ebcc
    ADD ESP,0x4                         ; 0060ebcf
    TEST ECX,ECX                        ; 0060ebd2
    JNZ 0x0060ebdf                      ; 0060ebd4
        ;   XREF to: 0060ebdf (CONDITIONAL_JUMP)  ; LAB_0060ebdf
    PUSH ESI                            ; 0060ebd6
    CALL crt_stdio.c_InitializeFileBuffer_FUN_006027e0 ; 0060ebd7
        ;   XREF to: 006027e0 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_InitializeFileBuffer_FUN_006027e0(FILE * file)
    ADD ESP,0x4                         ; 0060ebdc
    MOV AH,byte ptr [ESI + 0xd]         ; 0060ebdf
        ;   Label: LAB_0060ebdf
    XOR EBP,EBP                         ; 0060ebe2
    TEST AH,0x4                         ; 0060ebe4
    JZ 0x0060ebfe                       ; 0060ebe7
        ;   XREF to: 0060ebfe (CONDITIONAL_JUMP)  ; LAB_0060ebfe
    MOV DL,AH                           ; 0060ebe9
    AND DL,0xf9                         ; 0060ebeb
    MOV byte ptr [ESI + 0xd],DL         ; 0060ebee
    MOV DH,DL                           ; 0060ebf1
    OR DH,0x2                           ; 0060ebf3
    MOV EBP,0x1                         ; 0060ebf6
    MOV byte ptr [ESI + 0xd],DH         ; 0060ebfb
    MOV dword ptr [ESP],EBX             ; 0060ebfe
        ;   Label: LAB_0060ebfe
    XOR EDI,EDI                         ; 0060ec01
    XOR EAX,EAX                         ; 0060ec03
        ;   Label: LAB_0060ec03
    MOV AL,byte ptr [EBX]               ; 0060ec05
    TEST EAX,EAX                        ; 0060ec07
    JZ 0x0060ec1d                       ; 0060ec09
        ;   XREF to: 0060ec1d (CONDITIONAL_JUMP)  ; LAB_0060ec1d
    PUSH ESI                            ; 0060ec0b
    PUSH EAX                            ; 0060ec0c
    INC EBX                             ; 0060ec0d
    CALL crt_stdio.c_fputc_FUN_006007a0 ; 0060ec0e
        ;   XREF to: 006007a0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_006007a0(int character, FILE * file)
    ADD ESP,0x8                         ; 0060ec13
    CMP EAX,-0x1                        ; 0060ec16
    JNZ 0x0060ec03                      ; 0060ec19
        ;   XREF to: 0060ec03 (CONDITIONAL_JUMP)  ; LAB_0060ec03
    MOV EDI,EAX                         ; 0060ec1b
    TEST EBP,EBP                        ; 0060ec1d
        ;   Label: LAB_0060ec1d
    JZ 0x0060ec41                       ; 0060ec1f
        ;   XREF to: 0060ec41 (CONDITIONAL_JUMP)  ; LAB_0060ec41
    MOV CL,byte ptr [ESI + 0xd]         ; 0060ec21
    AND CL,0xf9                         ; 0060ec24
    MOV byte ptr [ESI + 0xd],CL         ; 0060ec27
    MOV CH,CL                           ; 0060ec2a
    OR CH,0x4                           ; 0060ec2c
    MOV byte ptr [ESI + 0xd],CH         ; 0060ec2f
    TEST EDI,EDI                        ; 0060ec32
    JNZ 0x0060ec41                      ; 0060ec34
        ;   XREF to: 0060ec41 (CONDITIONAL_JUMP)  ; LAB_0060ec41
    PUSH ESI                            ; 0060ec36
    CALL crt_stdio.c_fflushInternal_FUN_006039d0 ; 0060ec37
        ;   XREF to: 006039d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fflushInternal_FUN_006039d0(FILE * file_handle)
    ADD ESP,0x4                         ; 0060ec3c
    MOV EDI,EAX                         ; 0060ec3f
    TEST EDI,EDI                        ; 0060ec41
        ;   Label: LAB_0060ec41
    JNZ 0x0060ec4c                      ; 0060ec43
        ;   XREF to: 0060ec4c (CONDITIONAL_JUMP)  ; LAB_0060ec4c
    MOV EDI,dword ptr [ESP]             ; 0060ec45
    SUB EBX,EDI                         ; 0060ec48
    MOV EDI,EBX                         ; 0060ec4a
    MOV EBP,dword ptr [ESI + 0x10]      ; 0060ec4c
        ;   Label: LAB_0060ec4c
    PUSH EBP                            ; 0060ec4f
    CALL dword ptr [0x00684eec]         ; 0060ec50 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 0060ec56
    MOV EAX,EDI                         ; 0060ec59
    ADD ESP,0x4                         ; 0060ec5b
    POP EBP                             ; 0060ec5e
    POP EDI                             ; 0060ec5f
    POP ESI                             ; 0060ec60
    POP EBX                             ; 0060ec61
    RET                                 ; 0060ec62

