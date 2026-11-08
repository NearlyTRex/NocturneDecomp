; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00494670(void)
;
; Local Variables:
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   FUN_0049c780 at 0049c98a
;
; Referenced Globals:
;   undefined4 DAT_005d53a2
;   undefined4 DAT_0060b280
;   undefined4 DAT_0062202c
;   undefined4 DAT_00622030
;   undefined4 DAT_0062205c
;   undefined4 DAT_00622060
;   undefined4 DAT_0062208c
;   undefined4 DAT_00622090
;   undefined4 DAT_006220bc
;   undefined4 DAT_006220c0
;   undefined4 DAT_007bda74
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01c3deb8
;   undefined4 DAT_01c3debc
;   undefined4 DAT_01c3dec0
;   ... and 12 more
;
; Called Functions:
;   FUN_0046b650
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00494670
        ;   Label: FUN_00494670
    PUSH ESI                            ; 00494671
    PUSH EDI                            ; 00494672
    SUB ESP,0x5c                        ; 00494673
    MOV EDX,0x4                         ; 00494676
    MOV EAX,0x1                         ; 0049467b
    MOV EBX,0x80000                     ; 00494680
    MOV ESI,0xf80000                    ; 00494685
    MOV EDI,0x1c3deb8                   ; 0049468a
    XOR ECX,ECX                         ; 0049468f
    MOV dword ptr [0x01c3ded4],EDX      ; 00494691 | DAT_01c3ded4
    MOV dword ptr [0x01c3ded8],ECX      ; 00494697 | DAT_01c3ded8
    MOV dword ptr [0x01c3dedc],ECX      ; 0049469d | DAT_01c3dedc
    MOV dword ptr [0x01c3dee0],ECX      ; 004946a3 | DAT_01c3dee0
    MOV dword ptr [0x01c3dee4],ECX      ; 004946a9 | DAT_01c3dee4
    MOV dword ptr [0x01c3dee8],ECX      ; 004946af | DAT_01c3dee8
    MOV [0x01c3deec],EAX                ; 004946b5 | DAT_01c3deec
    MOV dword ptr [0x0062202c],EBX      ; 004946ba | DAT_0062202c
    MOV dword ptr [0x00622030],ESI      ; 004946c0 | DAT_00622030
    MOV dword ptr [0x0062205c],ESI      ; 004946c6 | DAT_0062205c
    MOV dword ptr [0x00622060],ESI      ; 004946cc | DAT_00622060
    MOV dword ptr [0x0062208c],ESI      ; 004946d2 | DAT_0062208c
    MOV dword ptr [0x00622090],EBX      ; 004946d8 | DAT_00622090
    MOV dword ptr [0x006220bc],EBX      ; 004946de | DAT_006220bc
    MOV dword ptr [0x006220c0],EBX      ; 004946e4 | DAT_006220c0
    MOV EDX,0x2                         ; 004946ea
    MOV ECX,0x3                         ; 004946ef
    MOV ESI,dword ptr [0x0060b280]      ; 004946f4 | DAT_0060b280
    MOV dword ptr [0x01c3def0],EDX      ; 004946fa | DAT_01c3def0
    PUSH ESI                            ; 00494700 | DAT_01ba5c50
    LEA ESI,[ESP + 0x54]                ; 00494701
    MOV dword ptr [0x01c3def4],ECX      ; 00494705 | DAT_01c3def4
    CALL FUN_0046b650                   ; 0049470b
        ;   XREF to: 0046b650 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b650()
    LEA ESI,[ESP + 0x54]                ; 00494710
    ADD ESP,0x4                         ; 00494714
    MOVSD ES:EDI,ESI                    ; 00494717 | DAT_01c3deb8
    MOVSD ES:EDI,ESI                    ; 00494718 | DAT_01c3debc
    MOVSD ES:EDI,ESI                    ; 00494719 | DAT_01c3dec0
    MOV ESI,dword ptr [0x007bda74]      ; 0049471a | DAT_007bda74
    MOV ECX,0xa                         ; 00494720
    XOR EDI,EDI                         ; 00494725
    LEA ESI,[ESI + 0x10]                ; 00494727
    MOV dword ptr [0x01c3debc],EDI      ; 0049472a | DAT_01c3debc
    LEA EDI,[ESP + 0x28]                ; 00494730
    MOVSD.REP ES:EDI,ESI                ; 00494734
    MOV ECX,0xa                         ; 00494736
    MOV EDI,ESP                         ; 0049473b
    LEA ESI,[ESP + 0x28]                ; 0049473d
    MOVSD.REP ES:EDI,ESI                ; 00494741
    FLD double ptr [0x005d53a2]         ; 00494743 | DAT_005d53a2
    FLD float ptr [ESP + 0x8]           ; 00494749
    FMUL ST1                            ; 0049474d
    FLD float ptr [ESP + 0x14]          ; 0049474f
    FMUL ST2                            ; 00494753
    FLD float ptr [ESP + 0x20]          ; 00494755
    FMULP ST3                           ; 00494759
    FXCH                                ; 0049475b
    CALL FUN_005b7ff0                   ; 0049475d
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH                                ; 00494762
    CALL FUN_005b7ff0                   ; 00494764
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH ST2                            ; 00494769
    CALL FUN_005b7ff0                   ; 0049476b
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH                                ; 00494770
    FISTP dword ptr [0x01c3dec4]        ; 00494772 | DAT_01c3dec4
    FXCH                                ; 00494778
    FISTP dword ptr [0x01c3dec8]        ; 0049477a | DAT_01c3dec8
    FISTP dword ptr [0x01c3decc]        ; 00494780 | DAT_01c3decc
    ADD ESP,0x5c                        ; 00494786
    POP EDI                             ; 00494789
    POP ESI                             ; 0049478a
    POP EBX                             ; 0049478b
    RET                                 ; 0049478c

