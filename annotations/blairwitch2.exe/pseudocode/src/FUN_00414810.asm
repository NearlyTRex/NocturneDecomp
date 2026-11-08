; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00414810(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;
; Called Functions:
;   FUN_0041a840
;   FUN_0044fcc0
;   FUN_0046b2b0
;   FUN_0046b350
;   thunk_FUN_004e9810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414810
        ;   Label: FUN_00414810
    PUSH ESI                            ; 00414811
    PUSH EDI                            ; 00414812
    SUB ESP,0x30                        ; 00414813
    MOV EBX,dword ptr [ESP + 0x40]      ; 00414816
    LEA EAX,[EBX + 0x20]                ; 0041481a
    PUSH EAX                            ; 0041481d
    MOV EDX,dword ptr [0x0060b280]      ; 0041481e | DAT_0060b280
    PUSH EDX                            ; 00414824
    CALL FUN_0046b2b0                   ; 00414825
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b2b0()
    ADD ESP,0x8                         ; 0041482a
    PUSH 0x0                            ; 0041482d
    LEA EAX,[EBX + 0x30]                ; 0041482f
    PUSH EAX                            ; 00414832
    MOV ECX,dword ptr [0x0060b280]      ; 00414833 | DAT_0060b280
    PUSH ECX                            ; 00414839
    CALL FUN_0046b350                   ; 0041483a
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b350()
    ADD ESP,0xc                         ; 0041483f
    PUSH 0x0                            ; 00414842
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00414844
    PUSH EBX                            ; 0041484a
    LEA ESI,[ESP + 0x20]                ; 0041484b
    LEA EDI,[ESP + 0x8]                 ; 0041484f
    CALL dword ptr [EAX + 0x24]         ; 00414853
    MOV ECX,0x6                         ; 00414856
    ADD ESP,0x4                         ; 0041485b
    LEA EAX,[ESP + 0x4]                 ; 0041485e
    LEA ESI,[ESP + 0x1c]                ; 00414862
    PUSH EAX                            ; 00414866
    MOVSD.REP ES:EDI,ESI                ; 00414867
    CALL FUN_0041a840                   ; 00414869
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a840()
    ADD ESP,0x8                         ; 0041486e
    MOV ESI,EAX                         ; 00414871
    TEST EAX,EAX                        ; 00414873
    JNZ 0x0041488f                      ; 00414875
        ;   XREF to: 0041488f (CONDITIONAL_JUMP)  ; LAB_0041488f
    MOV EBX,dword ptr [0x0060b280]      ; 00414877 | DAT_0060b280
        ;   Label: LAB_00414877
    PUSH EBX                            ; 0041487d
    CALL thunk_FUN_004e9810             ; 0041487e
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004e9810()
    ADD ESP,0x4                         ; 00414883
    MOV EAX,ESI                         ; 00414886
    ADD ESP,0x30                        ; 00414888
    POP EDI                             ; 0041488b
    POP ESI                             ; 0041488c
    POP EBX                             ; 0041488d
    RET                                 ; 0041488e
    PUSH -0x1                           ; 0041488f
        ;   Label: LAB_0041488f
    ADD EBX,0x2b4                       ; 00414891
    PUSH 0x0                            ; 00414897
    PUSH EBX                            ; 00414899
    CALL FUN_0044fcc0                   ; 0041489a
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fcc0()
    ADD ESP,0xc                         ; 0041489f
    JMP 0x00414877                      ; 004148a2
        ;   XREF to: 00414877 (UNCONDITIONAL_JUMP)  ; LAB_00414877

