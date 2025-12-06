; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_msnedit.cpp_FUN_00536cd0()
;
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_msnedit.cpp_FUN_00536e20 at 00537081
;   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 at 005398c0
;
; Referenced Globals:
;   double DOUBLE_0063b6ec = 0.300000000000000
;   CEdButton* g_ActiveButton
;   int g_MouseX
;   int g_MouseY
;   int g_MouseButtonFlags
;   int g_ActiveRenderColor
;   undefined4 DAT_02f7c630
;
; Called Functions:
;   engine_2d.c_drawLine_FUN_004011b0
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_2d.c_getStringWidth_FUN_004018a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00536cd0
        ;   Label: core_msnedit.cpp_FUN_00536cd0
    PUSH ESI                            ; 00536cd1
    PUSH EDI                            ; 00536cd2
    PUSH EBP                            ; 00536cd3
    MOV EBP,ESP                         ; 00536cd4
    SUB ESP,0x14                        ; 00536cd6
    AND ESP,0xfffffff8                  ; 00536cd9
    MOV ESI,dword ptr [EBP + 0x18]      ; 00536cdc
    MOV EBX,dword ptr [EBP + 0x1c]      ; 00536cdf
    MOV EDX,dword ptr [EBP + 0x14]      ; 00536ce2
    PUSH EDX                            ; 00536ce5
    CALL engine_2d.c_getStringWidth_FUN_004018a0 ; 00536ce6 | int engine_2d.c_getStringWidth_FUN_004018a0(char * text)
        ;   XREF to: 004018a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00536ceb
    LEA EDI,[ESI + EAX*0x1]             ; 00536cee
    MOV ECX,dword ptr [EBP + 0x24]      ; 00536cf1
    MOV dword ptr [ESP + 0x10],EDI      ; 00536cf4
    LEA EDI,[EBX + 0xb]                 ; 00536cf8
    TEST ECX,ECX                        ; 00536cfb
    JZ 0x00536dda                       ; 00536cfd | LAB_00536dda
        ;   XREF to: 00536dda (CONDITIONAL_JUMP)
    MOV EAX,0x7                         ; 00536d03
    MOV dword ptr [ESP + 0xc],EAX       ; 00536d08
        ;   Label: LAB_00536d08
    XOR EAX,EAX                         ; 00536d0c
    MOV EDX,dword ptr [0x02cf2b00]      ; 00536d0e | CEdButton * g_ActiveButton
    MOV dword ptr [ESP + 0x8],EAX       ; 00536d14
    TEST EDX,EDX                        ; 00536d18
    JNZ 0x00536d47                      ; 00536d1a | LAB_00536d47
        ;   XREF to: 00536d47 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [0x02cf6a8c]      ; 00536d1c | int g_MouseX
    CMP ESI,ECX                         ; 00536d22
    JGE 0x00536d47                      ; 00536d24 | LAB_00536d47
        ;   XREF to: 00536d47 (CONDITIONAL_JUMP)
    CMP ECX,dword ptr [ESP + 0x10]      ; 00536d26
    JGE 0x00536d47                      ; 00536d2a | LAB_00536d47
        ;   XREF to: 00536d47 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [0x02cf6a90]      ; 00536d2c | int g_MouseY
    CMP EBX,ECX                         ; 00536d32
    JG 0x00536d47                       ; 00536d34 | LAB_00536d47
        ;   XREF to: 00536d47 (CONDITIONAL_JUMP)
    CMP EDI,ECX                         ; 00536d36
    JLE 0x00536d47                      ; 00536d38 | LAB_00536d47
        ;   XREF to: 00536d47 (CONDITIONAL_JUMP)
    MOV EDX,0x1                         ; 00536d3a
    MOV dword ptr [ESP + 0x8],EDX       ; 00536d3f
    MOV dword ptr [ESP + 0xc],EDX       ; 00536d43
    PUSH EBX                            ; 00536d47
        ;   Label: LAB_00536d47
    PUSH ESI                            ; 00536d48
    MOV EAX,dword ptr [EBP + 0x14]      ; 00536d49
    PUSH EAX                            ; 00536d4c
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00536d4d | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00536d52
    MOV EDX,dword ptr [ESP + 0xc]       ; 00536d55
    TEST EDX,EDX                        ; 00536d59
    JL 0x00536da5                       ; 00536d5b | LAB_00536da5
        ;   XREF to: 00536da5 (CONDITIONAL_JUMP)
    SUB EBX,0x2                         ; 00536d5d
    PUSH EBX                            ; 00536d60
    MOV ECX,dword ptr [ESP + 0x14]      ; 00536d61
    PUSH ECX                            ; 00536d65
    PUSH EBX                            ; 00536d66
    SUB ESI,0x2                         ; 00536d67
    PUSH ESI                            ; 00536d6a
    MOV dword ptr [0x02d02570],EDX      ; 00536d6b | int g_ActiveRenderColor
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 00536d71 | void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00536d76
    PUSH EDI                            ; 00536d79
    MOV EAX,dword ptr [ESP + 0x14]      ; 00536d7a
    PUSH EAX                            ; 00536d7e
    PUSH EDI                            ; 00536d7f
    PUSH ESI                            ; 00536d80
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 00536d81 | void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00536d86
    PUSH EDI                            ; 00536d89
    PUSH ESI                            ; 00536d8a
    PUSH EBX                            ; 00536d8b
    PUSH ESI                            ; 00536d8c
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 00536d8d | void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00536d92
    PUSH EDI                            ; 00536d95
    MOV EDX,dword ptr [ESP + 0x14]      ; 00536d96
    PUSH EDX                            ; 00536d9a
    PUSH EBX                            ; 00536d9b
    PUSH EDX                            ; 00536d9c
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 00536d9d | void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00536da2
    MOV EBX,dword ptr [0x02cf6a94]      ; 00536da5 | int g_MouseButtonFlags
        ;   Label: LAB_00536da5
    MOV ESI,dword ptr [EBP + 0x20]      ; 00536dab
    AND EBX,0x1                         ; 00536dae
    TEST ESI,ESI                        ; 00536db1
    JZ 0x00536de4                       ; 00536db3 | LAB_00536de4
        ;   XREF to: 00536de4 (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x8],0x0       ; 00536db5
        ;   Label: LAB_00536db5
    JZ 0x00536e09                       ; 00536dba | LAB_00536e09
        ;   XREF to: 00536e09 (CONDITIONAL_JUMP)
    TEST EBX,EBX                        ; 00536dbc
    JZ 0x00536e09                       ; 00536dbe | LAB_00536e09
        ;   XREF to: 00536e09 (CONDITIONAL_JUMP)
    CMP dword ptr [EBP + 0x20],0x0      ; 00536dc0
    JZ 0x00536dce                       ; 00536dc4 | LAB_00536dce
        ;   XREF to: 00536dce (CONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 00536dc6
    MOV dword ptr [0x02cf6a94],EDX      ; 00536dc8 | int g_MouseButtonFlags
    MOV EAX,0x1                         ; 00536dce
        ;   Label: LAB_00536dce
    MOV ESP,EBP                         ; 00536dd3
    POP EBP                             ; 00536dd5
    POP EDI                             ; 00536dd6
    POP ESI                             ; 00536dd7
    POP EBX                             ; 00536dd8
    RET                                 ; 00536dd9
    MOV EAX,0xffffffff                  ; 00536dda
        ;   Label: LAB_00536dda
    JMP 0x00536d08                      ; 00536ddf | LAB_00536d08
        ;   XREF to: 00536d08 (UNCONDITIONAL_JUMP)
    FLDZ                                ; 00536de4
        ;   Label: LAB_00536de4
    FLD float ptr [0x02f7c630]          ; 00536de6 | DAT_02f7c630
    FSTP double ptr [ESP]               ; 00536dec
    FCOMP double ptr [ESP]              ; 00536def
    FNSTSW AX                           ; 00536df2
    SAHF                                ; 00536df4
    JNC 0x00536db5                      ; 00536df5 | LAB_00536db5
        ;   XREF to: 00536db5 (CONDITIONAL_JUMP)
    FLD double ptr [ESP]                ; 00536df7
    FCOMP double ptr [0x0063b6ec]       ; 00536dfa | double DOUBLE_0063b6ec
    FNSTSW AX                           ; 00536e00
    SAHF                                ; 00536e02
    JNC 0x00536db5                      ; 00536e03 | LAB_00536db5
        ;   XREF to: 00536db5 (CONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 00536e05
    JMP 0x00536db5                      ; 00536e07 | LAB_00536db5
        ;   XREF to: 00536db5 (UNCONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 00536e09
        ;   Label: LAB_00536e09
    MOV ESP,EBP                         ; 00536e0b
    POP EBP                             ; 00536e0d
    POP EDI                             ; 00536e0e
    POP ESI                             ; 00536e0f
    POP EBX                             ; 00536e10
    RET                                 ; 00536e11

