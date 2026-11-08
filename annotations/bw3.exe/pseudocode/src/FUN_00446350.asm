; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00446350(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408600
;   FUN_005a30d7
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00446350
        ;   Label: FUN_00446350
    PUSH EDI                            ; 00446351
    MOV EDX,dword ptr [ESP + 0xc]       ; 00446352
    PUSH EDX                            ; 00446356
    CALL FUN_00408600                   ; 00446357
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; undefined FUN_00408600()
    ADD ESP,0x4                         ; 0044635c
    PUSH 0x5ddf70                       ; 0044635f
    PUSH 0x3e8                          ; 00446364
    ADD EAX,0x208                       ; 00446369
    PUSH EAX                            ; 0044636e
    CALL FUN_005a30d7                   ; 0044636f
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30d7()
    LEA EDX,[EAX + 0xfffffdf8]          ; 00446374
    MOV dword ptr [EDX + 0x154],0x5dde74 ; 0044637a
    MOV ESI,0x5b9a32                    ; 00446384
    MOV dword ptr [EDX + 0x158],0x40800000 ; 00446389
    ADD ESP,0xc                         ; 00446393
    MOV dword ptr [EDX + 0x15c],0x40800000 ; 00446396
    LEA EDI,[EDX + 0x16c]               ; 004463a0
    MOV dword ptr [EDX + 0x160],0x3dcccccd ; 004463a6
    PUSH EDI                            ; 004463b0
    MOV AL,byte ptr [ESI]               ; 004463b1
        ;   Label: LAB_004463b1
    MOV byte ptr [EDI],AL               ; 004463b3
    CMP AL,0x0                          ; 004463b5
    JZ 0x004463c9                       ; 004463b7
        ;   XREF to: 004463c9 (CONDITIONAL_JUMP)  ; LAB_004463c9
    MOV AL,byte ptr [ESI + 0x1]         ; 004463b9
    ADD ESI,0x2                         ; 004463bc
    MOV byte ptr [EDI + 0x1],AL         ; 004463bf
    ADD EDI,0x2                         ; 004463c2
    CMP AL,0x0                          ; 004463c5
    JNZ 0x004463b1                      ; 004463c7
        ;   XREF to: 004463b1 (CONDITIONAL_JUMP)  ; LAB_004463b1
    POP EDI                             ; 004463c9
        ;   Label: LAB_004463c9
    MOV dword ptr [EDX + 0x168],0x0     ; 004463ca
    MOV dword ptr [EDX + 0x164],0xd     ; 004463d4
    MOV dword ptr [EDX + 0x17c],0x8000  ; 004463de
    MOV dword ptr [EDX + 0x180],0x1     ; 004463e8
    MOV dword ptr [EDX + 0x18c],0x0     ; 004463f2
    MOV dword ptr [EDX + 0x188],0x0     ; 004463fc
    MOV ESI,0x5b9a3d                    ; 00446406
    MOV dword ptr [EDX + 0x184],0x0     ; 0044640b
    LEA EDI,[EDX + 0x194]               ; 00446415
    MOV dword ptr [EDX + 0x190],0x0     ; 0044641b
    PUSH EDI                            ; 00446425
    MOV AL,byte ptr [ESI]               ; 00446426
        ;   Label: LAB_00446426
    MOV byte ptr [EDI],AL               ; 00446428
    CMP AL,0x0                          ; 0044642a
    JZ 0x0044643e                       ; 0044642c
        ;   XREF to: 0044643e (CONDITIONAL_JUMP)  ; LAB_0044643e
    MOV AL,byte ptr [ESI + 0x1]         ; 0044642e
    ADD ESI,0x2                         ; 00446431
    MOV byte ptr [EDI + 0x1],AL         ; 00446434
    ADD EDI,0x2                         ; 00446437
    CMP AL,0x0                          ; 0044643a
    JNZ 0x00446426                      ; 0044643c
        ;   XREF to: 00446426 (CONDITIONAL_JUMP)  ; LAB_00446426
    POP EDI                             ; 0044643e
        ;   Label: LAB_0044643e
    MOV dword ptr [EDX + 0x65b14],0x3f800000 ; 0044643f
    MOV dword ptr [EDX + 0x65b18],0x3f733333 ; 00446449
    MOV dword ptr [EDX + 0x65b1c],0x0   ; 00446453
    MOV dword ptr [EDX + 0x65b20],0x3f000000 ; 0044645d
    MOV dword ptr [EDX + 0x65b24],0x42000000 ; 00446467
    MOV dword ptr [EDX + 0x65b2c],0x0   ; 00446471
    MOV dword ptr [EDX + 0x65b30],0x0   ; 0044647b
    MOV dword ptr [EDX + 0x1f8],0x1     ; 00446485
    MOV dword ptr [EDX + 0x1fc],0x3f000000 ; 0044648f
    MOV dword ptr [EDX + 0x200],0x1     ; 00446499
    MOV EAX,EDX                         ; 004464a3
    MOV dword ptr [EDX + 0x65b34],0x0   ; 004464a5
    POP EDI                             ; 004464af
    POP ESI                             ; 004464b0
    RET                                 ; 004464b1

