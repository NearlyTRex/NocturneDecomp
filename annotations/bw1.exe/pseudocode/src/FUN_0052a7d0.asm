; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0052a7d0(int param_1,undefined4 param_2,float *param_3,int param_4,int param_5,int param_6)
;
; Local Variables:
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x4c]:4  local_4c
;
; XREF[1]:
;   FUN_0052b450 at 0052bdb7
;
; Called Functions:
;   FUN_0052a2c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052a7d0
        ;   Label: FUN_0052a7d0
    SUB ESP,0x90                        ; 0052a7d1
    MOV EBX,dword ptr [ESP + 0xa4]      ; 0052a7d7
    MOV EAX,dword ptr [ESP + 0xac]      ; 0052a7de
    CMP dword ptr [EAX + 0x10],0x0      ; 0052a7e5
    JZ 0x0052a876                       ; 0052a7e9
        ;   XREF to: 0052a876 (CONDITIONAL_JUMP)  ; LAB_0052a876
    CMP dword ptr [EAX + 0x18],0x0      ; 0052a7ef
    JZ 0x0052a876                       ; 0052a7f3
        ;   XREF to: 0052a876 (CONDITIONAL_JUMP)  ; LAB_0052a876
    CMP EBX,0x2                         ; 0052a7f9
    JGE 0x0052a876                      ; 0052a7fc
        ;   XREF to: 0052a876 (CONDITIONAL_JUMP)  ; LAB_0052a876
    XOR EAX,EAX                         ; 0052a7fe
    PUSH ESI                            ; 0052a800
        ;   Label: LAB_0052a800
    PUSH EAX                            ; 0052a801
    LEA EAX,[ESP + 0x8]                 ; 0052a802
    PUSH EAX                            ; 0052a806
    MOV ESI,dword ptr [ESP + 0xa8]      ; 0052a807
    PUSH ESI                            ; 0052a80e
    CALL FUN_0052a2c0                   ; 0052a80f
        ;   XREF to: 0052a2c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0052a2c0()
    ADD ESP,0xc                         ; 0052a814
    MOV EDX,dword ptr [ESP + 0xac]      ; 0052a817
    LEA EAX,[EDX*0x8 + 0x0]             ; 0052a81e
    MOV ECX,dword ptr [ESP + 0x9c]      ; 0052a825
    ADD EAX,EDX                         ; 0052a82c
    ADD ECX,0x7430                      ; 0052a82e
    SHL EAX,0x8                         ; 0052a834
    ADD ECX,EAX                         ; 0052a837
    LEA EAX,[EBX*0x8 + 0x0]             ; 0052a839
    ADD EAX,EBX                         ; 0052a840
    SHL EAX,0x3                         ; 0052a842
    LEA EDX,[ECX + EAX*0x1]             ; 0052a845
    MOV ECX,dword ptr [ESP + 0xa4]      ; 0052a848
    XOR EAX,EAX                         ; 0052a84f
    POP ESI                             ; 0052a851
    ADD EDX,0x4                         ; 0052a852
        ;   Label: LAB_0052a852
    FLD float ptr [ESP + EAX*0x4]       ; 0052a855
    ADD ECX,0x4                         ; 0052a858
    FADD float ptr [EDX + -0x4]         ; 0052a85b
    INC EAX                             ; 0052a85e
    FSTP float ptr [ECX + -0x4]         ; 0052a85f
    MOV EBX,dword ptr [ESP + EAX*0x4 + 0x44] ; 0052a862
    MOV dword ptr [EDX + -0x4],EBX      ; 0052a866
    CMP EAX,0x12                        ; 0052a869
    JL 0x0052a852                       ; 0052a86c
        ;   XREF to: 0052a852 (CONDITIONAL_JUMP)  ; LAB_0052a852
    ADD ESP,0x90                        ; 0052a86e
    POP EBX                             ; 0052a874
    RET                                 ; 0052a875
    MOV EAX,dword ptr [EAX + 0x14]      ; 0052a876
        ;   Label: LAB_0052a876
    JMP 0x0052a800                      ; 0052a879
        ;   XREF to: 0052a800 (UNCONDITIONAL_JUMP)  ; LAB_0052a800

