; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_pcx_c_FUN_0050da60(char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; Local Variables:
; undefined        Stack[-0x88]:1  local_88
; undefined1       Stack[-0x87]:1  local_87
; undefined1       Stack[-0x86]:1  local_86
; undefined1       Stack[-0x85]:1  local_85
; undefined2       Stack[-0x84]:2  local_84
; undefined2       Stack[-0x82]:2  local_82
; undefined2       Stack[-0x80]:2  local_80
; undefined2       Stack[-0x7e]:2  local_7e
; undefined1       Stack[-0x47]:1  local_47
; undefined2       Stack[-0x46]:2  local_46
; undefined2       Stack[-0x44]:2  local_44
; undefined2       Stack[-0x42]:2  local_42
; undefined2       Stack[-0x40]:2  local_40
;
; XREF[1]:
;   core_game.cpp_FUN_004b6f30 at 004b72ff
;
; Referenced Globals:
;   undefined4 DAT_005cba90
;   TerminatedCString s_engine_pcx_c_005cba93
;   TerminatedCString s_Cannot_write_PCX_005cbaa3
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c6af98
;   undefined4 DAT_01c6af99
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_memory.c_memset_FUN_005a28f0
;   crt_stdio.c_fclose_FUN_005a3a90
;   crt_stdio.c_fopen_FUN_005a43ec
;   crt_stdio.c_fputc_FUN_005a5d70
;   crt_stdio.c_fwrite_FUN_005a48e0
;   engine_pcx.c_saveScreenRaw16_FUN_0050d6f0
;   engine_pcx.c_saveScreenRaw32_FUN_0050d8b0
;   engine_pcx.c_writePCXScanline_FUN_0050d620
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050da60
        ;   Label: engine_pcx.c_FUN_0050da60
    PUSH EBP                            ; 0050da61
    SUB ESP,0x80                        ; 0050da62
    MOV EBX,dword ptr [ESP + 0x8c]      ; 0050da68
    MOV EDX,dword ptr [0x005fba20]      ; 0050da6f | DAT_005fba20
    CMP EDX,0x10                        ; 0050da75
    JZ 0x0050dc09                       ; 0050da78
        ;   XREF to: 0050dc09 (CONDITIONAL_JUMP)  ; LAB_0050dc09
    CMP EDX,0x20                        ; 0050da7e
    JZ 0x0050dc14                       ; 0050da81
        ;   XREF to: 0050dc14 (CONDITIONAL_JUMP)  ; LAB_0050dc14
    PUSH EDI                            ; 0050da87
    PUSH ESI                            ; 0050da88
    PUSH 0x80                           ; 0050da89
    PUSH 0x0                            ; 0050da8e
    LEA EAX,[ESP + 0x10]                ; 0050da90
    PUSH EAX                            ; 0050da94
    MOV ESI,0x1                         ; 0050da95
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0050da9a
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    MOV AH,0xa                          ; 0050da9f
    MOV DL,0x5                          ; 0050daa1
    ADD ESP,0xc                         ; 0050daa3
    MOV CL,0x8                          ; 0050daa6
    MOV byte ptr [ESP + 0x8],AH         ; 0050daa8
    MOV byte ptr [ESP + 0x9],DL         ; 0050daac
    MOV byte ptr [ESP + 0xb],CL         ; 0050dab0
    MOV word ptr [ESP + 0x4c],SI        ; 0050dab4
    MOV DH,0x1                          ; 0050dab9
    MOV CH,0x1                          ; 0050dabb
    MOV AX,[0x005fba18]                 ; 0050dabd | DAT_005fba18
    MOV ESI,dword ptr [0x005fba18]      ; 0050dac3 | DAT_005fba18
    DEC EAX                             ; 0050dac9
    MOV byte ptr [ESP + 0xa],DH         ; 0050daca
    MOV word ptr [ESP + 0x10],AX        ; 0050dace
    MOV AX,[0x005fba1c]                 ; 0050dad3 | DAT_005fba1c
    MOV byte ptr [ESP + 0x49],CH        ; 0050dad9
    DEC EAX                             ; 0050dadd
    XOR EDX,EDX                         ; 0050dade
    MOV word ptr [ESP + 0x12],AX        ; 0050dae0
    MOV AX,[0x005fba18]                 ; 0050dae5 | DAT_005fba18
    MOV word ptr [ESP + 0xc],DX         ; 0050daeb
    MOV word ptr [ESP + 0x4a],AX        ; 0050daf0
    MOV word ptr [ESP + 0x4e],AX        ; 0050daf5
    MOV AX,[0x005fba1c]                 ; 0050dafa | DAT_005fba1c
    MOV word ptr [ESP + 0xe],DX         ; 0050db00
    MOV word ptr [ESP + 0x50],AX        ; 0050db05
    CMP ESI,0x280                       ; 0050db0a
    JNZ 0x0050db2f                      ; 0050db10
        ;   XREF to: 0050db2f (CONDITIONAL_JUMP)  ; LAB_0050db2f
    CMP dword ptr [0x005fba1c],0xf0     ; 0050db12 | DAT_005fba1c
    JNZ 0x0050db2f                      ; 0050db1c
        ;   XREF to: 0050db2f (CONDITIONAL_JUMP)  ; LAB_0050db2f
    MOV EDI,EAX                         ; 0050db1e
    ADD EDI,EAX                         ; 0050db20
    ADD EAX,EAX                         ; 0050db22
    DEC EAX                             ; 0050db24
    MOV word ptr [ESP + 0x50],DI        ; 0050db25
    MOV word ptr [ESP + 0x12],AX        ; 0050db2a
    PUSH 0x5cba90                       ; 0050db2f | DAT_005cba90
        ;   Label: LAB_0050db2f
    PUSH EBX                            ; 0050db34
    CALL crt_stdio.c_fopen_FUN_005a43ec ; 0050db35
        ;   XREF to: 005a43ec (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_005a43ec()
    ADD ESP,0x8                         ; 0050db3a
    MOV EBX,EAX                         ; 0050db3d
    TEST EAX,EAX                        ; 0050db3f
    JNZ 0x0050db65                      ; 0050db41
        ;   XREF to: 0050db65 (CONDITIONAL_JUMP)  ; LAB_0050db65
    MOV EBP,0x5cba93                    ; 0050db43 | = "..\\engine\\pcx.c"
    MOV EAX,0xed                        ; 0050db48
    PUSH 0x5cbaa3                       ; 0050db4d | = "Cannot write .PCX"
    MOV dword ptr [0x01d71de0],EBP      ; 0050db52 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 0050db58 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0050db5d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0050db62
    PUSH EBX                            ; 0050db65
        ;   Label: LAB_0050db65
    PUSH 0x80                           ; 0050db66
    PUSH 0x1                            ; 0050db6b
    LEA EAX,[ESP + 0x14]                ; 0050db6d
    PUSH EAX                            ; 0050db71
    XOR ESI,ESI                         ; 0050db72
    CALL crt_stdio.c_fwrite_FUN_005a48e0 ; 0050db74
        ;   XREF to: 005a48e0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fwrite_FUN_005a48e0()
    MOV EDX,dword ptr [0x005fba1c]      ; 0050db79 | DAT_005fba1c
    ADD ESP,0x10                        ; 0050db7f
    TEST EDX,EDX                        ; 0050db82
    JLE 0x0050dbbd                      ; 0050db84
        ;   XREF to: 0050dbbd (CONDITIONAL_JUMP)  ; LAB_0050dbbd
    PUSH EBX                            ; 0050db86
        ;   Label: LAB_0050db86
    PUSH ESI                            ; 0050db87
    CALL engine_pcx.c_writePCXScanline_FUN_0050d620 ; 0050db88
        ;   XREF to: 0050d620 (UNCONDITIONAL_CALL)  ; undefined engine_pcx.c_writePCXScanline_FUN_0050d620()
    MOV EAX,[0x005fba18]                ; 0050db8d | DAT_005fba18
    ADD ESP,0x8                         ; 0050db92
    CMP EAX,0x280                       ; 0050db95
    JNZ 0x0050dbb2                      ; 0050db9a
        ;   XREF to: 0050dbb2 (CONDITIONAL_JUMP)  ; LAB_0050dbb2
    CMP dword ptr [0x005fba1c],0xf0     ; 0050db9c | DAT_005fba1c
    JNZ 0x0050dbb2                      ; 0050dba6
        ;   XREF to: 0050dbb2 (CONDITIONAL_JUMP)  ; LAB_0050dbb2
    PUSH EBX                            ; 0050dba8
    PUSH ESI                            ; 0050dba9
    CALL engine_pcx.c_writePCXScanline_FUN_0050d620 ; 0050dbaa
        ;   XREF to: 0050d620 (UNCONDITIONAL_CALL)  ; undefined engine_pcx.c_writePCXScanline_FUN_0050d620()
    ADD ESP,0x8                         ; 0050dbaf
    MOV ECX,dword ptr [0x005fba1c]      ; 0050dbb2 | DAT_005fba1c
        ;   Label: LAB_0050dbb2
    INC ESI                             ; 0050dbb8
    CMP ESI,ECX                         ; 0050dbb9
    JL 0x0050db86                       ; 0050dbbb
        ;   XREF to: 0050db86 (CONDITIONAL_JUMP)  ; LAB_0050db86
    TEST byte ptr [EBX + 0xd],0x4       ; 0050dbbd
        ;   Label: LAB_0050dbbd
    JZ 0x0050dc1f                       ; 0050dbc1
        ;   XREF to: 0050dc1f (CONDITIONAL_JUMP)  ; LAB_0050dc1f
    PUSH EBX                            ; 0050dbc3
        ;   Label: LAB_0050dbc3
    PUSH 0xc                            ; 0050dbc4
    CALL crt_stdio.c_fputc_FUN_005a5d70 ; 0050dbc6
        ;   XREF to: 005a5d70 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fputc_FUN_005a5d70()
        ;   Label: LAB_0050dbc6
    ADD ESP,0x8                         ; 0050dbcb
    XOR ESI,ESI                         ; 0050dbce
        ;   Label: LAB_0050dbce
    TEST byte ptr [EBX + 0xd],0x4       ; 0050dbd0
        ;   Label: LAB_0050dbd0
    JZ 0x0050dc5a                       ; 0050dbd4
        ;   XREF to: 0050dc5a (CONDITIONAL_JUMP)  ; LAB_0050dc5a
    XOR EAX,EAX                         ; 0050dbda
        ;   Label: LAB_0050dbda
    PUSH EBX                            ; 0050dbdc
    MOV AL,byte ptr [ESI + 0x1c6af98]   ; 0050dbdd | DAT_01c6af98 | DAT_01c6af99
    PUSH EAX                            ; 0050dbe3
    CALL crt_stdio.c_fputc_FUN_005a5d70 ; 0050dbe4
        ;   XREF to: 005a5d70 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fputc_FUN_005a5d70()
        ;   Label: LAB_0050dbe4
    ADD ESP,0x8                         ; 0050dbe9
    INC ESI                             ; 0050dbec
        ;   Label: LAB_0050dbec
    CMP ESI,0x300                       ; 0050dbed
    JL 0x0050dbd0                       ; 0050dbf3
        ;   XREF to: 0050dbd0 (CONDITIONAL_JUMP)  ; LAB_0050dbd0
    PUSH EBX                            ; 0050dbf5
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 0050dbf6
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 0050dbfb
    POP ESI                             ; 0050dbfe
    POP EDI                             ; 0050dbff
    ADD ESP,0x80                        ; 0050dc00
        ;   Label: LAB_0050dc00
    POP EBP                             ; 0050dc06
    POP EBX                             ; 0050dc07
    RET                                 ; 0050dc08
    PUSH EBX                            ; 0050dc09
        ;   Label: LAB_0050dc09
    CALL engine_pcx.c_saveScreenRaw16_FUN_0050d6f0 ; 0050dc0a
        ;   XREF to: 0050d6f0 (UNCONDITIONAL_CALL)  ; void engine_pcx.c_saveScreenRaw16_FUN_0050d6f0(char * filename)
    ADD ESP,0x4                         ; 0050dc0f
    JMP 0x0050dc00                      ; 0050dc12
        ;   XREF to: 0050dc00 (UNCONDITIONAL_JUMP)  ; LAB_0050dc00
    PUSH EBX                            ; 0050dc14
        ;   Label: LAB_0050dc14
    CALL engine_pcx.c_saveScreenRaw32_FUN_0050d8b0 ; 0050dc15
        ;   XREF to: 0050d8b0 (UNCONDITIONAL_CALL)  ; void engine_pcx.c_saveScreenRaw32_FUN_0050d8b0(char * filename)
    ADD ESP,0x4                         ; 0050dc1a
    JMP 0x0050dc00                      ; 0050dc1d
        ;   XREF to: 0050dc00 (UNCONDITIONAL_JUMP)  ; LAB_0050dc00
    MOV ESI,dword ptr [EBX + 0x4]       ; 0050dc1f
        ;   Label: LAB_0050dc1f
    MOV EAX,dword ptr [EBX + 0x14]      ; 0050dc22
    SUB EAX,ESI                         ; 0050dc25
    CMP EAX,0x1                         ; 0050dc27
    JBE 0x0050dbc3                      ; 0050dc2a
        ;   XREF to: 0050dbc3 (CONDITIONAL_JUMP)  ; LAB_0050dbc3
    MOV EAX,dword ptr [EBX]             ; 0050dc2c
    MOV byte ptr [EAX],0xc              ; 0050dc2e
    MOV EAX,dword ptr [EBX]             ; 0050dc31
    CMP byte ptr [EAX],0xa              ; 0050dc33
    JZ 0x0050dc52                       ; 0050dc36
        ;   XREF to: 0050dc52 (CONDITIONAL_JUMP)  ; LAB_0050dc52
    MOV EDI,dword ptr [EBX + 0x4]       ; 0050dc38
    MOV EBP,dword ptr [EBX]             ; 0050dc3b
    MOV DH,byte ptr [EBX + 0xd]         ; 0050dc3d
    INC EDI                             ; 0050dc40
    INC EBP                             ; 0050dc41
    MOV dword ptr [EBX + 0x4],EDI       ; 0050dc42
    OR DH,0x10                          ; 0050dc45
    MOV dword ptr [EBX],EBP             ; 0050dc48
    MOV byte ptr [EBX + 0xd],DH         ; 0050dc4a
    JMP 0x0050dbce                      ; 0050dc4d
        ;   XREF to: 0050dbce (UNCONDITIONAL_JUMP)  ; LAB_0050dbce
    PUSH EBX                            ; 0050dc52
        ;   Label: LAB_0050dc52
    PUSH 0xa                            ; 0050dc53
    JMP 0x0050dbc6                      ; 0050dc55
        ;   XREF to: 0050dbc6 (UNCONDITIONAL_JUMP)  ; LAB_0050dbc6
    MOV ECX,dword ptr [EBX + 0x4]       ; 0050dc5a
        ;   Label: LAB_0050dc5a
    MOV EAX,dword ptr [EBX + 0x14]      ; 0050dc5d
    SUB EAX,ECX                         ; 0050dc60
    CMP EAX,0x1                         ; 0050dc62
    JBE 0x0050dbda                      ; 0050dc65
        ;   XREF to: 0050dbda (CONDITIONAL_JUMP)  ; LAB_0050dbda
    MOV EDX,dword ptr [EBX]             ; 0050dc6b
    MOV AL,byte ptr [ESI + 0x1c6af98]   ; 0050dc6d | DAT_01c6af99
    MOV byte ptr [EDX],AL               ; 0050dc73
    MOV EAX,dword ptr [EBX]             ; 0050dc75
    CMP byte ptr [EAX],0xa              ; 0050dc77
    JZ 0x0050dc95                       ; 0050dc7a
        ;   XREF to: 0050dc95 (CONDITIONAL_JUMP)  ; LAB_0050dc95
    MOV EDI,dword ptr [EBX + 0x4]       ; 0050dc7c
    MOV EBP,dword ptr [EBX]             ; 0050dc7f
    MOV AL,byte ptr [EBX + 0xd]         ; 0050dc81
    INC EDI                             ; 0050dc84
    INC EBP                             ; 0050dc85
    MOV dword ptr [EBX + 0x4],EDI       ; 0050dc86
    OR AL,0x10                          ; 0050dc89
    MOV dword ptr [EBX],EBP             ; 0050dc8b
    MOV byte ptr [EBX + 0xd],AL         ; 0050dc8d
    JMP 0x0050dbec                      ; 0050dc90
        ;   XREF to: 0050dbec (UNCONDITIONAL_JUMP)  ; LAB_0050dbec
    PUSH EBX                            ; 0050dc95
        ;   Label: LAB_0050dc95
    PUSH 0xa                            ; 0050dc96
    JMP 0x0050dbe4                      ; 0050dc98
        ;   XREF to: 0050dbe4 (UNCONDITIONAL_JUMP)  ; LAB_0050dbe4

