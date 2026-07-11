; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046b700(int param_1,float *param_2)
;
; Local Variables:
; undefined8       Stack[-0x24]:8  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[6]:
;   FUN_0046bfe0 at 0046c044
;   FUN_0046c100 at 0046c165
;   FUN_004ef120 at 004ef1de
;   FUN_004f0360 at 004f040e
;   FUN_004f0c20 at 004f0c4c
;   FUN_004f1c90 at 004f1cd0
;
; Called Functions:
;   FUN_00563a30
;   FUN_005648c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046b700
        ;   Label: FUN_0046b700
    PUSH EDI                            ; 0046b701
    SUB ESP,0x14                        ; 0046b702
    MOV EDI,dword ptr [ESP + 0x24]      ; 0046b705
    MOV EBX,ESI                         ; 0046b709
    MOV ESI,dword ptr [ESP + 0x20]      ; 0046b70b
    FLD float ptr [EDI]                 ; 0046b70f
    FSUB float ptr [ESI + 0x10]         ; 0046b711
    FDIV float ptr [ESI + 0x34]         ; 0046b714
    SUB ESP,0x8                         ; 0046b717
    FSTP double ptr [ESP]               ; 0046b71a
    CALL FUN_005648c0                   ; 0046b71d
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005648c0()
    FLD float ptr [EDI + 0x4]           ; 0046b722
    FSUB float ptr [ESI + 0x14]         ; 0046b725
    FDIV float ptr [ESI + 0x38]         ; 0046b728
    MOV dword ptr [ESP + 0x14],EAX      ; 0046b72b
    MOV dword ptr [ESP + 0x18],EDX      ; 0046b72f
    FLD double ptr [ESP + 0x14]         ; 0046b733
    ADD ESP,0x8                         ; 0046b737
    CALL FUN_00563a30                   ; 0046b73a
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FISTP dword ptr [ESP]               ; 0046b73f
    SUB ESP,0x8                         ; 0046b742
    FSTP double ptr [ESP]               ; 0046b745
    CALL FUN_005648c0                   ; 0046b748
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005648c0()
    FLD float ptr [EDI + 0x8]           ; 0046b74d
    FSUB float ptr [ESI + 0x18]         ; 0046b750
    FDIV float ptr [ESI + 0x3c]         ; 0046b753
    MOV dword ptr [ESP + 0x14],EAX      ; 0046b756
    MOV dword ptr [ESP + 0x18],EDX      ; 0046b75a
    FLD double ptr [ESP + 0x14]         ; 0046b75e
    ADD ESP,0x8                         ; 0046b762
    CALL FUN_00563a30                   ; 0046b765
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FISTP dword ptr [ESP + 0x4]         ; 0046b76a
    SUB ESP,0x8                         ; 0046b76e
    FSTP double ptr [ESP]               ; 0046b771
    MOV EDI,EBX                         ; 0046b774
    CALL FUN_005648c0                   ; 0046b776
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005648c0()
    MOV dword ptr [ESP + 0x14],EAX      ; 0046b77b
    MOV dword ptr [ESP + 0x18],EDX      ; 0046b77f
    LEA ESI,[ESP + 0x8]                 ; 0046b783
    FLD double ptr [ESP + 0x14]         ; 0046b787
    ADD ESP,0x8                         ; 0046b78b
    CALL FUN_00563a30                   ; 0046b78e
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FISTP dword ptr [ESP + 0x8]         ; 0046b793
    MOVSD ES:EDI,ESI                    ; 0046b797
    MOVSD ES:EDI,ESI                    ; 0046b798
    MOVSD ES:EDI,ESI                    ; 0046b799
    MOV EAX,EBX                         ; 0046b79a
    ADD ESP,0x14                        ; 0046b79c
    POP EDI                             ; 0046b79f
    POP EBX                             ; 0046b7a0
    RET                                 ; 0046b7a1

