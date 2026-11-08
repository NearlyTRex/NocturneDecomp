; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f6300(void)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   FUN_004f6a70 at 004f6ae5
;   FUN_004f6be0 at 004f6c32
;   FUN_004f8330 at 004f83dc
;
; Referenced Globals:
;   void* PTR_caseD_1_004f62ec = 004f63aa
;   void* PTR_caseD_3_004f62f4 = 004f6388
;   undefined4 DAT_01d09b84
;   undefined4 DAT_01d09b88
;   undefined4 DAT_01d0a398
;   undefined4 DAT_01d0a39c
;   undefined4 DAT_01d0a3a0
;   undefined4 DAT_01d0a3d8
;   undefined4 DAT_01d0a3e0
;
; Called Functions:
;   FUN_004f5fc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6300
        ;   Label: FUN_004f6300
    PUSH ESI                            ; 004f6301
    PUSH EDI                            ; 004f6302
    PUSH EBP                            ; 004f6303
    SUB ESP,0x8                         ; 004f6304
    MOV EBX,dword ptr [0x01d09b88]      ; 004f6307 | DAT_01d09b88
    XOR EDX,EDX                         ; 004f630d
    MOV ECX,dword ptr [0x01d09b84]      ; 004f630f | DAT_01d09b84
    MOV dword ptr [ESP],EDX             ; 004f6315
    TEST ECX,ECX                        ; 004f6318
    JLE 0x004f639c                      ; 004f631a
        ;   XREF to: 004f639c (CONDITIONAL_JUMP)  ; LAB_004f639c
    MOV EBP,0x1d0a398                   ; 004f6320
    MOV ECX,dword ptr [ESP]             ; 004f6325
        ;   Label: LAB_004f6325
    MOV EAX,[0x01d09b84]                ; 004f6328 | DAT_01d09b84
    INC ECX                             ; 004f632d
    CMP ECX,EAX                         ; 004f632e
    JNZ 0x004f6334                      ; 004f6330
        ;   XREF to: 004f6334 (CONDITIONAL_JUMP)  ; LAB_004f6334
    XOR ECX,EAX                         ; 004f6332
    MOV ESI,0x1d0a398                   ; 004f6334
        ;   Label: LAB_004f6334
    SHL ECX,0x6                         ; 004f6339
    FLD float ptr [EBP]                 ; 004f633c | DAT_01d0a398 | DAT_01d0a3d8
    ADD ESI,ECX                         ; 004f633f
    MOV EDX,EBP                         ; 004f6341
    MOV dword ptr [ESP + 0x4],ESI       ; 004f6343
    XOR ECX,ECX                         ; 004f6347
    FCOMP float ptr [EBP + 0x8]         ; 004f6349 | DAT_01d0a3a0 | DAT_01d0a3e0
    FNSTSW AX                           ; 004f634c
    SAHF                                ; 004f634e
    JC 0x004f6356                       ; 004f634f
        ;   XREF to: 004f6356 (CONDITIONAL_JUMP)  ; LAB_004f6356
    MOV ECX,0x1                         ; 004f6351
    MOV ESI,dword ptr [ESP + 0x4]       ; 004f6356
        ;   Label: LAB_004f6356
    FLD float ptr [ESI]                 ; 004f635a | DAT_01d0a398
    FCOMP float ptr [ESI + 0x8]         ; 004f635c | DAT_01d0a3a0
    FNSTSW AX                           ; 004f635f
    SAHF                                ; 004f6361
    JC 0x004f6367                       ; 004f6362
        ;   XREF to: 004f6367 (CONDITIONAL_JUMP)  ; LAB_004f6367
    OR CL,0x2                           ; 004f6364
    CMP ECX,0x3                         ; 004f6367
        ;   Label: LAB_004f6367
    JA 0x004f6388                       ; 004f636a
        ;   XREF to: 004f6388 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x4f62e8]  ; 004f636c | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV ESI,EBX                         ; 004f6373
        ;   Label: caseD_0
    SHL ESI,0x6                         ; 004f6375
    MOV ECX,0x10                        ; 004f6378
    LEA EDI,[ESI + 0x1d09b98]           ; 004f637d
    MOV ESI,EDX                         ; 004f6383
    INC EBX                             ; 004f6385
    MOVSD.REP ES:EDI,ESI                ; 004f6386 | DAT_01d0a398 | DAT_01d0a39c
    MOV ESI,dword ptr [ESP]             ; 004f6388
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x01d09b84]      ; 004f638b | DAT_01d09b84
    INC ESI                             ; 004f6391
    ADD EBP,0x40                        ; 004f6392
    MOV dword ptr [ESP],ESI             ; 004f6395
    CMP ESI,EDI                         ; 004f6398
    JL 0x004f6325                       ; 004f639a
        ;   XREF to: 004f6325 (CONDITIONAL_JUMP)  ; LAB_004f6325
    MOV dword ptr [0x01d09b88],EBX      ; 004f639c | DAT_01d09b88
        ;   Label: LAB_004f639c
    ADD ESP,0x8                         ; 004f63a2
    POP EBP                             ; 004f63a5
    POP EDI                             ; 004f63a6
    POP ESI                             ; 004f63a7
    POP EBX                             ; 004f63a8
    RET                                 ; 004f63a9
    MOV ECX,EBX                         ; 004f63aa
        ;   Label: caseD_1
    SHL ECX,0x6                         ; 004f63ac
    ADD ECX,0x1d09b98                   ; 004f63af
    PUSH ECX                            ; 004f63b5
    PUSH EDX                            ; 004f63b6 | DAT_01d0a398
    MOV ESI,dword ptr [ESP + 0xc]       ; 004f63b7
    PUSH ESI                            ; 004f63bb
    MOV dword ptr [0x01d09b88],EBX      ; 004f63bc | DAT_01d09b88
    CALL FUN_004f5fc0                   ; 004f63c2
        ;   XREF to: 004f5fc0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f5fc0()
    MOV EBX,dword ptr [0x01d09b88]      ; 004f63c7 | DAT_01d09b88
    ADD ESP,0xc                         ; 004f63cd
    INC EBX                             ; 004f63d0
    JMP 0x004f6388                      ; 004f63d1
        ;   XREF to: 004f6388 (UNCONDITIONAL_JUMP)  ; caseD_3
    MOV ESI,EBX                         ; 004f63d3
        ;   Label: caseD_2
    SHL ESI,0x6                         ; 004f63d5
    MOV ECX,0x10                        ; 004f63d8
    LEA EDI,[ESI + 0x1d09b98]           ; 004f63dd
    MOV ESI,EDX                         ; 004f63e3
    INC EBX                             ; 004f63e5
    MOVSD.REP ES:EDI,ESI                ; 004f63e6 | DAT_01d0a398 | DAT_01d0a39c
    MOV ECX,EBX                         ; 004f63e8
    SHL ECX,0x6                         ; 004f63ea
    ADD ECX,0x1d09b98                   ; 004f63ed
    PUSH ECX                            ; 004f63f3
    MOV ECX,dword ptr [ESP + 0x8]       ; 004f63f4
    PUSH ECX                            ; 004f63f8
    PUSH EDX                            ; 004f63f9 | DAT_01d0a398
    MOV dword ptr [0x01d09b88],EBX      ; 004f63fa | DAT_01d09b88
    CALL FUN_004f5fc0                   ; 004f6400
        ;   XREF to: 004f5fc0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f5fc0()
    MOV EBX,dword ptr [0x01d09b88]      ; 004f6405 | DAT_01d09b88
    ADD ESP,0xc                         ; 004f640b
    INC EBX                             ; 004f640e
    JMP 0x004f6388                      ; 004f640f
        ;   XREF to: 004f6388 (UNCONDITIONAL_JUMP)  ; caseD_3

