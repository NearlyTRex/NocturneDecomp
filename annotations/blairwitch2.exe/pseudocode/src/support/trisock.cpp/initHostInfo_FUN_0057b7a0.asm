; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl support_trisock_cpp_initHostInfo_FUN_0057b7a0(void *host_info)
;
; Parameters:
; void *           Stack[0x4]:4   host_info
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005b7f5f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0057b7a0
        ;   Label: support_trisock.cpp_initHostInfo_FUN_0057b7a0
    PUSH 0x5fd370                       ; 0057b7a4
    PUSH 0xc                            ; 0057b7a9
    ADD EAX,0x288                       ; 0057b7ab
    PUSH EAX                            ; 0057b7b0
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 0057b7b1
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0057b7b6
    SUB EAX,0x288                       ; 0057b7b9
    RET                                 ; 0057b7be

