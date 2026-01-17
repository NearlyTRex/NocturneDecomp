; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int crt_io.c_InitializeStandardHandles_FUN_00608b20(void)
;
;
; XREF[1]:
;   crt_startup.c_initialize_runtime_FUN_0060245c at 00602491
;
; Referenced Globals:
;   GetStdHandle* g_GetStdHandleFunc = 00211fa0
;
; Called Functions:
;   crt_io.c_CreateFallbackHandle_FUN_00608b88
;   crt_io.c_register_handle_FUN_00608990
;   GetStdHandle
;
; *****************************************************************************

section .text

    PUSH -0xa                           ; 00608b20
        ;   Label: crt_io.c_InitializeStandardHandles_FUN_00608b20
    CALL dword ptr CS:[0x6115c0]        ; 00608b22 | g_GetStdHandleFunc
    MOV EDX,EAX                         ; 00608b29
    TEST EAX,EAX                        ; 00608b2b
    JZ 0x00608b34                       ; 00608b2d
        ;   XREF to: 00608b34 (CONDITIONAL_JUMP)  ; LAB_00608b34
    CMP EAX,-0x1                        ; 00608b2f
    JNZ 0x00608b39                      ; 00608b32
        ;   XREF to: 00608b39 (CONDITIONAL_JUMP)  ; LAB_00608b39
    CALL crt_io.c_CreateFallbackHandle_FUN_00608b88 ; 00608b34
        ;   XREF to: 00608b88 (UNCONDITIONAL_CALL)  ; HANDLE crt_io.c_CreateFallbackHandle_FUN_00608b88()
        ;   Label: LAB_00608b34
    PUSH EAX                            ; 00608b39
        ;   Label: LAB_00608b39
    CALL crt_io.c_register_handle_FUN_00608990 ; 00608b3a
        ;   XREF to: 00608990 (UNCONDITIONAL_CALL)  ; int crt_io.c_register_handle_FUN_00608990(HANDLE handle)
    ADD ESP,0x4                         ; 00608b3f
    PUSH -0xb                           ; 00608b42
    CALL dword ptr CS:[0x6115c0]        ; 00608b44 | g_GetStdHandleFunc
    MOV EDX,EAX                         ; 00608b4b
    TEST EAX,EAX                        ; 00608b4d
    JZ 0x00608b56                       ; 00608b4f
        ;   XREF to: 00608b56 (CONDITIONAL_JUMP)  ; LAB_00608b56
    CMP EAX,-0x1                        ; 00608b51
    JNZ 0x00608b5b                      ; 00608b54
        ;   XREF to: 00608b5b (CONDITIONAL_JUMP)  ; LAB_00608b5b
    CALL crt_io.c_CreateFallbackHandle_FUN_00608b88 ; 00608b56
        ;   XREF to: 00608b88 (UNCONDITIONAL_CALL)  ; HANDLE crt_io.c_CreateFallbackHandle_FUN_00608b88()
        ;   Label: LAB_00608b56
    PUSH EAX                            ; 00608b5b
        ;   Label: LAB_00608b5b
    CALL crt_io.c_register_handle_FUN_00608990 ; 00608b5c
        ;   XREF to: 00608990 (UNCONDITIONAL_CALL)  ; int crt_io.c_register_handle_FUN_00608990(HANDLE handle)
    ADD ESP,0x4                         ; 00608b61
    PUSH -0xc                           ; 00608b64
    CALL dword ptr CS:[0x6115c0]        ; 00608b66 | g_GetStdHandleFunc
    MOV EDX,EAX                         ; 00608b6d
    TEST EAX,EAX                        ; 00608b6f
    JZ 0x00608b78                       ; 00608b71
        ;   XREF to: 00608b78 (CONDITIONAL_JUMP)  ; LAB_00608b78
    CMP EAX,-0x1                        ; 00608b73
    JNZ 0x00608b7d                      ; 00608b76
        ;   XREF to: 00608b7d (CONDITIONAL_JUMP)  ; LAB_00608b7d
    CALL crt_io.c_CreateFallbackHandle_FUN_00608b88 ; 00608b78
        ;   XREF to: 00608b88 (UNCONDITIONAL_CALL)  ; HANDLE crt_io.c_CreateFallbackHandle_FUN_00608b88()
        ;   Label: LAB_00608b78
    PUSH EAX                            ; 00608b7d
        ;   Label: LAB_00608b7d
    CALL crt_io.c_register_handle_FUN_00608990 ; 00608b7e
        ;   XREF to: 00608990 (UNCONDITIONAL_CALL)  ; int crt_io.c_register_handle_FUN_00608990(HANDLE handle)
    ADD ESP,0x4                         ; 00608b83
    RET                                 ; 00608b86

