; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack int crt_stdio.c_FlushFilesByMask_FUN_0060595c(uint file_mode_mask)
;
; Parameters:
; uint             Stack[0x4]:4   file_mode_mask
;
; XREF[2]:
;   crt_stdio.c_FillInputBuffer_FUN_005fe940 at 005fe96c
;   crt_unknown.c_FUN_00605950 at 00605952
;
; Referenced Globals:
;   ENTER_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ef8 = 00602434
;   EXIT_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684efc = 00602434
;   FileListNode* g_AllocatedListHead
;
; Called Functions:
;   crt_stdio.c_fflushInternal_FUN_006039d0
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060595c
        ;   Label: crt_stdio.c_FlushFilesByMask_FUN_0060595c
    PUSH ESI                            ; 0060595d
    PUSH EDI                            ; 0060595e
    MOV EDI,dword ptr [ESP + 0x10]      ; 0060595f
    CALL dword ptr [0x00684ef8]         ; 00605963 | ENTER_THREAD_CRITICAL_SECTION_FUNC * PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ef8
    MOV EBX,dword ptr [0x03f9b200]      ; 00605969 | FileListNode * g_AllocatedListHead
    XOR ESI,ESI                         ; 0060596f
    TEST EBX,EBX                        ; 00605971
    JZ 0x00605995                       ; 00605973 | LAB_00605995
        ;   XREF to: 00605995 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x4]       ; 00605975
        ;   Label: LAB_00605975
    TEST dword ptr [EAX + 0xc],EDI      ; 00605978
    JZ 0x0060598f                       ; 0060597b | LAB_0060598f
        ;   XREF to: 0060598f (CONDITIONAL_JUMP)
    MOV DL,byte ptr [EAX + 0xd]         ; 0060597d
    INC ESI                             ; 00605980
    TEST DL,0x10                        ; 00605981
    JZ 0x0060598f                       ; 00605984 | LAB_0060598f
        ;   XREF to: 0060598f (CONDITIONAL_JUMP)
    PUSH EAX                            ; 00605986
    CALL crt_stdio.c_fflushInternal_FUN_006039d0 ; 00605987 | int crt_stdio.c_fflushInternal_FUN_006039d0(FILE * file_handle)
        ;   XREF to: 006039d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0060598c
    MOV EBX,dword ptr [EBX]             ; 0060598f
        ;   Label: LAB_0060598f
    TEST EBX,EBX                        ; 00605991
    JNZ 0x00605975                      ; 00605993 | LAB_00605975
        ;   XREF to: 00605975 (CONDITIONAL_JUMP)
    CALL dword ptr [0x00684efc]         ; 00605995 | EXIT_THREAD_CRITICAL_SECTION_FUNC * PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684efc
        ;   Label: LAB_00605995
    MOV EAX,ESI                         ; 0060599b
    POP EDI                             ; 0060599d
    POP ESI                             ; 0060599e
    POP EBX                             ; 0060599f
    RET                                 ; 006059a0

