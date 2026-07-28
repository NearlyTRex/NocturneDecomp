; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00568ed0(_FILE *param_1)
;
;
; XREF[7]:
;   FUN_0056ae10 at 0056ae69
;   crt_stdio.c_fputc_FUN_00566cc0 at 00566d3c
;   crt_stdio.c_fputs_FUN_00573660 at 00573687
;   crt_stdio.c_fread_FUN_005636d0 at 00563740
;   crt_stdio.c_fwrite_FUN_00563a50 at 00563ac5
;   crt_stdio.c_ungetc_FUN_00564740 at 005647d6
;   crt_unknown.c_FillInputBuffer_FUN_00564670 at 00564682
;
; Called Functions:
;   crt_memory.c_malloc_FUN_005635b0
;   crt_stdio.c_DetectDeviceAndSetBuffering_FUN_0056bbb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00568ed0
        ;   Label: FUN_00568ed0
    PUSH ESI                            ; 00568ed1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00568ed2
    PUSH EBX                            ; 00568ed6
    CALL crt_stdio.c_DetectDeviceAndSetBuffering_FUN_0056bbb0 ; 00568ed7
        ;   XREF to: 0056bbb0 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_DetectDeviceAndSetBuffering_FUN_0056bbb0(_FILE * file)
    MOV EDX,dword ptr [EBX + 0x14]      ; 00568edc
    ADD ESP,0x4                         ; 00568edf
    TEST EDX,EDX                        ; 00568ee2
    JNZ 0x00568f0c                      ; 00568ee4
        ;   XREF to: 00568f0c (CONDITIONAL_JUMP)  ; LAB_00568f0c
    MOV AH,byte ptr [EBX + 0xd]         ; 00568ee6
    TEST AH,0x2                         ; 00568ee9
    JZ 0x00568ef7                       ; 00568eec
        ;   XREF to: 00568ef7 (CONDITIONAL_JUMP)  ; LAB_00568ef7
    MOV dword ptr [EBX + 0x14],0x86     ; 00568eee
    JMP 0x00568f0c                      ; 00568ef5
        ;   XREF to: 00568f0c (UNCONDITIONAL_JUMP)  ; LAB_00568f0c
    TEST AH,0x4                         ; 00568ef7
        ;   Label: LAB_00568ef7
    JZ 0x00568f05                       ; 00568efa
        ;   XREF to: 00568f05 (CONDITIONAL_JUMP)  ; LAB_00568f05
    MOV dword ptr [EBX + 0x14],0x1      ; 00568efc
    JMP 0x00568f0c                      ; 00568f03
        ;   XREF to: 00568f0c (UNCONDITIONAL_JUMP)  ; LAB_00568f0c
    MOV dword ptr [EBX + 0x14],0x1000   ; 00568f05
        ;   Label: LAB_00568f05
    MOV ECX,dword ptr [EBX + 0x14]      ; 00568f0c
        ;   Label: LAB_00568f0c
    PUSH ECX                            ; 00568f0f
    CALL crt_memory.c_malloc_FUN_005635b0 ; 00568f10
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005635b0(ulong size)
    MOV EDX,dword ptr [EBX + 0x8]       ; 00568f15
    MOV dword ptr [EDX + 0x8],EAX       ; 00568f18
    MOV EAX,dword ptr [EBX + 0x8]       ; 00568f1b
    MOV ESI,dword ptr [EAX + 0x8]       ; 00568f1e
    ADD ESP,0x4                         ; 00568f21
    TEST ESI,ESI                        ; 00568f24
    JNZ 0x00568f4b                      ; 00568f26
        ;   XREF to: 00568f4b (CONDITIONAL_JUMP)  ; LAB_00568f4b
    MOV CL,byte ptr [EBX + 0xd]         ; 00568f28
    AND CL,0xf8                         ; 00568f2b
    MOV byte ptr [EBX + 0xd],CL         ; 00568f2e
    MOV CH,CL                           ; 00568f31
    MOV EAX,dword ptr [EBX + 0x8]       ; 00568f33
    OR CH,0x4                           ; 00568f36
    LEA EDX,[EBX + 0x18]                ; 00568f39
    MOV byte ptr [EBX + 0xd],CH         ; 00568f3c
    MOV dword ptr [EAX + 0x8],EDX       ; 00568f3f
    MOV dword ptr [EBX + 0x14],0x1      ; 00568f42
    JMP 0x00568f4f                      ; 00568f49
        ;   XREF to: 00568f4f (UNCONDITIONAL_JUMP)  ; LAB_00568f4f
    OR byte ptr [EBX + 0xc],0x8         ; 00568f4b
        ;   Label: LAB_00568f4b
    MOV EAX,dword ptr [EBX + 0x8]       ; 00568f4f
        ;   Label: LAB_00568f4f
    MOV EAX,dword ptr [EAX + 0x8]       ; 00568f52
    MOV dword ptr [EBX + 0x4],0x0       ; 00568f55
    MOV dword ptr [EBX],EAX             ; 00568f5c
    POP ESI                             ; 00568f5e
    POP EBX                             ; 00568f5f
    RET                                 ; 00568f60

