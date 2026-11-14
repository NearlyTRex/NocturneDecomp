; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; LPVOID crt_unknown_c_FUN_005ccd50(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005cabfc at 005cac1b
;
; Referenced Globals:
;   void* PTR_TlsGetValue_005d0668 = 001d1266
;   TerminatedCString s_Thread_has_no_thread_spe_005fb18c
;   undefined4 DAT_006265f8
;
; Called Functions:
;   crt_unknown.c_FUN_005c9f70
;   crt_unknown.c_FUN_005cacd8
;   TlsGetValue
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ccd50
        ;   Label: crt_unknown.c_FUN_005ccd50
    XOR EBX,EBX                         ; 005ccd51
    PUSH EBX                            ; 005ccd53
    CALL crt_unknown.c_FUN_005cacd8     ; 005ccd54
        ;   XREF to: 005cacd8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cacd8()
    ADD ESP,0x4                         ; 005ccd59
    TEST EAX,EAX                        ; 005ccd5c
    JZ 0x005ccd70                       ; 005ccd5e
        ;   XREF to: 005ccd70 (CONDITIONAL_JUMP)  ; LAB_005ccd70
    MOV EDX,dword ptr [0x006265f8]      ; 005ccd60 | DAT_006265f8
    PUSH EDX                            ; 005ccd66
    CALL dword ptr CS:[0x5d0668]        ; 005ccd67 | PTR_TlsGetValue_005d0668
    MOV EBX,EAX                         ; 005ccd6e
    TEST EBX,EBX                        ; 005ccd70
        ;   Label: LAB_005ccd70
    JNZ 0x005ccd83                      ; 005ccd72
        ;   XREF to: 005ccd83 (CONDITIONAL_JUMP)  ; LAB_005ccd83
    PUSH 0x1                            ; 005ccd74
    PUSH 0x5fb18c                       ; 005ccd76 | = "Thread has no thread-specific data\r\n"
    CALL crt_unknown.c_FUN_005c9f70     ; 005ccd7b
        ;   XREF to: 005c9f70 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c9f70()
    ADD ESP,0x8                         ; 005ccd80
    MOV EAX,EBX                         ; 005ccd83
        ;   Label: LAB_005ccd83
    POP EBX                             ; 005ccd85
    RET                                 ; 005ccd86

