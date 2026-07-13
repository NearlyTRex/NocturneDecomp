; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 ___addl(uint param_1,uint param_2,uint *param_3)
;
;
; XREF[3]:
;   FUN_1000e8f0 at 1000ea11
;   __IncMan at 10009d79
;   ___add_12 at 1000c5e1
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 1000c5a0
        ;   Label: ___addl
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

