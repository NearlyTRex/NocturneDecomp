; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004dd4e0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)
;
; Local Variables:
; undefined        Stack[-0x48]:1  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004dd670 at 004dd7aa
;
; Referenced Globals:
;   void* PTR_FUN_00600000 = 00409e40
;   undefined4 DAT_0060b280
;   undefined4 DAT_00617da4
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   FUN_0043bb10
;   FUN_00469c60
;   FUN_0046b8e0
;   FUN_0046ca00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dd4e0
        ;   Label: FUN_004dd4e0
    PUSH ESI                            ; 004dd4e1
    PUSH EDI                            ; 004dd4e2
    PUSH EBP                            ; 004dd4e3
    SUB ESP,0x38                        ; 004dd4e4
    PUSH 0x617da4                       ; 004dd4e7 | DAT_00617da4
    MOV EDX,dword ptr [0x0060b280]      ; 004dd4ec | DAT_0060b280
    PUSH EDX                            ; 004dd4f2 | DAT_01ba5c50
    CALL FUN_0046ca00                   ; 004dd4f3
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ca00()
    ADD ESP,0x8                         ; 004dd4f8
    MOV ECX,dword ptr [ESP + 0x5c]      ; 004dd4fb
    PUSH ECX                            ; 004dd4ff
    MOV EBX,dword ptr [0x0060b280]      ; 004dd500 | DAT_0060b280
    PUSH EBX                            ; 004dd506 | DAT_01ba5c50
    CALL FUN_0046b8e0                   ; 004dd507
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b8e0()
    ADD ESP,0x8                         ; 004dd50c
    MOV EAX,[0x0060b280]                ; 004dd50f | DAT_0060b280
    MOV ECX,dword ptr [ESP + 0x4c]      ; 004dd514
    MOV EDX,dword ptr [EAX]             ; 004dd518 | DAT_01ba5c50
    SHL ECX,0x10                        ; 004dd51a
    MOV dword ptr [EDX + 0x10],ECX      ; 004dd51d
    MOV EBX,dword ptr [ESP + 0x50]      ; 004dd520
    MOV EDX,dword ptr [EAX]             ; 004dd524 | DAT_01ba5c50
    SHL EBX,0x10                        ; 004dd526
    MOV dword ptr [EDX + 0x14],EBX      ; 004dd529
    MOV EDX,dword ptr [EAX]             ; 004dd52c | DAT_01ba5c50
    MOV dword ptr [EDX + 0x8],0x1000    ; 004dd52e
    MOV EDX,dword ptr [EAX]             ; 004dd535 | DAT_01ba5c50
    MOV dword ptr [EDX + 0x18],0x0      ; 004dd537
    MOV EDX,dword ptr [EAX]             ; 004dd53e | DAT_01ba5c50
    MOV dword ptr [EDX + 0x1c],0x0      ; 004dd540
    MOV EDX,dword ptr [ESP + 0x54]      ; 004dd547
    MOV ESI,dword ptr [EAX]             ; 004dd54b | DAT_01ba5c50
    SHL EDX,0x10                        ; 004dd54d
    MOV dword ptr [ESI + 0x40],EDX      ; 004dd550
    MOV ESI,dword ptr [EAX]             ; 004dd553 | DAT_01ba5c50
    MOV dword ptr [ESI + 0x44],EBX      ; 004dd555
    MOV EBX,dword ptr [EAX]             ; 004dd558 | DAT_01ba5c50
    MOV dword ptr [EBX + 0x38],0x1000   ; 004dd55a
    MOV EBX,dword ptr [EAX]             ; 004dd561 | DAT_01ba5c50
    MOV dword ptr [EBX + 0x48],0xf00000 ; 004dd563
    MOV EBX,dword ptr [EAX]             ; 004dd56a | DAT_01ba5c50
    MOV dword ptr [EBX + 0x4c],0x0      ; 004dd56c
    MOV EBX,dword ptr [EAX]             ; 004dd573 | DAT_01ba5c50
    MOV dword ptr [EBX + 0x70],EDX      ; 004dd575
    MOV EDX,dword ptr [ESP + 0x58]      ; 004dd578
    MOV EBX,dword ptr [EAX]             ; 004dd57c | DAT_01ba5c50
    SHL EDX,0x10                        ; 004dd57e
    MOV dword ptr [EBX + 0x74],EDX      ; 004dd581
    MOV EBX,dword ptr [EAX]             ; 004dd584 | DAT_01ba5c50
    MOV dword ptr [EBX + 0x68],0x1000   ; 004dd586
    MOV EBX,dword ptr [EAX]             ; 004dd58d | DAT_01ba5c50
    MOV dword ptr [EBX + 0x78],0xf00000 ; 004dd58f
    MOV EBX,dword ptr [EAX]             ; 004dd596 | DAT_01ba5c50
    MOV dword ptr [EBX + 0x7c],0x600000 ; 004dd598 | PTR_FUN_00600000
    MOV EBX,dword ptr [EAX]             ; 004dd59f | DAT_01ba5c50
    MOV dword ptr [EBX + 0xa0],ECX      ; 004dd5a1
    MOV ECX,dword ptr [EAX]             ; 004dd5a7 | DAT_01ba5c50
    MOV dword ptr [ECX + 0xa4],EDX      ; 004dd5a9
    MOV EDX,dword ptr [EAX]             ; 004dd5af | DAT_01ba5c50
    MOV dword ptr [EDX + 0x98],0x1000   ; 004dd5b1
    MOV EDX,dword ptr [EAX]             ; 004dd5bb | DAT_01ba5c50
    MOV ESI,0x4                         ; 004dd5bd
    MOV dword ptr [EDX + 0xa8],0x0      ; 004dd5c2
    MOV EBP,0x3                         ; 004dd5cc
    MOV EDX,dword ptr [EAX]             ; 004dd5d1 | DAT_01ba5c50
    PUSH 0xa3                           ; 004dd5d3
    XOR EDI,EDI                         ; 004dd5d8
    MOV dword ptr [EDX + 0xac],0x600000 ; 004dd5da | PTR_FUN_00600000
    LEA EDX,[ESP + 0x4]                 ; 004dd5e4
    MOV dword ptr [ESP + 0x8],ESI       ; 004dd5e8
    MOV dword ptr [ESP + 0x18],EDI      ; 004dd5ec
    MOV dword ptr [ESP + 0x14],EDI      ; 004dd5f0
    MOV dword ptr [ESP + 0x10],EDI      ; 004dd5f4
    MOV dword ptr [ESP + 0xc],EDI       ; 004dd5f8
    MOV dword ptr [ESP + 0x1c],EDI      ; 004dd5fc
    MOV dword ptr [ESP + 0x28],EBP      ; 004dd600
    PUSH EDX                            ; 004dd604
    MOV ESI,0x1                         ; 004dd605
    MOV EDI,0x2                         ; 004dd60a
    PUSH EAX                            ; 004dd60f | DAT_01ba5c50
    MOV dword ptr [ESP + 0x28],ESI      ; 004dd610
    MOV dword ptr [ESP + 0x2c],EDI      ; 004dd614
    CALL FUN_00469c60                   ; 004dd618
        ;   XREF to: 00469c60 (UNCONDITIONAL_CALL)  ; undefined FUN_00469c60()
    ADD ESP,0xc                         ; 004dd61d
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004dd620
    MOV dword ptr [ESP + 0x28],EAX      ; 004dd624
    MOV EAX,dword ptr [ESP + 0x50]      ; 004dd628
    MOV dword ptr [ESP + 0x30],EAX      ; 004dd62c
    MOV EAX,dword ptr [ESP + 0x54]      ; 004dd630
    MOV dword ptr [ESP + 0x2c],EAX      ; 004dd634
    MOV EAX,dword ptr [ESP + 0x58]      ; 004dd638
    PUSH EAX                            ; 004dd63c
    MOV EDX,dword ptr [ESP + 0x34]      ; 004dd63d
    PUSH EDX                            ; 004dd641
    MOV ECX,dword ptr [ESP + 0x34]      ; 004dd642
    PUSH ECX                            ; 004dd646
    MOV EBX,dword ptr [ESP + 0x34]      ; 004dd647
    PUSH EBX                            ; 004dd64b
    PUSH 0x1fc7838                      ; 004dd64c
    MOV dword ptr [ESP + 0x48],EAX      ; 004dd651
    CALL FUN_0043bb10                   ; 004dd655
        ;   XREF to: 0043bb10 (UNCONDITIONAL_CALL)  ; undefined FUN_0043bb10()
    ADD ESP,0x14                        ; 004dd65a
    ADD ESP,0x38                        ; 004dd65d
    POP EBP                             ; 004dd660
    POP EDI                             ; 004dd661
    POP ESI                             ; 004dd662
    POP EBX                             ; 004dd663
    RET                                 ; 004dd664

