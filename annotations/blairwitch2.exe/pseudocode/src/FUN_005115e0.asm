; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005115e0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_CWerewolf_005e160e
;   TerminatedCString s_transform_005e1618
;
; Called Functions:
;   FUN_0040c5a0
;   FUN_00502f10
;   FUN_00503860
;   FUN_00503980
;   FUN_00510510
;   FUN_00544e60
;   FUN_00544ee0
;   FUN_00546ae0
;   FUN_00547480
;   FUN_005478b0
;   FUN_005b6f80
;   FUN_005b71d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005115e0
        ;   Label: FUN_005115e0
    PUSH ESI                            ; 005115e1
    PUSH EDI                            ; 005115e2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005115e3
    PUSH EBX                            ; 005115e7
    CALL FUN_00510510                   ; 005115e8
        ;   XREF to: 00510510 (UNCONDITIONAL_CALL)  ; undefined FUN_00510510()
    MOV EDX,dword ptr [EBX + 0x24450]   ; 005115ed
    ADD ESP,0x4                         ; 005115f3
    TEST EDX,EDX                        ; 005115f6
    JZ 0x005116a4                       ; 005115f8
        ;   XREF to: 005116a4 (CONDITIONAL_JUMP)  ; LAB_005116a4
    MOV EAX,dword ptr [EBX + 0x24450]   ; 005115fe
        ;   Label: LAB_005115fe
    ADD EAX,0x2b4                       ; 00511604
    PUSH EAX                            ; 00511609
    CALL FUN_00544e60                   ; 0051160a
        ;   XREF to: 00544e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00544e60()
    MOV EAX,dword ptr [EBX + 0x24450]   ; 0051160f
    ADD ESP,0x4                         ; 00511615
    ADD EAX,0x2b4                       ; 00511618
    PUSH EAX                            ; 0051161d
    CALL FUN_00546ae0                   ; 0051161e
        ;   XREF to: 00546ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_00546ae0()
    ADD ESP,0x4                         ; 00511623
    LEA ESI,[EBX + 0x2b4]               ; 00511626
    PUSH ESI                            ; 0051162c
    CALL FUN_00544e60                   ; 0051162d
        ;   XREF to: 00544e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00544e60()
    ADD ESP,0x4                         ; 00511632
    PUSH ESI                            ; 00511635
    CALL FUN_00546ae0                   ; 00511636
        ;   XREF to: 00546ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_00546ae0()
    ADD ESP,0x4                         ; 0051163b
    PUSH ESI                            ; 0051163e
    CALL FUN_00547480                   ; 0051163f
        ;   XREF to: 00547480 (UNCONDITIONAL_CALL)  ; undefined FUN_00547480()
    ADD ESP,0x4                         ; 00511644
    PUSH ESI                            ; 00511647
    PUSH 0x0                            ; 00511648
    LEA EDI,[EBX + 0x24454]             ; 0051164a
    PUSH EDI                            ; 00511650
    CALL FUN_005b6f80                   ; 00511651
        ;   XREF to: 005b6f80 (UNCONDITIONAL_CALL)  ; undefined FUN_005b6f80()
    MOV EAX,dword ptr [EBX + 0x24450]   ; 00511656
    ADD ESP,0xc                         ; 0051165c
    ADD EAX,0x2b4                       ; 0051165f
    PUSH EAX                            ; 00511664
    PUSH 0x1                            ; 00511665
    PUSH EDI                            ; 00511667
    CALL FUN_005b6f80                   ; 00511668
        ;   XREF to: 005b6f80 (UNCONDITIONAL_CALL)  ; undefined FUN_005b6f80()
    ADD ESP,0xc                         ; 0051166d
    PUSH EDI                            ; 00511670
    CALL FUN_005b71d0                   ; 00511671
        ;   XREF to: 005b71d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b71d0()
    ADD ESP,0x4                         ; 00511676
    PUSH ESI                            ; 00511679
    MOV dword ptr [EBX + 0x25080],0x0   ; 0051167a
    CALL FUN_00544ee0                   ; 00511684
        ;   XREF to: 00544ee0 (UNCONDITIONAL_CALL)  ; undefined FUN_00544ee0()
    MOV EAX,dword ptr [EBX + 0x24450]   ; 00511689
    ADD ESP,0x4                         ; 0051168f
    ADD EAX,0x2b4                       ; 00511692
    PUSH EAX                            ; 00511697
    CALL FUN_00544ee0                   ; 00511698
        ;   XREF to: 00544ee0 (UNCONDITIONAL_CALL)  ; undefined FUN_00544ee0()
    ADD ESP,0x4                         ; 0051169d
    POP EDI                             ; 005116a0
    POP ESI                             ; 005116a1
    POP EBX                             ; 005116a2
    RET                                 ; 005116a3
    PUSH 0x5e160e                       ; 005116a4 | = "CWerewolf"
        ;   Label: LAB_005116a4
    CALL FUN_0040c5a0                   ; 005116a9
        ;   XREF to: 0040c5a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c5a0()
    LEA ESI,[EBX + 0x243cc]             ; 005116ae
    ADD ESP,0x4                         ; 005116b4
    MOV EDI,EAX                         ; 005116b7
    MOV dword ptr [EBX + 0x24450],EAX   ; 005116b9
    PUSH EDI                            ; 005116bf
    MOV AL,byte ptr [ESI]               ; 005116c0
        ;   Label: LAB_005116c0
    MOV byte ptr [EDI],AL               ; 005116c2
    CMP AL,0x0                          ; 005116c4
    JZ 0x005116d8                       ; 005116c6
        ;   XREF to: 005116d8 (CONDITIONAL_JUMP)  ; LAB_005116d8
    MOV AL,byte ptr [ESI + 0x1]         ; 005116c8
    ADD ESI,0x2                         ; 005116cb
    MOV byte ptr [EDI + 0x1],AL         ; 005116ce
    ADD EDI,0x2                         ; 005116d1
    CMP AL,0x0                          ; 005116d4
    JNZ 0x005116c0                      ; 005116d6
        ;   XREF to: 005116c0 (CONDITIONAL_JUMP)  ; LAB_005116c0
    POP EDI                             ; 005116d8
        ;   Label: LAB_005116d8
    LEA ESI,[EBX + 0x20]                ; 005116d9
    MOV EAX,dword ptr [EBX + 0x24450]   ; 005116dc
    MOV EDX,dword ptr [ESI]             ; 005116e2
    MOV dword ptr [EAX + 0x20],EDX      ; 005116e4
    MOV EDX,dword ptr [ESI + 0x4]       ; 005116e7
    MOV dword ptr [EAX + 0x24],EDX      ; 005116ea
    MOV EDX,dword ptr [ESI + 0x8]       ; 005116ed
    MOV dword ptr [EAX + 0x28],EDX      ; 005116f0
    MOV ESI,dword ptr [ESI + 0xc]       ; 005116f3
    MOV dword ptr [EAX + 0x2c],ESI      ; 005116f6
    MOV EAX,dword ptr [EBX + 0x24450]   ; 005116f9
    LEA ESI,[EBX + 0x30]                ; 005116ff
    ADD EAX,0x30                        ; 00511702
    CMP EAX,ESI                         ; 00511705
    JZ 0x00511719                       ; 00511707
        ;   XREF to: 00511719 (CONDITIONAL_JUMP)  ; LAB_00511719
    MOV EDX,dword ptr [ESI]             ; 00511709
    MOV dword ptr [EAX],EDX             ; 0051170b
    MOV EDX,dword ptr [ESI + 0x4]       ; 0051170d
    MOV dword ptr [EAX + 0x4],EDX       ; 00511710
    MOV EDX,dword ptr [ESI + 0x8]       ; 00511713
    MOV dword ptr [EAX + 0x8],EDX       ; 00511716
    LEA EAX,[EBX + 0x243ac]             ; 00511719
        ;   Label: LAB_00511719
    PUSH EAX                            ; 0051171f
    MOV EAX,dword ptr [EBX + 0x24450]   ; 00511720
    ADD EAX,0x2b4                       ; 00511726
    PUSH EAX                            ; 0051172b
    CALL FUN_005478b0                   ; 0051172c
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005478b0()
    MOV EAX,dword ptr [EBX + 0x24450]   ; 00511731
    FLD float ptr [EBX + 0x25084]       ; 00511737
    ADD ESP,0x8                         ; 0051173d
    FSTP float ptr [EAX + 0x2824]       ; 00511740
    MOV EAX,dword ptr [EBX + 0x24450]   ; 00511746
    PUSH EAX                            ; 0051174c
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 0051174d
    CALL dword ptr [ESI + 0x8]          ; 00511753
    ADD ESP,0x4                         ; 00511756
    PUSH 0x1                            ; 00511759
    MOV EAX,dword ptr [EBX + 0x24450]   ; 0051175b
    PUSH 0x5e1618                       ; 00511761 | = "transform"
    ADD EAX,0x2b4                       ; 00511766
    PUSH EAX                            ; 0051176b
    CALL FUN_00503860                   ; 0051176c
        ;   XREF to: 00503860 (UNCONDITIONAL_CALL)  ; undefined FUN_00503860()
    ADD ESP,0x4                         ; 00511771
    PUSH EAX                            ; 00511774
    CALL FUN_00502f10                   ; 00511775
        ;   XREF to: 00502f10 (UNCONDITIONAL_CALL)  ; undefined FUN_00502f10()
    ADD ESP,0xc                         ; 0051177a
    PUSH 0x0                            ; 0051177d
    PUSH EAX                            ; 0051177f
    MOV EAX,dword ptr [EBX + 0x24450]   ; 00511780
    ADD EAX,0x2b4                       ; 00511786
    PUSH EAX                            ; 0051178b
    CALL FUN_00503980                   ; 0051178c
        ;   XREF to: 00503980 (UNCONDITIONAL_CALL)  ; undefined FUN_00503980()
    ADD ESP,0xc                         ; 00511791
    JMP 0x005115fe                      ; 00511794
        ;   XREF to: 005115fe (UNCONDITIONAL_JUMP)  ; LAB_005115fe

