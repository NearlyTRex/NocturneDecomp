; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack int __watcallStack crt_stdio_c_ReadFileWithDeviceAbstraction_FUN_00602880(int file_handle_index,void *buffer,int bytes_to_read)
;
; Parameters:
; int              Stack[0x4]:4   file_handle_index
; void *           Stack[0x8]:4   buffer
; int              Stack[0xc]:4   bytes_to_read
;
; XREF[2]:
;   crt_stdio.c_FillInputBuffer_FUN_005fe940 at 005fe9cf
;   crt_stdio.c_fread_FUN_005fd990 at 005fdaa9
;
; Referenced Globals:
;   READ_FILE_FUNC* g_ReadFileFunc = 002120f2
;   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
;   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
;   uint g_MaxHandleCount = 0x14
;   SIOControlBlock* g_IOControlBlock = 00000000
;   IS_SPECIAL_DEVICE_FUNC* g_IsSpecialDeviceFuncPtr = 00000000
;   SPECIAL_DEVICE_READ_FUNC* g_SpecialDeviceReadFuncPtr = 00000000
;
; Called Functions:
;   crt_errno.c___set_errno_FUN_006083fc
;   crt_errno.c_setErrno_FUN_00602790
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;   ReadFile
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00602880
        ;   Label: crt_stdio.c_ReadFileWithDeviceAbstraction_FUN_00602880
    PUSH ESI                            ; 00602881
    PUSH EDI                            ; 00602882
    PUSH EBP                            ; 00602883
    SUB ESP,0x4                         ; 00602884
    MOV EBX,dword ptr [ESP + 0x18]      ; 00602887
    TEST EBX,EBX                        ; 0060288b
    JL 0x00602897                       ; 0060288d
        ;   XREF to: 00602897 (CONDITIONAL_JUMP)  ; LAB_00602897
    CMP EBX,dword ptr [0x00685214]      ; 0060288f | g_MaxHandleCount
    JBE 0x006028ab                      ; 00602895
        ;   XREF to: 006028ab (CONDITIONAL_JUMP)  ; LAB_006028ab
    PUSH 0x4                            ; 00602897
        ;   Label: LAB_00602897
    CALL crt_errno.c_setErrno_FUN_00602790 ; 00602899
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00602790(int error_code)
    MOV EAX,0xffffffff                  ; 0060289e
    ADD ESP,0x4                         ; 006028a3
    JMP 0x00602941                      ; 006028a6
        ;   XREF to: 00602941 (UNCONDITIONAL_JUMP)  ; LAB_00602941
    PUSH EBX                            ; 006028ab
        ;   Label: LAB_006028ab
    CALL dword ptr [0x00684ee8]         ; 006028ac | PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8
    MOV ECX,dword ptr [0x006852ac]      ; 006028b2 | g_SpecialDeviceReadFuncPtr
    ADD ESP,0x4                         ; 006028b8
    TEST ECX,ECX                        ; 006028bb
    JZ 0x006028f7                       ; 006028bd
        ;   XREF to: 006028f7 (CONDITIONAL_JUMP)  ; LAB_006028f7
    PUSH EBX                            ; 006028bf
    CALL dword ptr [0x00685284]         ; 006028c0 | g_IsSpecialDeviceFuncPtr
    ADD ESP,0x4                         ; 006028c6
    TEST EAX,EAX                        ; 006028c9
    JZ 0x006028f7                       ; 006028cb
        ;   XREF to: 006028f7 (CONDITIONAL_JUMP)  ; LAB_006028f7
    MOV EDX,dword ptr [ESP + 0x20]      ; 006028cd
    PUSH EDX                            ; 006028d1
    MOV ECX,dword ptr [ESP + 0x20]      ; 006028d2
    PUSH ECX                            ; 006028d6
    PUSH EAX                            ; 006028d7
    CALL dword ptr [0x006852ac]         ; 006028d8 | g_SpecialDeviceReadFuncPtr
    ADD ESP,0xc                         ; 006028de
    PUSH EBX                            ; 006028e1
    MOV ESI,EAX                         ; 006028e2
    CALL dword ptr [0x00684eec]         ; 006028e4 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 006028ea
    MOV EAX,ESI                         ; 006028ed
    ADD ESP,0x4                         ; 006028ef
    POP EBP                             ; 006028f2
    POP EDI                             ; 006028f3
    POP ESI                             ; 006028f4
    POP EBX                             ; 006028f5
    RET                                 ; 006028f6
    PUSH 0x0                            ; 006028f7
        ;   Label: LAB_006028f7
    LEA EAX,[ESP + 0x4]                 ; 006028f9
    PUSH EAX                            ; 006028fd
    MOV EDI,dword ptr [ESP + 0x28]      ; 006028fe
    PUSH EDI                            ; 00602902
    MOV EBP,dword ptr [ESP + 0x28]      ; 00602903
    MOV ESI,dword ptr [0x0068526c]      ; 00602907 | g_IOControlBlock
    PUSH EBP                            ; 0060290d
    MOV ESI,dword ptr [ESI + EBX*0x4]   ; 0060290e
    PUSH ESI                            ; 00602911
    CALL dword ptr CS:[0x611604]        ; 00602912 | g_ReadFileFunc
    TEST EAX,EAX                        ; 00602919
    JNZ 0x00602934                      ; 0060291b
        ;   XREF to: 00602934 (CONDITIONAL_JUMP)  ; LAB_00602934
    PUSH EBX                            ; 0060291d
    CALL dword ptr [0x00684eec]         ; 0060291e | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 00602924
    CALL crt_errno.c___set_errno_FUN_006083fc ; 00602927
        ;   XREF to: 006083fc (UNCONDITIONAL_CALL)  ; DWORD crt_errno.c___set_errno_FUN_006083fc()
    ADD ESP,0x4                         ; 0060292c
    POP EBP                             ; 0060292f
    POP EDI                             ; 00602930
    POP ESI                             ; 00602931
    POP EBX                             ; 00602932
    RET                                 ; 00602933
    PUSH EBX                            ; 00602934
        ;   Label: LAB_00602934
    CALL dword ptr [0x00684eec]         ; 00602935 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 0060293b
    MOV EAX,dword ptr [ESP]             ; 0060293e
    ADD ESP,0x4                         ; 00602941
        ;   Label: LAB_00602941
    POP EBP                             ; 00602944
    POP EDI                             ; 00602945
    POP ESI                             ; 00602946
    POP EBX                             ; 00602947
    RET                                 ; 00602948

