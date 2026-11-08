; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00546650(int param_1,undefined4 *param_2,undefined4 param_3)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00429b40 at 00429c18
;
; Called Functions:
;   FUN_00540fc0
;   FUN_00547890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00546650
        ;   Label: FUN_00546650
    PUSH ESI                            ; 00546651
    PUSH EDI                            ; 00546652
    PUSH EBP                            ; 00546653
    SUB ESP,0x4                         ; 00546654
    MOV EBP,dword ptr [ESP + 0x18]      ; 00546657
    PUSH EBP                            ; 0054665b
    CALL FUN_00547890                   ; 0054665c
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; undefined FUN_00547890()
    XOR EBX,EBX                         ; 00546661
    ADD ESP,0x4                         ; 00546663
    MOV EDX,dword ptr [EAX + 0x1d1f8]   ; 00546666
    MOV dword ptr [ESP],EAX             ; 0054666c
    TEST EDX,EDX                        ; 0054666f
    JLE 0x005466a9                      ; 00546671
        ;   XREF to: 005466a9 (CONDITIONAL_JUMP)  ; LAB_005466a9
    MOV ESI,dword ptr [ESP + 0x20]      ; 00546673
        ;   Label: LAB_00546673
    PUSH ESI                            ; 00546677
    PUSH EBX                            ; 00546678
    MOV EDI,dword ptr [ESP + 0x8]       ; 00546679
    PUSH EDI                            ; 0054667d
    CALL FUN_00540fc0                   ; 0054667e
        ;   XREF to: 00540fc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00540fc0()
    ADD ESP,0xc                         ; 00546683
    TEST EAX,EAX                        ; 00546686
    JL 0x00546698                       ; 00546688
        ;   XREF to: 00546698 (CONDITIONAL_JUMP)  ; LAB_00546698
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0054668a
    LEA EDI,[EBP + 0x6b0]               ; 0054668e
    MOVSD ES:EDI,ESI                    ; 00546694
    MOVSD ES:EDI,ESI                    ; 00546695
    MOVSD ES:EDI,ESI                    ; 00546696
    MOVSD ES:EDI,ESI                    ; 00546697
    MOV EAX,dword ptr [ESP]             ; 00546698
        ;   Label: LAB_00546698
    INC EBX                             ; 0054669b
    MOV ECX,dword ptr [EAX + 0x1d1f8]   ; 0054669c
    ADD EBP,0x10                        ; 005466a2
    CMP EBX,ECX                         ; 005466a5
    JL 0x00546673                       ; 005466a7
        ;   XREF to: 00546673 (CONDITIONAL_JUMP)  ; LAB_00546673
    ADD ESP,0x4                         ; 005466a9
        ;   Label: LAB_005466a9
    POP EBP                             ; 005466ac
    POP EDI                             ; 005466ad
    POP ESI                             ; 005466ae
    POP EBX                             ; 005466af
    RET                                 ; 005466b0

