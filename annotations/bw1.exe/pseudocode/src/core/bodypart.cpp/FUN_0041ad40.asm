; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bodypart_cpp_FUN_0041ad40(int param_1)
;
; Local Variables:
; undefined        Stack[-0x94]:1  local_94
; undefined        Stack[-0x7c]:1  local_7c
;
; XREF[2]:
;   core_bodypart.cpp_FUN_00419b10 at 00419b23
;   core_bodypart.cpp_FUN_00419b90 at 0041a0ff
;
; Referenced Globals:
;   undefined4 DAT_005d452d
;   undefined4 DAT_02c8af28
;   undefined4 DAT_02c8af2c
;   undefined4 DAT_02c8af30
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_bodypart.cpp_FUN_00418d00
;   core_box.cpp_CBox_setupCorners_FUN_0041dac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041ad40
        ;   Label: core_bodypart.cpp_FUN_0041ad40
    SUB ESP,0x90                        ; 0041ad41
    MOV EBX,dword ptr [ESP + 0x98]      ; 0041ad47
    CMP dword ptr [EBX + 0x174],0x3     ; 0041ad4e
    JL 0x0041ad60                       ; 0041ad55
        ;   XREF to: 0041ad60 (CONDITIONAL_JUMP)  ; LAB_0041ad60
    CMP dword ptr [EBX + 0x180],0x1     ; 0041ad57
    JGE 0x0041adc1                      ; 0041ad5e
        ;   XREF to: 0041adc1 (CONDITIONAL_JUMP)  ; LAB_0041adc1
    PUSH 0x0                            ; 0041ad60
        ;   Label: LAB_0041ad60
    PUSH 0x0                            ; 0041ad62
    PUSH EBX                            ; 0041ad64
    MOV dword ptr [EBX + 0x70],0x2      ; 0041ad65
    CALL core_bodypart.cpp_FUN_00418d00 ; 0041ad6c
        ;   XREF to: 00418d00 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_00418d00()
    LEA EAX,[EBX + 0x168]               ; 0041ad71
    ADD ESP,0xc                         ; 0041ad77
    MOV EDX,EAX                         ; 0041ad7a
    CMP EAX,0x2c8af28                   ; 0041ad7c
    JZ 0x0041ad9d                       ; 0041ad81
        ;   XREF to: 0041ad9d (CONDITIONAL_JUMP)  ; LAB_0041ad9d
    MOV ECX,dword ptr [0x02c8af28]      ; 0041ad83 | DAT_02c8af28
    MOV dword ptr [EAX],ECX             ; 0041ad89
    MOV ECX,dword ptr [0x02c8af2c]      ; 0041ad8b | DAT_02c8af2c
    MOV dword ptr [EAX + 0x4],ECX       ; 0041ad91
    MOV ECX,dword ptr [0x02c8af30]      ; 0041ad94 | DAT_02c8af30
    MOV dword ptr [EAX + 0x8],ECX       ; 0041ad9a
    ADD EBX,0x15c                       ; 0041ad9d
        ;   Label: LAB_0041ad9d
    CMP EBX,EDX                         ; 0041ada3
    JNZ 0x0041adaf                      ; 0041ada5
        ;   XREF to: 0041adaf (CONDITIONAL_JUMP)  ; LAB_0041adaf
    ADD ESP,0x90                        ; 0041ada7
        ;   Label: LAB_0041ada7
    POP EBX                             ; 0041adad
    RET                                 ; 0041adae
    MOV EAX,dword ptr [EDX]             ; 0041adaf
        ;   Label: LAB_0041adaf
    MOV dword ptr [EBX],EAX             ; 0041adb1
    MOV EAX,dword ptr [EDX + 0x4]       ; 0041adb3
    MOV dword ptr [EBX + 0x4],EAX       ; 0041adb6
    MOV EAX,dword ptr [EDX + 0x8]       ; 0041adb9
    MOV dword ptr [EBX + 0x8],EAX       ; 0041adbc
    JMP 0x0041ada7                      ; 0041adbf
        ;   XREF to: 0041ada7 (UNCONDITIONAL_JUMP)  ; LAB_0041ada7
    PUSH EDI                            ; 0041adc1
        ;   Label: LAB_0041adc1
    PUSH ESI                            ; 0041adc2
    PUSH EBX                            ; 0041adc3
    MOV EAX,dword ptr [EBX + 0x154]     ; 0041adc4
    LEA ESI,[ESP + 0xc]                 ; 0041adca
    LEA EDI,[ESP + 0x24]                ; 0041adce
    CALL dword ptr [EAX + 0x1c]         ; 0041add2
    MOV ECX,0x6                         ; 0041add5
    LEA ESI,[ESP + 0xc]                 ; 0041adda
    ADD ESP,0x4                         ; 0041adde
    MOVSD.REP ES:EDI,ESI                ; 0041ade1
    FLD float ptr [ESP + 0x20]          ; 0041ade3
    FLD float ptr [ESP + 0x24]          ; 0041ade7
    FLD float ptr [ESP + 0x28]          ; 0041adeb
    LEA EDI,[ESP + 0x50]                ; 0041adef
    LEA ESI,[ESP + 0x68]                ; 0041adf3
    FXCH ST2                            ; 0041adf7
    FADD float ptr [ESP + 0x2c]         ; 0041adf9
    FXCH                                ; 0041adfd
    FADD float ptr [ESP + 0x30]         ; 0041adff
    FXCH ST2                            ; 0041ae03
    FADD float ptr [ESP + 0x34]         ; 0041ae05
    FXCH                                ; 0041ae09
    FSTP float ptr [ESP + 0x68]         ; 0041ae0b
    FXCH                                ; 0041ae0f
    FSTP float ptr [ESP + 0x6c]         ; 0041ae11
    FSTP float ptr [ESP + 0x70]         ; 0041ae15
    MOVSD ES:EDI,ESI                    ; 0041ae19
    MOVSD ES:EDI,ESI                    ; 0041ae1a
    MOVSD ES:EDI,ESI                    ; 0041ae1b
    FLD float ptr [0x005d452d]          ; 0041ae1c | DAT_005d452d
    FLD float ptr [ESP + 0x50]          ; 0041ae22
    FMUL ST1                            ; 0041ae26
    FLD float ptr [ESP + 0x54]          ; 0041ae28
    FMUL ST2                            ; 0041ae2c
    LEA EAX,[ESP + 0x44]                ; 0041ae2e
    FLD float ptr [ESP + 0x58]          ; 0041ae32
    FMULP ST3                           ; 0041ae36
    PUSH EAX                            ; 0041ae38
    LEA EDI,[ESP + 0x48]                ; 0041ae39
    LEA ESI,[ESP + 0x90]                ; 0041ae3d
    FXCH                                ; 0041ae44
    FSTP float ptr [ESP + 0x90]         ; 0041ae46
    FSTP float ptr [ESP + 0x94]         ; 0041ae4d
    FSTP float ptr [ESP + 0x98]         ; 0041ae54
    MOVSD ES:EDI,ESI                    ; 0041ae5b
    MOVSD ES:EDI,ESI                    ; 0041ae5c
    MOVSD ES:EDI,ESI                    ; 0041ae5d
    PUSH EBX                            ; 0041ae5e
    LEA ESI,[ESP + 0x40]                ; 0041ae5f
    LEA EDI,[ESP + 0x64]                ; 0041ae63
    CALL core_actor.cpp_FUN_00408b40    ; 0041ae67
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x40]                ; 0041ae6c
    ADD ESP,0x8                         ; 0041ae70
    LEA EAX,[ESP + 0x74]                ; 0041ae73
    FLD float ptr [ESP + 0x2c]          ; 0041ae77
    FLD float ptr [ESP + 0x30]          ; 0041ae7b
    PUSH 0x40a00000                     ; 0041ae7f
    FLD float ptr [ESP + 0x38]          ; 0041ae84
    MOVSD ES:EDI,ESI                    ; 0041ae88
    MOVSD ES:EDI,ESI                    ; 0041ae89
    MOVSD ES:EDI,ESI                    ; 0041ae8a
    PUSH EAX                            ; 0041ae8b
    LEA EDI,[ESP + 0x7c]                ; 0041ae8c
    LEA ESI,[ESP + 0x88]                ; 0041ae90
    FXCH ST2                            ; 0041ae97
    FSUB float ptr [ESP + 0x28]         ; 0041ae99
    FXCH                                ; 0041ae9d
    FSUB float ptr [ESP + 0x2c]         ; 0041ae9f
    FXCH ST2                            ; 0041aea3
    FSUB float ptr [ESP + 0x30]         ; 0041aea5
    FXCH                                ; 0041aea9
    FSTP float ptr [ESP + 0x88]         ; 0041aeab
    LEA EAX,[EBX + 0x30]                ; 0041aeb2
    FXCH                                ; 0041aeb5
    FSTP float ptr [ESP + 0x8c]         ; 0041aeb7
    PUSH EAX                            ; 0041aebe
    LEA EAX,[ESP + 0x68]                ; 0041aebf
    ADD EBX,0xcd0                       ; 0041aec3
    PUSH EAX                            ; 0041aec9
    FSTP float ptr [ESP + 0x98]         ; 0041aeca
    PUSH EBX                            ; 0041aed1
    MOVSD ES:EDI,ESI                    ; 0041aed2
    MOVSD ES:EDI,ESI                    ; 0041aed3
    MOVSD ES:EDI,ESI                    ; 0041aed4
    CALL core_box.cpp_CBox_setupCorners_FUN_0041dac0 ; 0041aed5
        ;   XREF to: 0041dac0 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_setupCorners_FUN_0041dac0(CBox * this_ptr, CVector3f * position, CVector3f * orientation, CVector3f * extents, ...)
    ADD ESP,0x14                        ; 0041aeda
    POP ESI                             ; 0041aedd
    POP EDI                             ; 0041aede
    ADD ESP,0x90                        ; 0041aedf
    POP EBX                             ; 0041aee5
    RET                                 ; 0041aee6

