; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046b880(int param_1,int param_2)
;
;
; XREF[17]:
;   FUN_0041b700 at 0041b7b5
;   FUN_00443af0 at 00443b6c
;   FUN_004468c0 at 0044690b
;   FUN_0044ac60 at 0044adca
;   FUN_0044d9f0 at 0044da22
;   FUN_0044e7d0 at 0044e80f
;   FUN_0046c900 at 0046c976
;   FUN_00497800 at 00497ae8
;   FUN_0049c780 at 0049cb1a
;   FUN_004cb700 at 004cb758
;   ... and 7 more
;
; Called Functions:
;   FUN_0046b870
;   FUN_0051c1a0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0046b880
        ;   Label: FUN_0046b880
    MOV EDX,dword ptr [ESP + 0xc]       ; 0046b881
    TEST EDX,EDX                        ; 0046b885
    JZ 0x0046b8be                       ; 0046b887
        ;   XREF to: 0046b8be (CONDITIONAL_JUMP)  ; LAB_0046b8be
    MOV EAX,dword ptr [ESP + 0x8]       ; 0046b889
    CMP dword ptr [EAX + 0x18],0x0      ; 0046b88d
    JZ 0x0046b8ba                       ; 0046b891
        ;   XREF to: 0046b8ba (CONDITIONAL_JUMP)  ; LAB_0046b8ba
    PUSH 0x2                            ; 0046b893
    CALL FUN_0051c1a0                   ; 0046b895
        ;   XREF to: 0051c1a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051c1a0()
        ;   Label: LAB_0046b895
    ADD ESP,0x4                         ; 0046b89a
    CMP dword ptr [ESP + 0xc],0x0       ; 0046b89d
    SETZ AL                             ; 0046b8a2
    AND EAX,0xff                        ; 0046b8a5
    PUSH EAX                            ; 0046b8aa
    MOV ESI,dword ptr [ESP + 0xc]       ; 0046b8ab
    PUSH ESI                            ; 0046b8af
    CALL FUN_0046b870                   ; 0046b8b0
        ;   XREF to: 0046b870 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b870()
    ADD ESP,0x8                         ; 0046b8b5
    POP ESI                             ; 0046b8b8
    RET                                 ; 0046b8b9
    PUSH 0x1                            ; 0046b8ba
        ;   Label: LAB_0046b8ba
    JMP 0x0046b895                      ; 0046b8bc
        ;   XREF to: 0046b895 (UNCONDITIONAL_JUMP)  ; LAB_0046b895
    PUSH EDX                            ; 0046b8be
        ;   Label: LAB_0046b8be
    JMP 0x0046b895                      ; 0046b8bf
        ;   XREF to: 0046b895 (UNCONDITIONAL_JUMP)  ; LAB_0046b895

