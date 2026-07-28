; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_motion_cpp_CMotionList_save_FUN_004e0d20(int *param_1,undefined4 param_2)
;
; Local Variables:
; undefined8       Stack[-0x2c]:8  local_2c
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_motion_list_version_0058aee9
;   TerminatedCString s_d_0058af01
;   TerminatedCString s_state_list_0058af05
;   TerminatedCString s_d_0058af14
;   TerminatedCString s_s_0058af18
;   TerminatedCString s_motion_count_0058af1c
;   TerminatedCString s_d_0058af2d
;   TerminatedCString s_motion_d_name_fps_state_0058af31
;   TerminatedCString s_s_g_d_d_d_0058af67
;   TerminatedCString s_motion_d_exitForwardFrom_0058af79
;   TerminatedCString s_d_d_g_0058afd6
;   TerminatedCString s_motion_d_exitForwardCmd_0058afe0
;   TerminatedCString s_d_g_d_0058b033
;   TerminatedCString s_motion_d_exitBackwardToM_0058b03d
;   TerminatedCString s_d_g_0058b081
;   ... and 10 more
;
; Called Functions:
;   crt_stdio.c_fprintf_FUN_005644f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e0d20
        ;   Label: core_motion.cpp_CMotionList_save_FUN_004e0d20
    PUSH ESI                            ; 004e0d21
    PUSH EDI                            ; 004e0d22
    PUSH EBP                            ; 004e0d23
    SUB ESP,0x8                         ; 004e0d24
    MOV ESI,dword ptr [ESP + 0x20]      ; 004e0d27
    PUSH 0x58aee9                       ; 004e0d2b | = "// motion list version\n"
    PUSH ESI                            ; 004e0d30
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004e0d31
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x8                         ; 004e0d36
    PUSH 0x2                            ; 004e0d39
    PUSH 0x58af01                       ; 004e0d3b | = "%d\n"
    PUSH ESI                            ; 004e0d40
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004e0d41
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0xc                         ; 004e0d46
    PUSH 0x58af05                       ; 004e0d49 | = "// state list\n"
    PUSH ESI                            ; 004e0d4e
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004e0d4f
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x8                         ; 004e0d54
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004e0d57
    MOV EDX,dword ptr [EBX]             ; 004e0d5b
    PUSH EDX                            ; 004e0d5d
    PUSH 0x58af14                       ; 004e0d5e | = "%d\n"
    PUSH ESI                            ; 004e0d63
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004e0d64
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0xc                         ; 004e0d69
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004e0d6c
    MOV ECX,dword ptr [EDI]             ; 004e0d70
    XOR EBX,EBX                         ; 004e0d72
    TEST ECX,ECX                        ; 004e0d74
    JLE 0x004e0da0                      ; 004e0d76
        ;   XREF to: 004e0da0 (CONDITIONAL_JUMP)  ; LAB_004e0da0
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004e0d78
    ADD EDI,0x4                         ; 004e0d7c
    PUSH EDI                            ; 004e0d7f
        ;   Label: LAB_004e0d7f
    PUSH 0x58af18                       ; 004e0d80 | = "%s\n"
    PUSH ESI                            ; 004e0d85
    INC EBX                             ; 004e0d86
    ADD EDI,0x1e                        ; 004e0d87
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004e0d8a
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    MOV EAX,dword ptr [EBP]             ; 004e0d8f
    ADD ESP,0xc                         ; 004e0d92
    CMP EBX,EAX                         ; 004e0d95
    JL 0x004e0d7f                       ; 004e0d97
        ;   XREF to: 004e0d7f (CONDITIONAL_JUMP)  ; LAB_004e0d7f
    LEA EAX,[EAX]                       ; 004e0d99
    NOP                                 ; 004e0d9f
    PUSH 0x58af1c                       ; 004e0da0 | = "// motion count\n"
        ;   Label: LAB_004e0da0
    PUSH ESI                            ; 004e0da5
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004e0da6
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x8                         ; 004e0dab
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004e0dae
    MOV EDX,dword ptr [EBX + 0x964]     ; 004e0db2
    PUSH EDX                            ; 004e0db8
    PUSH 0x58af2d                       ; 004e0db9 | = "%d\n"
    PUSH ESI                            ; 004e0dbe
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004e0dbf
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0xc                         ; 004e0dc4
    XOR ECX,ECX                         ; 004e0dc7
    MOV EDI,dword ptr [EBX + 0x964]     ; 004e0dc9
    MOV dword ptr [ESP],ECX             ; 004e0dcf
    TEST EDI,EDI                        ; 004e0dd2
    JLE 0x004e0ffa                      ; 004e0dd4
        ;   XREF to: 004e0ffa (CONDITIONAL_JUMP)  ; LAB_004e0ffa
    ADD EBX,0x968                       ; 004e0dda
    MOV dword ptr [ESP + 0x4],EBX       ; 004e0de0
    MOV ECX,dword ptr [ESP]             ; 004e0de4
        ;   Label: LAB_004e0de4
    PUSH ECX                            ; 004e0de7
    PUSH 0x58af31                       ; 004e0de8 | = "// motion %d: \"name\",fps,state,fram..."
    PUSH ESI                            ; 004e0ded
    MOV EDI,dword ptr [ESP + 0x10]      ; 004e0dee
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004e0df2
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0xc                         ; 004e0df7
    MOV EBP,dword ptr [EDI + 0x64]      ; 004e0dfa
    PUSH EBP                            ; 004e0dfd
    MOV EAX,dword ptr [EDI + 0x60]      ; 004e0dfe
    PUSH EAX                            ; 004e0e01
    MOV EDX,dword ptr [EDI + 0x24]      ; 004e0e02
    PUSH EDX                            ; 004e0e05
    SUB ESP,0x8                         ; 004e0e06
    FLD float ptr [EDI + 0x20]          ; 004e0e09
    FSTP double ptr [ESP]               ; 004e0e0c
    PUSH EDI                            ; 004e0e0f
    PUSH 0x58af67                       ; 004e0e10 | = "\"%s\",%g,%d,%d,%d\n"
    PUSH ESI                            ; 004e0e15
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004e0e16
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x20                        ; 004e0e1b
    MOV EBX,dword ptr [ESP]             ; 004e0e1e
    PUSH EBX                            ; 004e0e21
    PUSH 0x58af79                       ; 004e0e22 | = "// motion %d: exitForwardFromFrameNum..."
    PUSH ESI                            ; 004e0e27
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004e0e28
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0xc                         ; 004e0e2d
    SUB ESP,0x8                         ; 004e0e30
    FLD float ptr [EDI + 0x38]          ; 004e0e33
    FSTP double ptr [ESP]               ; 004e0e36
    MOV EBP,dword ptr [EDI + 0x34]      ; 004e0e39
    PUSH EBP                            ; 004e0e3c
    MOV EAX,dword ptr [EDI + 0x28]      ; 004e0e3d
    PUSH EAX                            ; 004e0e40
    PUSH 0x58afd6                       ; 004e0e41 | = "%d,%d,%g\n"
    PUSH ESI                            ; 004e0e46
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004e0e47
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x18                        ; 004e0e4c
    PUSH EBX                            ; 004e0e4f
    PUSH 0x58afe0                       ; 004e0e50 | = "// motion %d: exitForwardCmd,exitForw..."
    PUSH ESI                            ; 004e0e55
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004e0e56
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0xc                         ; 004e0e5b
    MOV ECX,dword ptr [EDI + 0x40]      ; 004e0e5e
    PUSH ECX                            ; 004e0e61
    SUB ESP,0x8                         ; 004e0e62
    FLD float ptr [EDI + 0x3c]          ; 004e0e65
    FSTP double ptr [ESP]               ; 004e0e68
    MOV EBP,dword ptr [EDI + 0x30]      ; 004e0e6b
    PUSH EBP                            ; 004e0e6e
    PUSH 0x58b033                       ; 004e0e6f | = "%d,%g,%d\n"
    PUSH ESI                            ; 004e0e74
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004e0e75
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x18                        ; 004e0e7a
    PUSH EBX                            ; 004e0e7d
    PUSH 0x58b03d                       ; 004e0e7e | = "// motion %d: exitBackwardToMotionNum..."
    PUSH ESI                            ; 004e0e83
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004e0e84
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0xc                         ; 004e0e89
    SUB ESP,0x8                         ; 004e0e8c
    FLD float ptr [EDI + 0x54]          ; 004e0e8f
    FSTP double ptr [ESP]               ; 004e0e92
    MOV EDX,dword ptr [EDI + 0x50]      ; 004e0e95
    PUSH EDX                            ; 004e0e98
    PUSH 0x58b081                       ; 004e0e99 | = "%d,%g\n"
    PUSH ESI                            ; 004e0e9e
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004e0e9f
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x14                        ; 004e0ea4
    PUSH EBX                            ; 004e0ea7
    PUSH 0x58b088                       ; 004e0ea8 | = "// motion %d transition count, list: ..."
    PUSH ESI                            ; 004e0ead
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004e0eae
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0xc                         ; 004e0eb3
    MOV EBP,dword ptr [EDI + 0x68]      ; 004e0eb6
    PUSH EBP                            ; 004e0eb9
    PUSH 0x58b100                       ; 004e0eba | = "%d\n"
    PUSH ESI                            ; 004e0ebf
    XOR EBP,EBP                         ; 004e0ec0
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004e0ec2
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    MOV EAX,dword ptr [EDI + 0x68]      ; 004e0ec7
    ADD ESP,0xc                         ; 004e0eca
    TEST EAX,EAX                        ; 004e0ecd
    JLE 0x004e0f0e                      ; 004e0ecf
        ;   XREF to: 004e0f0e (CONDITIONAL_JUMP)  ; LAB_004e0f0e
    LEA EBX,[EDI + 0x6c]                ; 004e0ed1
    MOV EDX,dword ptr [EBX + 0x14]      ; 004e0ed4
        ;   Label: LAB_004e0ed4
    PUSH EDX                            ; 004e0ed7
    SUB ESP,0x8                         ; 004e0ed8
    FLD float ptr [EBX + 0x10]          ; 004e0edb
    FSTP double ptr [ESP]               ; 004e0ede
    SUB ESP,0x8                         ; 004e0ee1
    FLD float ptr [EBX + 0xc]           ; 004e0ee4
    FSTP double ptr [ESP]               ; 004e0ee7
    MOV ECX,dword ptr [EBX + 0x8]       ; 004e0eea
    PUSH ECX                            ; 004e0eed
    MOV EAX,dword ptr [EBX + 0x4]       ; 004e0eee
    PUSH EAX                            ; 004e0ef1
    MOV EDX,dword ptr [EBX]             ; 004e0ef2
    PUSH EDX                            ; 004e0ef4
    PUSH 0x58b104                       ; 004e0ef5 | = "%d,%d,%d,%g,%g,%d\n"
    PUSH ESI                            ; 004e0efa
    ADD EBX,0x18                        ; 004e0efb
    INC EBP                             ; 004e0efe
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004e0eff
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    MOV ECX,dword ptr [EDI + 0x68]      ; 004e0f04
    ADD ESP,0x28                        ; 004e0f07
    CMP EBP,ECX                         ; 004e0f0a
    JL 0x004e0ed4                       ; 004e0f0c
        ;   XREF to: 004e0ed4 (CONDITIONAL_JUMP)  ; LAB_004e0ed4
    MOV EBX,dword ptr [ESP]             ; 004e0f0e
        ;   Label: LAB_004e0f0e
    PUSH EBX                            ; 004e0f11
    PUSH 0x58b117                       ; 004e0f12 | = "// motion %d signal count, list: fram..."
    PUSH ESI                            ; 004e0f17
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004e0f18
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0xc                         ; 004e0f1d
    MOV EBP,dword ptr [EDI + 0x4a4]     ; 004e0f20
    PUSH EBP                            ; 004e0f26
    PUSH 0x58b14c                       ; 004e0f27 | = "%d\n"
    PUSH ESI                            ; 004e0f2c
    XOR EBP,EBP                         ; 004e0f2d
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004e0f2f
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    MOV EAX,dword ptr [EDI + 0x4a4]     ; 004e0f34
    ADD ESP,0xc                         ; 004e0f3a
    TEST EAX,EAX                        ; 004e0f3d
    JLE 0x004e0f6d                      ; 004e0f3f
        ;   XREF to: 004e0f6d (CONDITIONAL_JUMP)  ; LAB_004e0f6d
    MOV EBX,EDI                         ; 004e0f41
    MOV EDX,dword ptr [EBX + 0x4ac]     ; 004e0f43
        ;   Label: LAB_004e0f43
    PUSH EDX                            ; 004e0f49
    MOV ECX,dword ptr [EBX + 0x4a8]     ; 004e0f4a
    PUSH ECX                            ; 004e0f50
    PUSH 0x58b150                       ; 004e0f51 | = "%d,%d\n"
    PUSH ESI                            ; 004e0f56
    ADD EBX,0x8                         ; 004e0f57
    INC EBP                             ; 004e0f5a
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004e0f5b
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    MOV EAX,dword ptr [EDI + 0x4a4]     ; 004e0f60
    ADD ESP,0x10                        ; 004e0f66
    CMP EBP,EAX                         ; 004e0f69
    JL 0x004e0f43                       ; 004e0f6b
        ;   XREF to: 004e0f43 (CONDITIONAL_JUMP)  ; LAB_004e0f43
    MOV EDX,dword ptr [ESP]             ; 004e0f6d
        ;   Label: LAB_004e0f6d
    PUSH EDX                            ; 004e0f70
    PUSH 0x58b157                       ; 004e0f71 | = "// motion %d marker count, list\n"
    PUSH ESI                            ; 004e0f76
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004e0f77
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0xc                         ; 004e0f7c
    MOV ECX,dword ptr [EDI + 0x520]     ; 004e0f7f
    PUSH ECX                            ; 004e0f85
    PUSH 0x58b178                       ; 004e0f86 | = "%d"
    PUSH ESI                            ; 004e0f8b
    XOR EBP,EBP                         ; 004e0f8c
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004e0f8e
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    MOV EBX,dword ptr [EDI + 0x520]     ; 004e0f93
    ADD ESP,0xc                         ; 004e0f99
    TEST EBX,EBX                        ; 004e0f9c
    JLE 0x004e0fc5                      ; 004e0f9e
        ;   XREF to: 004e0fc5 (CONDITIONAL_JUMP)  ; LAB_004e0fc5
    MOV EBX,EDI                         ; 004e0fa0
    MOV EAX,dword ptr [EBX + 0x524]     ; 004e0fa2
        ;   Label: LAB_004e0fa2
    PUSH EAX                            ; 004e0fa8
    PUSH 0x58b17b                       ; 004e0fa9 | = " %d"
    PUSH ESI                            ; 004e0fae
    ADD EBX,0x4                         ; 004e0faf
    INC EBP                             ; 004e0fb2
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004e0fb3
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    MOV EDX,dword ptr [EDI + 0x520]     ; 004e0fb8
    ADD ESP,0xc                         ; 004e0fbe
    CMP EBP,EDX                         ; 004e0fc1
    JL 0x004e0fa2                       ; 004e0fc3
        ;   XREF to: 004e0fa2 (CONDITIONAL_JUMP)  ; LAB_004e0fa2
    PUSH 0x58b17f                       ; 004e0fc5 | = "\n"
        ;   Label: LAB_004e0fc5
    PUSH ESI                            ; 004e0fca
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004e0fcb
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x8                         ; 004e0fd0
    MOV EBP,dword ptr [ESP + 0x4]       ; 004e0fd3
    MOV EAX,dword ptr [ESP]             ; 004e0fd7
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004e0fda
    ADD EBP,0x54c                       ; 004e0fde
    INC EAX                             ; 004e0fe4
    MOV EDX,dword ptr [EDI + 0x964]     ; 004e0fe5
    MOV dword ptr [ESP + 0x4],EBP       ; 004e0feb
    MOV dword ptr [ESP],EAX             ; 004e0fef
    CMP EAX,EDX                         ; 004e0ff2
    JL 0x004e0de4                       ; 004e0ff4
        ;   XREF to: 004e0de4 (CONDITIONAL_JUMP)  ; LAB_004e0de4
    ADD ESP,0x8                         ; 004e0ffa
        ;   Label: LAB_004e0ffa
    POP EBP                             ; 004e0ffd
    POP EDI                             ; 004e0ffe
    POP ESI                             ; 004e0fff
    POP EBX                             ; 004e1000
    RET                                 ; 004e1001

