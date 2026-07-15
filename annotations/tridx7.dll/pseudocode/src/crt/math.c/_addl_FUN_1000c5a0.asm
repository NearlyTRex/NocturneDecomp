; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl crt_math_c__addl_FUN_1000c5a0(uint a,uint b,uint *result)
;
; Parameters:
; uint             Stack[0x4]:4   a
; uint             Stack[0x8]:4   b
; uint *           Stack[0xc]:4   result
;
; XREF[3]:
;   crt_math.c__IncMan_FUN_10009d40 at 10009d79
;   crt_math.c___multtwelve_FUN_1000e8f0 at 1000ea11
;   crt_math.c__add_12_FUN_1000c5d0 at 1000c5e1
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 1000c5a0
        ;   Label: crt_math.c__addl_FUN_1000c5a0
    XOR EAX,EAX                         ; 1000c5a1
    MOV EDX,dword ptr [ESP + 0xc]       ; 1000c5a3
    MOV ECX,dword ptr [ESP + 0x8]       ; 1000c5a7
    LEA ESI,[ECX + EDX*0x1]             ; 1000c5ab
    CMP ECX,ESI                         ; 1000c5ae
    JA 0x1000c5b6                       ; 1000c5b0
        ;   XREF to: 1000c5b6 (CONDITIONAL_JUMP)  ; LAB_1000c5b6
    CMP EDX,ESI                         ; 1000c5b2
    JBE 0x1000c5bb                      ; 1000c5b4
        ;   XREF to: 1000c5bb (CONDITIONAL_JUMP)  ; LAB_1000c5bb
    MOV EAX,0x1                         ; 1000c5b6
        ;   Label: LAB_1000c5b6
    MOV ECX,dword ptr [ESP + 0x10]      ; 1000c5bb
        ;   Label: LAB_1000c5bb
    MOV dword ptr [ECX],ESI             ; 1000c5bf
    POP ESI                             ; 1000c5c1
    RET                                 ; 1000c5c2

