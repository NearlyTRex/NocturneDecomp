; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00565f30(int param_1)
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
;   FUN_00563060 at 005632c7
;
; Referenced Globals:
;   undefined4 DAT_005eb7bd
;   undefined4 DAT_0264be64
;   undefined4 DAT_0264be68
;
; Called Functions:
;   FUN_005469a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00565f30
        ;   Label: FUN_00565f30
    PUSH EDI                            ; 00565f31
    PUSH EBP                            ; 00565f32
    SUB ESP,0x54                        ; 00565f33
    MOV EBX,ESI                         ; 00565f36
    MOV EDX,dword ptr [0x0264be68]      ; 00565f38 | DAT_0264be68
    MOV EBP,dword ptr [ESP + 0x64]      ; 00565f3e
    PUSH EDX                            ; 00565f42
    ADD EBP,0x2b4                       ; 00565f43
    PUSH EBP                            ; 00565f49
    LEA ESI,[ESP + 0x20]                ; 00565f4a
    LEA EDI,[ESP + 0x38]                ; 00565f4e
    CALL FUN_005469a0                   ; 00565f52
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005469a0()
    ADD ESP,0x8                         ; 00565f57
    MOV ECX,dword ptr [0x0264be64]      ; 00565f5a | DAT_0264be64
    LEA ESI,[ESP + 0x18]                ; 00565f60
    PUSH ECX                            ; 00565f64
    MOVSD ES:EDI,ESI                    ; 00565f65
    MOVSD ES:EDI,ESI                    ; 00565f66
    MOVSD ES:EDI,ESI                    ; 00565f67
    PUSH EBP                            ; 00565f68
    LEA ESI,[ESP + 0x2c]                ; 00565f69
    LEA EDI,[ESP + 0x8]                 ; 00565f6d
    CALL FUN_005469a0                   ; 00565f71
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005469a0()
    LEA ESI,[ESP + 0x2c]                ; 00565f76
    ADD ESP,0x8                         ; 00565f7a
    MOVSD ES:EDI,ESI                    ; 00565f7d
    MOVSD ES:EDI,ESI                    ; 00565f7e
    MOVSD ES:EDI,ESI                    ; 00565f7f
    FLD float ptr [ESP]                 ; 00565f80
    FLD float ptr [ESP + 0x4]           ; 00565f83
    FLD float ptr [ESP + 0x8]           ; 00565f87
    LEA EDI,[ESP + 0x3c]                ; 00565f8b
    LEA ESI,[ESP + 0xc]                 ; 00565f8f
    FXCH ST2                            ; 00565f93
    FADD float ptr [ESP + 0x30]         ; 00565f95
    FXCH                                ; 00565f99
    FADD float ptr [ESP + 0x34]         ; 00565f9b
    FXCH ST2                            ; 00565f9f
    FADD float ptr [ESP + 0x38]         ; 00565fa1
    FXCH                                ; 00565fa5
    FSTP float ptr [ESP + 0xc]          ; 00565fa7
    FXCH                                ; 00565fab
    FSTP float ptr [ESP + 0x10]         ; 00565fad
    FSTP float ptr [ESP + 0x14]         ; 00565fb1
    MOVSD ES:EDI,ESI                    ; 00565fb5
    MOVSD ES:EDI,ESI                    ; 00565fb6
    MOVSD ES:EDI,ESI                    ; 00565fb7
    FLD float ptr [0x005eb7bd]          ; 00565fb8 | DAT_005eb7bd
    FLD float ptr [ESP + 0x3c]          ; 00565fbe
    FMUL ST1                            ; 00565fc2
    FLD float ptr [ESP + 0x40]          ; 00565fc4
    FMUL ST2                            ; 00565fc8
    FLD float ptr [ESP + 0x44]          ; 00565fca
    FMULP ST3                           ; 00565fce
    LEA ESI,[ESP + 0x48]                ; 00565fd0
    MOV EDI,EBX                         ; 00565fd4
    FXCH                                ; 00565fd6
    FSTP float ptr [ESP + 0x48]         ; 00565fd8
    FSTP float ptr [ESP + 0x4c]         ; 00565fdc
    FSTP float ptr [ESP + 0x50]         ; 00565fe0
    MOVSD ES:EDI,ESI                    ; 00565fe4
    MOVSD ES:EDI,ESI                    ; 00565fe5
    MOVSD ES:EDI,ESI                    ; 00565fe6
    MOV EAX,EBX                         ; 00565fe7
    ADD ESP,0x54                        ; 00565fe9
    POP EBP                             ; 00565fec
    POP EDI                             ; 00565fed
    POP EBX                             ; 00565fee
    RET                                 ; 00565fef

