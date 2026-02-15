; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __watcallStack crt_stdio_c_vfprintf_FUN_00604850(_FILE *file,char *format,va_list_t args)
;
; Parameters:
; _FILE *          Stack[0x4]:4   file
; char *           Stack[0x8]:4   format
; va_list_t        Stack[0xc]:4   args
;
; XREF[3]:
;   crt_stdio.c_fprintf_FUN_005fe6d0 at 005fe6e8
;   crt_stdio.c_fprintf_FUN_006021c0 at 006021d0
;   crt_stdio.c_printf_FUN_005ff0d0 at 005ff0e7
;
; Referenced Globals:
;   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
;   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
;
; Called Functions:
;   crt_stdio.c_fflushInternal_FUN_006039d0
;   crt_stdio.c_FormatEngine_FUN_00602950
;   crt_stdio.c_InitializeFileBuffer_FUN_006027e0
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00604850
        ;   Label: crt_stdio.c_vfprintf_FUN_00604850
    PUSH ESI                            ; 00604851
    PUSH EDI                            ; 00604852
    PUSH EBP                            ; 00604853
    MOV EBX,dword ptr [ESP + 0x14]      ; 00604854
    MOV EDX,dword ptr [EBX + 0x10]      ; 00604858
    PUSH EDX                            ; 0060485b
    CALL dword ptr [0x00684ee8]         ; 0060485c | PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8
    MOV EAX,dword ptr [EBX + 0x8]       ; 00604862
    MOV ECX,dword ptr [EAX + 0xc]       ; 00604865
    ADD ESP,0x4                         ; 00604868
    CMP ECX,0x1                         ; 0060486b
    JZ 0x0060488f                       ; 0060486e
        ;   XREF to: 0060488f (CONDITIONAL_JUMP)  ; LAB_0060488f
    TEST ECX,ECX                        ; 00604870
    JZ 0x00604888                       ; 00604872
        ;   XREF to: 00604888 (CONDITIONAL_JUMP)  ; LAB_00604888
    MOV EDI,dword ptr [EBX + 0x10]      ; 00604874
    PUSH EDI                            ; 00604877
    CALL dword ptr [0x00684eec]         ; 00604878 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 0060487e
    XOR EAX,EAX                         ; 00604881
    POP EBP                             ; 00604883
    POP EDI                             ; 00604884
    POP ESI                             ; 00604885
    POP EBX                             ; 00604886
    RET                                 ; 00604887
    MOV dword ptr [EAX + 0xc],0x1       ; 00604888
        ;   Label: LAB_00604888
    MOV AH,byte ptr [EBX + 0xc]         ; 0060488f
        ;   Label: LAB_0060488f
    AND AH,0xcf                         ; 00604892
    MOV EBP,dword ptr [EBX + 0xc]       ; 00604895
    MOV byte ptr [EBX + 0xc],AH         ; 00604898
    MOV EAX,dword ptr [EBX + 0x8]       ; 0060489b
    MOV EDX,dword ptr [EAX + 0x8]       ; 0060489e
    AND EBP,0x30                        ; 006048a1
    TEST EDX,EDX                        ; 006048a4
    JNZ 0x006048b1                      ; 006048a6
        ;   XREF to: 006048b1 (CONDITIONAL_JUMP)  ; LAB_006048b1
    PUSH EBX                            ; 006048a8
    CALL crt_stdio.c_InitializeFileBuffer_FUN_006027e0 ; 006048a9
        ;   XREF to: 006027e0 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_InitializeFileBuffer_FUN_006027e0(_FILE * file)
    ADD ESP,0x4                         ; 006048ae
    MOV DL,byte ptr [EBX + 0xd]         ; 006048b1
        ;   Label: LAB_006048b1
    XOR EDI,EDI                         ; 006048b4
    TEST DL,0x4                         ; 006048b6
    JZ 0x006048d0                       ; 006048b9
        ;   XREF to: 006048d0 (CONDITIONAL_JUMP)  ; LAB_006048d0
    MOV DH,DL                           ; 006048bb
    AND DH,0xfa                         ; 006048bd
    MOV CL,DH                           ; 006048c0
    MOV byte ptr [EBX + 0xd],DH         ; 006048c2
    OR CL,0x1                           ; 006048c5
    MOV EDI,0x1                         ; 006048c8
    MOV byte ptr [EBX + 0xd],CL         ; 006048cd
    PUSH 0x604830                       ; 006048d0
        ;   Label: LAB_006048d0
    MOV ECX,dword ptr [ESP + 0x20]      ; 006048d5
    PUSH ECX                            ; 006048d9
    MOV ESI,dword ptr [ESP + 0x20]      ; 006048da
    PUSH ESI                            ; 006048de
    PUSH EBX                            ; 006048df
    CALL crt_stdio.c_FormatEngine_FUN_00602950 ; 006048e0
        ;   XREF to: 00602950 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_FormatEngine_FUN_00602950(void * output_context, char * format, va_list_t args, OUTPUT_CALLBACK callback)
    ADD ESP,0x10                        ; 006048e5
    MOV ESI,EAX                         ; 006048e8
    TEST EDI,EDI                        ; 006048ea
    JZ 0x00604907                       ; 006048ec
        ;   XREF to: 00604907 (CONDITIONAL_JUMP)  ; LAB_00604907
    MOV CH,byte ptr [EBX + 0xd]         ; 006048ee
    AND CH,0xfa                         ; 006048f1
    MOV AL,CH                           ; 006048f4
    MOV byte ptr [EBX + 0xd],CH         ; 006048f6
    OR AL,0x4                           ; 006048f9
    PUSH EBX                            ; 006048fb
    MOV byte ptr [EBX + 0xd],AL         ; 006048fc
    CALL crt_stdio.c_fflushInternal_FUN_006039d0 ; 006048ff
        ;   XREF to: 006039d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fflushInternal_FUN_006039d0(_FILE * file_handle)
    ADD ESP,0x4                         ; 00604904
    TEST byte ptr [EBX + 0xc],0x20      ; 00604907
        ;   Label: LAB_00604907
    JZ 0x00604912                       ; 0060490b
        ;   XREF to: 00604912 (CONDITIONAL_JUMP)  ; LAB_00604912
    MOV ESI,0xffffffff                  ; 0060490d
    MOV EDI,dword ptr [EBX + 0xc]       ; 00604912
        ;   Label: LAB_00604912
    OR EDI,EBP                          ; 00604915
    MOV EBP,dword ptr [EBX + 0x10]      ; 00604917
    PUSH EBP                            ; 0060491a
    MOV dword ptr [EBX + 0xc],EDI       ; 0060491b
    CALL dword ptr [0x00684eec]         ; 0060491e | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 00604924
    MOV EAX,ESI                         ; 00604927
    POP EBP                             ; 00604929
    POP EDI                             ; 0060492a
    POP ESI                             ; 0060492b
    POP EBX                             ; 0060492c
    RET                                 ; 0060492d

