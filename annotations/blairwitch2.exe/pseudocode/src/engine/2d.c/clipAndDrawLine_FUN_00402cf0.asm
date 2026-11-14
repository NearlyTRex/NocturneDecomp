; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_clipAndDrawLine_FUN_00402cf0(int x1,int y1,int x2,int y2,int x_min,int y_min,int x_max,int y_max)
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
;
; XREF[1]:
;   engine_2d.c_clipLineGlobal_FUN_00402ca0 at 00402cd4
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   engine_2d.c_computeOutcode_FUN_00402c60
;   engine_2d.c_drawLine_FUN_004011a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402cf0
        ;   Label: engine_2d.c_clipAndDrawLine_FUN_00402cf0
    PUSH ESI                            ; 00402cf1
    PUSH EDI                            ; 00402cf2
    PUSH EBP                            ; 00402cf3
    SUB ESP,0x10                        ; 00402cf4
    MOV EBP,dword ptr [ESP + 0x28]      ; 00402cf7
    MOV EDX,dword ptr [ESP + 0x40]      ; 00402cfb
    PUSH EDX                            ; 00402cff
    MOV ECX,dword ptr [ESP + 0x40]      ; 00402d00
    PUSH ECX                            ; 00402d04
    MOV ESI,dword ptr [ESP + 0x40]      ; 00402d05
    PUSH ESI                            ; 00402d09
    MOV EAX,dword ptr [ESP + 0x40]      ; 00402d0a
    PUSH EAX                            ; 00402d0e
    PUSH EBP                            ; 00402d0f
    MOV EDX,dword ptr [ESP + 0x38]      ; 00402d10
    PUSH EDX                            ; 00402d14
    CALL engine_2d.c_computeOutcode_FUN_00402c60 ; 00402d15
        ;   XREF to: 00402c60 (UNCONDITIONAL_CALL)  ; int engine_2d.c_computeOutcode_FUN_00402c60(int x, int y, int x_min, int y_min, ...)
    ADD ESP,0x18                        ; 00402d1a
    MOV ECX,dword ptr [ESP + 0x40]      ; 00402d1d
    PUSH ECX                            ; 00402d21
    MOV ESI,dword ptr [ESP + 0x40]      ; 00402d22
    PUSH ESI                            ; 00402d26
    MOV dword ptr [ESP + 0x14],EAX      ; 00402d27
    MOV EAX,dword ptr [ESP + 0x40]      ; 00402d2b
    PUSH EAX                            ; 00402d2f
    MOV EDX,dword ptr [ESP + 0x40]      ; 00402d30
    PUSH EDX                            ; 00402d34
    MOV ECX,dword ptr [ESP + 0x40]      ; 00402d35
    PUSH ECX                            ; 00402d39
    MOV ESI,dword ptr [ESP + 0x40]      ; 00402d3a
    PUSH ESI                            ; 00402d3e
    CALL engine_2d.c_computeOutcode_FUN_00402c60 ; 00402d3f
        ;   XREF to: 00402c60 (UNCONDITIONAL_CALL)  ; int engine_2d.c_computeOutcode_FUN_00402c60(int x, int y, int x_min, int y_min, ...)
    ADD ESP,0x18                        ; 00402d44
    MOV dword ptr [ESP + 0x8],EAX       ; 00402d47
    XOR EAX,EAX                         ; 00402d4b
    MOV dword ptr [ESP + 0x4],EAX       ; 00402d4d
    MOV ESI,dword ptr [ESP + 0x30]      ; 00402d51
        ;   Label: LAB_00402d51
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00402d55
    MOV EDX,dword ptr [ESP + 0x24]      ; 00402d59
    MOV EAX,dword ptr [ESP + 0xc]       ; 00402d5d
    SUB ESI,EBP                         ; 00402d61
    SUB ECX,EDX                         ; 00402d63
    TEST EAX,EAX                        ; 00402d65
    JZ 0x00402db6                       ; 00402d67
        ;   XREF to: 00402db6 (CONDITIONAL_JUMP)  ; LAB_00402db6
    MOV EAX,dword ptr [ESP + 0xc]       ; 00402d69
        ;   Label: LAB_00402d69
    MOV EDX,dword ptr [ESP + 0x8]       ; 00402d6d
    TEST EAX,EDX                        ; 00402d71
    JZ 0x00402dc6                       ; 00402d73
        ;   XREF to: 00402dc6 (CONDITIONAL_JUMP)  ; LAB_00402dc6
    XOR ECX,ECX                         ; 00402d75
    MOV dword ptr [ESP],ECX             ; 00402d77
    CMP dword ptr [ESP + 0x4],0x64      ; 00402d7a
        ;   Label: LAB_00402d7a
    JNZ 0x00402da4                      ; 00402d7f
        ;   XREF to: 00402da4 (CONDITIONAL_JUMP)  ; LAB_00402da4
    MOV ESI,0x5ca11e                    ; 00402d81
    MOV EDI,0x851                       ; 00402d86
    PUSH 0x5ca12d                       ; 00402d8b
    MOV dword ptr [0x01d046a0],ESI      ; 00402d90 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 00402d96 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00402d9c
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00402da1
    CMP dword ptr [ESP],0x0             ; 00402da4
        ;   Label: LAB_00402da4
    JNZ 0x00402f05                      ; 00402da8
        ;   XREF to: 00402f05 (CONDITIONAL_JUMP)  ; LAB_00402f05
    ADD ESP,0x10                        ; 00402dae
    POP EBP                             ; 00402db1
    POP EDI                             ; 00402db2
    POP ESI                             ; 00402db3
    POP EBX                             ; 00402db4
    RET                                 ; 00402db5
    CMP dword ptr [ESP + 0x8],0x0       ; 00402db6
        ;   Label: LAB_00402db6
    JNZ 0x00402d69                      ; 00402dbb
        ;   XREF to: 00402d69 (CONDITIONAL_JUMP)  ; LAB_00402d69
    MOV dword ptr [ESP],0x1             ; 00402dbd
    JMP 0x00402d7a                      ; 00402dc4
        ;   XREF to: 00402d7a (UNCONDITIONAL_JUMP)  ; LAB_00402d7a
    TEST EAX,EAX                        ; 00402dc6
        ;   Label: LAB_00402dc6
    JZ 0x00402e2d                       ; 00402dc8
        ;   XREF to: 00402e2d (CONDITIONAL_JUMP)  ; LAB_00402e2d
    TEST AL,0x1                         ; 00402dca
        ;   Label: LAB_00402dca
    JZ 0x00402e31                       ; 00402dcc
        ;   XREF to: 00402e31 (CONDITIONAL_JUMP)  ; LAB_00402e31
    TEST ESI,ESI                        ; 00402dce
    JZ 0x00402df1                       ; 00402dd0
        ;   XREF to: 00402df1 (CONDITIONAL_JUMP)  ; LAB_00402df1
    MOV EAX,dword ptr [ESP + 0x40]      ; 00402dd2
    MOV EDX,0x10000                     ; 00402dd6
    MOV EBX,ESI                         ; 00402ddb
    SUB EAX,EBP                         ; 00402ddd
    IMUL EDX                            ; 00402ddf
    IDIV EBX                            ; 00402de1
    MOV EDX,ECX                         ; 00402de3
    MOV EBX,dword ptr [ESP + 0x24]      ; 00402de5
    IMUL EDX                            ; 00402de9
    SHRD EAX,EDX,0x10                   ; 00402deb
    ADD EBX,EAX                         ; 00402def
    MOV EDI,dword ptr [ESP + 0x40]      ; 00402df1
        ;   Label: LAB_00402df1
    CMP dword ptr [ESP + 0xc],0x0       ; 00402df5
        ;   Label: LAB_00402df5
    JZ 0x00402ec4                       ; 00402dfa
        ;   XREF to: 00402ec4 (CONDITIONAL_JUMP)  ; LAB_00402ec4
    MOV EAX,dword ptr [ESP + 0x40]      ; 00402e00
    PUSH EAX                            ; 00402e04
    MOV EDX,dword ptr [ESP + 0x40]      ; 00402e05
    PUSH EDX                            ; 00402e09
    MOV ECX,dword ptr [ESP + 0x40]      ; 00402e0a
    PUSH ECX                            ; 00402e0e
    MOV ESI,dword ptr [ESP + 0x40]      ; 00402e0f
    PUSH ESI                            ; 00402e13
    PUSH EDI                            ; 00402e14
    PUSH EBX                            ; 00402e15
    MOV dword ptr [ESP + 0x3c],EBX      ; 00402e16
    CALL engine_2d.c_computeOutcode_FUN_00402c60 ; 00402e1a
        ;   XREF to: 00402c60 (UNCONDITIONAL_CALL)  ; int engine_2d.c_computeOutcode_FUN_00402c60(int x, int y, int x_min, int y_min, ...)
    ADD ESP,0x18                        ; 00402e1f
    MOV EBP,EDI                         ; 00402e22
    MOV dword ptr [ESP + 0xc],EAX       ; 00402e24
    JMP 0x00402eee                      ; 00402e28
        ;   XREF to: 00402eee (UNCONDITIONAL_JUMP)  ; LAB_00402eee
    MOV EAX,EDX                         ; 00402e2d
        ;   Label: LAB_00402e2d
    JMP 0x00402dca                      ; 00402e2f
        ;   XREF to: 00402dca (UNCONDITIONAL_JUMP)  ; LAB_00402dca
    TEST AL,0x2                         ; 00402e31
        ;   Label: LAB_00402e31
    JZ 0x00402e5e                       ; 00402e33
        ;   XREF to: 00402e5e (CONDITIONAL_JUMP)  ; LAB_00402e5e
    TEST ESI,ESI                        ; 00402e35
    JZ 0x00402e58                       ; 00402e37
        ;   XREF to: 00402e58 (CONDITIONAL_JUMP)  ; LAB_00402e58
    MOV EAX,dword ptr [ESP + 0x38]      ; 00402e39
    MOV EDX,0x10000                     ; 00402e3d
    MOV EBX,ESI                         ; 00402e42
    SUB EAX,EBP                         ; 00402e44
    IMUL EDX                            ; 00402e46
    IDIV EBX                            ; 00402e48
    MOV EDX,ECX                         ; 00402e4a
    MOV EBX,dword ptr [ESP + 0x24]      ; 00402e4c
    IMUL EDX                            ; 00402e50
    SHRD EAX,EDX,0x10                   ; 00402e52
    ADD EBX,EAX                         ; 00402e56
    MOV EDI,dword ptr [ESP + 0x38]      ; 00402e58
        ;   Label: LAB_00402e58
    JMP 0x00402df5                      ; 00402e5c
        ;   XREF to: 00402df5 (UNCONDITIONAL_JUMP)  ; LAB_00402df5
    TEST AL,0x4                         ; 00402e5e
        ;   Label: LAB_00402e5e
    JZ 0x00402e8f                       ; 00402e60
        ;   XREF to: 00402e8f (CONDITIONAL_JUMP)  ; LAB_00402e8f
    TEST ECX,ECX                        ; 00402e62
    JZ 0x00402e86                       ; 00402e64
        ;   XREF to: 00402e86 (CONDITIONAL_JUMP)  ; LAB_00402e86
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00402e66
    MOV EBX,dword ptr [ESP + 0x24]      ; 00402e6a
    MOV EDX,0x10000                     ; 00402e6e
    SUB EAX,EBX                         ; 00402e73
    MOV EBX,ECX                         ; 00402e75
    IMUL EDX                            ; 00402e77
    IDIV EBX                            ; 00402e79
    MOV EDX,ESI                         ; 00402e7b
    IMUL EDX                            ; 00402e7d
    SHRD EAX,EDX,0x10                   ; 00402e7f
    LEA EDI,[EAX + EBP*0x1]             ; 00402e83
    MOV EBX,dword ptr [ESP + 0x3c]      ; 00402e86
        ;   Label: LAB_00402e86
    JMP 0x00402df5                      ; 00402e8a
        ;   XREF to: 00402df5 (UNCONDITIONAL_JUMP)  ; LAB_00402df5
    TEST AL,0x8                         ; 00402e8f
        ;   Label: LAB_00402e8f
    JZ 0x00402df5                       ; 00402e91
        ;   XREF to: 00402df5 (CONDITIONAL_JUMP)  ; LAB_00402df5
    TEST ECX,ECX                        ; 00402e97
    JZ 0x00402ebb                       ; 00402e99
        ;   XREF to: 00402ebb (CONDITIONAL_JUMP)  ; LAB_00402ebb
    MOV EAX,dword ptr [ESP + 0x34]      ; 00402e9b
    MOV EDX,dword ptr [ESP + 0x24]      ; 00402e9f
    MOV EBX,ECX                         ; 00402ea3
    SUB EAX,EDX                         ; 00402ea5
    MOV EDX,0x10000                     ; 00402ea7
    IMUL EDX                            ; 00402eac
    IDIV EBX                            ; 00402eae
    MOV EDX,ESI                         ; 00402eb0
    IMUL EDX                            ; 00402eb2
    SHRD EAX,EDX,0x10                   ; 00402eb4
    LEA EDI,[EAX + EBP*0x1]             ; 00402eb8
    MOV EBX,dword ptr [ESP + 0x34]      ; 00402ebb
        ;   Label: LAB_00402ebb
    JMP 0x00402df5                      ; 00402ebf
        ;   XREF to: 00402df5 (UNCONDITIONAL_JUMP)  ; LAB_00402df5
    MOV EAX,dword ptr [ESP + 0x40]      ; 00402ec4
        ;   Label: LAB_00402ec4
    PUSH EAX                            ; 00402ec8
    MOV EDX,dword ptr [ESP + 0x40]      ; 00402ec9
    PUSH EDX                            ; 00402ecd
    MOV ECX,dword ptr [ESP + 0x40]      ; 00402ece
    PUSH ECX                            ; 00402ed2
    MOV ESI,dword ptr [ESP + 0x40]      ; 00402ed3
    PUSH ESI                            ; 00402ed7
    PUSH EDI                            ; 00402ed8
    PUSH EBX                            ; 00402ed9
    MOV dword ptr [ESP + 0x44],EBX      ; 00402eda
    MOV dword ptr [ESP + 0x48],EDI      ; 00402ede
    CALL engine_2d.c_computeOutcode_FUN_00402c60 ; 00402ee2
        ;   XREF to: 00402c60 (UNCONDITIONAL_CALL)  ; int engine_2d.c_computeOutcode_FUN_00402c60(int x, int y, int x_min, int y_min, ...)
    ADD ESP,0x18                        ; 00402ee7
    MOV dword ptr [ESP + 0x8],EAX       ; 00402eea
    MOV EAX,dword ptr [ESP + 0x4]       ; 00402eee
        ;   Label: LAB_00402eee
    INC EAX                             ; 00402ef2
    MOV dword ptr [ESP + 0x4],EAX       ; 00402ef3
    CMP EAX,0x64                        ; 00402ef7
    JL 0x00402d51                       ; 00402efa
        ;   XREF to: 00402d51 (CONDITIONAL_JUMP)  ; LAB_00402d51
    JMP 0x00402d7a                      ; 00402f00
        ;   XREF to: 00402d7a (UNCONDITIONAL_JUMP)  ; LAB_00402d7a
    MOV EDX,dword ptr [ESP + 0x30]      ; 00402f05
        ;   Label: LAB_00402f05
    PUSH EDX                            ; 00402f09
    MOV ECX,dword ptr [ESP + 0x30]      ; 00402f0a
    PUSH ECX                            ; 00402f0e
    PUSH EBP                            ; 00402f0f
    MOV EBX,dword ptr [ESP + 0x30]      ; 00402f10
    PUSH EBX                            ; 00402f14
    CALL engine_2d.c_drawLine_FUN_004011a0 ; 00402f15
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011a0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 00402f1a
    ADD ESP,0x10                        ; 00402f1d
    POP EBP                             ; 00402f20
    POP EDI                             ; 00402f21
    POP ESI                             ; 00402f22
    POP EBX                             ; 00402f23
    RET                                 ; 00402f24

