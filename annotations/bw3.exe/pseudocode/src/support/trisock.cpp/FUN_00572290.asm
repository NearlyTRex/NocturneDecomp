; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trisock_cpp_FUN_00572290(void *param_1)
;
;
; Called Functions:
;   crt_memory.c_memset_FUN_005a28f0
;   crt_wsock32.c_gethostname
;   support_trisock.cpp_FUN_00572190
;
; *****************************************************************************

section .text

    SUB ESP,0x100                       ; 00572290
        ;   Label: support_trisock.cpp_FUN_00572290
    PUSH 0x2b8                          ; 00572296
    PUSH 0x0                            ; 0057229b
    MOV EDX,dword ptr [ESP + 0x10c]     ; 0057229d
    PUSH EDX                            ; 005722a4
    CALL crt_memory.c_memset_FUN_005a28f0 ; 005722a5
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005722aa
    PUSH 0x100                          ; 005722ad
    LEA EAX,[ESP + 0x4]                 ; 005722b2
    PUSH EAX                            ; 005722b6
    CALL crt_wsock32.c_gethostname      ; 005722b7
        ;   XREF to: 005b255c (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_gethostname(char * name, int namelen)
    TEST EAX,EAX                        ; 005722bc
    JZ 0x005722c9                       ; 005722be
        ;   XREF to: 005722c9 (CONDITIONAL_JUMP)  ; LAB_005722c9
    XOR EAX,EAX                         ; 005722c0
    ADD ESP,0x100                       ; 005722c2
    RET                                 ; 005722c8
    MOV ECX,dword ptr [ESP + 0x104]     ; 005722c9
        ;   Label: LAB_005722c9
    PUSH ECX                            ; 005722d0
    LEA EAX,[ESP + 0x4]                 ; 005722d1
    PUSH EAX                            ; 005722d5
    CALL support_trisock.cpp_FUN_00572190 ; 005722d6
        ;   XREF to: 00572190 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_00572190()
    ADD ESP,0x8                         ; 005722db
    ADD ESP,0x100                       ; 005722de
    RET                                 ; 005722e4

