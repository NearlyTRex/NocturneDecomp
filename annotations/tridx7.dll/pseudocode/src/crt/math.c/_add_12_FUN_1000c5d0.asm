; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_math_c__add_12_FUN_1000c5d0(uint *a,uint *b)
;
; Parameters:
; uint *           Stack[0x4]:4   a
; uint *           Stack[0x8]:4   b
;
; XREF[2]:
;   crt_math.c__mtold12_FUN_1000c6c0 at 1000c71d
;   crt_stdio.c__i10_output_FUN_1000cf50 at 1000d251
;
; Called Functions:
;   crt_math.c__addl_FUN_1000c5a0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 1000c5d0
        ;   Label: crt_math.c__add_12_FUN_1000c5d0
    PUSH EDI                            ; 1000c5d1
    MOV ESI,dword ptr [ESP + 0xc]       ; 1000c5d2
    MOV EDI,dword ptr [ESP + 0x10]      ; 1000c5d6
    PUSH ESI                            ; 1000c5da
    MOV EAX,dword ptr [EDI]             ; 1000c5db
    PUSH EAX                            ; 1000c5dd
    MOV ECX,dword ptr [ESI]             ; 1000c5de
    PUSH ECX                            ; 1000c5e0
    CALL crt_math.c__addl_FUN_1000c5a0  ; 1000c5e1
        ;   XREF to: 1000c5a0 (UNCONDITIONAL_CALL)  ; uint crt_math.c__addl_FUN_1000c5a0(uint a, uint b, uint * result)
    ADD ESP,0xc                         ; 1000c5e6
    TEST EAX,EAX                        ; 1000c5e9
    JZ 0x1000c605                       ; 1000c5eb
        ;   XREF to: 1000c605 (CONDITIONAL_JUMP)  ; LAB_1000c605
    LEA EAX,[ESI + 0x4]                 ; 1000c5ed
    PUSH EAX                            ; 1000c5f0
    PUSH 0x1                            ; 1000c5f1
    MOV ECX,dword ptr [EAX]             ; 1000c5f3
    PUSH ECX                            ; 1000c5f5
    CALL crt_math.c__addl_FUN_1000c5a0  ; 1000c5f6
        ;   XREF to: 1000c5a0 (UNCONDITIONAL_CALL)  ; uint crt_math.c__addl_FUN_1000c5a0(uint a, uint b, uint * result)
    ADD ESP,0xc                         ; 1000c5fb
    TEST EAX,EAX                        ; 1000c5fe
    JZ 0x1000c605                       ; 1000c600
        ;   XREF to: 1000c605 (CONDITIONAL_JUMP)  ; LAB_1000c605
    INC dword ptr [ESI + 0x8]           ; 1000c602
    LEA EAX,[ESI + 0x4]                 ; 1000c605
        ;   Label: LAB_1000c605
    MOV ECX,dword ptr [EDI + 0x4]       ; 1000c608
    PUSH EAX                            ; 1000c60b
    PUSH ECX                            ; 1000c60c
    MOV EDX,dword ptr [EAX]             ; 1000c60d
    PUSH EDX                            ; 1000c60f
    CALL crt_math.c__addl_FUN_1000c5a0  ; 1000c610
        ;   XREF to: 1000c5a0 (UNCONDITIONAL_CALL)  ; uint crt_math.c__addl_FUN_1000c5a0(uint a, uint b, uint * result)
    ADD ESP,0xc                         ; 1000c615
    TEST EAX,EAX                        ; 1000c618
    JZ 0x1000c61f                       ; 1000c61a
        ;   XREF to: 1000c61f (CONDITIONAL_JUMP)  ; LAB_1000c61f
    INC dword ptr [ESI + 0x8]           ; 1000c61c
    MOV ECX,dword ptr [ESI + 0x8]       ; 1000c61f
        ;   Label: LAB_1000c61f
    ADD ESI,0x8                         ; 1000c622
    PUSH ESI                            ; 1000c625
    MOV EAX,dword ptr [EDI + 0x8]       ; 1000c626
    PUSH EAX                            ; 1000c629
    PUSH ECX                            ; 1000c62a
    CALL crt_math.c__addl_FUN_1000c5a0  ; 1000c62b
        ;   XREF to: 1000c5a0 (UNCONDITIONAL_CALL)  ; uint crt_math.c__addl_FUN_1000c5a0(uint a, uint b, uint * result)
    ADD ESP,0xc                         ; 1000c630
    POP EDI                             ; 1000c633
    POP ESI                             ; 1000c634
    RET                                 ; 1000c635

