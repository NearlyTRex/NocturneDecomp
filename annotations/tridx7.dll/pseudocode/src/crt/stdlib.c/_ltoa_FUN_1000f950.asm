; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_stdlib_c__ltoa_FUN_1000f950(long val,char *buf,int radix)
;
; Parameters:
; long             Stack[0x4]:4   val
; char *           Stack[0x8]:4   buf
; int              Stack[0xc]:4   radix
;
; Called Functions:
;   crt_stdlib.c_xtoa_FUN_1000f8f0
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0xc]       ; 1000f950
        ;   Label: crt_stdlib.c__ltoa_FUN_1000f950
    PUSH ESI                            ; 1000f954
    MOV EAX,dword ptr [ESP + 0x8]       ; 1000f955
    CMP ECX,0xa                         ; 1000f959
    JNZ 0x1000f969                      ; 1000f95c
        ;   XREF to: 1000f969 (CONDITIONAL_JUMP)  ; LAB_1000f969
    TEST EAX,EAX                        ; 1000f95e
    JGE 0x1000f969                      ; 1000f960
        ;   XREF to: 1000f969 (CONDITIONAL_JUMP)  ; LAB_1000f969
    MOV EDX,0x1                         ; 1000f962
    JMP 0x1000f96b                      ; 1000f967
        ;   XREF to: 1000f96b (UNCONDITIONAL_JUMP)  ; LAB_1000f96b
    XOR EDX,EDX                         ; 1000f969
        ;   Label: LAB_1000f969
    MOV ESI,dword ptr [ESP + 0xc]       ; 1000f96b
        ;   Label: LAB_1000f96b
    PUSH EDX                            ; 1000f96f
    PUSH ECX                            ; 1000f970
    PUSH ESI                            ; 1000f971
    PUSH EAX                            ; 1000f972
    CALL crt_stdlib.c_xtoa_FUN_1000f8f0 ; 1000f973
        ;   XREF to: 1000f8f0 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_xtoa_FUN_1000f8f0(ulong val, char * buf, uint radix, int neg)
    ADD ESP,0x10                        ; 1000f978
    MOV EAX,ESI                         ; 1000f97b
    POP ESI                             ; 1000f97d
    RET                                 ; 1000f97e

