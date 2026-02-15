; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_stdio_c_InitializeFileBuffer_FUN_006027e0(_FILE *file)
;
; Parameters:
; _FILE *          Stack[0x4]:4   file
;
; XREF[8]:
;   crt_stdio.c_FillInputBuffer_FUN_005fe940 at 005fe952
;   crt_stdio.c_fputc_FUN_005fea10 at 005feaa6
;   crt_stdio.c_fputc_FUN_006007a0 at 0060081c
;   crt_stdio.c_fputs_FUN_0060ebb0 at 0060ebd7
;   crt_stdio.c_fread_FUN_005fd990 at 005fda00
;   crt_stdio.c_fwrite_FUN_005fdc00 at 005fdc75
;   crt_stdio.c_setvbuf_FUN_00601490 at 00601522
;   crt_stdio.c_vfprintf_FUN_00604850 at 006048a9
;
; Called Functions:
;   crt_memory.c_malloc_FUN_00601bb0
;   crt_stdio.c_DetectDeviceAndSetBuffering_FUN_00608ee0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 006027e0
        ;   Label: crt_stdio.c_InitializeFileBuffer_FUN_006027e0
    PUSH ESI                            ; 006027e1
    MOV EBX,dword ptr [ESP + 0xc]       ; 006027e2
    PUSH EBX                            ; 006027e6
    CALL crt_stdio.c_DetectDeviceAndSetBuffering_FUN_00608ee0 ; 006027e7
        ;   XREF to: 00608ee0 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_DetectDeviceAndSetBuffering_FUN_00608ee0(_FILE * file)
    MOV EDX,dword ptr [EBX + 0x14]      ; 006027ec
    ADD ESP,0x4                         ; 006027ef
    TEST EDX,EDX                        ; 006027f2
    JNZ 0x0060281c                      ; 006027f4
        ;   XREF to: 0060281c (CONDITIONAL_JUMP)  ; LAB_0060281c
    MOV AH,byte ptr [EBX + 0xd]         ; 006027f6
    TEST AH,0x2                         ; 006027f9
    JZ 0x00602807                       ; 006027fc
        ;   XREF to: 00602807 (CONDITIONAL_JUMP)  ; LAB_00602807
    MOV dword ptr [EBX + 0x14],0x86     ; 006027fe
    JMP 0x0060281c                      ; 00602805
        ;   XREF to: 0060281c (UNCONDITIONAL_JUMP)  ; LAB_0060281c
    TEST AH,0x4                         ; 00602807
        ;   Label: LAB_00602807
    JZ 0x00602815                       ; 0060280a
        ;   XREF to: 00602815 (CONDITIONAL_JUMP)  ; LAB_00602815
    MOV dword ptr [EBX + 0x14],0x1      ; 0060280c
    JMP 0x0060281c                      ; 00602813
        ;   XREF to: 0060281c (UNCONDITIONAL_JUMP)  ; LAB_0060281c
    MOV dword ptr [EBX + 0x14],0x1000   ; 00602815
        ;   Label: LAB_00602815
    MOV ECX,dword ptr [EBX + 0x14]      ; 0060281c
        ;   Label: LAB_0060281c
    PUSH ECX                            ; 0060281f
    CALL crt_memory.c_malloc_FUN_00601bb0 ; 00602820
        ;   XREF to: 00601bb0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_00601bb0(ulong size)
    MOV EDX,dword ptr [EBX + 0x8]       ; 00602825
    MOV dword ptr [EDX + 0x8],EAX       ; 00602828
    MOV EAX,dword ptr [EBX + 0x8]       ; 0060282b
    MOV ESI,dword ptr [EAX + 0x8]       ; 0060282e
    ADD ESP,0x4                         ; 00602831
    TEST ESI,ESI                        ; 00602834
    JNZ 0x0060285b                      ; 00602836
        ;   XREF to: 0060285b (CONDITIONAL_JUMP)  ; LAB_0060285b
    MOV CL,byte ptr [EBX + 0xd]         ; 00602838
    AND CL,0xf8                         ; 0060283b
    MOV byte ptr [EBX + 0xd],CL         ; 0060283e
    MOV CH,CL                           ; 00602841
    MOV EAX,dword ptr [EBX + 0x8]       ; 00602843
    OR CH,0x4                           ; 00602846
    LEA EDX,[EBX + 0x18]                ; 00602849
    MOV byte ptr [EBX + 0xd],CH         ; 0060284c
    MOV dword ptr [EAX + 0x8],EDX       ; 0060284f
    MOV dword ptr [EBX + 0x14],0x1      ; 00602852
    JMP 0x0060285f                      ; 00602859
        ;   XREF to: 0060285f (UNCONDITIONAL_JUMP)  ; LAB_0060285f
    OR byte ptr [EBX + 0xc],0x8         ; 0060285b
        ;   Label: LAB_0060285b
    MOV EAX,dword ptr [EBX + 0x8]       ; 0060285f
        ;   Label: LAB_0060285f
    MOV EAX,dword ptr [EAX + 0x8]       ; 00602862
    MOV dword ptr [EBX + 0x4],0x0       ; 00602865
    MOV dword ptr [EBX],EAX             ; 0060286c
    POP ESI                             ; 0060286e
    POP EBX                             ; 0060286f
    RET                                 ; 00602870

