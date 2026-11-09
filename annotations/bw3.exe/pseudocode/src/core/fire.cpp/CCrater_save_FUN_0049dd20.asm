; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CCrater_save_FUN_0049dd20(CCrater *this_ptr,_FILE *file_handle)
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
;   core_fire.cpp_CFireEffect_save_FUN_004a40b0 at 004a40e0
;
; Referenced Globals:
;   TerminatedCString s_d_d_f_f_005c07cd
;   TerminatedCString s_f_f_f_005c07da
;   TerminatedCString s_f_f_f_005c07e4
;   TerminatedCString s_f_f_f_005c07ee
;   TerminatedCString s_f_f_f_005c07f8
;   TerminatedCString s_f_f_f_005c0802
;   TerminatedCString s_f_f_f_005c080c
;
; Called Functions:
;   crt_unknown.c_FUN_005a3140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049dd20
        ;   Label: core_fire.cpp_CCrater_save_FUN_0049dd20
    PUSH ESI                            ; 0049dd21
    PUSH EDI                            ; 0049dd22
    PUSH EBP                            ; 0049dd23
    MOV EBP,dword ptr [ESP + 0x14]      ; 0049dd24
    MOV ESI,dword ptr [ESP + 0x18]      ; 0049dd28
    SUB ESP,0x8                         ; 0049dd2c
    FLD float ptr [EBP + 0x18]          ; 0049dd2f
    FSTP double ptr [ESP]               ; 0049dd32
    SUB ESP,0x8                         ; 0049dd35
    FLD float ptr [EBP + 0x8]           ; 0049dd38
    FSTP double ptr [ESP]               ; 0049dd3b
    MOV EDX,dword ptr [EBP + 0x4]       ; 0049dd3e
    PUSH EDX                            ; 0049dd41
    MOV ECX,dword ptr [EBP]             ; 0049dd42
    PUSH ECX                            ; 0049dd45
    PUSH 0x5c07cd                       ; 0049dd46 | = "%d,%d,%f,%f\n"
    PUSH ESI                            ; 0049dd4b
    CALL crt_unknown.c_FUN_005a3140     ; 0049dd4c
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x20                        ; 0049dd51
    SUB ESP,0x8                         ; 0049dd54
    FLD float ptr [EBP + 0x14]          ; 0049dd57
    FSTP double ptr [ESP]               ; 0049dd5a
    SUB ESP,0x8                         ; 0049dd5d
    FLD float ptr [EBP + 0x10]          ; 0049dd60
    FSTP double ptr [ESP]               ; 0049dd63
    SUB ESP,0x8                         ; 0049dd66
    FLD float ptr [EBP + 0xc]           ; 0049dd69
    FSTP double ptr [ESP]               ; 0049dd6c
    PUSH 0x5c07da                       ; 0049dd6f | = "%f,%f,%f\n"
    PUSH ESI                            ; 0049dd74
    MOV EBX,EBP                         ; 0049dd75
    LEA EDI,[EBP + 0x24]                ; 0049dd77
    CALL crt_unknown.c_FUN_005a3140     ; 0049dd7a
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x20                        ; 0049dd7f
    SUB ESP,0x8                         ; 0049dd82
        ;   Label: LAB_0049dd82
    FLD float ptr [EBX + 0x24]          ; 0049dd85
    FSTP double ptr [ESP]               ; 0049dd88
    SUB ESP,0x8                         ; 0049dd8b
    FLD float ptr [EBX + 0x20]          ; 0049dd8e
    FSTP double ptr [ESP]               ; 0049dd91
    SUB ESP,0x8                         ; 0049dd94
    FLD float ptr [EBX + 0x1c]          ; 0049dd97
    FSTP double ptr [ESP]               ; 0049dd9a
    PUSH 0x5c07e4                       ; 0049dd9d | = "%f,%f,%f\n"
    PUSH ESI                            ; 0049dda2
    ADD EBX,0xc                         ; 0049dda3
    CALL crt_unknown.c_FUN_005a3140     ; 0049dda6
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x20                        ; 0049ddab
    CMP EBX,EDI                         ; 0049ddae
    JNZ 0x0049dd82                      ; 0049ddb0
        ;   XREF to: 0049dd82 (CONDITIONAL_JUMP)  ; LAB_0049dd82
    SUB ESP,0x8                         ; 0049ddb2
    FLD float ptr [EBP + 0x48]          ; 0049ddb5
    FSTP double ptr [ESP]               ; 0049ddb8
    SUB ESP,0x8                         ; 0049ddbb
    FLD float ptr [EBP + 0x44]          ; 0049ddbe
    FSTP double ptr [ESP]               ; 0049ddc1
    SUB ESP,0x8                         ; 0049ddc4
    FLD float ptr [EBP + 0x40]          ; 0049ddc7
    FSTP double ptr [ESP]               ; 0049ddca
    PUSH 0x5c07ee                       ; 0049ddcd | = "%f,%f,%f\n"
    PUSH ESI                            ; 0049ddd2
    CALL crt_unknown.c_FUN_005a3140     ; 0049ddd3
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x20                        ; 0049ddd8
    SUB ESP,0x8                         ; 0049dddb
    FLD float ptr [EBP + 0x54]          ; 0049ddde
    FSTP double ptr [ESP]               ; 0049dde1
    SUB ESP,0x8                         ; 0049dde4
    FLD float ptr [EBP + 0x50]          ; 0049dde7
    FSTP double ptr [ESP]               ; 0049ddea
    SUB ESP,0x8                         ; 0049dded
    FLD float ptr [EBP + 0x4c]          ; 0049ddf0
    FSTP double ptr [ESP]               ; 0049ddf3
    PUSH 0x5c07f8                       ; 0049ddf6 | = "%f,%f,%f\n"
    PUSH ESI                            ; 0049ddfb
    CALL crt_unknown.c_FUN_005a3140     ; 0049ddfc
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x20                        ; 0049de01
    SUB ESP,0x8                         ; 0049de04
    FLD float ptr [EBP + 0x60]          ; 0049de07
    FSTP double ptr [ESP]               ; 0049de0a
    SUB ESP,0x8                         ; 0049de0d
    FLD float ptr [EBP + 0x5c]          ; 0049de10
    FSTP double ptr [ESP]               ; 0049de13
    SUB ESP,0x8                         ; 0049de16
    FLD float ptr [EBP + 0x58]          ; 0049de19
    FSTP double ptr [ESP]               ; 0049de1c
    PUSH 0x5c0802                       ; 0049de1f | = "%f,%f,%f\n"
    PUSH ESI                            ; 0049de24
    CALL crt_unknown.c_FUN_005a3140     ; 0049de25
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x20                        ; 0049de2a
    SUB ESP,0x8                         ; 0049de2d
    FLD float ptr [EBP + 0x6c]          ; 0049de30
    FSTP double ptr [ESP]               ; 0049de33
    SUB ESP,0x8                         ; 0049de36
    FLD float ptr [EBP + 0x68]          ; 0049de39
    FSTP double ptr [ESP]               ; 0049de3c
    SUB ESP,0x8                         ; 0049de3f
    FLD float ptr [EBP + 0x64]          ; 0049de42
    FSTP double ptr [ESP]               ; 0049de45
    PUSH 0x5c080c                       ; 0049de48 | = "%f,%f,%f\n"
    PUSH ESI                            ; 0049de4d
    CALL crt_unknown.c_FUN_005a3140     ; 0049de4e
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x20                        ; 0049de53
    POP EBP                             ; 0049de56
    POP EDI                             ; 0049de57
    POP ESI                             ; 0049de58
    POP EBX                             ; 0049de59
    RET                                 ; 0049de5a

