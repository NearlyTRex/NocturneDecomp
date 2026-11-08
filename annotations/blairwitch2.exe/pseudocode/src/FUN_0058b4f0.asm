; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0058b4f0(int *param_1,float *param_2,int *param_3)
;
; Local Variables:
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined8       Stack[-0x24]:8  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0052ddf0 at 0052e129
;
; Referenced Globals:
;   undefined4 DAT_005ee5d2
;   undefined4 DAT_005ee5da
;   undefined4 DAT_005ee5e2
;   undefined4 DAT_005ee5ea
;   undefined4 DAT_005ee5ee
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_01e661b8
;   undefined4 DAT_02661fb8
;   undefined4 DAT_02661fbc
;   undefined4 DAT_02661fc0
;
; Called Functions:
;   FUN_0040cf60
;   FUN_00535ee0
;   FUN_00537e00
;   FUN_00537e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058b4f0
        ;   Label: FUN_0058b4f0
    PUSH ESI                            ; 0058b4f1
    PUSH EDI                            ; 0058b4f2
    PUSH EBP                            ; 0058b4f3
    MOV EBP,ESP                         ; 0058b4f4
    SUB ESP,0x40                        ; 0058b4f6
    AND ESP,0xfffffff8                  ; 0058b4f9
    MOV EDI,dword ptr [EBP + 0x18]      ; 0058b4fc
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058b4ff
    ADD EAX,0x8                         ; 0058b502
    CMP EAX,EDI                         ; 0058b505
    JNZ 0x0058b6db                      ; 0058b507
        ;   XREF to: 0058b6db (CONDITIONAL_JUMP)  ; LAB_0058b6db
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058b50d
        ;   Label: LAB_0058b50d
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0058b510
    ADD EAX,0x14                        ; 0058b513
    CMP EAX,EDX                         ; 0058b516
    JZ 0x0058b52a                       ; 0058b518
        ;   XREF to: 0058b52a (CONDITIONAL_JUMP)  ; LAB_0058b52a
    MOV ECX,dword ptr [EDX]             ; 0058b51a
    MOV dword ptr [EAX],ECX             ; 0058b51c
    MOV ECX,dword ptr [EDX + 0x4]       ; 0058b51e
    MOV dword ptr [EAX + 0x4],ECX       ; 0058b521
    MOV ECX,dword ptr [EDX + 0x8]       ; 0058b524
    MOV dword ptr [EAX + 0x8],ECX       ; 0058b527
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058b52a
        ;   Label: LAB_0058b52a
    CMP dword ptr [EAX],0x0             ; 0058b52d
    JZ 0x0058b6d4                       ; 0058b530
        ;   XREF to: 0058b6d4 (CONDITIONAL_JUMP)  ; LAB_0058b6d4
    MOV EBX,0x2661fb8                   ; 0058b536
    XOR ESI,ESI                         ; 0058b53b
    PUSH 0x42480000                     ; 0058b53d
        ;   Label: LAB_0058b53d
    PUSH 0x40a00000                     ; 0058b542
    CALL FUN_0040cf60                   ; 0058b547
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0x44],EAX      ; 0058b54c
    FLD float ptr [ESP + 0x44]          ; 0058b550
    ADD ESP,0x8                         ; 0058b554
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0058b557
    FSTP float ptr [ESP + 0x38]         ; 0058b55a
    FLD float ptr [EAX + 0x4]           ; 0058b55e
    FLD ST0                             ; 0058b561
    FADD double ptr [0x005ee5da]        ; 0058b563 | DAT_005ee5da
    SUB ESP,0x4                         ; 0058b569
    FSTP float ptr [ESP]                ; 0058b56c
    FADD double ptr [0x005ee5e2]        ; 0058b56f | DAT_005ee5e2
    SUB ESP,0x4                         ; 0058b575
    FSTP float ptr [ESP]                ; 0058b578
    CALL FUN_0040cf60                   ; 0058b57b
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0x44],EAX      ; 0058b580
    FLD float ptr [ESP + 0x44]          ; 0058b584
    ADD ESP,0x8                         ; 0058b588
    FLD ST0                             ; 0058b58b
    FSIN                                ; 0058b58d
    FXCH                                ; 0058b58f
    FCOS                                ; 0058b591
    FLD float ptr [ESP + 0x38]          ; 0058b593
    FXCH ST2                            ; 0058b597
    FMUL ST2                            ; 0058b599
    FADD float ptr [EDI]                ; 0058b59b
    FXCH                                ; 0058b59d
    FMULP ST2                           ; 0058b59f
    FSTP float ptr [ESP + 0x18]         ; 0058b5a1
    MOV EAX,dword ptr [EDI + 0x4]       ; 0058b5a5
    MOV dword ptr [ESP + 0x1c],EAX      ; 0058b5a8
    MOV EDX,ESP                         ; 0058b5ac
    FADD float ptr [EDI + 0x8]          ; 0058b5ae
    LEA EAX,[ESP + 0x18]                ; 0058b5b1
    FSTP float ptr [ESP + 0x20]         ; 0058b5b5
    CMP EDX,EAX                         ; 0058b5b9
    JZ 0x0058b5d4                       ; 0058b5bb
        ;   XREF to: 0058b5d4 (CONDITIONAL_JUMP)  ; LAB_0058b5d4
    MOV EAX,dword ptr [ESP + 0x18]      ; 0058b5bd
    MOV dword ptr [ESP],EAX             ; 0058b5c1
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0058b5c4
    MOV dword ptr [ESP + 0x4],EAX       ; 0058b5c8
    MOV EAX,dword ptr [ESP + 0x20]      ; 0058b5cc
    MOV dword ptr [ESP + 0x8],EAX       ; 0058b5d0
    LEA EAX,[ESP + 0xc]                 ; 0058b5d4
        ;   Label: LAB_0058b5d4
    LEA EDX,[ESP + 0x18]                ; 0058b5d8
    CMP EAX,EDX                         ; 0058b5dc
    JZ 0x0058b5f8                       ; 0058b5de
        ;   XREF to: 0058b5f8 (CONDITIONAL_JUMP)  ; LAB_0058b5f8
    MOV EAX,dword ptr [ESP + 0x18]      ; 0058b5e0
    MOV dword ptr [ESP + 0xc],EAX       ; 0058b5e4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0058b5e8
    MOV dword ptr [ESP + 0x10],EAX      ; 0058b5ec
    MOV EAX,dword ptr [ESP + 0x20]      ; 0058b5f0
    MOV dword ptr [ESP + 0x14],EAX      ; 0058b5f4
    FLD float ptr [ESP + 0x4]           ; 0058b5f8
        ;   Label: LAB_0058b5f8
    MOV EAX,[0x0061b5a8]                ; 0058b5fc | DAT_0061b5a8
    FLD float ptr [ESP + 0x10]          ; 0058b601
    PUSH EAX                            ; 0058b605 | DAT_01e661b8
    FXCH                                ; 0058b606
    FADD float ptr [0x005ee5ea]         ; 0058b608 | DAT_005ee5ea
    FXCH                                ; 0058b60e
    FADD float ptr [0x005ee5ee]         ; 0058b610 | DAT_005ee5ee
    FXCH                                ; 0058b616
    FSTP float ptr [ESP + 0x8]          ; 0058b618
    FSTP float ptr [ESP + 0x14]         ; 0058b61c
    CALL FUN_00537e00                   ; 0058b620
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; undefined FUN_00537e00()
    ADD ESP,0x4                         ; 0058b625
    MOV EDX,dword ptr [0x0061b5a8]      ; 0058b628 | DAT_0061b5a8
    PUSH EDX                            ; 0058b62e | DAT_01e661b8
    CALL FUN_00537e90                   ; 0058b62f
        ;   XREF to: 00537e90 (UNCONDITIONAL_CALL)  ; undefined FUN_00537e90()
    ADD ESP,0x4                         ; 0058b634
    LEA EAX,[ESP + 0xc]                 ; 0058b637
    PUSH EAX                            ; 0058b63b
    LEA EAX,[ESP + 0x4]                 ; 0058b63c
    PUSH EAX                            ; 0058b640
    MOV ECX,dword ptr [0x0061b5a8]      ; 0058b641 | DAT_0061b5a8
    PUSH ECX                            ; 0058b647 | DAT_01e661b8
    CALL FUN_00535ee0                   ; 0058b648
        ;   XREF to: 00535ee0 (UNCONDITIONAL_CALL)  ; undefined FUN_00535ee0()
    MOV dword ptr [ESP + 0x48],EAX      ; 0058b64d
    FLD float ptr [ESP + 0x48]          ; 0058b651
    ADD ESP,0xc                         ; 0058b655
    FLD float ptr [ESP + 0x10]          ; 0058b658
    FSUB float ptr [ESP + 0x4]          ; 0058b65c
    FMULP                               ; 0058b660
    PUSH 0x3f800000                     ; 0058b662
    FADD float ptr [ESP + 0x8]          ; 0058b667
    PUSH 0x0                            ; 0058b66b
    FST float ptr [ESI + 0x2662918]     ; 0058b66d
    FSTP double ptr [ESP + 0x34]        ; 0058b673
    CALL FUN_0040cf60                   ; 0058b677
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0x44],EAX      ; 0058b67c
    FLD float ptr [ESP + 0x44]          ; 0058b680
    FMUL double ptr [0x005ee5d2]        ; 0058b684 | DAT_005ee5d2
    ADD ESP,0x8                         ; 0058b68a
    FADD double ptr [ESP + 0x2c]        ; 0058b68d
    LEA EAX,[ESP + 0x18]                ; 0058b691
    FSTP float ptr [ESP + 0x1c]         ; 0058b695
    CMP EBX,EAX                         ; 0058b699
    JZ 0x0058b6b1                       ; 0058b69b
        ;   XREF to: 0058b6b1 (CONDITIONAL_JUMP)  ; LAB_0058b6b1
    MOV EAX,dword ptr [ESP + 0x18]      ; 0058b69d
    MOV dword ptr [EBX],EAX             ; 0058b6a1 | DAT_02661fb8
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0058b6a3
    MOV dword ptr [EBX + 0x4],EAX       ; 0058b6a7 | DAT_02661fbc
    MOV EAX,dword ptr [ESP + 0x20]      ; 0058b6aa
    MOV dword ptr [EBX + 0x8],EAX       ; 0058b6ae | DAT_02661fc0
    ADD ESI,0x4                         ; 0058b6b1
        ;   Label: LAB_0058b6b1
    ADD EBX,0xc                         ; 0058b6b4
    CMP ESI,0x320                       ; 0058b6b7
    JNZ 0x0058b53d                      ; 0058b6bd
        ;   XREF to: 0058b53d (CONDITIONAL_JUMP)  ; LAB_0058b53d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058b6c3
    MOV dword ptr [EAX + 0x28],0x0      ; 0058b6c6
    MOV dword ptr [EAX + 0x24],0x0      ; 0058b6cd
    MOV ESP,EBP                         ; 0058b6d4
        ;   Label: LAB_0058b6d4
    POP EBP                             ; 0058b6d6
    POP EDI                             ; 0058b6d7
    POP ESI                             ; 0058b6d8
    POP EBX                             ; 0058b6d9
    RET                                 ; 0058b6da
    MOV EDX,dword ptr [EDI]             ; 0058b6db
        ;   Label: LAB_0058b6db
    MOV dword ptr [EAX],EDX             ; 0058b6dd
    MOV EDX,dword ptr [EDI + 0x4]       ; 0058b6df
    MOV dword ptr [EAX + 0x4],EDX       ; 0058b6e2
    MOV EDX,dword ptr [EDI + 0x8]       ; 0058b6e5
    MOV dword ptr [EAX + 0x8],EDX       ; 0058b6e8
    JMP 0x0058b50d                      ; 0058b6eb
        ;   XREF to: 0058b50d (UNCONDITIONAL_JUMP)  ; LAB_0058b50d

