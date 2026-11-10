; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_stranger_cpp_FUN_00588a10(int param_1)
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
;   core_stranger.cpp_CStranger_processFrame_FUN_00585b00 at 00585d67
;
; Referenced Globals:
;   undefined4 DAT_005f6a31
;   undefined4 DAT_02c83634
;   undefined4 DAT_02c83638
;
; Called Functions:
;   core_skeleton.cpp_FUN_00569040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00588a10
        ;   Label: core_stranger.cpp_FUN_00588a10
    PUSH EDI                            ; 00588a11
    PUSH EBP                            ; 00588a12
    SUB ESP,0x54                        ; 00588a13
    MOV EBX,ESI                         ; 00588a16
    MOV EDX,dword ptr [0x02c83638]      ; 00588a18 | DAT_02c83638
    MOV EBP,dword ptr [ESP + 0x64]      ; 00588a1e
    PUSH EDX                            ; 00588a22
    ADD EBP,0x158                       ; 00588a23
    PUSH EBP                            ; 00588a29
    LEA ESI,[ESP + 0x20]                ; 00588a2a
    LEA EDI,[ESP + 0x38]                ; 00588a2e
    CALL core_skeleton.cpp_FUN_00569040 ; 00588a32
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    ADD ESP,0x8                         ; 00588a37
    MOV ECX,dword ptr [0x02c83634]      ; 00588a3a | DAT_02c83634
    LEA ESI,[ESP + 0x18]                ; 00588a40
    PUSH ECX                            ; 00588a44
    MOVSD ES:EDI,ESI                    ; 00588a45
    MOVSD ES:EDI,ESI                    ; 00588a46
    MOVSD ES:EDI,ESI                    ; 00588a47
    PUSH EBP                            ; 00588a48
    LEA ESI,[ESP + 0x2c]                ; 00588a49
    LEA EDI,[ESP + 0x8]                 ; 00588a4d
    CALL core_skeleton.cpp_FUN_00569040 ; 00588a51
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    LEA ESI,[ESP + 0x2c]                ; 00588a56
    ADD ESP,0x8                         ; 00588a5a
    MOVSD ES:EDI,ESI                    ; 00588a5d
    MOVSD ES:EDI,ESI                    ; 00588a5e
    MOVSD ES:EDI,ESI                    ; 00588a5f
    FLD float ptr [ESP]                 ; 00588a60
    FLD float ptr [ESP + 0x4]           ; 00588a63
    FLD float ptr [ESP + 0x8]           ; 00588a67
    LEA EDI,[ESP + 0x3c]                ; 00588a6b
    LEA ESI,[ESP + 0xc]                 ; 00588a6f
    FXCH ST2                            ; 00588a73
    FADD float ptr [ESP + 0x30]         ; 00588a75
    FXCH                                ; 00588a79
    FADD float ptr [ESP + 0x34]         ; 00588a7b
    FXCH ST2                            ; 00588a7f
    FADD float ptr [ESP + 0x38]         ; 00588a81
    FXCH                                ; 00588a85
    FSTP float ptr [ESP + 0xc]          ; 00588a87
    FXCH                                ; 00588a8b
    FSTP float ptr [ESP + 0x10]         ; 00588a8d
    FSTP float ptr [ESP + 0x14]         ; 00588a91
    MOVSD ES:EDI,ESI                    ; 00588a95
    MOVSD ES:EDI,ESI                    ; 00588a96
    MOVSD ES:EDI,ESI                    ; 00588a97
    FLD float ptr [0x005f6a31]          ; 00588a98 | DAT_005f6a31
    FLD float ptr [ESP + 0x3c]          ; 00588a9e
    FMUL ST1                            ; 00588aa2
    FLD float ptr [ESP + 0x40]          ; 00588aa4
    FMUL ST2                            ; 00588aa8
    FLD float ptr [ESP + 0x44]          ; 00588aaa
    FMULP ST3                           ; 00588aae
    LEA ESI,[ESP + 0x48]                ; 00588ab0
    MOV EDI,EBX                         ; 00588ab4
    FXCH                                ; 00588ab6
    FSTP float ptr [ESP + 0x48]         ; 00588ab8
    FSTP float ptr [ESP + 0x4c]         ; 00588abc
    FSTP float ptr [ESP + 0x50]         ; 00588ac0
    MOVSD ES:EDI,ESI                    ; 00588ac4
    MOVSD ES:EDI,ESI                    ; 00588ac5
    MOVSD ES:EDI,ESI                    ; 00588ac6
    MOV EAX,EBX                         ; 00588ac7
    ADD ESP,0x54                        ; 00588ac9
    POP EBP                             ; 00588acc
    POP EDI                             ; 00588acd
    POP EBX                             ; 00588ace
    RET                                 ; 00588acf

