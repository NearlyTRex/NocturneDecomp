; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004abdb0(void)
;
; Local Variables:
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   FUN_004b5100 at 004b5277
;
; Referenced Globals:
;   undefined4 DAT_005df17c
;   undefined4 DAT_00612560
;   undefined4 DAT_007c6120
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01c57078
;   undefined4 DAT_01c5707c
;   undefined4 DAT_01c57080
;   undefined4 DAT_01c57084
;   undefined4 DAT_01c57088
;   undefined4 DAT_01c5708c
;   undefined4 DAT_01c57094
;   undefined4 DAT_01c57098
;   undefined4 DAT_01c5709c
;   undefined4 DAT_01c570a0
;   undefined4 DAT_01c570a4
;   ... and 4 more
;
; Called Functions:
;   FUN_00483b50
;   FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004abdb0
        ;   Label: FUN_004abdb0
    PUSH ESI                            ; 004abdb1
    PUSH EDI                            ; 004abdb2
    SUB ESP,0x5c                        ; 004abdb3
    MOV EDX,0x4                         ; 004abdb6
    MOV EAX,0x1                         ; 004abdbb
    LEA ESI,[ESP + 0x50]                ; 004abdc0
    MOV EBX,dword ptr [0x00612560]      ; 004abdc4 | DAT_00612560
    MOV EDI,0x1c57078                   ; 004abdca
    XOR ECX,ECX                         ; 004abdcf
    MOV dword ptr [0x01c57094],EDX      ; 004abdd1 | DAT_01c57094
    MOV dword ptr [0x01c57098],ECX      ; 004abdd7 | DAT_01c57098
    MOV dword ptr [0x01c5709c],ECX      ; 004abddd | DAT_01c5709c
    MOV dword ptr [0x01c570a0],ECX      ; 004abde3 | DAT_01c570a0
    MOV dword ptr [0x01c570a4],ECX      ; 004abde9 | DAT_01c570a4
    MOV dword ptr [0x01c570a8],ECX      ; 004abdef | DAT_01c570a8
    MOV [0x01c570ac],EAX                ; 004abdf5 | DAT_01c570ac
    PUSH EBX                            ; 004abdfa | DAT_01bc120c
    MOV EDX,0x2                         ; 004abdfb
    MOV ECX,0x3                         ; 004abe00
    MOV dword ptr [0x01c570b0],EDX      ; 004abe05 | DAT_01c570b0
    MOV dword ptr [0x01c570b4],ECX      ; 004abe0b | DAT_01c570b4
    CALL FUN_00483b50                   ; 004abe11
        ;   XREF to: 00483b50 (UNCONDITIONAL_CALL)  ; undefined FUN_00483b50()
    LEA ESI,[ESP + 0x54]                ; 004abe16
    ADD ESP,0x4                         ; 004abe1a
    MOVSD ES:EDI,ESI                    ; 004abe1d | DAT_01c57078
    MOVSD ES:EDI,ESI                    ; 004abe1e | DAT_01c5707c
    MOVSD ES:EDI,ESI                    ; 004abe1f | DAT_01c57080
    XOR ESI,ESI                         ; 004abe20
    MOV dword ptr [0x01c5707c],ESI      ; 004abe22 | DAT_01c5707c
    MOV ESI,dword ptr [0x007c6120]      ; 004abe28 | DAT_007c6120
    MOV ECX,0xa                         ; 004abe2e
    LEA EDI,[ESP + 0x28]                ; 004abe33
    LEA ESI,[ESI + 0x10]                ; 004abe37
    MOVSD.REP ES:EDI,ESI                ; 004abe3a
    MOV ECX,0xa                         ; 004abe3c
    MOV EDI,ESP                         ; 004abe41
    LEA ESI,[ESP + 0x28]                ; 004abe43
    MOVSD.REP ES:EDI,ESI                ; 004abe47
    FLD double ptr [0x005df17c]         ; 004abe49 | DAT_005df17c
    FLD float ptr [ESP + 0x8]           ; 004abe4f
    FMUL ST1                            ; 004abe53
    FLD float ptr [ESP + 0x14]          ; 004abe55
    FMUL ST2                            ; 004abe59
    FLD float ptr [ESP + 0x20]          ; 004abe5b
    FMULP ST3                           ; 004abe5f
    FXCH                                ; 004abe61
    CALL FUN_005c03a0                   ; 004abe63
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH                                ; 004abe68
    CALL FUN_005c03a0                   ; 004abe6a
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH ST2                            ; 004abe6f
    CALL FUN_005c03a0                   ; 004abe71
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH                                ; 004abe76
    FISTP dword ptr [0x01c57084]        ; 004abe78 | DAT_01c57084
    FXCH                                ; 004abe7e
    FISTP dword ptr [0x01c57088]        ; 004abe80 | DAT_01c57088
    FISTP dword ptr [0x01c5708c]        ; 004abe86 | DAT_01c5708c
    ADD ESP,0x5c                        ; 004abe8c
    POP EDI                             ; 004abe8f
    POP ESI                             ; 004abe90
    POP EBX                             ; 004abe91
    RET                                 ; 004abe92

