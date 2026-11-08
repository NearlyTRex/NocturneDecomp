; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048ee90(int param_1,float *param_2)
;
; Local Variables:
; undefined8       Stack[-0x24]:8  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[2]:
;   FUN_0048f920 at 0048f939
;   FUN_0048fa40 at 0048fa59
;
; Called Functions:
;   FUN_005c03a0
;   FUN_005c0880
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048ee90
        ;   Label: FUN_0048ee90
    PUSH EDI                            ; 0048ee91
    SUB ESP,0x14                        ; 0048ee92
    MOV EDI,dword ptr [ESP + 0x24]      ; 0048ee95
    MOV EBX,ESI                         ; 0048ee99
    MOV ESI,dword ptr [ESP + 0x20]      ; 0048ee9b
    FLD float ptr [EDI]                 ; 0048ee9f
    FSUB float ptr [ESI + 0x10]         ; 0048eea1
    FDIV float ptr [ESI + 0x28]         ; 0048eea4
    SUB ESP,0x8                         ; 0048eea7
    FSTP double ptr [ESP]               ; 0048eeaa
    CALL FUN_005c0880                   ; 0048eead
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0880()
    FLD float ptr [EDI + 0x4]           ; 0048eeb2
    FSUB float ptr [ESI + 0x14]         ; 0048eeb5
    FDIV float ptr [ESI + 0x2c]         ; 0048eeb8
    MOV dword ptr [ESP + 0x14],EAX      ; 0048eebb
    MOV dword ptr [ESP + 0x18],EDX      ; 0048eebf
    FLD double ptr [ESP + 0x14]         ; 0048eec3
    ADD ESP,0x8                         ; 0048eec7
    CALL FUN_005c03a0                   ; 0048eeca
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP]               ; 0048eecf
    SUB ESP,0x8                         ; 0048eed2
    FSTP double ptr [ESP]               ; 0048eed5
    CALL FUN_005c0880                   ; 0048eed8
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0880()
    FLD float ptr [EDI + 0x8]           ; 0048eedd
    FSUB float ptr [ESI + 0x18]         ; 0048eee0
    FDIV float ptr [ESI + 0x30]         ; 0048eee3
    MOV dword ptr [ESP + 0x14],EAX      ; 0048eee6
    MOV dword ptr [ESP + 0x18],EDX      ; 0048eeea
    FLD double ptr [ESP + 0x14]         ; 0048eeee
    ADD ESP,0x8                         ; 0048eef2
    CALL FUN_005c03a0                   ; 0048eef5
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x4]         ; 0048eefa
    SUB ESP,0x8                         ; 0048eefe
    FSTP double ptr [ESP]               ; 0048ef01
    MOV EDI,EBX                         ; 0048ef04
    CALL FUN_005c0880                   ; 0048ef06
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0880()
    MOV dword ptr [ESP + 0x14],EAX      ; 0048ef0b
    MOV dword ptr [ESP + 0x18],EDX      ; 0048ef0f
    LEA ESI,[ESP + 0x8]                 ; 0048ef13
    FLD double ptr [ESP + 0x14]         ; 0048ef17
    ADD ESP,0x8                         ; 0048ef1b
    CALL FUN_005c03a0                   ; 0048ef1e
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x8]         ; 0048ef23
    MOVSD ES:EDI,ESI                    ; 0048ef27
    MOVSD ES:EDI,ESI                    ; 0048ef28
    MOVSD ES:EDI,ESI                    ; 0048ef29
    MOV EAX,EBX                         ; 0048ef2a
    ADD ESP,0x14                        ; 0048ef2c
    POP EDI                             ; 0048ef2f
    POP EBX                             ; 0048ef30
    RET                                 ; 0048ef31

