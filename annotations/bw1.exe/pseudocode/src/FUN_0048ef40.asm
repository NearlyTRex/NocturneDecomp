; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048ef40(int param_1,float *param_2)
;
; Local Variables:
; undefined8       Stack[-0x24]:8  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[6]:
;   FUN_0048f920 at 0048f984
;   FUN_0048fa40 at 0048faa5
;   FUN_00532250 at 0053237c
;   FUN_005334f0 at 005335ab
;   FUN_00533dc0 at 00533dec
;   FUN_00535080 at 005350c6
;
; Called Functions:
;   FUN_005c03a0
;   FUN_005c0880
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048ef40
        ;   Label: FUN_0048ef40
    PUSH EDI                            ; 0048ef41
    SUB ESP,0x14                        ; 0048ef42
    MOV EDI,dword ptr [ESP + 0x24]      ; 0048ef45
    MOV EBX,ESI                         ; 0048ef49
    MOV ESI,dword ptr [ESP + 0x20]      ; 0048ef4b
    FLD float ptr [EDI]                 ; 0048ef4f
    FSUB float ptr [ESI + 0x10]         ; 0048ef51
    FDIV float ptr [ESI + 0x34]         ; 0048ef54
    SUB ESP,0x8                         ; 0048ef57
    FSTP double ptr [ESP]               ; 0048ef5a
    CALL FUN_005c0880                   ; 0048ef5d
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0880()
    FLD float ptr [EDI + 0x4]           ; 0048ef62
    FSUB float ptr [ESI + 0x14]         ; 0048ef65
    FDIV float ptr [ESI + 0x38]         ; 0048ef68
    MOV dword ptr [ESP + 0x14],EAX      ; 0048ef6b
    MOV dword ptr [ESP + 0x18],EDX      ; 0048ef6f
    FLD double ptr [ESP + 0x14]         ; 0048ef73
    ADD ESP,0x8                         ; 0048ef77
    CALL FUN_005c03a0                   ; 0048ef7a
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP]               ; 0048ef7f
    SUB ESP,0x8                         ; 0048ef82
    FSTP double ptr [ESP]               ; 0048ef85
    CALL FUN_005c0880                   ; 0048ef88
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0880()
    FLD float ptr [EDI + 0x8]           ; 0048ef8d
    FSUB float ptr [ESI + 0x18]         ; 0048ef90
    FDIV float ptr [ESI + 0x3c]         ; 0048ef93
    MOV dword ptr [ESP + 0x14],EAX      ; 0048ef96
    MOV dword ptr [ESP + 0x18],EDX      ; 0048ef9a
    FLD double ptr [ESP + 0x14]         ; 0048ef9e
    ADD ESP,0x8                         ; 0048efa2
    CALL FUN_005c03a0                   ; 0048efa5
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x4]         ; 0048efaa
    SUB ESP,0x8                         ; 0048efae
    FSTP double ptr [ESP]               ; 0048efb1
    MOV EDI,EBX                         ; 0048efb4
    CALL FUN_005c0880                   ; 0048efb6
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0880()
    MOV dword ptr [ESP + 0x14],EAX      ; 0048efbb
    MOV dword ptr [ESP + 0x18],EDX      ; 0048efbf
    LEA ESI,[ESP + 0x8]                 ; 0048efc3
    FLD double ptr [ESP + 0x14]         ; 0048efc7
    ADD ESP,0x8                         ; 0048efcb
    CALL FUN_005c03a0                   ; 0048efce
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x8]         ; 0048efd3
    MOVSD ES:EDI,ESI                    ; 0048efd7
    MOVSD ES:EDI,ESI                    ; 0048efd8
    MOVSD ES:EDI,ESI                    ; 0048efd9
    MOV EAX,EBX                         ; 0048efda
    ADD ESP,0x14                        ; 0048efdc
    POP EDI                             ; 0048efdf
    POP EBX                             ; 0048efe0
    RET                                 ; 0048efe1

