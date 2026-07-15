; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdlib_c__atodbl_v2_FUN_1000cf00(_CRT_DOUBLE *result,char *str)
;
; Parameters:
; _CRT_DOUBLE *    Stack[0x4]:4   result
; char *           Stack[0x8]:4   str
;
; Called Functions:
;   crt_math.c___ld12told_FUN_1000a170
;   crt_math.c__strgtold12_FUN_1000c7b0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x10]      ; 1000cf00
        ;   Label: crt_stdlib.c__atodbl_v2_FUN_1000cf00
    SUB ESP,0xc                         ; 1000cf04
    MOV ECX,dword ptr [ESP + 0x18]      ; 1000cf07
    PUSH ESI                            ; 1000cf0b
    MOV EDX,dword ptr [ESP + 0x18]      ; 1000cf0c
    PUSH 0x0                            ; 1000cf10
    PUSH 0x0                            ; 1000cf12
    PUSH 0x0                            ; 1000cf14
    PUSH EAX                            ; 1000cf16
    PUSH ECX                            ; 1000cf17
    LEA EAX,[ESP + 0x18]                ; 1000cf18
    PUSH EDX                            ; 1000cf1c
    PUSH EAX                            ; 1000cf1d
    CALL crt_math.c__strgtold12_FUN_1000c7b0 ; 1000cf1e
        ;   XREF to: 1000c7b0 (UNCONDITIONAL_CALL)  ; uint crt_math.c__strgtold12_FUN_1000c7b0(_LDBL12 * pld12, char * * p_end_ptr, char * str, int mult12, ...)
    MOV ECX,dword ptr [ESP + 0x30]      ; 1000cf23
    ADD ESP,0x1c                        ; 1000cf27
    MOV ESI,EAX                         ; 1000cf2a
    PUSH ECX                            ; 1000cf2c
    LEA EAX,[ESP + 0x8]                 ; 1000cf2d
    PUSH EAX                            ; 1000cf31
    CALL crt_math.c___ld12told_FUN_1000a170 ; 1000cf32
        ;   XREF to: 1000a170 (UNCONDITIONAL_CALL)  ; INTRNCVT_STATUS crt_math.c___ld12told_FUN_1000a170(_LDBL12 * ifp, _LDOUBLE * ld)
    ADD ESP,0x8                         ; 1000cf37
    CMP EAX,0x1                         ; 1000cf3a
    JNZ 0x1000cf42                      ; 1000cf3d
        ;   XREF to: 1000cf42 (CONDITIONAL_JUMP)  ; LAB_1000cf42
    OR ESI,0x2                          ; 1000cf3f
    MOV EAX,ESI                         ; 1000cf42
        ;   Label: LAB_1000cf42
    POP ESI                             ; 1000cf44
    ADD ESP,0xc                         ; 1000cf45
    RET                                 ; 1000cf48

