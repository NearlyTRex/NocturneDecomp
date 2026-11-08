; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004e42a0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;
; Called Functions:
;   FUN_004089d0
;   FUN_00408a10
;   FUN_0041a840
;   FUN_0044d060
;   FUN_0046b960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e42a0
        ;   Label: FUN_004e42a0
    SUB ESP,0x30                        ; 004e42a1
    MOV EBX,dword ptr [ESP + 0x38]      ; 004e42a4
    CMP dword ptr [EBX + 0x2bc],0x0     ; 004e42a8
    JNZ 0x004e42b8                      ; 004e42af
        ;   XREF to: 004e42b8 (CONDITIONAL_JUMP)  ; LAB_004e42b8
    XOR EAX,EAX                         ; 004e42b1
        ;   Label: LAB_004e42b1
    ADD ESP,0x30                        ; 004e42b3
    POP EBX                             ; 004e42b6
    RET                                 ; 004e42b7
    MOV ECX,dword ptr [0x0060b280]      ; 004e42b8 | DAT_0060b280
        ;   Label: LAB_004e42b8
    PUSH ECX                            ; 004e42be
    CALL FUN_0046b960                   ; 004e42bf
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b960()
    ADD ESP,0x4                         ; 004e42c4
    TEST EAX,EAX                        ; 004e42c7
    JNZ 0x004e42b1                      ; 004e42c9
        ;   XREF to: 004e42b1 (CONDITIONAL_JUMP)  ; LAB_004e42b1
    PUSH EDI                            ; 004e42cb
    PUSH ESI                            ; 004e42cc
    PUSH EBX                            ; 004e42cd
    CALL FUN_004089d0                   ; 004e42ce
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004089d0()
    ADD ESP,0x4                         ; 004e42d3
    PUSH 0x0                            ; 004e42d6
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004e42d8
    PUSH EBX                            ; 004e42de
    LEA ESI,[ESP + 0x10]                ; 004e42df
    LEA EDI,[ESP + 0x28]                ; 004e42e3
    CALL dword ptr [EAX + 0x24]         ; 004e42e7
    MOV ECX,0x6                         ; 004e42ea
    ADD ESP,0x4                         ; 004e42ef
    LEA EAX,[ESP + 0x24]                ; 004e42f2
    LEA ESI,[ESP + 0xc]                 ; 004e42f6
    PUSH EAX                            ; 004e42fa
    MOVSD.REP ES:EDI,ESI                ; 004e42fb
    CALL FUN_0041a840                   ; 004e42fd
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a840()
    ADD ESP,0x8                         ; 004e4302
    PUSH EBX                            ; 004e4305
    MOV ESI,EAX                         ; 004e4306
    MOV EDI,EAX                         ; 004e4308
    CALL FUN_00408a10                   ; 004e430a
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a10()
    ADD ESP,0x4                         ; 004e430f
    TEST ESI,ESI                        ; 004e4312
    JZ 0x004e4332                       ; 004e4314
        ;   XREF to: 004e4332 (CONDITIONAL_JUMP)  ; LAB_004e4332
    PUSH dword ptr [EBX + 0x2b8]        ; 004e4316
    LEA EAX,[EBX + 0x30]                ; 004e431c
    PUSH dword ptr [EBX + 0x2b4]        ; 004e431f
    PUSH EAX                            ; 004e4325
    ADD EBX,0x20                        ; 004e4326
    PUSH EBX                            ; 004e4329
    CALL FUN_0044d060                   ; 004e432a
        ;   XREF to: 0044d060 (UNCONDITIONAL_CALL)  ; undefined FUN_0044d060()
    ADD ESP,0x10                        ; 004e432f
    MOV EAX,EDI                         ; 004e4332
        ;   Label: LAB_004e4332
    POP ESI                             ; 004e4334
    POP EDI                             ; 004e4335
    ADD ESP,0x30                        ; 004e4336
    POP EBX                             ; 004e4339
    RET                                 ; 004e433a

