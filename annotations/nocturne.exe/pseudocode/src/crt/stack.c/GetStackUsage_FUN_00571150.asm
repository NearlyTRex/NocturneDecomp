; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stack_c_GetStackUsage_FUN_00571150(void)
;
;
; XREF[2]:
;   crt_io.c_write_FUN_0057301c at 00573190
;   crt_startup.cpp_WinMainBootstrap_FUN_0056df10 at 0056df65
;
; Referenced Globals:
;   void* PTR_crt_thread.c_GetTLS_FUN_005671dc_005c1abc = 005671dc
;
; Called Functions:
;   crt_thread.c_GetTLS_FUN_005671dc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571150
        ;   Label: crt_stack.c_GetStackUsage_FUN_00571150
    CALL dword ptr [0x005c1abc]         ; 00571151 | PTR_crt_thread.c_GetTLS_FUN_005671dc_005c1abc
    MOV EBX,EAX                         ; 00571157
    MOV EAX,ESP                         ; 00571159
    SUB EAX,dword ptr [EBX]             ; 0057115b
    POP EBX                             ; 0057115d
    RET                                 ; 0057115e

