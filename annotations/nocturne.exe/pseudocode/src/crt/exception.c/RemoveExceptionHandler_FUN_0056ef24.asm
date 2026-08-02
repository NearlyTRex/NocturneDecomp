; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_exception_c_RemoveExceptionHandler_FUN_0056ef24(void)
;
;
; XREF[2]:
;   crt_exit.c_ExitProcess_FUN_005674b0 at 005674d4
;   crt_unknown.c_FUN_00573fc8 at 00573fce
;
; Referenced Globals:
;   void* PTR_crt_thread.c_GetTLS_FUN_005671dc_005c1abc = 005671dc
;
; Called Functions:
;   crt_thread.c_GetTLS_FUN_005671dc
;
; *****************************************************************************

section .text

    CALL dword ptr [0x005c1abc]         ; 0056ef24 | PTR_crt_thread.c_GetTLS_FUN_005671dc_005c1abc
        ;   Label: crt_exception.c_RemoveExceptionHandler_FUN_0056ef24
    MOV EAX,dword ptr [EAX + 0x54]      ; 0056ef2a
    TEST EAX,EAX                        ; 0056ef2d
    JZ 0x0056ef38                       ; 0056ef2f
        ;   XREF to: 0056ef38 (CONDITIONAL_JUMP)  ; LAB_0056ef38
    MOV EAX,dword ptr [EAX]             ; 0056ef31
    XOR EDX,EDX                         ; 0056ef33
    MOV dword ptr FS:[EDX],EAX          ; 0056ef35
    CALL dword ptr [0x005c1abc]         ; 0056ef38 | PTR_crt_thread.c_GetTLS_FUN_005671dc_005c1abc
        ;   Label: LAB_0056ef38
    MOV dword ptr [EAX + 0x54],0x0      ; 0056ef3e
    RET                                 ; 0056ef45

