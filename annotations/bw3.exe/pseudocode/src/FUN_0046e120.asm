; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046e120(int param_1,int param_2)
;
;
; XREF[14]:
;   FUN_00418f90 at 00418ff3
;   FUN_004dbe70 at 004dc363
;   FUN_004fa6d0 at 004fa6e4
;   FUN_005095f0 at 00509735
;   FUN_00545710 at 00545871
;   FUN_00576c90 at 00576da5
;   FUN_00591680 at 0059179c
;   FUN_00593710 at 0059387c
;   FUN_00597970 at 00597a98
;   FUN_00598480 at 00598516
;   ... and 4 more
;
; Referenced Globals:
;   undefined4 DAT_01bdd858
;   undefined4 DAT_01bdd85c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0046e120
        ;   Label: FUN_0046e120
    MOV ECX,dword ptr [EDX + 0x4]       ; 0046e124
    TEST ECX,ECX                        ; 0046e127
    JZ 0x0046e133                       ; 0046e129
        ;   XREF to: 0046e133 (CONDITIONAL_JUMP)  ; LAB_0046e133
    MOV dword ptr [EDX + 0x1c],0x0      ; 0046e12b
    RET                                 ; 0046e132
    PUSH EDI                            ; 0046e133
        ;   Label: LAB_0046e133
    CMP dword ptr [ESP + 0xc],0x0       ; 0046e134
    SETNZ AL                            ; 0046e139
    MOV EDI,0xffffffff                  ; 0046e13c
    AND EAX,0xff                        ; 0046e141
    MOV dword ptr [0x01bdd858],ECX      ; 0046e146 | DAT_01bdd858
    INC EAX                             ; 0046e14c
    MOV dword ptr [0x01bdd85c],EDI      ; 0046e14d | DAT_01bdd85c
    MOV dword ptr [EDX + 0x1c],EAX      ; 0046e153
    POP EDI                             ; 0046e156
    RET                                 ; 0046e157

