; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0044f4d0(int param_1,float *param_2,float param_3)
;
; Local Variables:
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
;   FUN_004a2090 at 004a2168
;
; Referenced Globals:
;   undefined4 DAT_005ddfbc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044f4d0
        ;   Label: FUN_0044f4d0
    PUSH ESI                            ; 0044f4d1
    PUSH EDI                            ; 0044f4d2
    PUSH EBP                            ; 0044f4d3
    MOV EBP,ESP                         ; 0044f4d4
    SUB ESP,0x20                        ; 0044f4d6
    MOV EAX,dword ptr [EBP + 0x18]      ; 0044f4d9
    LEA EBX,[EBP + -0x20]               ; 0044f4dc
    FLD float ptr [EAX]                 ; 0044f4df
    FMUL float ptr [0x005ddfbc]         ; 0044f4e1 | DAT_005ddfbc
    FISTP dword ptr [EBX]               ; 0044f4e7
    FLD float ptr [EAX + 0x4]           ; 0044f4e9
    FMUL float ptr [0x005ddfbc]         ; 0044f4ec | DAT_005ddfbc
    FISTP dword ptr [EBX + 0x4]         ; 0044f4f2
    FLD float ptr [EAX + 0x8]           ; 0044f4f5
    FMUL float ptr [0x005ddfbc]         ; 0044f4f8 | DAT_005ddfbc
    FISTP dword ptr [EBX + 0x8]         ; 0044f4fe
    FLD float ptr [EBP + 0x1c]          ; 0044f501
    FLD float ptr [0x005ddfbc]          ; 0044f507 | DAT_005ddfbc
    FMULP                               ; 0044f50d
    FIST dword ptr [EBP + 0xfffffff8]   ; 0044f50f
    FISTP dword ptr [EBP + 0xfffffffc]  ; 0044f515
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044f51b
    MOV EDX,dword ptr [EBP + -0x20]     ; 0044f51e
    SUB EDX,dword ptr [EAX + 0x16c]     ; 0044f521
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044f527
    MOV dword ptr [EBP + -0x20],EDX     ; 0044f52a
    MOV ECX,dword ptr [EBP + -0x1c]     ; 0044f52d
    SUB ECX,dword ptr [EAX + 0x170]     ; 0044f530
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044f536
    MOV dword ptr [EBP + -0x1c],ECX     ; 0044f539
    MOV EBX,dword ptr [EBP + -0x18]     ; 0044f53c
    SUB EBX,dword ptr [EAX + 0x174]     ; 0044f53f
    MOV EAX,EDX                         ; 0044f545
    MOV dword ptr [EBP + -0x18],EBX     ; 0044f547
    CDQ                                 ; 0044f54a
    XOR EAX,EDX                         ; 0044f54b
    SUB EAX,EDX                         ; 0044f54d
    CMP EAX,dword ptr [EBP + -0x8]      ; 0044f54f
    JGE 0x0044f565                      ; 0044f552
        ;   XREF to: 0044f565 (CONDITIONAL_JUMP)  ; LAB_0044f565
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0044f554
    CDQ                                 ; 0044f557
    XOR EAX,EDX                         ; 0044f558
    SUB EAX,EDX                         ; 0044f55a
    CMP EAX,dword ptr [EBP + -0x8]      ; 0044f55c
    JL 0x0044f65e                       ; 0044f55f
        ;   XREF to: 0044f65e (CONDITIONAL_JUMP)  ; LAB_0044f65e
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044f565
        ;   Label: LAB_0044f565
    MOV EAX,dword ptr [EBP + -0x20]     ; 0044f568
    MOV EDX,dword ptr [EDX + 0x178]     ; 0044f56b
    IMUL EDX                            ; 0044f571
    SHRD EAX,EDX,0x10                   ; 0044f573
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044f577
    MOV ECX,EAX                         ; 0044f57a
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0044f57c
    MOV EDX,dword ptr [EDX + 0x184]     ; 0044f57f
    IMUL EDX                            ; 0044f585
    SHRD EAX,EDX,0x10                   ; 0044f587
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044f58b
    ADD ECX,EAX                         ; 0044f58e
    MOV EAX,dword ptr [EBP + -0x18]     ; 0044f590
    MOV EDX,dword ptr [EDX + 0x190]     ; 0044f593
    IMUL EDX                            ; 0044f599
    SHRD EAX,EDX,0x10                   ; 0044f59b
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044f59f
    ADD ECX,EAX                         ; 0044f5a2
    MOV EAX,dword ptr [EBP + -0x20]     ; 0044f5a4
    MOV EDX,dword ptr [EDX + 0x17c]     ; 0044f5a7
    MOV dword ptr [EBP + -0x14],ECX     ; 0044f5ad
    IMUL EDX                            ; 0044f5b0
    SHRD EAX,EDX,0x10                   ; 0044f5b2
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044f5b6
    MOV ECX,EAX                         ; 0044f5b9
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0044f5bb
    MOV EDX,dword ptr [EDX + 0x188]     ; 0044f5be
    IMUL EDX                            ; 0044f5c4
    SHRD EAX,EDX,0x10                   ; 0044f5c6
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044f5ca
    ADD ECX,EAX                         ; 0044f5cd
    MOV EAX,dword ptr [EBP + -0x18]     ; 0044f5cf
    MOV EDX,dword ptr [EDX + 0x194]     ; 0044f5d2
    IMUL EDX                            ; 0044f5d8
    SHRD EAX,EDX,0x10                   ; 0044f5da
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044f5de
    ADD ECX,EAX                         ; 0044f5e1
    MOV EAX,dword ptr [EBP + -0x20]     ; 0044f5e3
    MOV EDX,dword ptr [EDX + 0x180]     ; 0044f5e6
    MOV dword ptr [EBP + -0x10],ECX     ; 0044f5ec
    IMUL EDX                            ; 0044f5ef
    SHRD EAX,EDX,0x10                   ; 0044f5f1
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044f5f5
    MOV ECX,EAX                         ; 0044f5f8
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0044f5fa
    MOV EDX,dword ptr [EDX + 0x18c]     ; 0044f5fd
    IMUL EDX                            ; 0044f603
    SHRD EAX,EDX,0x10                   ; 0044f605
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044f609
    ADD ECX,EAX                         ; 0044f60c
    MOV EAX,dword ptr [EBP + -0x18]     ; 0044f60e
    MOV EDX,dword ptr [EDX + 0x198]     ; 0044f611
    IMUL EDX                            ; 0044f617
    SHRD EAX,EDX,0x10                   ; 0044f619
    ADD ECX,EAX                         ; 0044f61d
    MOV EAX,dword ptr [EBP + -0x14]     ; 0044f61f
    MOV dword ptr [EBP + -0xc],ECX      ; 0044f622
    MOV ECX,dword ptr [EBP + -0x8]      ; 0044f625
    MOV EBX,dword ptr [EBP + -0xc]      ; 0044f628
    SUB EAX,ECX                         ; 0044f62b
    CMP EAX,EBX                         ; 0044f62d
    JG 0x0044f655                       ; 0044f62f
        ;   XREF to: 0044f655 (CONDITIONAL_JUMP)  ; LAB_0044f655
    MOV EDX,dword ptr [EBP + -0x14]     ; 0044f631
    MOV ESI,dword ptr [EBP + -0x8]      ; 0044f634
    MOV EAX,EBX                         ; 0044f637
    ADD EDX,ESI                         ; 0044f639
    NEG EAX                             ; 0044f63b
    CMP EDX,EAX                         ; 0044f63d
    JL 0x0044f655                       ; 0044f63f
        ;   XREF to: 0044f655 (CONDITIONAL_JUMP)  ; LAB_0044f655
    MOV EDX,dword ptr [EBP + -0x10]     ; 0044f641
    SUB EDX,dword ptr [EBP + -0x4]      ; 0044f644
    CMP EDX,EBX                         ; 0044f647
    JG 0x0044f655                       ; 0044f649
        ;   XREF to: 0044f655 (CONDITIONAL_JUMP)  ; LAB_0044f655
    MOV EDX,dword ptr [EBP + -0x10]     ; 0044f64b
    ADD EDX,dword ptr [EBP + -0x4]      ; 0044f64e
    CMP EDX,EAX                         ; 0044f651
    JGE 0x0044f66f                      ; 0044f653
        ;   XREF to: 0044f66f (CONDITIONAL_JUMP)  ; LAB_0044f66f
    XOR EAX,EAX                         ; 0044f655
        ;   Label: LAB_0044f655
    MOV ESP,EBP                         ; 0044f657
    POP EBP                             ; 0044f659
    POP EDI                             ; 0044f65a
    POP ESI                             ; 0044f65b
    POP EBX                             ; 0044f65c
    RET                                 ; 0044f65d
    MOV EAX,dword ptr [EBP + -0x18]     ; 0044f65e
        ;   Label: LAB_0044f65e
    CDQ                                 ; 0044f661
    XOR EAX,EDX                         ; 0044f662
    SUB EAX,EDX                         ; 0044f664
    CMP EAX,dword ptr [EBP + -0x8]      ; 0044f666
    JGE 0x0044f565                      ; 0044f669
        ;   XREF to: 0044f565 (CONDITIONAL_JUMP)  ; LAB_0044f565
    MOV EAX,0x1                         ; 0044f66f
        ;   Label: LAB_0044f66f
    MOV ESP,EBP                         ; 0044f674
    POP EBP                             ; 0044f676
    POP EDI                             ; 0044f677
    POP ESI                             ; 0044f678
    POP EBX                             ; 0044f679
    RET                                 ; 0044f67a

