; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_2d.c_clipAndDrawLine_FUN_00402ca0(int x1, int y1, int x2, int y2, int x_min, int y_min, int x_max, int y_max)
;
; Parameters:
; int              Stack[0x4]:4   x1
; int              Stack[0x8]:4   y1
; int              Stack[0xc]:4   x2
; int              Stack[0x10]:4   y2
; int              Stack[0x14]:4   x_min
; int              Stack[0x18]:4   y_min
; int              Stack[0x1c]:4   x_max
; int              Stack[0x20]:4   y_max
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_2d.c_clipLineGlobal_FUN_00402c50 at 00402c84
;
; Referenced Globals:
;   TerminatedCString s_engine_2d_c_0061319f
;   TerminatedCString s_s_2d_line_clipping_excee_006131ae
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_2d.c_computeOutcode_FUN_00402c10
;   engine_2d.c_drawLine_FUN_004011b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402ca0
        ;   Label: engine_2d.c_clipAndDrawLine_FUN_00402ca0
    PUSH ESI                            ; 00402ca1
    PUSH EDI                            ; 00402ca2
    PUSH EBP                            ; 00402ca3
    SUB ESP,0x10                        ; 00402ca4
    MOV EBP,dword ptr [ESP + 0x28]      ; 00402ca7
    MOV EDX,dword ptr [ESP + 0x40]      ; 00402cab
    PUSH EDX                            ; 00402caf
    MOV ECX,dword ptr [ESP + 0x40]      ; 00402cb0
    PUSH ECX                            ; 00402cb4
    MOV ESI,dword ptr [ESP + 0x40]      ; 00402cb5
    PUSH ESI                            ; 00402cb9
    MOV EAX,dword ptr [ESP + 0x40]      ; 00402cba
    PUSH EAX                            ; 00402cbe
    PUSH EBP                            ; 00402cbf
    MOV EDX,dword ptr [ESP + 0x38]      ; 00402cc0
    PUSH EDX                            ; 00402cc4
    CALL engine_2d.c_computeOutcode_FUN_00402c10 ; 00402cc5
        ;   XREF to: 00402c10 (UNCONDITIONAL_CALL)  ; int engine_2d.c_computeOutcode_FUN_00402c10(int x, int y, int x_min, int y_min, ...)
    ADD ESP,0x18                        ; 00402cca
    MOV ECX,dword ptr [ESP + 0x40]      ; 00402ccd
    PUSH ECX                            ; 00402cd1
    MOV ESI,dword ptr [ESP + 0x40]      ; 00402cd2
    PUSH ESI                            ; 00402cd6
    MOV dword ptr [ESP + 0x14],EAX      ; 00402cd7
    MOV EAX,dword ptr [ESP + 0x40]      ; 00402cdb
    PUSH EAX                            ; 00402cdf
    MOV EDX,dword ptr [ESP + 0x40]      ; 00402ce0
    PUSH EDX                            ; 00402ce4
    MOV ECX,dword ptr [ESP + 0x40]      ; 00402ce5
    PUSH ECX                            ; 00402ce9
    MOV ESI,dword ptr [ESP + 0x40]      ; 00402cea
    PUSH ESI                            ; 00402cee
    CALL engine_2d.c_computeOutcode_FUN_00402c10 ; 00402cef
        ;   XREF to: 00402c10 (UNCONDITIONAL_CALL)  ; int engine_2d.c_computeOutcode_FUN_00402c10(int x, int y, int x_min, int y_min, ...)
    ADD ESP,0x18                        ; 00402cf4
    MOV dword ptr [ESP + 0x8],EAX       ; 00402cf7
    XOR EAX,EAX                         ; 00402cfb
    MOV dword ptr [ESP + 0x4],EAX       ; 00402cfd
    MOV ESI,dword ptr [ESP + 0x30]      ; 00402d01
        ;   Label: LAB_00402d01
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00402d05
    MOV EDX,dword ptr [ESP + 0x24]      ; 00402d09
    MOV EAX,dword ptr [ESP + 0xc]       ; 00402d0d
    SUB ESI,EBP                         ; 00402d11
    SUB ECX,EDX                         ; 00402d13
    TEST EAX,EAX                        ; 00402d15
    JZ 0x00402d66                       ; 00402d17
        ;   XREF to: 00402d66 (CONDITIONAL_JUMP)  ; LAB_00402d66
    MOV EAX,dword ptr [ESP + 0xc]       ; 00402d19
        ;   Label: LAB_00402d19
    MOV EDX,dword ptr [ESP + 0x8]       ; 00402d1d
    TEST EAX,EDX                        ; 00402d21
    JZ 0x00402d76                       ; 00402d23
        ;   XREF to: 00402d76 (CONDITIONAL_JUMP)  ; LAB_00402d76
    XOR ECX,ECX                         ; 00402d25
    MOV dword ptr [ESP],ECX             ; 00402d27
    CMP dword ptr [ESP + 0x4],0x64      ; 00402d2a
        ;   Label: LAB_00402d2a
    JNZ 0x00402d54                      ; 00402d2f
        ;   XREF to: 00402d54 (CONDITIONAL_JUMP)  ; LAB_00402d54
    MOV ESI,0x61319f                    ; 00402d31 | = "..\\engine\\2d.c"
    MOV EDI,0x870                       ; 00402d36
    PUSH 0x6131ae                       ; 00402d3b | = "2d line clipping exceeded max iterations"
    MOV dword ptr [0x02f0ca48],ESI      ; 00402d40 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 00402d46 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00402d4c
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00402d51
    CMP dword ptr [ESP],0x0             ; 00402d54
        ;   Label: LAB_00402d54
    JNZ 0x00402eb5                      ; 00402d58
        ;   XREF to: 00402eb5 (CONDITIONAL_JUMP)  ; LAB_00402eb5
    ADD ESP,0x10                        ; 00402d5e
    POP EBP                             ; 00402d61
    POP EDI                             ; 00402d62
    POP ESI                             ; 00402d63
    POP EBX                             ; 00402d64
    RET                                 ; 00402d65
    CMP dword ptr [ESP + 0x8],0x0       ; 00402d66
        ;   Label: LAB_00402d66
    JNZ 0x00402d19                      ; 00402d6b
        ;   XREF to: 00402d19 (CONDITIONAL_JUMP)  ; LAB_00402d19
    MOV dword ptr [ESP],0x1             ; 00402d6d
    JMP 0x00402d2a                      ; 00402d74
        ;   XREF to: 00402d2a (UNCONDITIONAL_JUMP)  ; LAB_00402d2a
    TEST EAX,EAX                        ; 00402d76
        ;   Label: LAB_00402d76
    JZ 0x00402ddd                       ; 00402d78
        ;   XREF to: 00402ddd (CONDITIONAL_JUMP)  ; LAB_00402ddd
    TEST AL,0x1                         ; 00402d7a
        ;   Label: LAB_00402d7a
    JZ 0x00402de1                       ; 00402d7c
        ;   XREF to: 00402de1 (CONDITIONAL_JUMP)  ; LAB_00402de1
    TEST ESI,ESI                        ; 00402d7e
    JZ 0x00402da1                       ; 00402d80
        ;   XREF to: 00402da1 (CONDITIONAL_JUMP)  ; LAB_00402da1
    MOV EAX,dword ptr [ESP + 0x40]      ; 00402d82
    MOV EDX,0x10000                     ; 00402d86
    MOV EBX,ESI                         ; 00402d8b
    SUB EAX,EBP                         ; 00402d8d
    IMUL EDX                            ; 00402d8f
    IDIV EBX                            ; 00402d91
    MOV EDX,ECX                         ; 00402d93
    MOV EBX,dword ptr [ESP + 0x24]      ; 00402d95
    IMUL EDX                            ; 00402d99
    SHRD EAX,EDX,0x10                   ; 00402d9b
    ADD EBX,EAX                         ; 00402d9f
    MOV EDI,dword ptr [ESP + 0x40]      ; 00402da1
        ;   Label: LAB_00402da1
    CMP dword ptr [ESP + 0xc],0x0       ; 00402da5
        ;   Label: LAB_00402da5
    JZ 0x00402e74                       ; 00402daa
        ;   XREF to: 00402e74 (CONDITIONAL_JUMP)  ; LAB_00402e74
    MOV EAX,dword ptr [ESP + 0x40]      ; 00402db0
    PUSH EAX                            ; 00402db4
    MOV EDX,dword ptr [ESP + 0x40]      ; 00402db5
    PUSH EDX                            ; 00402db9
    MOV ECX,dword ptr [ESP + 0x40]      ; 00402dba
    PUSH ECX                            ; 00402dbe
    MOV ESI,dword ptr [ESP + 0x40]      ; 00402dbf
    PUSH ESI                            ; 00402dc3
    PUSH EDI                            ; 00402dc4
    PUSH EBX                            ; 00402dc5
    MOV dword ptr [ESP + 0x3c],EBX      ; 00402dc6
    CALL engine_2d.c_computeOutcode_FUN_00402c10 ; 00402dca
        ;   XREF to: 00402c10 (UNCONDITIONAL_CALL)  ; int engine_2d.c_computeOutcode_FUN_00402c10(int x, int y, int x_min, int y_min, ...)
    ADD ESP,0x18                        ; 00402dcf
    MOV EBP,EDI                         ; 00402dd2
    MOV dword ptr [ESP + 0xc],EAX       ; 00402dd4
    JMP 0x00402e9e                      ; 00402dd8
        ;   XREF to: 00402e9e (UNCONDITIONAL_JUMP)  ; LAB_00402e9e
    MOV EAX,EDX                         ; 00402ddd
        ;   Label: LAB_00402ddd
    JMP 0x00402d7a                      ; 00402ddf
        ;   XREF to: 00402d7a (UNCONDITIONAL_JUMP)  ; LAB_00402d7a
    TEST AL,0x2                         ; 00402de1
        ;   Label: LAB_00402de1
    JZ 0x00402e0e                       ; 00402de3
        ;   XREF to: 00402e0e (CONDITIONAL_JUMP)  ; LAB_00402e0e
    TEST ESI,ESI                        ; 00402de5
    JZ 0x00402e08                       ; 00402de7
        ;   XREF to: 00402e08 (CONDITIONAL_JUMP)  ; LAB_00402e08
    MOV EAX,dword ptr [ESP + 0x38]      ; 00402de9
    MOV EDX,0x10000                     ; 00402ded
    MOV EBX,ESI                         ; 00402df2
    SUB EAX,EBP                         ; 00402df4
    IMUL EDX                            ; 00402df6
    IDIV EBX                            ; 00402df8
    MOV EDX,ECX                         ; 00402dfa
    MOV EBX,dword ptr [ESP + 0x24]      ; 00402dfc
    IMUL EDX                            ; 00402e00
    SHRD EAX,EDX,0x10                   ; 00402e02
    ADD EBX,EAX                         ; 00402e06
    MOV EDI,dword ptr [ESP + 0x38]      ; 00402e08
        ;   Label: LAB_00402e08
    JMP 0x00402da5                      ; 00402e0c
        ;   XREF to: 00402da5 (UNCONDITIONAL_JUMP)  ; LAB_00402da5
    TEST AL,0x4                         ; 00402e0e
        ;   Label: LAB_00402e0e
    JZ 0x00402e3f                       ; 00402e10
        ;   XREF to: 00402e3f (CONDITIONAL_JUMP)  ; LAB_00402e3f
    TEST ECX,ECX                        ; 00402e12
    JZ 0x00402e36                       ; 00402e14
        ;   XREF to: 00402e36 (CONDITIONAL_JUMP)  ; LAB_00402e36
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00402e16
    MOV EBX,dword ptr [ESP + 0x24]      ; 00402e1a
    MOV EDX,0x10000                     ; 00402e1e
    SUB EAX,EBX                         ; 00402e23
    MOV EBX,ECX                         ; 00402e25
    IMUL EDX                            ; 00402e27
    IDIV EBX                            ; 00402e29
    MOV EDX,ESI                         ; 00402e2b
    IMUL EDX                            ; 00402e2d
    SHRD EAX,EDX,0x10                   ; 00402e2f
    LEA EDI,[EAX + EBP*0x1]             ; 00402e33
    MOV EBX,dword ptr [ESP + 0x3c]      ; 00402e36
        ;   Label: LAB_00402e36
    JMP 0x00402da5                      ; 00402e3a
        ;   XREF to: 00402da5 (UNCONDITIONAL_JUMP)  ; LAB_00402da5
    TEST AL,0x8                         ; 00402e3f
        ;   Label: LAB_00402e3f
    JZ 0x00402da5                       ; 00402e41
        ;   XREF to: 00402da5 (CONDITIONAL_JUMP)  ; LAB_00402da5
    TEST ECX,ECX                        ; 00402e47
    JZ 0x00402e6b                       ; 00402e49
        ;   XREF to: 00402e6b (CONDITIONAL_JUMP)  ; LAB_00402e6b
    MOV EAX,dword ptr [ESP + 0x34]      ; 00402e4b
    MOV EDX,dword ptr [ESP + 0x24]      ; 00402e4f
    MOV EBX,ECX                         ; 00402e53
    SUB EAX,EDX                         ; 00402e55
    MOV EDX,0x10000                     ; 00402e57
    IMUL EDX                            ; 00402e5c
    IDIV EBX                            ; 00402e5e
    MOV EDX,ESI                         ; 00402e60
    IMUL EDX                            ; 00402e62
    SHRD EAX,EDX,0x10                   ; 00402e64
    LEA EDI,[EAX + EBP*0x1]             ; 00402e68
    MOV EBX,dword ptr [ESP + 0x34]      ; 00402e6b
        ;   Label: LAB_00402e6b
    JMP 0x00402da5                      ; 00402e6f
        ;   XREF to: 00402da5 (UNCONDITIONAL_JUMP)  ; LAB_00402da5
    MOV EAX,dword ptr [ESP + 0x40]      ; 00402e74
        ;   Label: LAB_00402e74
    PUSH EAX                            ; 00402e78
    MOV EDX,dword ptr [ESP + 0x40]      ; 00402e79
    PUSH EDX                            ; 00402e7d
    MOV ECX,dword ptr [ESP + 0x40]      ; 00402e7e
    PUSH ECX                            ; 00402e82
    MOV ESI,dword ptr [ESP + 0x40]      ; 00402e83
    PUSH ESI                            ; 00402e87
    PUSH EDI                            ; 00402e88
    PUSH EBX                            ; 00402e89
    MOV dword ptr [ESP + 0x44],EBX      ; 00402e8a
    MOV dword ptr [ESP + 0x48],EDI      ; 00402e8e
    CALL engine_2d.c_computeOutcode_FUN_00402c10 ; 00402e92
        ;   XREF to: 00402c10 (UNCONDITIONAL_CALL)  ; int engine_2d.c_computeOutcode_FUN_00402c10(int x, int y, int x_min, int y_min, ...)
    ADD ESP,0x18                        ; 00402e97
    MOV dword ptr [ESP + 0x8],EAX       ; 00402e9a
    MOV EAX,dword ptr [ESP + 0x4]       ; 00402e9e
        ;   Label: LAB_00402e9e
    INC EAX                             ; 00402ea2
    MOV dword ptr [ESP + 0x4],EAX       ; 00402ea3
    CMP EAX,0x64                        ; 00402ea7
    JL 0x00402d01                       ; 00402eaa
        ;   XREF to: 00402d01 (CONDITIONAL_JUMP)  ; LAB_00402d01
    JMP 0x00402d2a                      ; 00402eb0
        ;   XREF to: 00402d2a (UNCONDITIONAL_JUMP)  ; LAB_00402d2a
    MOV EDX,dword ptr [ESP + 0x30]      ; 00402eb5
        ;   Label: LAB_00402eb5
    PUSH EDX                            ; 00402eb9
    MOV ECX,dword ptr [ESP + 0x30]      ; 00402eba
    PUSH ECX                            ; 00402ebe
    PUSH EBP                            ; 00402ebf
    MOV EBX,dword ptr [ESP + 0x30]      ; 00402ec0
    PUSH EBX                            ; 00402ec4
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 00402ec5
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 00402eca
    ADD ESP,0x10                        ; 00402ecd
    POP EBP                             ; 00402ed0
    POP EDI                             ; 00402ed1
    POP ESI                             ; 00402ed2
    POP EBX                             ; 00402ed3
    RET                                 ; 00402ed4

