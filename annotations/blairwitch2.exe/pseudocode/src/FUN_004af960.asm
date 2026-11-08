; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004af960(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined        Stack[-0x48]:1  local_48
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_004ad640 at 004add66
;
; Referenced Globals:
;   undefined4 DAT_005d7033
;   undefined4 DAT_01cb06b8
;   undefined4 DAT_01cb06bc
;
; Called Functions:
;   FUN_005469a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004af960
        ;   Label: FUN_004af960
    PUSH EDI                            ; 004af961
    PUSH EBP                            ; 004af962
    SUB ESP,0x54                        ; 004af963
    MOV EBX,ESI                         ; 004af966
    MOV EDX,dword ptr [0x01cb06bc]      ; 004af968 | DAT_01cb06bc
    MOV EBP,dword ptr [ESP + 0x64]      ; 004af96e
    PUSH EDX                            ; 004af972
    ADD EBP,0x2b4                       ; 004af973
    PUSH EBP                            ; 004af979
    LEA ESI,[ESP + 0x20]                ; 004af97a
    LEA EDI,[ESP + 0x38]                ; 004af97e
    CALL FUN_005469a0                   ; 004af982
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005469a0()
    ADD ESP,0x8                         ; 004af987
    MOV ECX,dword ptr [0x01cb06b8]      ; 004af98a | DAT_01cb06b8
    LEA ESI,[ESP + 0x18]                ; 004af990
    PUSH ECX                            ; 004af994
    MOVSD ES:EDI,ESI                    ; 004af995
    MOVSD ES:EDI,ESI                    ; 004af996
    MOVSD ES:EDI,ESI                    ; 004af997
    PUSH EBP                            ; 004af998
    LEA ESI,[ESP + 0x2c]                ; 004af999
    LEA EDI,[ESP + 0x8]                 ; 004af99d
    CALL FUN_005469a0                   ; 004af9a1
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005469a0()
    LEA ESI,[ESP + 0x2c]                ; 004af9a6
    ADD ESP,0x8                         ; 004af9aa
    MOVSD ES:EDI,ESI                    ; 004af9ad
    MOVSD ES:EDI,ESI                    ; 004af9ae
    MOVSD ES:EDI,ESI                    ; 004af9af
    FLD float ptr [ESP]                 ; 004af9b0
    FLD float ptr [ESP + 0x4]           ; 004af9b3
    FLD float ptr [ESP + 0x8]           ; 004af9b7
    LEA EDI,[ESP + 0x3c]                ; 004af9bb
    LEA ESI,[ESP + 0xc]                 ; 004af9bf
    FXCH ST2                            ; 004af9c3
    FADD float ptr [ESP + 0x30]         ; 004af9c5
    FXCH                                ; 004af9c9
    FADD float ptr [ESP + 0x34]         ; 004af9cb
    FXCH ST2                            ; 004af9cf
    FADD float ptr [ESP + 0x38]         ; 004af9d1
    FXCH                                ; 004af9d5
    FSTP float ptr [ESP + 0xc]          ; 004af9d7
    FXCH                                ; 004af9db
    FSTP float ptr [ESP + 0x10]         ; 004af9dd
    FSTP float ptr [ESP + 0x14]         ; 004af9e1
    MOVSD ES:EDI,ESI                    ; 004af9e5
    MOVSD ES:EDI,ESI                    ; 004af9e6
    MOVSD ES:EDI,ESI                    ; 004af9e7
    FLD float ptr [0x005d7033]          ; 004af9e8 | DAT_005d7033
    FLD float ptr [ESP + 0x3c]          ; 004af9ee
    FMUL ST1                            ; 004af9f2
    FLD float ptr [ESP + 0x40]          ; 004af9f4
    FMUL ST2                            ; 004af9f8
    FLD float ptr [ESP + 0x44]          ; 004af9fa
    FMULP ST3                           ; 004af9fe
    LEA ESI,[ESP + 0x48]                ; 004afa00
    MOV EDI,EBX                         ; 004afa04
    FXCH                                ; 004afa06
    FSTP float ptr [ESP + 0x48]         ; 004afa08
    FSTP float ptr [ESP + 0x4c]         ; 004afa0c
    FSTP float ptr [ESP + 0x50]         ; 004afa10
    MOVSD ES:EDI,ESI                    ; 004afa14
    MOVSD ES:EDI,ESI                    ; 004afa15
    MOVSD ES:EDI,ESI                    ; 004afa16
    MOV EAX,EBX                         ; 004afa17
    ADD ESP,0x54                        ; 004afa19
    POP EBP                             ; 004afa1c
    POP EDI                             ; 004afa1d
    POP EBX                             ; 004afa1e
    RET                                 ; 004afa1f

