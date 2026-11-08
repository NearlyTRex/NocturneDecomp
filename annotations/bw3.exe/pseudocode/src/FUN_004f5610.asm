; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f5610(float *param_1)
;
; Local Variables:
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x4c]:4  local_4c
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
;   FUN_00533b80 at 00533ce5
;
; Referenced Globals:
;   undefined4 DAT_005e29c0
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;
; Called Functions:
;   FUN_0046b370
;   FUN_0056356c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f5610
        ;   Label: FUN_004f5610
    PUSH ESI                            ; 004f5611
    PUSH EDI                            ; 004f5612
    PUSH EBP                            ; 004f5613
    SUB ESP,0x78                        ; 004f5614
    MOV ESI,dword ptr [0x005f2afc]      ; 004f5617 | DAT_005f2afc
    MOV EDI,dword ptr [ESP + 0x8c]      ; 004f561d
    LEA EBX,[ESP + 0x54]                ; 004f5624
    MOV EAX,EDI                         ; 004f5628
    MOV EDX,dword ptr [ESI]             ; 004f562a | DAT_01bdd7e4
    FLD float ptr [EAX]                 ; 004f562c
    FMUL float ptr [0x005e29c0]         ; 004f562e | DAT_005e29c0
    FISTP dword ptr [EBX]               ; 004f5634
    FLD float ptr [EAX + 0x4]           ; 004f5636
    FMUL float ptr [0x005e29c0]         ; 004f5639 | DAT_005e29c0
    FISTP dword ptr [EBX + 0x4]         ; 004f563f
    FLD float ptr [EAX + 0x8]           ; 004f5642
    FMUL float ptr [0x005e29c0]         ; 004f5645 | DAT_005e29c0
    FISTP dword ptr [EBX + 0x8]         ; 004f564b
    LEA EAX,[ESP + 0x54]                ; 004f564e
    PUSH EAX                            ; 004f5652
    PUSH EDX                            ; 004f5653
    CALL FUN_0056356c                   ; 004f5654
        ;   XREF to: 0056356c (UNCONDITIONAL_CALL)  ; undefined FUN_0056356c()
    MOV ESI,dword ptr [0x005f2afc]      ; 004f5659 | DAT_005f2afc
    MOV EAX,dword ptr [ESI]             ; 004f565f | DAT_01bdd7e4
    ADD ESP,0x8                         ; 004f5661
    LEA EDX,[EAX + 0x30]                ; 004f5664
    LEA EBX,[ESP + 0x48]                ; 004f5667
    LEA EAX,[EDI + 0xc]                 ; 004f566b
    FLD float ptr [EAX]                 ; 004f566e
    FMUL float ptr [0x005e29c0]         ; 004f5670 | DAT_005e29c0
    FISTP dword ptr [EBX]               ; 004f5676
    FLD float ptr [EAX + 0x4]           ; 004f5678
    FMUL float ptr [0x005e29c0]         ; 004f567b | DAT_005e29c0
    FISTP dword ptr [EBX + 0x4]         ; 004f5681
    FLD float ptr [EAX + 0x8]           ; 004f5684
    FMUL float ptr [0x005e29c0]         ; 004f5687 | DAT_005e29c0
    FISTP dword ptr [EBX + 0x8]         ; 004f568d
    LEA EAX,[ESP + 0x48]                ; 004f5690
    PUSH EAX                            ; 004f5694
    PUSH EDX                            ; 004f5695
    CALL FUN_0056356c                   ; 004f5696
        ;   XREF to: 0056356c (UNCONDITIONAL_CALL)  ; undefined FUN_0056356c()
    MOV ESI,dword ptr [0x005f2afc]      ; 004f569b | DAT_005f2afc
    MOV EAX,dword ptr [ESI]             ; 004f56a1 | DAT_01bdd7e4
    ADD ESP,0x8                         ; 004f56a3
    LEA EDX,[EAX + 0x60]                ; 004f56a6
    LEA EBX,[ESP + 0x6c]                ; 004f56a9
    LEA EAX,[EDI + 0x18]                ; 004f56ad
    FLD float ptr [EAX]                 ; 004f56b0
    FMUL float ptr [0x005e29c0]         ; 004f56b2 | DAT_005e29c0
    FISTP dword ptr [EBX]               ; 004f56b8
    FLD float ptr [EAX + 0x4]           ; 004f56ba
    FMUL float ptr [0x005e29c0]         ; 004f56bd | DAT_005e29c0
    FISTP dword ptr [EBX + 0x4]         ; 004f56c3
    FLD float ptr [EAX + 0x8]           ; 004f56c6
    FMUL float ptr [0x005e29c0]         ; 004f56c9 | DAT_005e29c0
    FISTP dword ptr [EBX + 0x8]         ; 004f56cf
    LEA EAX,[ESP + 0x6c]                ; 004f56d2
    PUSH EAX                            ; 004f56d6
    PUSH EDX                            ; 004f56d7
    CALL FUN_0056356c                   ; 004f56d8
        ;   XREF to: 0056356c (UNCONDITIONAL_CALL)  ; undefined FUN_0056356c()
    MOV ESI,dword ptr [0x005f2afc]      ; 004f56dd | DAT_005f2afc
    MOV EAX,dword ptr [ESI]             ; 004f56e3 | DAT_01bdd7e4
    ADD ESP,0x8                         ; 004f56e5
    LEA EDX,[EAX + 0x90]                ; 004f56e8
    LEA EBX,[ESP + 0x60]                ; 004f56ee
    LEA EAX,[EDI + 0x24]                ; 004f56f2
    FLD float ptr [EAX]                 ; 004f56f5
    FMUL float ptr [0x005e29c0]         ; 004f56f7 | DAT_005e29c0
    FISTP dword ptr [EBX]               ; 004f56fd
    FLD float ptr [EAX + 0x4]           ; 004f56ff
    FMUL float ptr [0x005e29c0]         ; 004f5702 | DAT_005e29c0
    FISTP dword ptr [EBX + 0x4]         ; 004f5708
    FLD float ptr [EAX + 0x8]           ; 004f570b
    FMUL float ptr [0x005e29c0]         ; 004f570e | DAT_005e29c0
    FISTP dword ptr [EBX + 0x8]         ; 004f5714
    LEA EAX,[ESP + 0x60]                ; 004f5717
    PUSH EAX                            ; 004f571b
    PUSH EDX                            ; 004f571c
    CALL FUN_0056356c                   ; 004f571d
        ;   XREF to: 0056356c (UNCONDITIONAL_CALL)  ; undefined FUN_0056356c()
    MOV ESI,dword ptr [0x005f2afc]      ; 004f5722 | DAT_005f2afc
    ADD ESP,0x8                         ; 004f5728
    XOR EAX,EAX                         ; 004f572b
    MOV EDX,ESI                         ; 004f572d
    MOV ECX,dword ptr [ESI]             ; 004f572f | DAT_01bdd7e4
        ;   Label: LAB_004f572f
    SHL dword ptr [ECX + EAX*0x1],0x4   ; 004f5731
    MOV ECX,dword ptr [ESI]             ; 004f5735 | DAT_01bdd7e4
    SHL dword ptr [ECX + EAX*0x1 + 0x4],0x4 ; 004f5737
    MOV ECX,dword ptr [ESI]             ; 004f573c | DAT_01bdd7e4
    SHL dword ptr [ECX + EAX*0x1 + 0x8],0x4 ; 004f573e
    MOV ECX,dword ptr [ESI]             ; 004f5743 | DAT_01bdd7e4
    MOV EBX,dword ptr [ECX + EAX*0x1 + 0xc] ; 004f5745
    ADD EAX,0x30                        ; 004f5749
    SHR EBX,0x4                         ; 004f574c
    MOV dword ptr [ECX + EAX*0x1 + -0x24],EBX ; 004f574f
    CMP EAX,0xc0                        ; 004f5753
    JNZ 0x004f572f                      ; 004f5758
        ;   XREF to: 004f572f (CONDITIONAL_JUMP)  ; LAB_004f572f
    MOV EDI,0x4                         ; 004f575a
    MOV EAX,0x2                         ; 004f575f
    MOV ECX,0x3                         ; 004f5764
    MOV dword ptr [0x005f2afc],ESI      ; 004f5769 | DAT_005f2afc
    XOR EBP,EBP                         ; 004f576f
    MOV dword ptr [ESP + 0x4],EDI       ; 004f5771
    MOV dword ptr [ESP + 0x14],EBP      ; 004f5775
    MOV dword ptr [ESP + 0x10],EBP      ; 004f5779
    MOV dword ptr [ESP + 0xc],EBP       ; 004f577d
    MOV dword ptr [ESP + 0x30],EAX      ; 004f5781
    MOV EAX,ESP                         ; 004f5785
    MOV dword ptr [ESP + 0x8],EBP       ; 004f5787
    PUSH EAX                            ; 004f578b
    MOV dword ptr [ESP + 0x1c],EBP      ; 004f578c
    MOV EBP,0x1                         ; 004f5790
    PUSH ESI                            ; 004f5795 | DAT_01bdd7e4
    MOV dword ptr [ESP + 0x44],ECX      ; 004f5796
    MOV dword ptr [ESP + 0x2c],EBP      ; 004f579a
    CALL FUN_0046b370                   ; 004f579e
        ;   XREF to: 0046b370 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b370()
    MOV ESI,dword ptr [0x005f2afc]      ; 004f57a3 | DAT_005f2afc
    ADD ESP,0x8                         ; 004f57a9
    ADD ESP,0x78                        ; 004f57ac
    POP EBP                             ; 004f57af
    POP EDI                             ; 004f57b0
    POP ESI                             ; 004f57b1
    POP EBX                             ; 004f57b2
    RET                                 ; 004f57b3

