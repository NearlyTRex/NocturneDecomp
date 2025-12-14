; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_thread.c_staticInit_FUN_0060d214(void)
;
;
; Referenced Globals:
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_00602458_00684f24 = 00602458
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_00602458_00684f28 = 00602458
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060d214
        ;   Label: crt_thread.c_staticInit_FUN_0060d214
    MOV EDX,0x60d1a8                    ; 0060d215
    MOV EBX,0x60d1ec                    ; 0060d21a
    MOV dword ptr [0x00684f24],EDX      ; 0060d21f | PTR_crt_sync.c_CriticalSectionStub_FUN_00602458_00684f24
    MOV dword ptr [0x00684f28],EBX      ; 0060d225 | PTR_crt_sync.c_CriticalSectionStub_FUN_00602458_00684f28
    POP EBX                             ; 0060d22b
    RET                                 ; 0060d22c

