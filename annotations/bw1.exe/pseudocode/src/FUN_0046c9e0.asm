; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046c9e0(int param_1)
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
;   FUN_00469550 at 00469795
;
; Referenced Globals:
;   undefined4 DAT_005d9f4c
;   undefined4 DAT_01b68848
;   undefined4 DAT_01b6884c
;
; Called Functions:
;   FUN_00569040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046c9e0
        ;   Label: FUN_0046c9e0
    PUSH EDI                            ; 0046c9e1
    PUSH EBP                            ; 0046c9e2
    SUB ESP,0x54                        ; 0046c9e3
    MOV EBX,ESI                         ; 0046c9e6
    MOV EDX,dword ptr [0x01b6884c]      ; 0046c9e8 | DAT_01b6884c
    MOV EBP,dword ptr [ESP + 0x64]      ; 0046c9ee
    PUSH EDX                            ; 0046c9f2
    ADD EBP,0x158                       ; 0046c9f3
    PUSH EBP                            ; 0046c9f9
    LEA ESI,[ESP + 0x20]                ; 0046c9fa
    LEA EDI,[ESP + 0x38]                ; 0046c9fe
    CALL FUN_00569040                   ; 0046ca02
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined FUN_00569040()
    ADD ESP,0x8                         ; 0046ca07
    MOV ECX,dword ptr [0x01b68848]      ; 0046ca0a | DAT_01b68848
    LEA ESI,[ESP + 0x18]                ; 0046ca10
    PUSH ECX                            ; 0046ca14
    MOVSD ES:EDI,ESI                    ; 0046ca15
    MOVSD ES:EDI,ESI                    ; 0046ca16
    MOVSD ES:EDI,ESI                    ; 0046ca17
    PUSH EBP                            ; 0046ca18
    LEA ESI,[ESP + 0x2c]                ; 0046ca19
    LEA EDI,[ESP + 0x8]                 ; 0046ca1d
    CALL FUN_00569040                   ; 0046ca21
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined FUN_00569040()
    LEA ESI,[ESP + 0x2c]                ; 0046ca26
    ADD ESP,0x8                         ; 0046ca2a
    MOVSD ES:EDI,ESI                    ; 0046ca2d
    MOVSD ES:EDI,ESI                    ; 0046ca2e
    MOVSD ES:EDI,ESI                    ; 0046ca2f
    FLD float ptr [ESP]                 ; 0046ca30
    FLD float ptr [ESP + 0x4]           ; 0046ca33
    FLD float ptr [ESP + 0x8]           ; 0046ca37
    LEA EDI,[ESP + 0x3c]                ; 0046ca3b
    LEA ESI,[ESP + 0xc]                 ; 0046ca3f
    FXCH ST2                            ; 0046ca43
    FADD float ptr [ESP + 0x30]         ; 0046ca45
    FXCH                                ; 0046ca49
    FADD float ptr [ESP + 0x34]         ; 0046ca4b
    FXCH ST2                            ; 0046ca4f
    FADD float ptr [ESP + 0x38]         ; 0046ca51
    FXCH                                ; 0046ca55
    FSTP float ptr [ESP + 0xc]          ; 0046ca57
    FXCH                                ; 0046ca5b
    FSTP float ptr [ESP + 0x10]         ; 0046ca5d
    FSTP float ptr [ESP + 0x14]         ; 0046ca61
    MOVSD ES:EDI,ESI                    ; 0046ca65
    MOVSD ES:EDI,ESI                    ; 0046ca66
    MOVSD ES:EDI,ESI                    ; 0046ca67
    FLD float ptr [0x005d9f4c]          ; 0046ca68 | DAT_005d9f4c
    FLD float ptr [ESP + 0x3c]          ; 0046ca6e
    FMUL ST1                            ; 0046ca72
    FLD float ptr [ESP + 0x40]          ; 0046ca74
    FMUL ST2                            ; 0046ca78
    FLD float ptr [ESP + 0x44]          ; 0046ca7a
    FMULP ST3                           ; 0046ca7e
    LEA ESI,[ESP + 0x48]                ; 0046ca80
    MOV EDI,EBX                         ; 0046ca84
    FXCH                                ; 0046ca86
    FSTP float ptr [ESP + 0x48]         ; 0046ca88
    FSTP float ptr [ESP + 0x4c]         ; 0046ca8c
    FSTP float ptr [ESP + 0x50]         ; 0046ca90
    MOVSD ES:EDI,ESI                    ; 0046ca94
    MOVSD ES:EDI,ESI                    ; 0046ca95
    MOVSD ES:EDI,ESI                    ; 0046ca96
    MOV EAX,EBX                         ; 0046ca97
    ADD ESP,0x54                        ; 0046ca99
    POP EBP                             ; 0046ca9c
    POP EDI                             ; 0046ca9d
    POP EBX                             ; 0046ca9e
    RET                                 ; 0046ca9f

