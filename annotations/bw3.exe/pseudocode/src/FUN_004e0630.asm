; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e0630(int param_1)
;
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[1]:
;   FUN_004d3460 at 004d34c8
;
; Referenced Globals:
;   undefined4 DAT_005c691a
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004e0630
        ;   Label: FUN_004e0630
    PUSH EDI                            ; 004e0631
    PUSH EBP                            ; 004e0632
    MOV EBP,ESP                         ; 004e0633
    SUB ESP,0x8                         ; 004e0635
    AND ESP,0xfffffff8                  ; 004e0638
    MOV EDX,dword ptr [EBP + 0x10]      ; 004e063b
    FLD float ptr [EDX + 0x2dc]         ; 004e063e
    MOV dword ptr [EDX + 0x418],0x1     ; 004e0644
    FCOMP double ptr [0x005c691a]       ; 004e064e | DAT_005c691a
    FNSTSW AX                           ; 004e0654
    SAHF                                ; 004e0656
    JNC 0x004e0676                      ; 004e0657
        ;   XREF to: 004e0676 (CONDITIONAL_JUMP)  ; LAB_004e0676
    XOR ESI,ESI                         ; 004e0659
    MOV EDI,0x3ff00000                  ; 004e065b
    MOV dword ptr [ESP],ESI             ; 004e0660
    MOV dword ptr [ESP + 0x4],EDI       ; 004e0663
    FLD double ptr [ESP]                ; 004e0667
    FSTP float ptr [EDX + 0x41c]        ; 004e066a
    MOV ESP,EBP                         ; 004e0670
    POP EBP                             ; 004e0672
    POP EDI                             ; 004e0673
    POP ESI                             ; 004e0674
    RET                                 ; 004e0675
    XOR ECX,ECX                         ; 004e0676
        ;   Label: LAB_004e0676
    MOV dword ptr [ESP],ECX             ; 004e0678
    MOV dword ptr [ESP + 0x4],ECX       ; 004e067b
    FLD double ptr [ESP]                ; 004e067f
    FSTP float ptr [EDX + 0x41c]        ; 004e0682
    MOV ESP,EBP                         ; 004e0688
    POP EBP                             ; 004e068a
    POP EDI                             ; 004e068b
    POP ESI                             ; 004e068c
    RET                                 ; 004e068d

