; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CCrater_save_FUN_00487e90(undefined4 *param_1,undefined4 param_2)
;
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_save_FUN_0048c850 at 0048c880
;
; Referenced Globals:
;   TerminatedCString s_d_d_f_f_00581301
;   TerminatedCString s_f_f_f_0058130e
;   TerminatedCString s_f_f_f_00581318
;   TerminatedCString s_f_f_f_00581322
;   TerminatedCString s_f_f_f_0058132c
;   TerminatedCString s_f_f_f_00581336
;   TerminatedCString s_f_f_f_00581340
;
; Called Functions:
;   crt_stdio.c_fprintf_FUN_005644f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00487e90
        ;   Label: core_fire.cpp_CCrater_save_FUN_00487e90
    PUSH ESI                            ; 00487e91
    PUSH EDI                            ; 00487e92
    PUSH EBP                            ; 00487e93
    MOV EBP,dword ptr [ESP + 0x14]      ; 00487e94
    MOV ESI,dword ptr [ESP + 0x18]      ; 00487e98
    SUB ESP,0x8                         ; 00487e9c
    FLD float ptr [EBP + 0x18]          ; 00487e9f
    FSTP double ptr [ESP]               ; 00487ea2
    SUB ESP,0x8                         ; 00487ea5
    FLD float ptr [EBP + 0x8]           ; 00487ea8
    FSTP double ptr [ESP]               ; 00487eab
    MOV EDX,dword ptr [EBP + 0x4]       ; 00487eae
    PUSH EDX                            ; 00487eb1
    MOV ECX,dword ptr [EBP]             ; 00487eb2
    PUSH ECX                            ; 00487eb5
    PUSH 0x581301                       ; 00487eb6 | = "%d,%d,%f,%f\n"
    PUSH ESI                            ; 00487ebb
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 00487ebc
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x20                        ; 00487ec1
    SUB ESP,0x8                         ; 00487ec4
    FLD float ptr [EBP + 0x14]          ; 00487ec7
    FSTP double ptr [ESP]               ; 00487eca
    SUB ESP,0x8                         ; 00487ecd
    FLD float ptr [EBP + 0x10]          ; 00487ed0
    FSTP double ptr [ESP]               ; 00487ed3
    SUB ESP,0x8                         ; 00487ed6
    FLD float ptr [EBP + 0xc]           ; 00487ed9
    FSTP double ptr [ESP]               ; 00487edc
    PUSH 0x58130e                       ; 00487edf | = "%f,%f,%f\n"
    PUSH ESI                            ; 00487ee4
    MOV EBX,EBP                         ; 00487ee5
    LEA EDI,[EBP + 0x24]                ; 00487ee7
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 00487eea
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x20                        ; 00487eef
    SUB ESP,0x8                         ; 00487ef2
        ;   Label: LAB_00487ef2
    FLD float ptr [EBX + 0x24]          ; 00487ef5
    FSTP double ptr [ESP]               ; 00487ef8
    SUB ESP,0x8                         ; 00487efb
    FLD float ptr [EBX + 0x20]          ; 00487efe
    FSTP double ptr [ESP]               ; 00487f01
    SUB ESP,0x8                         ; 00487f04
    FLD float ptr [EBX + 0x1c]          ; 00487f07
    FSTP double ptr [ESP]               ; 00487f0a
    PUSH 0x581318                       ; 00487f0d | = "%f,%f,%f\n"
    PUSH ESI                            ; 00487f12
    ADD EBX,0xc                         ; 00487f13
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 00487f16
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x20                        ; 00487f1b
    CMP EBX,EDI                         ; 00487f1e
    JNZ 0x00487ef2                      ; 00487f20
        ;   XREF to: 00487ef2 (CONDITIONAL_JUMP)  ; LAB_00487ef2
    SUB ESP,0x8                         ; 00487f22
    FLD float ptr [EBP + 0x48]          ; 00487f25
    FSTP double ptr [ESP]               ; 00487f28
    SUB ESP,0x8                         ; 00487f2b
    FLD float ptr [EBP + 0x44]          ; 00487f2e
    FSTP double ptr [ESP]               ; 00487f31
    SUB ESP,0x8                         ; 00487f34
    FLD float ptr [EBP + 0x40]          ; 00487f37
    FSTP double ptr [ESP]               ; 00487f3a
    PUSH 0x581322                       ; 00487f3d | = "%f,%f,%f\n"
    PUSH ESI                            ; 00487f42
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 00487f43
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x20                        ; 00487f48
    SUB ESP,0x8                         ; 00487f4b
    FLD float ptr [EBP + 0x54]          ; 00487f4e
    FSTP double ptr [ESP]               ; 00487f51
    SUB ESP,0x8                         ; 00487f54
    FLD float ptr [EBP + 0x50]          ; 00487f57
    FSTP double ptr [ESP]               ; 00487f5a
    SUB ESP,0x8                         ; 00487f5d
    FLD float ptr [EBP + 0x4c]          ; 00487f60
    FSTP double ptr [ESP]               ; 00487f63
    PUSH 0x58132c                       ; 00487f66 | = "%f,%f,%f\n"
    PUSH ESI                            ; 00487f6b
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 00487f6c
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x20                        ; 00487f71
    SUB ESP,0x8                         ; 00487f74
    FLD float ptr [EBP + 0x60]          ; 00487f77
    FSTP double ptr [ESP]               ; 00487f7a
    SUB ESP,0x8                         ; 00487f7d
    FLD float ptr [EBP + 0x5c]          ; 00487f80
    FSTP double ptr [ESP]               ; 00487f83
    SUB ESP,0x8                         ; 00487f86
    FLD float ptr [EBP + 0x58]          ; 00487f89
    FSTP double ptr [ESP]               ; 00487f8c
    PUSH 0x581336                       ; 00487f8f | = "%f,%f,%f\n"
    PUSH ESI                            ; 00487f94
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 00487f95
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x20                        ; 00487f9a
    SUB ESP,0x8                         ; 00487f9d
    FLD float ptr [EBP + 0x6c]          ; 00487fa0
    FSTP double ptr [ESP]               ; 00487fa3
    SUB ESP,0x8                         ; 00487fa6
    FLD float ptr [EBP + 0x68]          ; 00487fa9
    FSTP double ptr [ESP]               ; 00487fac
    SUB ESP,0x8                         ; 00487faf
    FLD float ptr [EBP + 0x64]          ; 00487fb2
    FSTP double ptr [ESP]               ; 00487fb5
    PUSH 0x581340                       ; 00487fb8 | = "%f,%f,%f\n"
    PUSH ESI                            ; 00487fbd
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 00487fbe
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x20                        ; 00487fc3
    POP EBP                             ; 00487fc6
    POP EDI                             ; 00487fc7
    POP ESI                             ; 00487fc8
    POP EBX                             ; 00487fc9
    RET                                 ; 00487fca

