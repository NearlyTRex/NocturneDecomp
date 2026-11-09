; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_boneguy_cpp_FUN_00417e20(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005cbfda
;   undefined4 DAT_005cbfe2
;
; Called Functions:
;   core_actor.cpp_CVector3f_ctor_FUN_0040d340
;   core_actor.cpp_FUN_00408d70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00417e20
        ;   Label: core_boneguy.cpp_FUN_00417e20
    PUSH EDI                            ; 00417e21
    PUSH EBP                            ; 00417e22
    MOV EBP,ESP                         ; 00417e23
    SUB ESP,0x78                        ; 00417e25
    AND ESP,0xfffffff8                  ; 00417e28
    MOV EBX,ESI                         ; 00417e2b
    MOV EDX,dword ptr [EBP + 0x10]      ; 00417e2d
    MOV EAX,dword ptr [EBP + 0x10]      ; 00417e30
    PUSH EDX                            ; 00417e33
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 00417e34
    LEA ESI,[ESP + 0x4]                 ; 00417e3a
    LEA EDI,[ESP + 0x1c]                ; 00417e3e
    CALL dword ptr [EAX + 0x24]         ; 00417e42
    MOV ECX,0x6                         ; 00417e45
    ADD ESP,0x4                         ; 00417e4a
    LEA EAX,[ESP + 0x60]                ; 00417e4d
    MOV ESI,ESP                         ; 00417e51
    PUSH EAX                            ; 00417e53
    MOVSD.REP ES:EDI,ESI                ; 00417e54
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040d340 ; 00417e56
        ;   XREF to: 0040d340 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040d340(CVector3f * this_ptr)
    LEA EDI,[ESP + 0x70]                ; 00417e5b
    ADD ESP,0x4                         ; 00417e5f
    LEA ESI,[ESP + 0x60]                ; 00417e62
    FLD float ptr [ESP + 0x18]          ; 00417e66
    FLD float ptr [ESP + 0x1c]          ; 00417e6a
    FLD float ptr [ESP + 0x20]          ; 00417e6e
    FXCH ST2                            ; 00417e72
    FADD float ptr [ESP + 0x24]         ; 00417e74
    FXCH                                ; 00417e78
    FADD float ptr [ESP + 0x28]         ; 00417e7a
    FXCH ST2                            ; 00417e7e
    FADD float ptr [ESP + 0x2c]         ; 00417e80
    FXCH                                ; 00417e84
    FSTP float ptr [ESP + 0x60]         ; 00417e86
    FXCH                                ; 00417e8a
    FSTP float ptr [ESP + 0x64]         ; 00417e8c
    FSTP float ptr [ESP + 0x68]         ; 00417e90
    MOVSD ES:EDI,ESI                    ; 00417e94
    MOVSD ES:EDI,ESI                    ; 00417e95
    MOVSD ES:EDI,ESI                    ; 00417e96
    LEA ESI,[ESP + 0x30]                ; 00417e97
    PUSH ESI                            ; 00417e9b
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040d340 ; 00417e9c
        ;   XREF to: 0040d340 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040d340(CVector3f * this_ptr)
    ADD ESP,0x4                         ; 00417ea1
    FLD float ptr [0x005cbfda]          ; 00417ea4 | DAT_005cbfda
    FLD float ptr [ESP + 0x6c]          ; 00417eaa
    FMUL ST1                            ; 00417eae
    FLD float ptr [ESP + 0x70]          ; 00417eb0
    FMUL ST2                            ; 00417eb4
    FLD float ptr [ESP + 0x74]          ; 00417eb6
    FMULP ST3                           ; 00417eba
    LEA EDI,[ESP + 0x3c]                ; 00417ebc
    LEA ESI,[ESP + 0x30]                ; 00417ec0
    FLD float ptr [ESP + 0x20]          ; 00417ec4
    FXCH ST2                            ; 00417ec8
    FSTP float ptr [ESP + 0x30]         ; 00417eca
    FSTP float ptr [ESP + 0x34]         ; 00417ece
    FXCH                                ; 00417ed2
    FSTP float ptr [ESP + 0x38]         ; 00417ed4
    MOVSD ES:EDI,ESI                    ; 00417ed8
    MOVSD ES:EDI,ESI                    ; 00417ed9
    MOVSD ES:EDI,ESI                    ; 00417eda
    FADD double ptr [0x005cbfe2]        ; 00417edb | DAT_005cbfe2
    LEA EDI,[ESP + 0x48]                ; 00417ee1
    LEA ESI,[ESP + 0x3c]                ; 00417ee5
    FSTP float ptr [ESP + 0x44]         ; 00417ee9
    MOVSD ES:EDI,ESI                    ; 00417eed
    MOVSD ES:EDI,ESI                    ; 00417eee
    MOVSD ES:EDI,ESI                    ; 00417eef
    LEA ESI,[ESP + 0x48]                ; 00417ef0
    PUSH ESI                            ; 00417ef4
    MOV ECX,dword ptr [EBP + 0x10]      ; 00417ef5
    PUSH ECX                            ; 00417ef8
    LEA ESI,[ESP + 0x5c]                ; 00417ef9
    MOV EDI,EBX                         ; 00417efd
    CALL core_actor.cpp_FUN_00408d70    ; 00417eff
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x5c]                ; 00417f04
    ADD ESP,0x8                         ; 00417f08
    MOVSD ES:EDI,ESI                    ; 00417f0b
    MOVSD ES:EDI,ESI                    ; 00417f0c
    MOVSD ES:EDI,ESI                    ; 00417f0d
    MOV EAX,EBX                         ; 00417f0e
    MOV ESP,EBP                         ; 00417f10
    POP EBP                             ; 00417f12
    POP EDI                             ; 00417f13
    POP EBX                             ; 00417f14
    RET                                 ; 00417f15

