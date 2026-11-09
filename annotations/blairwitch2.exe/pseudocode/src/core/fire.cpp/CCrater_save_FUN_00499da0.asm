; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CCrater_save_FUN_00499da0(CCrater *this_ptr,_FILE *file_handle)
;
; Parameters:
; CCrater *        Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_save_FUN_0049eb00 at 0049eb30
;
; Referenced Globals:
;   TerminatedCString s_d_d_f_f_005d5607
;   TerminatedCString s_f_f_f_005d5614
;   TerminatedCString s_f_f_f_005d561e
;   TerminatedCString s_f_f_f_005d5628
;   TerminatedCString s_f_f_f_005d5632
;   TerminatedCString s_f_f_f_005d563c
;   TerminatedCString s_f_f_f_005d5646
;
; Called Functions:
;   crt_unknown.c_FUN_005b8010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00499da0
        ;   Label: core_fire.cpp_CCrater_save_FUN_00499da0
    PUSH ESI                            ; 00499da1
    PUSH EDI                            ; 00499da2
    PUSH EBP                            ; 00499da3
    MOV EBP,dword ptr [ESP + 0x14]      ; 00499da4
    MOV ESI,dword ptr [ESP + 0x18]      ; 00499da8
    SUB ESP,0x8                         ; 00499dac
    FLD float ptr [EBP + 0x18]          ; 00499daf
    FSTP double ptr [ESP]               ; 00499db2
    SUB ESP,0x8                         ; 00499db5
    FLD float ptr [EBP + 0x8]           ; 00499db8
    FSTP double ptr [ESP]               ; 00499dbb
    MOV EDX,dword ptr [EBP + 0x4]       ; 00499dbe
    PUSH EDX                            ; 00499dc1
    MOV ECX,dword ptr [EBP]             ; 00499dc2
    PUSH ECX                            ; 00499dc5
    PUSH 0x5d5607                       ; 00499dc6 | = "%d,%d,%f,%f\n"
    PUSH ESI                            ; 00499dcb
    CALL crt_unknown.c_FUN_005b8010     ; 00499dcc
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x20                        ; 00499dd1
    SUB ESP,0x8                         ; 00499dd4
    FLD float ptr [EBP + 0x14]          ; 00499dd7
    FSTP double ptr [ESP]               ; 00499dda
    SUB ESP,0x8                         ; 00499ddd
    FLD float ptr [EBP + 0x10]          ; 00499de0
    FSTP double ptr [ESP]               ; 00499de3
    SUB ESP,0x8                         ; 00499de6
    FLD float ptr [EBP + 0xc]           ; 00499de9
    FSTP double ptr [ESP]               ; 00499dec
    PUSH 0x5d5614                       ; 00499def | = "%f,%f,%f\n"
    PUSH ESI                            ; 00499df4
    MOV EBX,EBP                         ; 00499df5
    LEA EDI,[EBP + 0x24]                ; 00499df7
    CALL crt_unknown.c_FUN_005b8010     ; 00499dfa
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x20                        ; 00499dff
    SUB ESP,0x8                         ; 00499e02
        ;   Label: LAB_00499e02
    FLD float ptr [EBX + 0x24]          ; 00499e05
    FSTP double ptr [ESP]               ; 00499e08
    SUB ESP,0x8                         ; 00499e0b
    FLD float ptr [EBX + 0x20]          ; 00499e0e
    FSTP double ptr [ESP]               ; 00499e11
    SUB ESP,0x8                         ; 00499e14
    FLD float ptr [EBX + 0x1c]          ; 00499e17
    FSTP double ptr [ESP]               ; 00499e1a
    PUSH 0x5d561e                       ; 00499e1d | = "%f,%f,%f\n"
    PUSH ESI                            ; 00499e22
    ADD EBX,0xc                         ; 00499e23
    CALL crt_unknown.c_FUN_005b8010     ; 00499e26
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x20                        ; 00499e2b
    CMP EBX,EDI                         ; 00499e2e
    JNZ 0x00499e02                      ; 00499e30
        ;   XREF to: 00499e02 (CONDITIONAL_JUMP)  ; LAB_00499e02
    SUB ESP,0x8                         ; 00499e32
    FLD float ptr [EBP + 0x48]          ; 00499e35
    FSTP double ptr [ESP]               ; 00499e38
    SUB ESP,0x8                         ; 00499e3b
    FLD float ptr [EBP + 0x44]          ; 00499e3e
    FSTP double ptr [ESP]               ; 00499e41
    SUB ESP,0x8                         ; 00499e44
    FLD float ptr [EBP + 0x40]          ; 00499e47
    FSTP double ptr [ESP]               ; 00499e4a
    PUSH 0x5d5628                       ; 00499e4d | = "%f,%f,%f\n"
    PUSH ESI                            ; 00499e52
    CALL crt_unknown.c_FUN_005b8010     ; 00499e53
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x20                        ; 00499e58
    SUB ESP,0x8                         ; 00499e5b
    FLD float ptr [EBP + 0x54]          ; 00499e5e
    FSTP double ptr [ESP]               ; 00499e61
    SUB ESP,0x8                         ; 00499e64
    FLD float ptr [EBP + 0x50]          ; 00499e67
    FSTP double ptr [ESP]               ; 00499e6a
    SUB ESP,0x8                         ; 00499e6d
    FLD float ptr [EBP + 0x4c]          ; 00499e70
    FSTP double ptr [ESP]               ; 00499e73
    PUSH 0x5d5632                       ; 00499e76 | = "%f,%f,%f\n"
    PUSH ESI                            ; 00499e7b
    CALL crt_unknown.c_FUN_005b8010     ; 00499e7c
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x20                        ; 00499e81
    SUB ESP,0x8                         ; 00499e84
    FLD float ptr [EBP + 0x60]          ; 00499e87
    FSTP double ptr [ESP]               ; 00499e8a
    SUB ESP,0x8                         ; 00499e8d
    FLD float ptr [EBP + 0x5c]          ; 00499e90
    FSTP double ptr [ESP]               ; 00499e93
    SUB ESP,0x8                         ; 00499e96
    FLD float ptr [EBP + 0x58]          ; 00499e99
    FSTP double ptr [ESP]               ; 00499e9c
    PUSH 0x5d563c                       ; 00499e9f | = "%f,%f,%f\n"
    PUSH ESI                            ; 00499ea4
    CALL crt_unknown.c_FUN_005b8010     ; 00499ea5
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x20                        ; 00499eaa
    SUB ESP,0x8                         ; 00499ead
    FLD float ptr [EBP + 0x6c]          ; 00499eb0
    FSTP double ptr [ESP]               ; 00499eb3
    SUB ESP,0x8                         ; 00499eb6
    FLD float ptr [EBP + 0x68]          ; 00499eb9
    FSTP double ptr [ESP]               ; 00499ebc
    SUB ESP,0x8                         ; 00499ebf
    FLD float ptr [EBP + 0x64]          ; 00499ec2
    FSTP double ptr [ESP]               ; 00499ec5
    PUSH 0x5d5646                       ; 00499ec8 | = "%f,%f,%f\n"
    PUSH ESI                            ; 00499ecd
    CALL crt_unknown.c_FUN_005b8010     ; 00499ece
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x20                        ; 00499ed3
    POP EBP                             ; 00499ed6
    POP EDI                             ; 00499ed7
    POP ESI                             ; 00499ed8
    POP EBX                             ; 00499ed9
    RET                                 ; 00499eda

