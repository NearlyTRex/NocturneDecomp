; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __watcallStack crt_stdio_c_flushFileBuffers_FUN_0060af00(int file_handle_index)
;
; Parameters:
; int              Stack[0x4]:4   file_handle_index
;
; Referenced Globals:
;   FLUSH_FILE_BUFFERS_FUNC* g_FlushFileBuffersFunc = 00211da6
;   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
;   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
;   uint g_MaxHandleCount = 0x14
;   SIOControlBlock* g_IOControlBlock = 00000000
;
; Called Functions:
;   crt_errno.c___set_errno_FUN_006083fc
;   crt_errno.c_setErrno_FUN_00602790
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;   FlushFileBuffers
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060af00
        ;   Label: crt_stdio.c_flushFileBuffers_FUN_0060af00
    PUSH ESI                            ; 0060af01
    MOV EBX,dword ptr [ESP + 0xc]       ; 0060af02
    XOR ESI,ESI                         ; 0060af06
    TEST EBX,EBX                        ; 0060af08
    JL 0x0060af14                       ; 0060af0a
        ;   XREF to: 0060af14 (CONDITIONAL_JUMP)  ; LAB_0060af14
    CMP EBX,dword ptr [0x00685214]      ; 0060af0c | g_MaxHandleCount
    JBE 0x0060af26                      ; 0060af12
        ;   XREF to: 0060af26 (CONDITIONAL_JUMP)  ; LAB_0060af26
    PUSH 0x4                            ; 0060af14
        ;   Label: LAB_0060af14
    CALL crt_errno.c_setErrno_FUN_00602790 ; 0060af16
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00602790(int error_code)
    MOV EAX,0xffffffff                  ; 0060af1b
    ADD ESP,0x4                         ; 0060af20
    POP ESI                             ; 0060af23
    POP EBX                             ; 0060af24
    RET                                 ; 0060af25
    PUSH EBX                            ; 0060af26
        ;   Label: LAB_0060af26
    CALL dword ptr [0x00684ee8]         ; 0060af27 | PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8
    MOV EAX,[0x0068526c]                ; 0060af2d | g_IOControlBlock
    ADD ESP,0x4                         ; 0060af32
    MOV EAX,dword ptr [EAX + EBX*0x4]   ; 0060af35
    PUSH EAX                            ; 0060af38
    CALL dword ptr CS:[0x611554]        ; 0060af39 | g_FlushFileBuffersFunc
    TEST EAX,EAX                        ; 0060af40
    JNZ 0x0060af4e                      ; 0060af42
        ;   XREF to: 0060af4e (CONDITIONAL_JUMP)  ; LAB_0060af4e
    CALL crt_errno.c___set_errno_FUN_006083fc ; 0060af44
        ;   XREF to: 006083fc (UNCONDITIONAL_CALL)  ; DWORD crt_errno.c___set_errno_FUN_006083fc()
    MOV ESI,0xffffffff                  ; 0060af49
    PUSH EBX                            ; 0060af4e
        ;   Label: LAB_0060af4e
    CALL dword ptr [0x00684eec]         ; 0060af4f | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 0060af55
    MOV EAX,ESI                         ; 0060af58
    POP ESI                             ; 0060af5a
    POP EBX                             ; 0060af5b
    RET                                 ; 0060af5c

