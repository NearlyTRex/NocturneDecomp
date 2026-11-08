; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00578570(int param_1,int param_2)
;
;
; XREF[8]:
;   FUN_0040a050 at 0040a5d4
;   FUN_0043a7a0 at 0043aae2
;   FUN_00485b40 at 00486074
;   FUN_004cbdc0 at 004cc5cc
;   FUN_004e2e70 at 004e32e5
;   FUN_0053f170 at 0053f695
;   FUN_00575800 at 0057604b
;   FUN_0057fc20 at 0058010b
;
; Called Functions:
;   FUN_00485840
;
; *****************************************************************************

section .text

    XOR EAX,EAX                         ; 00578050
        ;   Label: LAB_00578050
    RET                                 ; 00578052
    MOV EAX,dword ptr [ESP + 0x4]       ; 00578570
        ;   Label: FUN_00578570
    MOV EDX,dword ptr [ESP + 0x8]       ; 00578574
    TEST EDX,EDX                        ; 00578578
    JZ 0x00578050                       ; 0057857a
        ;   XREF to: 00578050 (CONDITIONAL_JUMP)  ; LAB_00578050
    CMP dword ptr [EAX + 0x2d0],0x7     ; 00578580
    JNZ 0x00578050                      ; 00578587
        ;   XREF to: 00578050 (CONDITIONAL_JUMP)  ; LAB_00578050
    CMP byte ptr [EAX + 0x464],0x0      ; 0057858d
    JNZ 0x0057859c                      ; 00578594
        ;   XREF to: 0057859c (CONDITIONAL_JUMP)  ; LAB_0057859c
    MOV EAX,0x1                         ; 00578596
    RET                                 ; 0057859b
    PUSH 0x0                            ; 0057859c
        ;   Label: LAB_0057859c
    PUSH EDX                            ; 0057859e
    ADD EAX,0x464                       ; 0057859f
    PUSH EAX                            ; 005785a4
    CALL FUN_00485840                   ; 005785a5
        ;   XREF to: 00485840 (UNCONDITIONAL_CALL)  ; undefined FUN_00485840()
    ADD ESP,0xc                         ; 005785aa
    RET                                 ; 005785ad

