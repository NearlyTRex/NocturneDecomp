; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl HANDLE __cdecl crt_io_c_CreateFallbackHandle_FUN_00608b88(void)
;
;
; XREF[2]:
;   crt_io.c_InitializeStandardHandles_FUN_00608b20 at 00608b34
;   crt_stdio.c_CreateFileImpl_FUN_006090a0 at 0060913b
;
; Referenced Globals:
;   CreateEventA* g_CreateEventAFunc = 00211c5a
;   int g_FakeHandleCounter = -0x80000000
;
; Called Functions:
;   CreateEventA
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 00608b88
        ;   Label: crt_io.c_CreateFallbackHandle_FUN_00608b88
    PUSH 0x0                            ; 00608b8a
    PUSH 0x0                            ; 00608b8c
    PUSH 0x0                            ; 00608b8e
    CALL dword ptr CS:[0x61150c]        ; 00608b90 | g_CreateEventAFunc
    MOV EDX,EAX                         ; 00608b97
    TEST EAX,EAX                        ; 00608b99
    JNZ 0x00608baa                      ; 00608b9b
        ;   XREF to: 00608baa (CONDITIONAL_JUMP)  ; LAB_00608baa
    MOV EDX,dword ptr [0x00685274]      ; 00608b9d | g_FakeHandleCounter
    INC EDX                             ; 00608ba3
    MOV dword ptr [0x00685274],EDX      ; 00608ba4 | g_FakeHandleCounter
    MOV EAX,EDX                         ; 00608baa
        ;   Label: LAB_00608baa
    RET                                 ; 00608bac

