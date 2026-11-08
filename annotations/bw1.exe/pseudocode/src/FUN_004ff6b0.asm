; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ff6b0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined        Stack[-0x20]:1  local_20
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   FUN_0046caa0 at 0046d5f2
;   FUN_00588ad0 at 00588eb8
;
; Referenced Globals:
;   undefined4 DAT_00602ed8
;
; Called Functions:
;   FUN_00408b40
;   FUN_00468900
;   FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ff6b0
        ;   Label: FUN_004ff6b0
    PUSH EDI                            ; 004ff6b1
    PUSH EBP                            ; 004ff6b2
    SUB ESP,0x20                        ; 004ff6b3
    MOV EBP,ESI                         ; 004ff6b6
    MOV ESI,dword ptr [ESP + 0x30]      ; 004ff6b8
    LEA EBX,[ESI + 0x158]               ; 004ff6bc
    PUSH EBX                            ; 004ff6c2
    CALL FUN_00468900                   ; 004ff6c3
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; undefined FUN_00468900()
    ADD ESP,0x4                         ; 004ff6c8
    PUSH EBX                            ; 004ff6cb
    MOV EDI,dword ptr [EAX + 0x10c]     ; 004ff6cc
    CALL FUN_00468900                   ; 004ff6d2
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; undefined FUN_00468900()
    MOV EAX,dword ptr [EAX + 0x100]     ; 004ff6d7
    ADD ESP,0x4                         ; 004ff6dd
    DEC EAX                             ; 004ff6e0
    MOV dword ptr [ESP + 0x1c],EAX      ; 004ff6e1
    FILD dword ptr [ESP + 0x1c]         ; 004ff6e5
    FMUL float ptr [ESI + 0x2dc]        ; 004ff6e9
    PUSH EBX                            ; 004ff6ef
    CALL FUN_005c03a0                   ; 004ff6f0
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x1c]        ; 004ff6f5
    CALL FUN_00468900                   ; 004ff6f9
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; undefined FUN_00468900()
    ADD ESP,0x4                         ; 004ff6fe
    MOV EAX,dword ptr [EAX + 0x104]     ; 004ff701
    IMUL EAX,dword ptr [ESP + 0x18]     ; 004ff707
    MOV EBX,dword ptr [ESI + 0x414]     ; 004ff70c
    ADD EBX,EAX                         ; 004ff712
    LEA EAX,[EBX*0x4 + 0x0]             ; 004ff714
    SUB EAX,EBX                         ; 004ff71b
    SHL EAX,0x2                         ; 004ff71d
    MOV EBX,ESP                         ; 004ff720
    ADD EAX,EDI                         ; 004ff722
    FILD dword ptr [EAX]                ; 004ff724
    FMUL float ptr [0x00602ed8]         ; 004ff726 | DAT_00602ed8
    FSTP float ptr [EBX]                ; 004ff72c
    FILD dword ptr [EAX + 0x4]          ; 004ff72e
    FMUL float ptr [0x00602ed8]         ; 004ff731 | DAT_00602ed8
    FSTP float ptr [EBX + 0x4]          ; 004ff737
    FILD dword ptr [EAX + 0x8]          ; 004ff73a
    FMUL float ptr [0x00602ed8]         ; 004ff73d | DAT_00602ed8
    FSTP float ptr [EBX + 0x8]          ; 004ff743
    MOV EAX,ESP                         ; 004ff746
    PUSH EAX                            ; 004ff748
    PUSH ESI                            ; 004ff749
    LEA ESI,[ESP + 0x14]                ; 004ff74a
    MOV EDI,EBP                         ; 004ff74e
    CALL FUN_00408b40                   ; 004ff750
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    LEA ESI,[ESP + 0x14]                ; 004ff755
    ADD ESP,0x8                         ; 004ff759
    MOVSD ES:EDI,ESI                    ; 004ff75c
    MOVSD ES:EDI,ESI                    ; 004ff75d
    MOVSD ES:EDI,ESI                    ; 004ff75e
    MOV EAX,EBP                         ; 004ff75f
    ADD ESP,0x20                        ; 004ff761
    POP EBP                             ; 004ff764
    POP EDI                             ; 004ff765
    POP EBX                             ; 004ff766
    RET                                 ; 004ff767

