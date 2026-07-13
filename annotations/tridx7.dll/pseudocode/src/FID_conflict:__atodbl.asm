; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl FID_conflict___atodbl(_CRT_FLOAT *_Result,char *_Str)
;
; Parameters:
; _CRT_FLOAT *     Stack[0x4]:4   _Result
; char *           Stack[0x8]:4   _Str
; Local Variables:
; undefined        Stack[-0x10]:1  local_10
; undefined        Stack[-0xc]:1  local_c
;
; Called Functions:
;   ___strgtold12
;   FID_conflict:__ld12tod
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 1000a280
        ;   Label: FID_conflict:__atodbl
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
    CALL ___strgtold12                  ; 1000a29a
        ;   XREF to: 1000c7b0 (UNCONDITIONAL_CALL)  ; uint ___strgtold12(_LDBL12 * pld12, char * * p_end_ptr, char * str, int mult12, ...)
    MOV ECX,dword ptr [ESP + 0x30]      ; 1000a29f
    LEA EDX,[ESP + 0x20]                ; 1000a2a3
    ADD ESP,0x1c                        ; 1000a2a7
    PUSH ECX                            ; 1000a2aa
    PUSH EDX                            ; 1000a2ab
    CALL FID_conflict:__ld12tod         ; 1000a2ac
        ;   XREF to: 1000a150 (UNCONDITIONAL_CALL)  ; INTRNCVT_STATUS FID_conflict:__ld12tod(_LDBL12 * _Ifp, _CRT_DOUBLE * _D)
    ADD ESP,0x18                        ; 1000a2b1
    RET                                 ; 1000a2b4

