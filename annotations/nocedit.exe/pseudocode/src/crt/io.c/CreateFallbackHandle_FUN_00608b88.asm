; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl HANDLE crt_io.c_CreateFallbackHandle_FUN_00608b88(void)
;
;
; XREF[2]:
;   crt_io.c_InitializeStandardHandles_FUN_00608b20 at 00608b34
;   crt_stdio.c_CreateFileImpl_FUN_006090a0 at 0060913b
;
; Referenced Globals:
;   CreateEventA* PTR_CreateEventA_0061150c = 00211c5a
;   undefined4 g_FakeHandleCounter
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
    CALL dword ptr CS:[0x61150c]        ; 00608b90 | CreateEventA * PTR_CreateEventA_0061150c
    MOV EDX,EAX                         ; 00608b97
    TEST EAX,EAX                        ; 00608b99
    JNZ 0x00608baa                      ; 00608b9b | LAB_00608baa
        ;   XREF to: 00608baa (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x00685274]      ; 00608b9d | undefined4 g_FakeHandleCounter
    INC EDX                             ; 00608ba3
    MOV dword ptr [0x00685274],EDX      ; 00608ba4 | undefined4 g_FakeHandleCounter
    MOV EAX,EDX                         ; 00608baa
        ;   Label: LAB_00608baa
    RET                                 ; 00608bac

