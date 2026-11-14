; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trisock_cpp_FUN_00579820(void *param_1)
;
;
; Called Functions:
;   crt_memory.c_memset_FUN_005b77c0
;   crt_wsock32.c_gethostname
;   support_trisock.cpp_FUN_00579720
;
; *****************************************************************************

section .text

    SUB ESP,0x100                       ; 00579820
        ;   Label: support_trisock.cpp_FUN_00579820
    PUSH 0x2b8                          ; 00579826
    PUSH 0x0                            ; 0057982b
    MOV EDX,dword ptr [ESP + 0x10c]     ; 0057982d
    PUSH EDX                            ; 00579834
    CALL crt_memory.c_memset_FUN_005b77c0 ; 00579835
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0057983a
    PUSH 0x100                          ; 0057983d
    LEA EAX,[ESP + 0x4]                 ; 00579842
    PUSH EAX                            ; 00579846
    CALL crt_wsock32.c_gethostname      ; 00579847
        ;   XREF to: 005c74c0 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_gethostname(char * name, int namelen)
    TEST EAX,EAX                        ; 0057984c
    JZ 0x00579859                       ; 0057984e
        ;   XREF to: 00579859 (CONDITIONAL_JUMP)  ; LAB_00579859
    XOR EAX,EAX                         ; 00579850
    ADD ESP,0x100                       ; 00579852
    RET                                 ; 00579858
    MOV ECX,dword ptr [ESP + 0x104]     ; 00579859
        ;   Label: LAB_00579859
    PUSH ECX                            ; 00579860
    LEA EAX,[ESP + 0x4]                 ; 00579861
    PUSH EAX                            ; 00579865
    CALL support_trisock.cpp_FUN_00579720 ; 00579866
        ;   XREF to: 00579720 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_00579720()
    ADD ESP,0x8                         ; 0057986b
    ADD ESP,0x100                       ; 0057986e
    RET                                 ; 00579874

