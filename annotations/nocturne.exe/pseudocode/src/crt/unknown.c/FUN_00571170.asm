; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; LPVOID crt_unknown_c_FUN_00571170(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_0056e52c at 0056e54b
;
; Referenced Globals:
;   void* PTR_TlsGetValue_005755c8 = 0017609c
;   TerminatedCString s_Thread_has_no_thread_spe_00599174
;   undefined4 DAT_005c1ab8
;
; Called Functions:
;   crt_startup.c_HandleRuntimeError_FUN_0056ddc0
;   crt_unknown.c_FUN_0056e608
;   TlsGetValue
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571170
        ;   Label: crt_unknown.c_FUN_00571170
    XOR EBX,EBX                         ; 00571171
    PUSH EBX                            ; 00571173
    CALL crt_unknown.c_FUN_0056e608     ; 00571174
        ;   XREF to: 0056e608 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056e608()
    ADD ESP,0x4                         ; 00571179
    TEST EAX,EAX                        ; 0057117c
    JZ 0x00571190                       ; 0057117e
        ;   XREF to: 00571190 (CONDITIONAL_JUMP)  ; LAB_00571190
    MOV EDX,dword ptr [0x005c1ab8]      ; 00571180 | DAT_005c1ab8
    PUSH EDX                            ; 00571186
    CALL dword ptr CS:[0x5755c8]        ; 00571187 | PTR_TlsGetValue_005755c8
    MOV EBX,EAX                         ; 0057118e
    TEST EBX,EBX                        ; 00571190
        ;   Label: LAB_00571190
    JNZ 0x005711a3                      ; 00571192
        ;   XREF to: 005711a3 (CONDITIONAL_JUMP)  ; LAB_005711a3
    PUSH 0x1                            ; 00571194
    PUSH 0x599174                       ; 00571196 | = "Thread has no thread-specific data\r\n"
    CALL crt_startup.c_HandleRuntimeError_FUN_0056ddc0 ; 0057119b
        ;   XREF to: 0056ddc0 (UNCONDITIONAL_CALL)  ; void crt_startup.c_HandleRuntimeError_FUN_0056ddc0(char * error_message, int error_level)
    ADD ESP,0x8                         ; 005711a0
    MOV EAX,EBX                         ; 005711a3
        ;   Label: LAB_005711a3
    POP EBX                             ; 005711a5
    RET                                 ; 005711a6

