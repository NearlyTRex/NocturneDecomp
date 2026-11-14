; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int support_trisock_cpp_FUN_00572310(int param_1)
;
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005a30d7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00572310
        ;   Label: support_trisock.cpp_FUN_00572310
    PUSH 0x5e5a10                       ; 00572314
    PUSH 0xc                            ; 00572319
    ADD EAX,0x288                       ; 0057231b
    PUSH EAX                            ; 00572320
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 00572321
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00572326
    SUB EAX,0x288                       ; 00572329
    RET                                 ; 0057232e

