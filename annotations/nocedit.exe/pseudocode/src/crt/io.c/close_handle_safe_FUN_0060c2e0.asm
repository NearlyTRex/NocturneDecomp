; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int crt_io.c_close_handle_safe_FUN_0060c2e0(int handle_index)
;
; Parameters:
; int              Stack[0x4]:4   handle_index
;
; XREF[1]:
;   crt_fstream.cpp_filebuf_close_FUN_00608bcc at 00608bff
;
; Referenced Globals:
;   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
;   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
;   INVALIDATE_HANDLE_FUNC* PTR_crt_sync.c_InvalidateHandle_FUN_00602448_00684ef4 = 00602448
;   uint g_MaxHandleCount = 0x14
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_00602790
;   crt_io.c_close_FUN_00609bd0
;   crt_io.c_invalidate_handle_wrapper_FUN_00602448
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060c2e0
        ;   Label: crt_io.c_close_handle_safe_FUN_0060c2e0
    PUSH ESI                            ; 0060c2e1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0060c2e2
    TEST EBX,EBX                        ; 0060c2e6
    JL 0x0060c2f2                       ; 0060c2e8
        ;   XREF to: 0060c2f2 (CONDITIONAL_JUMP)  ; LAB_0060c2f2
    CMP EBX,dword ptr [0x00685214]      ; 0060c2ea | g_MaxHandleCount
    JBE 0x0060c304                      ; 0060c2f0
        ;   XREF to: 0060c304 (CONDITIONAL_JUMP)  ; LAB_0060c304
    PUSH 0x4                            ; 0060c2f2
        ;   Label: LAB_0060c2f2
    CALL crt_errno.c_setErrno_FUN_00602790 ; 0060c2f4
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00602790(int error_code)
    MOV EAX,0xffffffff                  ; 0060c2f9
    ADD ESP,0x4                         ; 0060c2fe
    POP ESI                             ; 0060c301
    POP EBX                             ; 0060c302
    RET                                 ; 0060c303
    PUSH EBX                            ; 0060c304
        ;   Label: LAB_0060c304
    CALL dword ptr [0x00684ee8]         ; 0060c305 | PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8
    ADD ESP,0x4                         ; 0060c30b
    PUSH EBX                            ; 0060c30e
    CALL crt_io.c_close_FUN_00609bd0    ; 0060c30f
        ;   XREF to: 00609bd0 (UNCONDITIONAL_CALL)  ; int crt_io.c_close_FUN_00609bd0(int fd)
    ADD ESP,0x4                         ; 0060c314
    PUSH EBX                            ; 0060c317
    MOV ESI,EAX                         ; 0060c318
    CALL dword ptr [0x00684eec]         ; 0060c31a | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 0060c320
    PUSH EBX                            ; 0060c323
    CALL dword ptr [0x00684ef4]         ; 0060c324 | PTR_crt_sync.c_InvalidateHandle_FUN_00602448_00684ef4
    ADD ESP,0x4                         ; 0060c32a
    MOV EAX,ESI                         ; 0060c32d
    POP ESI                             ; 0060c32f
    POP EBX                             ; 0060c330
    RET                                 ; 0060c331

