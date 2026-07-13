; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004015a0(int param_1,int param_2,int param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[7]:
;   FUN_00403990 at 00403bb5
;   FUN_00409290 at 004094fe
;   FUN_0042ef60 at 0042f025
;   FUN_0043aec0 at 0043afb9
;   FUN_0046f680 at 0046f7cd
;   FUN_004759d0 at 00475a93
;   FUN_0049a960 at 0049a972
;
; Called Functions:
;   FUN_00401530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004015a0
        ;   Label: FUN_004015a0
    PUSH ESI                            ; 004015a1
    PUSH EDI                            ; 004015a2
    PUSH EBP                            ; 004015a3
    SUB ESP,0x10                        ; 004015a4
    MOV EAX,dword ptr [ESP + 0x24]      ; 004015a7
    MOV EDI,dword ptr [ESP + 0x28]      ; 004015ab
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004015af
    MOV ESI,dword ptr [ESP + 0x30]      ; 004015b3
    MOV dword ptr [ESP],0x1             ; 004015b7
    CMP EDI,ESI                         ; 004015be
    JLE 0x004015ce                      ; 004015c0
        ;   XREF to: 004015ce (CONDITIONAL_JUMP)  ; LAB_004015ce
    MOV EBX,EAX                         ; 004015c2
    MOV EAX,EBP                         ; 004015c4
    MOV EBP,EBX                         ; 004015c6
    MOV EBX,EDI                         ; 004015c8
    MOV EDI,ESI                         ; 004015ca
    MOV ESI,EBX                         ; 004015cc
    SUB ESI,EDI                         ; 004015ce
        ;   Label: LAB_004015ce
    SUB EBP,EAX                         ; 004015d0
    MOV dword ptr [ESP + 0xc],ESI       ; 004015d2
    TEST EBP,EBP                        ; 004015d6
    JL 0x00401625                       ; 004015d8
        ;   XREF to: 00401625 (CONDITIONAL_JUMP)  ; LAB_00401625
    MOV EBX,EDI                         ; 004015da
        ;   Label: LAB_004015da
    MOV EDI,dword ptr [ESP + 0xc]       ; 004015dc
    MOV ESI,EAX                         ; 004015e0
    CMP EBP,EDI                         ; 004015e2
    JLE 0x00401631                      ; 004015e4
        ;   XREF to: 00401631 (CONDITIONAL_JUMP)  ; LAB_00401631
    XOR EAX,EAX                         ; 004015e6
    ADD EDI,EDI                         ; 004015e8
    MOV dword ptr [ESP + 0x8],EAX       ; 004015ea
    SUB EDI,EBP                         ; 004015ee
    TEST EBP,EBP                        ; 004015f0
    JL 0x0040161d                       ; 004015f2
        ;   XREF to: 0040161d (CONDITIONAL_JUMP)  ; LAB_0040161d
    PUSH EBX                            ; 004015f4
        ;   Label: LAB_004015f4
    PUSH ESI                            ; 004015f5
    CALL FUN_00401530                   ; 004015f6
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; undefined FUN_00401530()
    ADD ESP,0x8                         ; 004015fb
    TEST EDI,EDI                        ; 004015fe
    JLE 0x00401605                      ; 00401600
        ;   XREF to: 00401605 (CONDITIONAL_JUMP)  ; LAB_00401605
    INC EBX                             ; 00401602
    SUB EDI,EBP                         ; 00401603
    MOV ECX,dword ptr [ESP]             ; 00401605
        ;   Label: LAB_00401605
    MOV EDX,dword ptr [ESP + 0x8]       ; 00401608
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040160c
    INC EDX                             ; 00401610
    ADD ESI,ECX                         ; 00401611
    ADD EDI,EAX                         ; 00401613
    MOV dword ptr [ESP + 0x8],EDX       ; 00401615
    CMP EBP,EDX                         ; 00401619
    JGE 0x004015f4                      ; 0040161b
        ;   XREF to: 004015f4 (CONDITIONAL_JUMP)  ; LAB_004015f4
    ADD ESP,0x10                        ; 0040161d
        ;   Label: LAB_0040161d
    POP EBP                             ; 00401620
    POP EDI                             ; 00401621
    POP ESI                             ; 00401622
    POP EBX                             ; 00401623
    RET                                 ; 00401624
    MOV ECX,0xffffffff                  ; 00401625
        ;   Label: LAB_00401625
    NEG EBP                             ; 0040162a
    MOV dword ptr [ESP],ECX             ; 0040162c
    JMP 0x004015da                      ; 0040162f
        ;   XREF to: 004015da (UNCONDITIONAL_JUMP)  ; LAB_004015da
    MOV EAX,dword ptr [ESP + 0xc]       ; 00401631
        ;   Label: LAB_00401631
    XOR EDX,EDX                         ; 00401635
    LEA EDI,[EBP + EBP*0x1]             ; 00401637
    MOV dword ptr [ESP + 0x4],EDX       ; 0040163b
    SUB EDI,EAX                         ; 0040163f
    TEST EAX,EAX                        ; 00401641
    JL 0x0040161d                       ; 00401643
        ;   XREF to: 0040161d (CONDITIONAL_JUMP)  ; LAB_0040161d
    PUSH EBX                            ; 00401645
        ;   Label: LAB_00401645
    PUSH ESI                            ; 00401646
    CALL FUN_00401530                   ; 00401647
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; undefined FUN_00401530()
    ADD ESP,0x8                         ; 0040164c
    TEST EDI,EDI                        ; 0040164f
    JLE 0x0040165e                      ; 00401651
        ;   XREF to: 0040165e (CONDITIONAL_JUMP)  ; LAB_0040165e
    MOV EDX,dword ptr [ESP + 0xc]       ; 00401653
    MOV EAX,dword ptr [ESP]             ; 00401657
    SUB EDI,EDX                         ; 0040165a
    ADD ESI,EAX                         ; 0040165c
    MOV EDX,dword ptr [ESP + 0x4]       ; 0040165e
        ;   Label: LAB_0040165e
    MOV ECX,dword ptr [ESP + 0xc]       ; 00401662
    INC EBX                             ; 00401666
    INC EDX                             ; 00401667
    ADD EDI,EBP                         ; 00401668
    MOV dword ptr [ESP + 0x4],EDX       ; 0040166a
    CMP EDX,ECX                         ; 0040166e
    JG 0x0040161d                       ; 00401670
        ;   XREF to: 0040161d (CONDITIONAL_JUMP)  ; LAB_0040161d
    JMP 0x00401645                      ; 00401672
        ;   XREF to: 00401645 (UNCONDITIONAL_JUMP)  ; LAB_00401645

