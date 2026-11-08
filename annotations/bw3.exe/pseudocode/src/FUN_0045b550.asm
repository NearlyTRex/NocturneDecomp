; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045b550(float *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[41]:
;   FUN_004088f0 at 00408942
;   FUN_00415e30 at 00415e4a
;   FUN_00416330 at 004163af
;   FUN_0041b1d0 at 0041b20a
;   FUN_0041b470 at 0041b94c
;   FUN_00420420 at 00420645
;   FUN_004221c0 at 00422358
;   FUN_00422570 at 004228d1
;   FUN_004300e0 at 00430375
;   FUN_00434190 at 00434413
;   ... and 31 more
;
; Called Functions:
;   FUN_0045bef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045b550
        ;   Label: FUN_0045b550
    PUSH ESI                            ; 0045b551
    SUB ESP,0x18                        ; 0045b552
    MOV EBX,dword ptr [ESP + 0x24]      ; 0045b555
    MOV ESI,dword ptr [ESP + 0x28]      ; 0045b559
    PUSH ESI                            ; 0045b55d
    LEA EAX,[ESP + 0x8]                 ; 0045b55e
    PUSH EAX                            ; 0045b562
    LEA EAX,[ESP + 0x8]                 ; 0045b563
    PUSH EAX                            ; 0045b567
    CALL FUN_0045bef0                   ; 0045b568
        ;   XREF to: 0045bef0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045bef0()
    ADD ESP,0xc                         ; 0045b56d
    LEA EAX,[ESI + 0x8]                 ; 0045b570
    PUSH EAX                            ; 0045b573
    LEA EAX,[ESP + 0x10]                ; 0045b574
    PUSH EAX                            ; 0045b578
    LEA EAX,[ESP + 0x10]                ; 0045b579
    PUSH EAX                            ; 0045b57d
    CALL FUN_0045bef0                   ; 0045b57e
        ;   XREF to: 0045bef0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045bef0()
    ADD ESP,0xc                         ; 0045b583
    LEA EAX,[ESI + 0x4]                 ; 0045b586
    PUSH EAX                            ; 0045b589
    LEA EAX,[ESP + 0x18]                ; 0045b58a
    PUSH EAX                            ; 0045b58e
    LEA EAX,[ESP + 0x18]                ; 0045b58f
    PUSH EAX                            ; 0045b593
    CALL FUN_0045bef0                   ; 0045b594
        ;   XREF to: 0045bef0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045bef0()
    ADD ESP,0xc                         ; 0045b599
    FLD float ptr [ESP + 0x10]          ; 0045b59c
    FMUL float ptr [ESP]                ; 0045b5a0
    FMUL float ptr [ESP + 0x8]          ; 0045b5a3
    FLD float ptr [ESP + 0x14]          ; 0045b5a7
    FMUL float ptr [ESP + 0xc]          ; 0045b5ab
    FADDP                               ; 0045b5af
    FSTP float ptr [EBX]                ; 0045b5b1
    FLD float ptr [ESP + 0x10]          ; 0045b5b3
    FMUL float ptr [ESP]                ; 0045b5b7
    FMUL float ptr [ESP + 0xc]          ; 0045b5ba
    FLD float ptr [ESP + 0x14]          ; 0045b5be
    FCHS                                ; 0045b5c2
    FMUL float ptr [ESP + 0x8]          ; 0045b5c4
    FADDP                               ; 0045b5c8
    FSTP float ptr [EBX + 0x4]          ; 0045b5ca
    FLD float ptr [ESP + 0x10]          ; 0045b5cd
    FMUL float ptr [ESP + 0x4]          ; 0045b5d1
    FSTP float ptr [EBX + 0x8]          ; 0045b5d5
    FLD float ptr [ESP + 0x8]           ; 0045b5d8
    FMUL float ptr [ESP + 0x4]          ; 0045b5dc
    FSTP float ptr [EBX + 0xc]          ; 0045b5e0
    FLD float ptr [ESP + 0xc]           ; 0045b5e3
    FMUL float ptr [ESP + 0x4]          ; 0045b5e7
    FSTP float ptr [EBX + 0x10]         ; 0045b5eb
    FLD float ptr [ESP]                 ; 0045b5ee
    FCHS                                ; 0045b5f1
    FSTP float ptr [EBX + 0x14]         ; 0045b5f3
    FLD float ptr [ESP + 0x14]          ; 0045b5f6
    FMUL float ptr [ESP]                ; 0045b5fa
    FMUL float ptr [ESP + 0x8]          ; 0045b5fd
    FLD float ptr [ESP + 0x10]          ; 0045b601
    FCHS                                ; 0045b605
    FMUL float ptr [ESP + 0xc]          ; 0045b607
    FADDP                               ; 0045b60b
    FSTP float ptr [EBX + 0x18]         ; 0045b60d
    FLD float ptr [ESP + 0x14]          ; 0045b610
    FMUL float ptr [ESP]                ; 0045b614
    FMUL float ptr [ESP + 0xc]          ; 0045b617
    FLD float ptr [ESP + 0x8]           ; 0045b61b
    FMUL float ptr [ESP + 0x10]         ; 0045b61f
    FADDP                               ; 0045b623
    FSTP float ptr [EBX + 0x1c]         ; 0045b625
    FLD float ptr [ESP + 0x14]          ; 0045b628
    FMUL float ptr [ESP + 0x4]          ; 0045b62c
    FSTP float ptr [EBX + 0x20]         ; 0045b630
    ADD ESP,0x18                        ; 0045b633
    POP ESI                             ; 0045b636
    POP EBX                             ; 0045b637
    RET                                 ; 0045b638

