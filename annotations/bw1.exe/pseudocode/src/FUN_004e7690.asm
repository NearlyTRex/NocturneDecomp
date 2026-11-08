; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e7690(int *param_1,uint param_2,uint param_3)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004e7780 at 004e7b48
;
; Referenced Globals:
;   undefined4 DAT_00629014
;   undefined4 DAT_0062901c
;   undefined4 DAT_00629034
;   undefined4 DAT_00629038
;   undefined4 DAT_0062903c
;   undefined4 DAT_00629040
;
; Called Functions:
;   FUN_004e7670
;   FUN_0058043c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e7690
        ;   Label: FUN_004e7690
    PUSH ESI                            ; 004e7691
    PUSH EDI                            ; 004e7692
    PUSH EBP                            ; 004e7693
    SUB ESP,0xc                         ; 004e7694
    MOV ESI,dword ptr [ESP + 0x20]      ; 004e7697
    MOV EBP,dword ptr [ESP + 0x24]      ; 004e769b
    MOV EBX,dword ptr [ESP + 0x28]      ; 004e769f
    MOV EDX,EBP                         ; 004e76a3
    MOV ECX,dword ptr [ESI + 0x2c]      ; 004e76a5
    MOV EDI,dword ptr [ESI + 0x10]      ; 004e76a8
    SUB EDX,ECX                         ; 004e76ab
    ADD EDX,EDI                         ; 004e76ad
    MOV EAX,dword ptr [ESI + 0x30]      ; 004e76af
    PUSH EDX                            ; 004e76b2
    MOV EDX,EBX                         ; 004e76b3
    MOV ECX,dword ptr [ESI + 0x14]      ; 004e76b5
    SUB EDX,EAX                         ; 004e76b8
    ADD EDX,ECX                         ; 004e76ba
    PUSH EDX                            ; 004e76bc
    PUSH ESI                            ; 004e76bd
    CALL FUN_004e7670                   ; 004e76be
        ;   XREF to: 004e7670 (UNCONDITIONAL_CALL)  ; undefined FUN_004e7670()
    MOV EDX,dword ptr [ESI + 0x1c]      ; 004e76c3
    IMUL EDX,EBP                        ; 004e76c6
    ADD ESP,0xc                         ; 004e76c9
    SHL EDX,0x8                         ; 004e76cc
    MOV dword ptr [ESP],EDX             ; 004e76cf
    MOV EDX,dword ptr [ESI + 0x1c]      ; 004e76d2
    IMUL EDX,EBX                        ; 004e76d5
    SHL EDX,0x8                         ; 004e76d8
    MOV dword ptr [ESP + 0x8],EDX       ; 004e76db
    MOV EDX,dword ptr [ESI + 0xc]       ; 004e76df
    MOV ECX,dword ptr [ESI]             ; 004e76e2
    AND EBX,EDX                         ; 004e76e4
    IMUL EBX,ECX                        ; 004e76e6
    LEA EDI,[EAX*0x4 + 0x0]             ; 004e76e9
    SUB EDI,EAX                         ; 004e76f0
    AND EBP,dword ptr [ESI + 0x8]       ; 004e76f2
    LEA EDX,[EBX + EBP*0x1]             ; 004e76f5
    MOV EBX,dword ptr [ESI + 0x24]      ; 004e76f8
    MOVSX EDX,word ptr [EBX + EDX*0x4]  ; 004e76fb
    MOV EBX,dword ptr [ESI + 0x20]      ; 004e76ff
    IMUL EBX,EDX                        ; 004e7702
    MOV EDX,ESP                         ; 004e7705
    SHL EDI,0x4                         ; 004e7707
    PUSH EDX                            ; 004e770a
    ADD EDI,0x629014                    ; 004e770b | DAT_00629014
    PUSH EDI                            ; 004e7711
    MOV dword ptr [ESP + 0xc],EBX       ; 004e7712
    CALL FUN_0058043c                   ; 004e7716
        ;   XREF to: 0058043c (UNCONDITIONAL_CALL)  ; undefined FUN_0058043c()
    MOV dword ptr [EDI + 0x20],0x3fff   ; 004e771b | DAT_00629034
    MOV dword ptr [EDI + 0x24],0x3fff   ; 004e7722 | DAT_00629038
    ADD ESP,0x8                         ; 004e7729
    MOV EBX,dword ptr [EDI + 0x8]       ; 004e772c | DAT_0062901c
    MOV dword ptr [EDI + 0x28],0x3fff   ; 004e772f | DAT_0062903c
    TEST EBX,EBX                        ; 004e7736
    JL 0x004e7762                       ; 004e7738
        ;   XREF to: 004e7762 (CONDITIONAL_JUMP)  ; LAB_004e7762
    MOV EBP,dword ptr [ESI + 0x1c]      ; 004e773a
    MOV EBX,dword ptr [ESI + 0x10]      ; 004e773d
    IMUL EBX,EBP                        ; 004e7740
    MOV EDX,dword ptr [EDI + 0x8]       ; 004e7743 | DAT_0062901c
    SHL EDX,0x8                         ; 004e7746
    MOV EAX,EDX                         ; 004e7749
    SAR EDX,0x1f                        ; 004e774b
    IDIV EBX                            ; 004e774e
    MOV dword ptr [EDI + 0x2c],EAX      ; 004e7750 | DAT_00629040
    CMP EAX,0xffff                      ; 004e7753
    JG 0x004e776b                       ; 004e7758
        ;   XREF to: 004e776b (CONDITIONAL_JUMP)  ; LAB_004e776b
    ADD ESP,0xc                         ; 004e775a
        ;   Label: LAB_004e775a
    POP EBP                             ; 004e775d
    POP EDI                             ; 004e775e
    POP ESI                             ; 004e775f
    POP EBX                             ; 004e7760
    RET                                 ; 004e7761
    MOV dword ptr [EDI + 0x2c],0x0      ; 004e7762 | DAT_00629040
        ;   Label: LAB_004e7762
    JMP 0x004e775a                      ; 004e7769
        ;   XREF to: 004e775a (UNCONDITIONAL_JUMP)  ; LAB_004e775a
    MOV dword ptr [EDI + 0x2c],0xffff   ; 004e776b | DAT_00629040
        ;   Label: LAB_004e776b
    ADD ESP,0xc                         ; 004e7772
    POP EBP                             ; 004e7775
    POP EDI                             ; 004e7776
    POP ESI                             ; 004e7777
    POP EBX                             ; 004e7778
    RET                                 ; 004e7779

