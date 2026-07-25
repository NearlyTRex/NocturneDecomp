; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00447dd0(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined8       Stack[-0x24]:8  local_24
; undefined8       Stack[-0x1c]:8  local_1c
; undefined8       Stack[-0x14]:8  local_14
;
; Referenced Globals:
;   TerminatedCString s_fogR_fogG_fogB_0057bb32
;   TerminatedCString s_d_d_d_0057bb42
;   TerminatedCString s_fogVel_0057bb4c
;   TerminatedCString s_f_f_f_0057bb54
;   TerminatedCString s_f_f_0057bb5e
;   TerminatedCString s_f_0057bb65
;
; Called Functions:
;   crt_stdio.c_fprintf_FUN_005644f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00447dd0
        ;   Label: FUN_00447dd0
    PUSH ESI                            ; 00447dd1
    PUSH EDI                            ; 00447dd2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00447dd3
    MOV ESI,dword ptr [ESP + 0x14]      ; 00447dd7
    PUSH 0x57bb32                       ; 00447ddb | = "fogR,fogG,fogB\n"
    PUSH ESI                            ; 00447de0
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 00447de1
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x8                         ; 00447de6
    MOV EDX,dword ptr [EBX + 0x8]       ; 00447de9
    PUSH EDX                            ; 00447dec
    MOV ECX,dword ptr [EBX + 0x4]       ; 00447ded
    PUSH ECX                            ; 00447df0
    MOV EDI,dword ptr [EBX]             ; 00447df1
    PUSH EDI                            ; 00447df3
    PUSH 0x57bb42                       ; 00447df4 | = "%d,%d,%d\n"
    PUSH ESI                            ; 00447df9
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 00447dfa
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x14                        ; 00447dff
    PUSH 0x57bb4c                       ; 00447e02 | = "fogVel\n"
    PUSH ESI                            ; 00447e07
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 00447e08
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x8                         ; 00447e0d
    SUB ESP,0x8                         ; 00447e10
    FLD float ptr [EBX + 0x14]          ; 00447e13
    FSTP double ptr [ESP]               ; 00447e16
    SUB ESP,0x8                         ; 00447e19
    FLD float ptr [EBX + 0x10]          ; 00447e1c
    FSTP double ptr [ESP]               ; 00447e1f
    SUB ESP,0x8                         ; 00447e22
    FLD float ptr [EBX + 0xc]           ; 00447e25
    FSTP double ptr [ESP]               ; 00447e28
    PUSH 0x57bb54                       ; 00447e2b | = "%f,%f,%f\n"
    PUSH ESI                            ; 00447e30
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 00447e31
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x20                        ; 00447e36
    SUB ESP,0x8                         ; 00447e39
    FLD float ptr [EBX + 0x1c]          ; 00447e3c
    FSTP double ptr [ESP]               ; 00447e3f
    SUB ESP,0x8                         ; 00447e42
    FLD float ptr [EBX + 0x18]          ; 00447e45
    FSTP double ptr [ESP]               ; 00447e48
    PUSH 0x57bb5e                       ; 00447e4b | = "%f,%f\n"
    PUSH ESI                            ; 00447e50
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 00447e51
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x18                        ; 00447e56
    SUB ESP,0x8                         ; 00447e59
    FLD float ptr [EBX + 0x20]          ; 00447e5c
    FSTP double ptr [ESP]               ; 00447e5f
    PUSH 0x57bb65                       ; 00447e62 | = "%f\n"
    PUSH ESI                            ; 00447e67
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 00447e68
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x10                        ; 00447e6d
    POP EDI                             ; 00447e70
    POP ESI                             ; 00447e71
    POP EBX                             ; 00447e72
    RET                                 ; 00447e73

