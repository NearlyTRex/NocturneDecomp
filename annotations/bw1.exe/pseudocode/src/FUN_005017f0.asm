; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005017f0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x18]:1  local_18
;
; XREF[2]:
;   FUN_00501a70 at 00501ce8
;   FUN_00502480 at 0050257c
;
; Referenced Globals:
;   undefined4 DAT_00603174
;   undefined4 DAT_01ccc3e8
;   undefined4 DAT_01ccc3ec
;   undefined4 DAT_01ccc3f0
;   undefined4 DAT_01ccc3f4
;   undefined4 DAT_01ccc41c
;   undefined4 DAT_01ccc524
;   undefined4 DAT_01cce098
;   undefined4 DAT_01cce0a0
;   undefined4 DAT_01cce0b4
;
; Called Functions:
;   FUN_00408b40
;   FUN_0045f3e0
;   FUN_00465da0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005017f0
        ;   Label: FUN_005017f0
    PUSH ESI                            ; 005017f1
    PUSH EDI                            ; 005017f2
    SUB ESP,0x30                        ; 005017f3
    MOV EBX,dword ptr [ESP + 0x40]      ; 005017f6
    PUSH EBX                            ; 005017fa
    MOV EAX,dword ptr [EBX + 0x154]     ; 005017fb
    LEA ESI,[ESP + 0x28]                ; 00501801
    LEA EDI,[ESP + 0x4]                 ; 00501805
    CALL dword ptr [EAX + 0xe0]         ; 00501809
    ADD ESP,0x4                         ; 0050180f
    MOV EAX,ESP                         ; 00501812
    LEA ESI,[ESP + 0x24]                ; 00501814
    PUSH EAX                            ; 00501818
    MOVSD ES:EDI,ESI                    ; 00501819
    MOVSD ES:EDI,ESI                    ; 0050181a
    MOVSD ES:EDI,ESI                    ; 0050181b
    PUSH EBX                            ; 0050181c
    LEA ESI,[ESP + 0x14]                ; 0050181d
    LEA EDI,[ESP + 0x20]                ; 00501821
    CALL FUN_00408b40                   ; 00501825
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    LEA ESI,[ESP + 0x14]                ; 0050182a
    MOV EDX,0x1                         ; 0050182e
    LEA EAX,[ESP + 0x20]                ; 00501833
    ADD ESP,0x8                         ; 00501837
    MOV dword ptr [0x01cce098],EDX      ; 0050183a | DAT_01cce098
    MOV dword ptr [0x01cce0a0],EDX      ; 00501840 | DAT_01cce0a0
    MOVSD ES:EDI,ESI                    ; 00501846
    MOVSD ES:EDI,ESI                    ; 00501847
    MOVSD ES:EDI,ESI                    ; 00501848
    CMP EAX,0x1ccc3e8                   ; 00501849
    JZ 0x0050186b                       ; 0050184e
        ;   XREF to: 0050186b (CONDITIONAL_JUMP)  ; LAB_0050186b
    MOV EAX,dword ptr [ESP + 0x18]      ; 00501850
    MOV [0x01ccc3e8],EAX                ; 00501854 | DAT_01ccc3e8
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00501859
    MOV [0x01ccc3ec],EAX                ; 0050185d | DAT_01ccc3ec
    MOV EAX,dword ptr [ESP + 0x20]      ; 00501862
    MOV [0x01ccc3f0],EAX                ; 00501866 | DAT_01ccc3f0
    ADD EBX,0x30                        ; 0050186b
        ;   Label: LAB_0050186b
    PUSH EBX                            ; 0050186e
    PUSH 0x1ccc3f4                      ; 0050186f | DAT_01ccc3f4
    MOV ESI,0x1                         ; 00501874
    MOV EBX,0x42000000                  ; 00501879
    CALL FUN_0045f3e0                   ; 0050187e
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f3e0()
    ADD ESP,0x8                         ; 00501883
    FLD float ptr [0x00603174]          ; 00501886 | DAT_00603174
    PUSH 0x3f800000                     ; 0050188c
    MOV dword ptr [0x01ccc524],EBX      ; 00501891 | DAT_01ccc524
    PUSH 0x1ccc3e4                      ; 00501897
    FSTP float ptr [0x01ccc41c]         ; 0050189c | DAT_01ccc41c
    MOV dword ptr [0x01cce0b4],ESI      ; 005018a2 | DAT_01cce0b4
    CALL FUN_00465da0                   ; 005018a8
        ;   XREF to: 00465da0 (UNCONDITIONAL_CALL)  ; undefined FUN_00465da0()
    ADD ESP,0x8                         ; 005018ad
    ADD ESP,0x30                        ; 005018b0
    POP EDI                             ; 005018b3
    POP ESI                             ; 005018b4
    POP EBX                             ; 005018b5
    RET                                 ; 005018b6

