; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004968d0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01e661b8
;   undefined4 DAT_0265370c
;
; Called Functions:
;   FUN_0041a840
;   FUN_0044e6a0
;   FUN_0046b2b0
;   FUN_0046b300
;   FUN_0046b8e0
;   FUN_00530980
;   thunk_FUN_004e9810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004968d0
        ;   Label: FUN_004968d0
    PUSH ESI                            ; 004968d1
    PUSH EDI                            ; 004968d2
    PUSH EBP                            ; 004968d3
    SUB ESP,0x18                        ; 004968d4
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004968d7
    PUSH EBX                            ; 004968db
    MOV EDX,dword ptr [0x0060b280]      ; 004968dc | DAT_0060b280
    PUSH EDX                            ; 004968e2 | DAT_01ba5c50
    CALL FUN_0046b2b0                   ; 004968e3
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b2b0()
    ADD ESP,0x8                         ; 004968e8
    PUSH 0x0                            ; 004968eb
    LEA EAX,[EBX + 0x44]                ; 004968ed
    PUSH EAX                            ; 004968f0
    MOV ECX,dword ptr [0x0060b280]      ; 004968f1 | DAT_0060b280
    PUSH ECX                            ; 004968f7 | DAT_01ba5c50
    LEA EDI,[ESP + 0xc]                 ; 004968f8
    CALL FUN_0046b300                   ; 004968fc
        ;   XREF to: 0046b300 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b300()
    ADD ESP,0xc                         ; 00496901
    MOV ECX,0x6                         ; 00496904
    MOV ESI,dword ptr [EBX + 0x50]      ; 00496909
    PUSH 0x0                            ; 0049690c
    LEA EAX,[ESP + 0x4]                 ; 0049690e
    MOV ESI,dword ptr [ESI + 0x350]     ; 00496912
    PUSH EAX                            ; 00496918
    MOVSD.REP ES:EDI,ESI                ; 00496919
    CALL FUN_0041a840                   ; 0049691b
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a840()
    ADD ESP,0x8                         ; 00496920
    TEST EAX,EAX                        ; 00496923
    JNZ 0x0049693d                      ; 00496925
        ;   XREF to: 0049693d (CONDITIONAL_JUMP)  ; LAB_0049693d
    MOV EAX,[0x0060b280]                ; 00496927 | DAT_0060b280
        ;   Label: LAB_00496927
    PUSH EAX                            ; 0049692c | DAT_01ba5c50
    CALL thunk_FUN_004e9810             ; 0049692d
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004e9810()
    ADD ESP,0x4                         ; 00496932
    ADD ESP,0x18                        ; 00496935
    POP EBP                             ; 00496938
    POP EDI                             ; 00496939
    POP ESI                             ; 0049693a
    POP EBX                             ; 0049693b
    RET                                 ; 0049693c
    PUSH 0x0                            ; 0049693d
        ;   Label: LAB_0049693d
    LEA EAX,[ESP + 0x10]                ; 0049693f
    PUSH EAX                            ; 00496943
    LEA EAX,[ESP + 0x8]                 ; 00496944
    PUSH EAX                            ; 00496948
    PUSH 0x265370c                      ; 00496949 | DAT_0265370c
    PUSH EBX                            ; 0049694e
    MOV ESI,dword ptr [0x0061b5a8]      ; 0049694f | DAT_0061b5a8
    PUSH ESI                            ; 00496955 | DAT_01e661b8
    CALL FUN_00530980                   ; 00496956
        ;   XREF to: 00530980 (UNCONDITIONAL_CALL)  ; undefined FUN_00530980()
    ADD ESP,0x18                        ; 0049695b
    PUSH 0xffff                         ; 0049695e
    MOV EDI,dword ptr [0x0060b280]      ; 00496963 | DAT_0060b280
    PUSH EDI                            ; 00496969 | DAT_01ba5c50
    CALL FUN_0046b8e0                   ; 0049696a
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b8e0()
    ADD ESP,0x8                         ; 0049696f
    PUSH 0x2e7                          ; 00496972
    PUSH 0x0                            ; 00496977
    PUSH 0x0                            ; 00496979
    MOV EBP,dword ptr [EBX + 0x50]      ; 0049697b
    PUSH EBP                            ; 0049697e
    CALL FUN_0044e6a0                   ; 0049697f
        ;   XREF to: 0044e6a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044e6a0()
    ADD ESP,0x10                        ; 00496984
    JMP 0x00496927                      ; 00496987
        ;   XREF to: 00496927 (UNCONDITIONAL_JUMP)  ; LAB_00496927

