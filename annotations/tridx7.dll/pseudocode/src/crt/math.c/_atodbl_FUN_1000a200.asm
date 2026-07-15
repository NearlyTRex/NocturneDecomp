; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_math_c__atodbl_FUN_1000a200(_CRT_DOUBLE *result,char *str)
;
; Parameters:
; _CRT_DOUBLE *    Stack[0x4]:4   result
; char *           Stack[0x8]:4   str
; Local Variables:
; undefined        Stack[-0x10]:1  local_10
; undefined        Stack[-0xc]:1  local_c
;
; XREF[1]:
;   crt_stdio.c__fassign_FUN_10006fe0 at 10006ff4
;
; Called Functions:
;   crt_math.c___ld12tod_FUN_1000a130
;   crt_math.c__strgtold12_FUN_1000c7b0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 1000a200
        ;   Label: crt_math.c__atodbl_FUN_1000a200
    SUB ESP,0x10                        ; 1000a204
    LEA ECX,[ESP]                       ; 1000a207
    PUSH 0x0                            ; 1000a20b
    LEA EDX,[ESP + 0x8]                 ; 1000a20d
    PUSH 0x0                            ; 1000a211
    PUSH 0x0                            ; 1000a213
    PUSH 0x0                            ; 1000a215
    PUSH EAX                            ; 1000a217
    PUSH ECX                            ; 1000a218
    PUSH EDX                            ; 1000a219
    CALL crt_math.c__strgtold12_FUN_1000c7b0 ; 1000a21a
        ;   XREF to: 1000c7b0 (UNCONDITIONAL_CALL)  ; uint crt_math.c__strgtold12_FUN_1000c7b0(_LDBL12 * pld12, char * * p_end_ptr, char * str, int mult12, ...)
    MOV ECX,dword ptr [ESP + 0x30]      ; 1000a21f
    LEA EDX,[ESP + 0x20]                ; 1000a223
    ADD ESP,0x1c                        ; 1000a227
    PUSH ECX                            ; 1000a22a
    PUSH EDX                            ; 1000a22b
    CALL crt_math.c___ld12tod_FUN_1000a130 ; 1000a22c
        ;   XREF to: 1000a130 (UNCONDITIONAL_CALL)  ; INTRNCVT_STATUS crt_math.c___ld12tod_FUN_1000a130(_LDBL12 * ifp, _CRT_DOUBLE * d)
    ADD ESP,0x18                        ; 1000a231
    RET                                 ; 1000a234

