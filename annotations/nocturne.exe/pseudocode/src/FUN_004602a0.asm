; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004602a0(int *param_1,int param_2)
;
;
; XREF[12]:
;   FUN_0042c4c0 at 0042c82c
;   FUN_00482950 at 00482c5f
;   FUN_00482f50 at 0048319b
;   FUN_004853c0 at 0048559d
;   FUN_00487af0 at 00487cfa
;   FUN_00488bf0 at 00488f04
;   FUN_00489360 at 00489606
;   FUN_004ae190 at 004ae4f8
;   FUN_004aeb70 at 004aee53
;   FUN_004af340 at 004af5e8
;   ... and 2 more
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01c00c7c
;   undefined4 DAT_01c039a0
;   undefined4 DAT_01c039a4
;
; Called Functions:
;   FUN_00404610
;   FUN_0045ed80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004602a0
        ;   Label: FUN_004602a0
    PUSH ESI                            ; 004602a1
    PUSH EDI                            ; 004602a2
    PUSH EBP                            ; 004602a3
    MOV EBP,dword ptr [ESP + 0x14]      ; 004602a4
    MOV ESI,dword ptr [ESP + 0x18]      ; 004602a8
    CMP dword ptr [EBP + 0xc],0x0       ; 004602ac
    JNZ 0x00460321                      ; 004602b0
        ;   XREF to: 00460321 (CONDITIONAL_JUMP)  ; LAB_00460321
    MOV ECX,0xffffffff                  ; 004602b6
        ;   Label: LAB_004602b6
    MOV EBX,dword ptr [ESI + 0x4]       ; 004602bb
    XOR EDX,EDX                         ; 004602be
    TEST EBX,EBX                        ; 004602c0
    JLE 0x004602e0                      ; 004602c2
        ;   XREF to: 004602e0 (CONDITIONAL_JUMP)  ; LAB_004602e0
    MOV EAX,ESI                         ; 004602c4
    MOV EDI,dword ptr [EBP]             ; 004602c6
    MOV EBX,dword ptr [EAX + 0x18]      ; 004602c9
        ;   Label: LAB_004602c9
    IMUL EBX,EBX,0x30                   ; 004602cc
    INC EDX                             ; 004602cf
    AND ECX,dword ptr [EDI + EBX*0x1 + 0x10] ; 004602d0
    MOV EBX,dword ptr [ESI + 0x4]       ; 004602d4
    ADD EAX,0x4                         ; 004602d7
    CMP EDX,EBX                         ; 004602da
    JL 0x004602c9                       ; 004602dc
        ;   XREF to: 004602c9 (CONDITIONAL_JUMP)  ; LAB_004602c9
    MOV EAX,EAX                         ; 004602de
    TEST ECX,0x80000000                 ; 004602e0
        ;   Label: LAB_004602e0
    JZ 0x004602ed                       ; 004602e6
        ;   XREF to: 004602ed (CONDITIONAL_JUMP)  ; LAB_004602ed
    TEST CL,0x1f                        ; 004602e8
    JNZ 0x0046031c                      ; 004602eb
        ;   XREF to: 0046031c (CONDITIONAL_JUMP)  ; LAB_0046031c
    CMP dword ptr [EBP + 0x4],0x0       ; 004602ed
        ;   Label: LAB_004602ed
    JZ 0x00460333                       ; 004602f1
        ;   XREF to: 00460333 (CONDITIONAL_JUMP)  ; LAB_00460333
    XOR EDX,EDX                         ; 004602f3
    MOV EAX,0x463a79                    ; 004602f5 | LAB_00463a79
    MOV dword ptr [0x01c039a0],EDX      ; 004602fa | DAT_01c039a0
    MOV dword ptr [0x01c039a4],EDX      ; 00460300 | DAT_01c039a4
    MOV [0x01c00c7c],EAX                ; 00460306 | DAT_01c00c7c
    LEA EAX,[ESI + 0x18]                ; 0046030b
        ;   Label: LAB_0046030b
    PUSH EAX                            ; 0046030e
    MOV EBX,dword ptr [ESI + 0x4]       ; 0046030f
    PUSH EBX                            ; 00460312
    PUSH EBP                            ; 00460313
    CALL FUN_0045ed80                   ; 00460314
        ;   XREF to: 0045ed80 (UNCONDITIONAL_CALL)  ; undefined FUN_0045ed80()
    ADD ESP,0xc                         ; 00460319
    POP EBP                             ; 0046031c
        ;   Label: LAB_0046031c
    POP EDI                             ; 0046031d
    POP ESI                             ; 0046031e
    POP EBX                             ; 0046031f
    RET                                 ; 00460320
    LEA EAX,[ESI + 0x8]                 ; 00460321
        ;   Label: LAB_00460321
    PUSH EAX                            ; 00460324
    CALL FUN_00404610                   ; 00460325
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; undefined FUN_00404610()
    ADD ESP,0x4                         ; 0046032a
    TEST EAX,EAX                        ; 0046032d
    JZ 0x0046031c                       ; 0046032f
        ;   XREF to: 0046031c (CONDITIONAL_JUMP)  ; LAB_0046031c
    JMP 0x004602b6                      ; 00460331
        ;   XREF to: 004602b6 (UNCONDITIONAL_JUMP)  ; LAB_004602b6
    CMP dword ptr [0x005b7624],0x20     ; 00460333 | DAT_005b7624
        ;   Label: LAB_00460333
    JNZ 0x0046035e                      ; 0046033a
        ;   XREF to: 0046035e (CONDITIONAL_JUMP)  ; LAB_0046035e
    MOV dword ptr [0x01c00c7c],0x52f031 ; 0046033c | DAT_01c00c7c | LAB_0052f031
    MOV EDI,0x6                         ; 00460346
        ;   Label: LAB_00460346
    MOV EBX,0x267                       ; 0046034b
    MOV dword ptr [0x01c039a4],EDI      ; 00460350 | DAT_01c039a4
    MOV dword ptr [0x01c039a0],EBX      ; 00460356 | DAT_01c039a0
    JMP 0x0046030b                      ; 0046035c
        ;   XREF to: 0046030b (UNCONDITIONAL_JUMP)  ; LAB_0046030b
    MOV dword ptr [0x01c00c7c],0x52f823 ; 0046035e | DAT_01c00c7c | LAB_0052f823
        ;   Label: LAB_0046035e
    JMP 0x00460346                      ; 00460368
        ;   XREF to: 00460346 (UNCONDITIONAL_JUMP)  ; LAB_00460346

