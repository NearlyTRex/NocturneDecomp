; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 * support_trisock_cpp_FUN_0057a6d0(int param_1)
;
;
; XREF[1]:
;   support_trisock.cpp_FUN_0057aa00 at 0057aa18
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005b7f5f
;   crt_memory.c_memset_FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057a6d0
        ;   Label: support_trisock.cpp_FUN_0057a6d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0057a6d1
    PUSH 0x5fd370                       ; 0057a6d5
    PUSH 0xc                            ; 0057a6da
    ADD EBX,0x38c                       ; 0057a6dc
    PUSH EBX                            ; 0057a6e2
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 0057a6e3
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005b7f5f()
    ADD ESP,0xc                         ; 0057a6e8
    PUSH 0x2b8                          ; 0057a6eb
    LEA EBX,[EAX + 0xfffffc74]          ; 0057a6f0
    PUSH 0x0                            ; 0057a6f6
    SUB EAX,0x288                       ; 0057a6f8
    PUSH EAX                            ; 0057a6fd
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0057a6fe
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    MOV dword ptr [EBX + 0x3bc],0x0     ; 0057a703
    ADD ESP,0xc                         ; 0057a70d
    MOV dword ptr [EBX + 0x3c0],0x0     ; 0057a710
    MOV EAX,EBX                         ; 0057a71a
    MOV byte ptr [EBX],0x0              ; 0057a71c
    POP EBX                             ; 0057a71f
    RET                                 ; 0057a720

