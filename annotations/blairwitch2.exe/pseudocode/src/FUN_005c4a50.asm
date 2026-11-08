; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; LPVOID FUN_005c4a50(void)
;
;
; Referenced Globals:
;   void* PTR_TlsGetValue_005c8654 = 001c922a
;   TerminatedCString s_Thread_has_no_thread_spe_005f1fe4
;   undefined4 DAT_0061f2a0
;
; Called Functions:
;   FUN_005c1c20
;   FUN_005c29d8
;   TlsGetValue
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c4a50
        ;   Label: FUN_005c4a50
    XOR EBX,EBX                         ; 005c4a51
    PUSH EBX                            ; 005c4a53
    CALL FUN_005c29d8                   ; 005c4a54
        ;   XREF to: 005c29d8 (UNCONDITIONAL_CALL)  ; undefined FUN_005c29d8()
    ADD ESP,0x4                         ; 005c4a59
    TEST EAX,EAX                        ; 005c4a5c
    JZ 0x005c4a70                       ; 005c4a5e
        ;   XREF to: 005c4a70 (CONDITIONAL_JUMP)  ; LAB_005c4a70
    MOV EDX,dword ptr [0x0061f2a0]      ; 005c4a60 | DAT_0061f2a0
    PUSH EDX                            ; 005c4a66
    CALL dword ptr CS:[0x5c8654]        ; 005c4a67 | PTR_TlsGetValue_005c8654
    MOV EBX,EAX                         ; 005c4a6e
    TEST EBX,EBX                        ; 005c4a70
        ;   Label: LAB_005c4a70
    JNZ 0x005c4a83                      ; 005c4a72
        ;   XREF to: 005c4a83 (CONDITIONAL_JUMP)  ; LAB_005c4a83
    PUSH 0x1                            ; 005c4a74
    PUSH 0x5f1fe4                       ; 005c4a76 | = "Thread has no thread-specific data\r\n"
    CALL FUN_005c1c20                   ; 005c4a7b
        ;   XREF to: 005c1c20 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1c20()
    ADD ESP,0x8                         ; 005c4a80
    MOV EAX,EBX                         ; 005c4a83
        ;   Label: LAB_005c4a83
    POP EBX                             ; 005c4a85
    RET                                 ; 005c4a86

