; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_io.c_invalidate_handle_FUN_00608af4(int handle_index)
;
; Parameters:
; int              Stack[0x4]:4   handle_index
;
; XREF[2]:
;   crt_io.c_invalidate_handle_wrapper_FUN_00602448 at 0060244d
;   crt_io.c_invalidate_handle_wrapper_FUN_0060a154 at 0060a171
;
; Referenced Globals:
;   ENTER_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f18 = 00602434
;   EXIT_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f1c = 00602434
;   SIOControlBlock* g_IOControlBlock = 00000000
;   int g_CurrentHandleCount = 0x0
;
; Called Functions:
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00608af4
        ;   Label: crt_io.c_invalidate_handle_FUN_00608af4
    MOV EBX,dword ptr [ESP + 0x8]       ; 00608af5
    CALL dword ptr [0x00684f18]         ; 00608af9 | PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f18
    TEST EBX,EBX                        ; 00608aff
    JLE 0x00608b18                      ; 00608b01
        ;   XREF to: 00608b18 (CONDITIONAL_JUMP)  ; LAB_00608b18
    CMP EBX,dword ptr [0x00685270]      ; 00608b03 | g_CurrentHandleCount
    JGE 0x00608b18                      ; 00608b09
        ;   XREF to: 00608b18 (CONDITIONAL_JUMP)  ; LAB_00608b18
    MOV EDX,dword ptr [0x0068526c]      ; 00608b0b | g_IOControlBlock
    MOV dword ptr [EDX + EBX*0x4],0x0   ; 00608b11
    CALL dword ptr [0x00684f1c]         ; 00608b18 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f1c
        ;   Label: LAB_00608b18
    POP EBX                             ; 00608b1e
    RET                                 ; 00608b1f

