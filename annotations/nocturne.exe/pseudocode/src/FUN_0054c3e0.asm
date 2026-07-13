; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054c3e0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   string s_batwing.cth_00597041
;   string s_noscape.cth_0059704d
;   string s_nosskirt.cth_00597059
;   string s_Bip01_Spine2_00597066
;   undefined4 DAT_01cd4314
;
; Called Functions:
;   FUN_00435240
;   FUN_004359e0
;   FUN_004796b0
;   FUN_004e0170
;   FUN_004e02c0
;   FUN_004e03c0
;   FUN_005179d0
;   FUN_0051b800
;   FUN_0051b880
;   FUN_0051d3c0
;   FUN_0051dcd0
;   FUN_0051e0a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054c3e0
        ;   Label: FUN_0054c3e0
    PUSH ESI                            ; 0054c3e1
    PUSH EDI                            ; 0054c3e2
    PUSH EBP                            ; 0054c3e3
    SUB ESP,0x10                        ; 0054c3e4
    MOV EBX,dword ptr [ESP + 0x24]      ; 0054c3e7
    PUSH EBX                            ; 0054c3eb
    CALL FUN_004796b0                   ; 0054c3ec
        ;   XREF to: 004796b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004796b0()
    ADD ESP,0x4                         ; 0054c3f1
    LEA EDI,[EBX + 0x150]               ; 0054c3f4
    PUSH EDI                            ; 0054c3fa
    CALL FUN_0051dcd0                   ; 0054c3fb
        ;   XREF to: 0051dcd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051dcd0()
    ADD ESP,0x4                         ; 0054c400
    LEA EBP,[EBX + 0xbd24]              ; 0054c403
    PUSH EBP                            ; 0054c409
    CALL FUN_0051dcd0                   ; 0054c40a
        ;   XREF to: 0051dcd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051dcd0()
    ADD ESP,0x4                         ; 0054c40f
    PUSH 0x597041                       ; 0054c412 | = "batwing.cth"
    LEA EAX,[EBX + 0xdfd8]              ; 0054c417
    PUSH EAX                            ; 0054c41d
    MOV dword ptr [ESP + 0x10],EAX      ; 0054c41e
    CALL FUN_00435240                   ; 0054c422
        ;   XREF to: 00435240 (UNCONDITIONAL_CALL)  ; undefined FUN_00435240()
    ADD ESP,0x8                         ; 0054c427
    PUSH EBP                            ; 0054c42a
    LEA EAX,[EBX + 0x30]                ; 0054c42b
    PUSH EAX                            ; 0054c42e
    LEA ESI,[EBX + 0x20]                ; 0054c42f
    PUSH ESI                            ; 0054c432
    MOV dword ptr [ESP + 0xc],EAX       ; 0054c433
    MOV EAX,dword ptr [ESP + 0x14]      ; 0054c437
    PUSH EAX                            ; 0054c43b
    CALL FUN_004359e0                   ; 0054c43c
        ;   XREF to: 004359e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004359e0()
    ADD ESP,0x10                        ; 0054c441
    PUSH 0x59704d                       ; 0054c444 | = "noscape.cth"
    LEA EAX,[EBX + 0x48b08]             ; 0054c449
    PUSH EAX                            ; 0054c44f
    MOV dword ptr [ESP + 0x14],EAX      ; 0054c450
    CALL FUN_00435240                   ; 0054c454
        ;   XREF to: 00435240 (UNCONDITIONAL_CALL)  ; undefined FUN_00435240()
    ADD ESP,0x8                         ; 0054c459
    PUSH EDI                            ; 0054c45c
    MOV ECX,dword ptr [ESP + 0x4]       ; 0054c45d
    PUSH ECX                            ; 0054c461
    PUSH ESI                            ; 0054c462
    MOV EAX,dword ptr [ESP + 0x18]      ; 0054c463
    PUSH EAX                            ; 0054c467
    CALL FUN_004359e0                   ; 0054c468
        ;   XREF to: 004359e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004359e0()
    ADD ESP,0x10                        ; 0054c46d
    PUSH 0x597059                       ; 0054c470 | = "nosskirt.cth"
    LEA EAX,[EBX + 0x83638]             ; 0054c475
    PUSH EAX                            ; 0054c47b
    MOV dword ptr [ESP + 0xc],EAX       ; 0054c47c
    CALL FUN_00435240                   ; 0054c480
        ;   XREF to: 00435240 (UNCONDITIONAL_CALL)  ; undefined FUN_00435240()
    ADD ESP,0x8                         ; 0054c485
    PUSH EDI                            ; 0054c488
    MOV ECX,dword ptr [ESP + 0x4]       ; 0054c489
    PUSH ECX                            ; 0054c48d
    PUSH ESI                            ; 0054c48e
    MOV ESI,dword ptr [ESP + 0x10]      ; 0054c48f
    PUSH ESI                            ; 0054c493
    CALL FUN_004359e0                   ; 0054c494
        ;   XREF to: 004359e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004359e0()
    ADD ESP,0x10                        ; 0054c499
    PUSH EDI                            ; 0054c49c
    CALL FUN_0051b800                   ; 0054c49d
        ;   XREF to: 0051b800 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b800()
    ADD ESP,0x4                         ; 0054c4a2
    PUSH EDI                            ; 0054c4a5
    CALL FUN_0051d3c0                   ; 0054c4a6
        ;   XREF to: 0051d3c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051d3c0()
    ADD ESP,0x4                         ; 0054c4ab
    PUSH EBP                            ; 0054c4ae
    CALL FUN_0051b800                   ; 0054c4af
        ;   XREF to: 0051b800 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b800()
    ADD ESP,0x4                         ; 0054c4b4
    PUSH EBP                            ; 0054c4b7
    CALL FUN_0051d3c0                   ; 0054c4b8
        ;   XREF to: 0051d3c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051d3c0()
    ADD ESP,0x4                         ; 0054c4bd
    PUSH EDI                            ; 0054c4c0
    XOR EAX,EAX                         ; 0054c4c1
    PUSH EAX                            ; 0054c4c3
    LEA ESI,[EBX + 0xbe16c]             ; 0054c4c4
    PUSH ESI                            ; 0054c4ca
    MOV [0x01cd4314],EAX                ; 0054c4cb | DAT_01cd4314
    CALL FUN_004e0170                   ; 0054c4d0
        ;   XREF to: 004e0170 (UNCONDITIONAL_CALL)  ; undefined FUN_004e0170()
    ADD ESP,0xc                         ; 0054c4d5
    PUSH 0x0                            ; 0054c4d8
    MOV EDX,dword ptr [ESP + 0x10]      ; 0054c4da
    PUSH EDX                            ; 0054c4de
    PUSH 0x0                            ; 0054c4df
    PUSH ESI                            ; 0054c4e1
    CALL FUN_004e02c0                   ; 0054c4e2
        ;   XREF to: 004e02c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e02c0()
    ADD ESP,0x10                        ; 0054c4e7
    PUSH 0x0                            ; 0054c4ea
    MOV EAX,dword ptr [ESP + 0x10]      ; 0054c4ec
    PUSH EAX                            ; 0054c4f0
    PUSH 0x0                            ; 0054c4f1
    MOV ECX,0x1                         ; 0054c4f3
    PUSH ESI                            ; 0054c4f8
    MOV dword ptr [0x01cd4314],ECX      ; 0054c4f9 | DAT_01cd4314
    CALL FUN_004e02c0                   ; 0054c4ff
        ;   XREF to: 004e02c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e02c0()
    ADD ESP,0x10                        ; 0054c504
    XOR EDX,EDX                         ; 0054c507
    PUSH EDX                            ; 0054c509
    MOV ECX,dword ptr [ESP + 0x8]       ; 0054c50a
    PUSH ECX                            ; 0054c50e
    PUSH EDX                            ; 0054c50f
    PUSH ESI                            ; 0054c510
    MOV dword ptr [0x01cd4314],EDX      ; 0054c511 | DAT_01cd4314
    CALL FUN_004e02c0                   ; 0054c517
        ;   XREF to: 004e02c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e02c0()
    ADD ESP,0x10                        ; 0054c51c
    PUSH 0x0                            ; 0054c51f
    MOV EDX,dword ptr [ESP + 0x8]       ; 0054c521
    PUSH EDX                            ; 0054c525
    PUSH 0x0                            ; 0054c526
    MOV EAX,0x1                         ; 0054c528
    PUSH ESI                            ; 0054c52d
    MOV [0x01cd4314],EAX                ; 0054c52e | DAT_01cd4314
    CALL FUN_004e02c0                   ; 0054c533
        ;   XREF to: 004e02c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e02c0()
    ADD ESP,0x10                        ; 0054c538
    PUSH EBP                            ; 0054c53b
    PUSH 0x1                            ; 0054c53c
    XOR ECX,ECX                         ; 0054c53e
    PUSH ESI                            ; 0054c540
    MOV dword ptr [0x01cd4314],ECX      ; 0054c541 | DAT_01cd4314
    CALL FUN_004e0170                   ; 0054c547
        ;   XREF to: 004e0170 (UNCONDITIONAL_CALL)  ; undefined FUN_004e0170()
    ADD ESP,0xc                         ; 0054c54c
    PUSH 0x0                            ; 0054c54f
    MOV EAX,dword ptr [ESP + 0xc]       ; 0054c551
    PUSH EAX                            ; 0054c555
    PUSH 0x1                            ; 0054c556
    PUSH ESI                            ; 0054c558
    CALL FUN_004e02c0                   ; 0054c559
        ;   XREF to: 004e02c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e02c0()
    ADD ESP,0x10                        ; 0054c55e
    PUSH 0x0                            ; 0054c561
    MOV ECX,dword ptr [ESP + 0xc]       ; 0054c563
    PUSH ECX                            ; 0054c567
    MOV EDX,0x1                         ; 0054c568
    PUSH EDX                            ; 0054c56d
    PUSH ESI                            ; 0054c56e
    MOV dword ptr [0x01cd4314],EDX      ; 0054c56f | DAT_01cd4314
    CALL FUN_004e02c0                   ; 0054c575
        ;   XREF to: 004e02c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e02c0()
    ADD ESP,0x10                        ; 0054c57a
    XOR EAX,EAX                         ; 0054c57d
    PUSH ESI                            ; 0054c57f
    MOV [0x01cd4314],EAX                ; 0054c580 | DAT_01cd4314
    CALL FUN_004e03c0                   ; 0054c585
        ;   XREF to: 004e03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e03c0()
    ADD ESP,0x4                         ; 0054c58a
    PUSH EDI                            ; 0054c58d
    CALL FUN_0051b880                   ; 0054c58e
        ;   XREF to: 0051b880 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b880()
    ADD ESP,0x4                         ; 0054c593
    PUSH EBP                            ; 0054c596
    CALL FUN_0051b880                   ; 0054c597
        ;   XREF to: 0051b880 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b880()
    ADD ESP,0x4                         ; 0054c59c
    PUSH EDI                            ; 0054c59f
    MOV dword ptr [EBX + 0xfc],0x1      ; 0054c5a0
    CALL FUN_0051e0a0                   ; 0054c5aa
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051e0a0()
    ADD ESP,0x4                         ; 0054c5af
    PUSH 0x1                            ; 0054c5b2
    PUSH 0x597066                       ; 0054c5b4 | = "Bip01 Spine2"
    PUSH EAX                            ; 0054c5b9
    CALL FUN_005179d0                   ; 0054c5ba
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    MOV dword ptr [EBX + 0x24a8],0x0    ; 0054c5bf
    MOV dword ptr [EBX + 0xbeda8],0x0   ; 0054c5c9
    ADD ESP,0xc                         ; 0054c5d3
    MOV dword ptr [EBX + 0x24a4],EAX    ; 0054c5d6
    ADD ESP,0x10                        ; 0054c5dc
    POP EBP                             ; 0054c5df
    POP EDI                             ; 0054c5e0
    POP ESI                             ; 0054c5e1
    POP EBX                             ; 0054c5e2
    RET                                 ; 0054c5e3

