; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_stdlib_c__ultoa_FUN_1000f980(ulong val,char *buf,int radix)
;
; Parameters:
; ulong            Stack[0x4]:4   val
; char *           Stack[0x8]:4   buf
; int              Stack[0xc]:4   radix
;
; Called Functions:
;   crt_stdlib.c_xtoa_FUN_1000f8f0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0xc]       ; 1000f980
        ;   Label: crt_stdlib.c__ultoa_FUN_1000f980
    PUSH ESI                            ; 1000f984
    MOV ESI,dword ptr [ESP + 0xc]       ; 1000f985
    PUSH 0x0                            ; 1000f989
    MOV ECX,dword ptr [ESP + 0xc]       ; 1000f98b
    PUSH EAX                            ; 1000f98f
    PUSH ESI                            ; 1000f990
    PUSH ECX                            ; 1000f991
    CALL crt_stdlib.c_xtoa_FUN_1000f8f0 ; 1000f992
        ;   XREF to: 1000f8f0 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_xtoa_FUN_1000f8f0(ulong val, char * buf, uint radix, int neg)
    ADD ESP,0x10                        ; 1000f997
    MOV EAX,ESI                         ; 1000f99a
    POP ESI                             ; 1000f99c
    RET                                 ; 1000f99d

