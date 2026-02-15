; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __watcallStack crt_stdio_c_fflushInternal_FUN_006039d0(_FILE *file_handle)
;
; Parameters:
; _FILE *          Stack[0x4]:4   file_handle
;
; XREF[9]:
;   crt_stdio.c_FlushFilesByMask_FUN_0060595c at 00605987
;   crt_stdio.c__fclose_FUN_00601fd0 at 00601ffc
;   crt_stdio.c_fflush_FUN_00601540 at 00601551
;   crt_stdio.c_fputc_FUN_006007a0 at 00600861
;   crt_stdio.c_fputs_FUN_0060ebb0 at 0060ec37
;   crt_stdio.c_fseek_FUN_005ffacc at 005ffafc
;   crt_stdio.c_fwrite_FUN_005fdc00 at 005fdd48
;   crt_stdio.c_prepare_stream_for_write_FUN_00606055 at 006060b1
;   crt_stdio.c_vfprintf_FUN_00604850 at 006048ff
;
; Referenced Globals:
;   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
;   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_00602790
;   crt_stdio.c_flushFileBuffers_FUN_0060af00
;   crt_stdio.c_lseek_FUN_00606690
;   crt_stdio.c_write_FUN_006038c0
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 006039d0
        ;   Label: crt_stdio.c_fflushInternal_FUN_006039d0
    PUSH ESI                            ; 006039d1
    PUSH EDI                            ; 006039d2
    PUSH EBP                            ; 006039d3
    SUB ESP,0x4                         ; 006039d4
    MOV EBX,dword ptr [ESP + 0x18]      ; 006039d7
    MOV EDX,dword ptr [EBX + 0x10]      ; 006039db
    PUSH EDX                            ; 006039de
    XOR EDI,EDI                         ; 006039df
    CALL dword ptr [0x00684ee8]         ; 006039e1 | PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8
    MOV AH,byte ptr [EBX + 0xd]         ; 006039e7
    ADD ESP,0x4                         ; 006039ea
    TEST AH,0x10                        ; 006039ed
    JZ 0x00603a76                       ; 006039f0
        ;   XREF to: 00603a76 (CONDITIONAL_JUMP)  ; LAB_00603a76
    MOV CH,AH                           ; 006039f6
    AND CH,0xef                         ; 006039f8
    MOV AL,byte ptr [EBX + 0xc]         ; 006039fb
    MOV byte ptr [EBX + 0xd],CH         ; 006039fe
    TEST AL,0x2                         ; 00603a01
    JZ 0x00603ab1                       ; 00603a03
        ;   XREF to: 00603ab1 (CONDITIONAL_JUMP)  ; LAB_00603ab1
    MOV EBP,dword ptr [EBX + 0x8]       ; 00603a09
    MOV EAX,dword ptr [EBP + 0x8]       ; 00603a0c
    TEST EAX,EAX                        ; 00603a0f
    JZ 0x00603ab1                       ; 00603a11
        ;   XREF to: 00603ab1 (CONDITIONAL_JUMP)  ; LAB_00603ab1
    MOV ESI,dword ptr [EBX + 0x4]       ; 00603a17
    MOV EBP,EAX                         ; 00603a1a
    TEST ESI,ESI                        ; 00603a1c
    JZ 0x00603ab1                       ; 00603a1e
        ;   XREF to: 00603ab1 (CONDITIONAL_JUMP)  ; LAB_00603ab1
    TEST EDI,EDI                        ; 00603a24
        ;   Label: LAB_00603a24
    JNZ 0x00603ab1                      ; 00603a26
        ;   XREF to: 00603ab1 (CONDITIONAL_JUMP)  ; LAB_00603ab1
    PUSH ESI                            ; 00603a2c
    PUSH EBP                            ; 00603a2d
    MOV EAX,dword ptr [EBX + 0x10]      ; 00603a2e
    PUSH EAX                            ; 00603a31
    CALL crt_stdio.c_write_FUN_006038c0 ; 00603a32
        ;   XREF to: 006038c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_write_FUN_006038c0(int file_handle_index, void * buffer, int bytes_to_write)
    ADD ESP,0xc                         ; 00603a37
    MOV dword ptr [ESP],EAX             ; 00603a3a
    CMP EAX,-0x1                        ; 00603a3d
    JNZ 0x00603a4f                      ; 00603a40
        ;   XREF to: 00603a4f (CONDITIONAL_JUMP)  ; LAB_00603a4f
    MOV DL,byte ptr [EBX + 0xc]         ; 00603a42
    OR DL,0x20                          ; 00603a45
    MOV EDI,EAX                         ; 00603a48
    MOV byte ptr [EBX + 0xc],DL         ; 00603a4a
    JMP 0x00603a6b                      ; 00603a4d
        ;   XREF to: 00603a6b (UNCONDITIONAL_JUMP)  ; LAB_00603a6b
    TEST EAX,EAX                        ; 00603a4f
        ;   Label: LAB_00603a4f
    JNZ 0x00603a6b                      ; 00603a51
        ;   XREF to: 00603a6b (CONDITIONAL_JUMP)  ; LAB_00603a6b
    PUSH 0xc                            ; 00603a53
    CALL crt_errno.c_setErrno_FUN_00602790 ; 00603a55
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00602790(int error_code)
    MOV AH,byte ptr [EBX + 0xc]         ; 00603a5a
    MOV EDI,0xffffffff                  ; 00603a5d
    OR AH,0x20                          ; 00603a62
    ADD ESP,0x4                         ; 00603a65
    MOV byte ptr [EBX + 0xc],AH         ; 00603a68
    MOV EDX,dword ptr [ESP]             ; 00603a6b
        ;   Label: LAB_00603a6b
    ADD EBP,EDX                         ; 00603a6e
    SUB ESI,EDX                         ; 00603a70
    JNZ 0x00603a24                      ; 00603a72
        ;   XREF to: 00603a24 (CONDITIONAL_JUMP)  ; LAB_00603a24
    JMP 0x00603ab1                      ; 00603a74
        ;   XREF to: 00603ab1 (UNCONDITIONAL_JUMP)  ; LAB_00603ab1
    MOV EAX,dword ptr [EBX + 0x8]       ; 00603a76
        ;   Label: LAB_00603a76
    CMP dword ptr [EAX + 0x8],0x0       ; 00603a79
    JZ 0x00603ab1                       ; 00603a7d
        ;   XREF to: 00603ab1 (CONDITIONAL_JUMP)  ; LAB_00603ab1
    AND byte ptr [EBX + 0xc],0xef       ; 00603a7f
    TEST byte ptr [EBX + 0xd],0x20      ; 00603a83
    JNZ 0x00603ab1                      ; 00603a87
        ;   XREF to: 00603ab1 (CONDITIONAL_JUMP)  ; LAB_00603ab1
    MOV EAX,dword ptr [EBX + 0x4]       ; 00603a89
    TEST EAX,EAX                        ; 00603a8c
    JZ 0x00603aa1                       ; 00603a8e
        ;   XREF to: 00603aa1 (CONDITIONAL_JUMP)  ; LAB_00603aa1
    PUSH 0x1                            ; 00603a90
    NEG EAX                             ; 00603a92
    PUSH EAX                            ; 00603a94
    MOV ESI,dword ptr [EBX + 0x10]      ; 00603a95
    PUSH ESI                            ; 00603a98
    CALL crt_stdio.c_lseek_FUN_00606690 ; 00603a99
        ;   XREF to: 00606690 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_lseek_FUN_00606690(int file_handle_index, long distance_to_move, int move_method)
    ADD ESP,0xc                         ; 00603a9e
    CMP EAX,-0x1                        ; 00603aa1
        ;   Label: LAB_00603aa1
    JNZ 0x00603ab1                      ; 00603aa4
        ;   XREF to: 00603ab1 (CONDITIONAL_JUMP)  ; LAB_00603ab1
    MOV CL,byte ptr [EBX + 0xc]         ; 00603aa6
    OR CL,0x20                          ; 00603aa9
    MOV EDI,EAX                         ; 00603aac
    MOV byte ptr [EBX + 0xc],CL         ; 00603aae
    MOV EAX,dword ptr [EBX + 0x8]       ; 00603ab1
        ;   Label: LAB_00603ab1
    MOV EAX,dword ptr [EAX + 0x8]       ; 00603ab4
    MOV dword ptr [EBX + 0x4],0x0       ; 00603ab7
    MOV dword ptr [EBX],EAX             ; 00603abe
    TEST EDI,EDI                        ; 00603ac0
    JNZ 0x00603ae0                      ; 00603ac2
        ;   XREF to: 00603ae0 (CONDITIONAL_JUMP)  ; LAB_00603ae0
    MOV EAX,dword ptr [EBX + 0x8]       ; 00603ac4
    TEST byte ptr [EAX + 0x10],0x1      ; 00603ac7
    JZ 0x00603ae0                       ; 00603acb
        ;   XREF to: 00603ae0 (CONDITIONAL_JUMP)  ; LAB_00603ae0
    MOV EDX,dword ptr [EBX + 0x10]      ; 00603acd
    PUSH EDX                            ; 00603ad0
    CALL crt_stdio.c_flushFileBuffers_FUN_0060af00 ; 00603ad1
        ;   XREF to: 0060af00 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_flushFileBuffers_FUN_0060af00(int file_handle_index)
    ADD ESP,0x4                         ; 00603ad6
    CMP EAX,-0x1                        ; 00603ad9
    JNZ 0x00603ae0                      ; 00603adc
        ;   XREF to: 00603ae0 (CONDITIONAL_JUMP)  ; LAB_00603ae0
    MOV EDI,EAX                         ; 00603ade
    MOV ECX,dword ptr [EBX + 0x10]      ; 00603ae0
        ;   Label: LAB_00603ae0
    PUSH ECX                            ; 00603ae3
    CALL dword ptr [0x00684eec]         ; 00603ae4 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 00603aea
    MOV EAX,EDI                         ; 00603aed
    ADD ESP,0x4                         ; 00603aef
    POP EBP                             ; 00603af2
    POP EDI                             ; 00603af3
    POP ESI                             ; 00603af4
    POP EBX                             ; 00603af5
    RET                                 ; 00603af6

