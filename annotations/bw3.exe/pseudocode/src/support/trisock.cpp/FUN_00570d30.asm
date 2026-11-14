; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 * support_trisock_cpp_FUN_00570d30(int param_1)
;
;
; XREF[1]:
;   support_trisock.cpp_FUN_00571030 at 00571048
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005a30d7
;   crt_memory.c_memset_FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570d30
        ;   Label: support_trisock.cpp_FUN_00570d30
    MOV EBX,dword ptr [ESP + 0x8]       ; 00570d31
    PUSH 0x5e5a10                       ; 00570d35
    PUSH 0xc                            ; 00570d3a
    ADD EBX,0x38c                       ; 00570d3c
    PUSH EBX                            ; 00570d42
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 00570d43
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00570d48
    PUSH 0x2b8                          ; 00570d4b
    LEA EBX,[EAX + 0xfffffc74]          ; 00570d50
    PUSH 0x0                            ; 00570d56
    SUB EAX,0x288                       ; 00570d58
    PUSH EAX                            ; 00570d5d
    CALL crt_memory.c_memset_FUN_005a28f0 ; 00570d5e
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    MOV dword ptr [EBX + 0x3bc],0x0     ; 00570d63
    ADD ESP,0xc                         ; 00570d6d
    MOV dword ptr [EBX + 0x3c0],0x0     ; 00570d70
    MOV EAX,EBX                         ; 00570d7a
    MOV byte ptr [EBX],0x0              ; 00570d7c
    POP EBX                             ; 00570d7f
    RET                                 ; 00570d80

