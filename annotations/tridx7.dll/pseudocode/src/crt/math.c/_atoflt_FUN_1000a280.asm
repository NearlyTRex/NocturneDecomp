; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_math_c__atoflt_FUN_1000a280(_CRT_FLOAT *result,char *str)
;
; Parameters:
; _CRT_FLOAT *     Stack[0x4]:4   result
; char *           Stack[0x8]:4   str
; Local Variables:
; undefined        Stack[-0x10]:1  local_10
; undefined        Stack[-0xc]:1  local_c
;
; XREF[1]:
;   crt_stdio.c__fassign_FUN_10006fe0 at 10007016
;
; Called Functions:
;   crt_math.c___ld12tof_FUN_1000a150
;   crt_math.c__strgtold12_FUN_1000c7b0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 1000a280
        ;   Label: crt_math.c__atoflt_FUN_1000a280
    SUB ESP,0x10                        ; 1000a284
    LEA ECX,[ESP]                       ; 1000a287
    PUSH 0x0                            ; 1000a28b
    LEA EDX,[ESP + 0x8]                 ; 1000a28d
    PUSH 0x0                            ; 1000a291
    PUSH 0x0                            ; 1000a293
    PUSH 0x0                            ; 1000a295
    PUSH EAX                            ; 1000a297
    PUSH ECX                            ; 1000a298
    PUSH EDX                            ; 1000a299
    CALL crt_math.c__strgtold12_FUN_1000c7b0 ; 1000a29a
        ;   XREF to: 1000c7b0 (UNCONDITIONAL_CALL)  ; uint crt_math.c__strgtold12_FUN_1000c7b0(_LDBL12 * pld12, char * * p_end_ptr, char * str, int mult12, ...)
    MOV ECX,dword ptr [ESP + 0x30]      ; 1000a29f
    LEA EDX,[ESP + 0x20]                ; 1000a2a3
    ADD ESP,0x1c                        ; 1000a2a7
    PUSH ECX                            ; 1000a2aa
    PUSH EDX                            ; 1000a2ab
    CALL crt_math.c___ld12tof_FUN_1000a150 ; 1000a2ac
        ;   XREF to: 1000a150 (UNCONDITIONAL_CALL)  ; INTRNCVT_STATUS crt_math.c___ld12tof_FUN_1000a150(_LDBL12 * ifp, _CRT_FLOAT * f) | __ld12tod
    ADD ESP,0x18                        ; 1000a2b1
    RET                                 ; 1000a2b4

