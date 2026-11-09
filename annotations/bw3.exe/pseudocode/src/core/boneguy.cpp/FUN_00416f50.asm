; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_boneguy_cpp_FUN_00416f50(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005b6d32
;   undefined4 DAT_005b6d3a
;
; Called Functions:
;   core_actor.cpp_CVector3f_ctor_FUN_0040d220
;   core_actor.cpp_FUN_00408b80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00416f50
        ;   Label: core_boneguy.cpp_FUN_00416f50
    PUSH EDI                            ; 00416f51
    PUSH EBP                            ; 00416f52
    MOV EBP,ESP                         ; 00416f53
    SUB ESP,0x78                        ; 00416f55
    AND ESP,0xfffffff8                  ; 00416f58
    MOV EBX,ESI                         ; 00416f5b
    MOV EDX,dword ptr [EBP + 0x10]      ; 00416f5d
    MOV EAX,dword ptr [EBP + 0x10]      ; 00416f60
    PUSH EDX                            ; 00416f63
    MOV EAX,dword ptr [EAX + 0x154]     ; 00416f64
    LEA ESI,[ESP + 0x4]                 ; 00416f6a
    LEA EDI,[ESP + 0x1c]                ; 00416f6e
    CALL dword ptr [EAX + 0x1c]         ; 00416f72
    MOV ECX,0x6                         ; 00416f75
    ADD ESP,0x4                         ; 00416f7a
    LEA EAX,[ESP + 0x60]                ; 00416f7d
    MOV ESI,ESP                         ; 00416f81
    PUSH EAX                            ; 00416f83
    MOVSD.REP ES:EDI,ESI                ; 00416f84
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040d220 ; 00416f86
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040d220(CVector3f * this_ptr)
    LEA EDI,[ESP + 0x70]                ; 00416f8b
    ADD ESP,0x4                         ; 00416f8f
    LEA ESI,[ESP + 0x60]                ; 00416f92
    FLD float ptr [ESP + 0x18]          ; 00416f96
    FLD float ptr [ESP + 0x1c]          ; 00416f9a
    FLD float ptr [ESP + 0x20]          ; 00416f9e
    FXCH ST2                            ; 00416fa2
    FADD float ptr [ESP + 0x24]         ; 00416fa4
    FXCH                                ; 00416fa8
    FADD float ptr [ESP + 0x28]         ; 00416faa
    FXCH ST2                            ; 00416fae
    FADD float ptr [ESP + 0x2c]         ; 00416fb0
    FXCH                                ; 00416fb4
    FSTP float ptr [ESP + 0x60]         ; 00416fb6
    FXCH                                ; 00416fba
    FSTP float ptr [ESP + 0x64]         ; 00416fbc
    FSTP float ptr [ESP + 0x68]         ; 00416fc0
    MOVSD ES:EDI,ESI                    ; 00416fc4
    MOVSD ES:EDI,ESI                    ; 00416fc5
    MOVSD ES:EDI,ESI                    ; 00416fc6
    LEA ESI,[ESP + 0x30]                ; 00416fc7
    PUSH ESI                            ; 00416fcb
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040d220 ; 00416fcc
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040d220(CVector3f * this_ptr)
    ADD ESP,0x4                         ; 00416fd1
    FLD float ptr [0x005b6d32]          ; 00416fd4 | DAT_005b6d32
    FLD float ptr [ESP + 0x6c]          ; 00416fda
    FMUL ST1                            ; 00416fde
    FLD float ptr [ESP + 0x70]          ; 00416fe0
    FMUL ST2                            ; 00416fe4
    FLD float ptr [ESP + 0x74]          ; 00416fe6
    FMULP ST3                           ; 00416fea
    LEA EDI,[ESP + 0x3c]                ; 00416fec
    LEA ESI,[ESP + 0x30]                ; 00416ff0
    FLD float ptr [ESP + 0x20]          ; 00416ff4
    FXCH ST2                            ; 00416ff8
    FSTP float ptr [ESP + 0x30]         ; 00416ffa
    FSTP float ptr [ESP + 0x34]         ; 00416ffe
    FXCH                                ; 00417002
    FSTP float ptr [ESP + 0x38]         ; 00417004
    MOVSD ES:EDI,ESI                    ; 00417008
    MOVSD ES:EDI,ESI                    ; 00417009
    MOVSD ES:EDI,ESI                    ; 0041700a
    FADD double ptr [0x005b6d3a]        ; 0041700b | DAT_005b6d3a
    LEA EDI,[ESP + 0x48]                ; 00417011
    LEA ESI,[ESP + 0x3c]                ; 00417015
    FSTP float ptr [ESP + 0x44]         ; 00417019
    MOVSD ES:EDI,ESI                    ; 0041701d
    MOVSD ES:EDI,ESI                    ; 0041701e
    MOVSD ES:EDI,ESI                    ; 0041701f
    LEA ESI,[ESP + 0x48]                ; 00417020
    PUSH ESI                            ; 00417024
    MOV ECX,dword ptr [EBP + 0x10]      ; 00417025
    PUSH ECX                            ; 00417028
    LEA ESI,[ESP + 0x5c]                ; 00417029
    MOV EDI,EBX                         ; 0041702d
    CALL core_actor.cpp_FUN_00408b80    ; 0041702f
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x5c]                ; 00417034
    ADD ESP,0x8                         ; 00417038
    MOVSD ES:EDI,ESI                    ; 0041703b
    MOVSD ES:EDI,ESI                    ; 0041703c
    MOVSD ES:EDI,ESI                    ; 0041703d
    MOV EAX,EBX                         ; 0041703e
    MOV ESP,EBP                         ; 00417040
    POP EBP                             ; 00417042
    POP EDI                             ; 00417043
    POP EBX                             ; 00417044
    RET                                 ; 00417045

