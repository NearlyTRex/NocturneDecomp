; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_clipAndDrawLine_FUN_00403990(int x1,int y1,int x2,int y2,int x_min,int y_min,int x_max,int y_max)
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
;   engine_2d.c_clipLineGlobal_FUN_00403940 at 00403974
;
; Referenced Globals:
;   TerminatedCString s_engine_2d_c_005772d1
;   TerminatedCString s_s_2d_line_clipping_excee_005772e0
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   engine_2d.c_computeOutcode_FUN_00403900
;   engine_2d.c_drawLine_FUN_004015a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403990
        ;   Label: engine_2d.c_clipAndDrawLine_FUN_00403990
    PUSH ESI                            ; 00403991
    PUSH EDI                            ; 00403992
    PUSH EBP                            ; 00403993
    SUB ESP,0x10                        ; 00403994
    MOV EBP,dword ptr [ESP + 0x28]      ; 00403997
    MOV EDX,dword ptr [ESP + 0x40]      ; 0040399b
    PUSH EDX                            ; 0040399f
    MOV ECX,dword ptr [ESP + 0x40]      ; 004039a0
    PUSH ECX                            ; 004039a4
    MOV ESI,dword ptr [ESP + 0x40]      ; 004039a5
    PUSH ESI                            ; 004039a9
    MOV EAX,dword ptr [ESP + 0x40]      ; 004039aa
    PUSH EAX                            ; 004039ae
    PUSH EBP                            ; 004039af
    MOV EDX,dword ptr [ESP + 0x38]      ; 004039b0
    PUSH EDX                            ; 004039b4
    CALL engine_2d.c_computeOutcode_FUN_00403900 ; 004039b5
        ;   XREF to: 00403900 (UNCONDITIONAL_CALL)  ; int engine_2d.c_computeOutcode_FUN_00403900(int x, int y, int x_min, int y_min, ...)
    ADD ESP,0x18                        ; 004039ba
    MOV ECX,dword ptr [ESP + 0x40]      ; 004039bd
    PUSH ECX                            ; 004039c1
    MOV ESI,dword ptr [ESP + 0x40]      ; 004039c2
    PUSH ESI                            ; 004039c6
    MOV dword ptr [ESP + 0x14],EAX      ; 004039c7
    MOV EAX,dword ptr [ESP + 0x40]      ; 004039cb
    PUSH EAX                            ; 004039cf
    MOV EDX,dword ptr [ESP + 0x40]      ; 004039d0
    PUSH EDX                            ; 004039d4
    MOV ECX,dword ptr [ESP + 0x40]      ; 004039d5
    PUSH ECX                            ; 004039d9
    MOV ESI,dword ptr [ESP + 0x40]      ; 004039da
    PUSH ESI                            ; 004039de
    CALL engine_2d.c_computeOutcode_FUN_00403900 ; 004039df
        ;   XREF to: 00403900 (UNCONDITIONAL_CALL)  ; int engine_2d.c_computeOutcode_FUN_00403900(int x, int y, int x_min, int y_min, ...)
    ADD ESP,0x18                        ; 004039e4
    MOV dword ptr [ESP + 0x8],EAX       ; 004039e7
    XOR EAX,EAX                         ; 004039eb
    MOV dword ptr [ESP + 0x4],EAX       ; 004039ed
    MOV ESI,dword ptr [ESP + 0x30]      ; 004039f1
        ;   Label: LAB_004039f1
    MOV ECX,dword ptr [ESP + 0x2c]      ; 004039f5
    MOV EDX,dword ptr [ESP + 0x24]      ; 004039f9
    MOV EAX,dword ptr [ESP + 0xc]       ; 004039fd
    SUB ESI,EBP                         ; 00403a01
    SUB ECX,EDX                         ; 00403a03
    TEST EAX,EAX                        ; 00403a05
    JZ 0x00403a56                       ; 00403a07
        ;   XREF to: 00403a56 (CONDITIONAL_JUMP)  ; LAB_00403a56
    MOV EAX,dword ptr [ESP + 0xc]       ; 00403a09
        ;   Label: LAB_00403a09
    MOV EDX,dword ptr [ESP + 0x8]       ; 00403a0d
    TEST EAX,EDX                        ; 00403a11
    JZ 0x00403a66                       ; 00403a13
        ;   XREF to: 00403a66 (CONDITIONAL_JUMP)  ; LAB_00403a66
    XOR ECX,ECX                         ; 00403a15
    MOV dword ptr [ESP],ECX             ; 00403a17
    CMP dword ptr [ESP + 0x4],0x64      ; 00403a1a
        ;   Label: LAB_00403a1a
    JNZ 0x00403a44                      ; 00403a1f
        ;   XREF to: 00403a44 (CONDITIONAL_JUMP)  ; LAB_00403a44
    MOV ESI,0x5772d1                    ; 00403a21 | = "..\\engine\\2d.c"
    MOV EDI,0x86e                       ; 00403a26
    PUSH 0x5772e0                       ; 00403a2b | = "2d line clipping exceeded max iterations"
    MOV dword ptr [0x01cc4800],ESI      ; 00403a30 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDI      ; 00403a36 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00403a3c
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00403a41
    CMP dword ptr [ESP],0x0             ; 00403a44
        ;   Label: LAB_00403a44
    JNZ 0x00403ba5                      ; 00403a48
        ;   XREF to: 00403ba5 (CONDITIONAL_JUMP)  ; LAB_00403ba5
    ADD ESP,0x10                        ; 00403a4e
    POP EBP                             ; 00403a51
    POP EDI                             ; 00403a52
    POP ESI                             ; 00403a53
    POP EBX                             ; 00403a54
    RET                                 ; 00403a55
    CMP dword ptr [ESP + 0x8],0x0       ; 00403a56
        ;   Label: LAB_00403a56
    JNZ 0x00403a09                      ; 00403a5b
        ;   XREF to: 00403a09 (CONDITIONAL_JUMP)  ; LAB_00403a09
    MOV dword ptr [ESP],0x1             ; 00403a5d
    JMP 0x00403a1a                      ; 00403a64
        ;   XREF to: 00403a1a (UNCONDITIONAL_JUMP)  ; LAB_00403a1a
    TEST EAX,EAX                        ; 00403a66
        ;   Label: LAB_00403a66
    JZ 0x00403acd                       ; 00403a68
        ;   XREF to: 00403acd (CONDITIONAL_JUMP)  ; LAB_00403acd
    TEST AL,0x1                         ; 00403a6a
        ;   Label: LAB_00403a6a
    JZ 0x00403ad1                       ; 00403a6c
        ;   XREF to: 00403ad1 (CONDITIONAL_JUMP)  ; LAB_00403ad1
    TEST ESI,ESI                        ; 00403a6e
    JZ 0x00403a91                       ; 00403a70
        ;   XREF to: 00403a91 (CONDITIONAL_JUMP)  ; LAB_00403a91
    MOV EAX,dword ptr [ESP + 0x40]      ; 00403a72
    MOV EDX,0x10000                     ; 00403a76
    MOV EBX,ESI                         ; 00403a7b
    SUB EAX,EBP                         ; 00403a7d
    IMUL EDX                            ; 00403a7f
    IDIV EBX                            ; 00403a81
    MOV EDX,ECX                         ; 00403a83
    MOV EBX,dword ptr [ESP + 0x24]      ; 00403a85
    IMUL EDX                            ; 00403a89
    SHRD EAX,EDX,0x10                   ; 00403a8b
    ADD EBX,EAX                         ; 00403a8f
    MOV EDI,dword ptr [ESP + 0x40]      ; 00403a91
        ;   Label: LAB_00403a91
    CMP dword ptr [ESP + 0xc],0x0       ; 00403a95
        ;   Label: LAB_00403a95
    JZ 0x00403b64                       ; 00403a9a
        ;   XREF to: 00403b64 (CONDITIONAL_JUMP)  ; LAB_00403b64
    MOV EAX,dword ptr [ESP + 0x40]      ; 00403aa0
    PUSH EAX                            ; 00403aa4
    MOV EDX,dword ptr [ESP + 0x40]      ; 00403aa5
    PUSH EDX                            ; 00403aa9
    MOV ECX,dword ptr [ESP + 0x40]      ; 00403aaa
    PUSH ECX                            ; 00403aae
    MOV ESI,dword ptr [ESP + 0x40]      ; 00403aaf
    PUSH ESI                            ; 00403ab3
    PUSH EDI                            ; 00403ab4
    PUSH EBX                            ; 00403ab5
    MOV dword ptr [ESP + 0x3c],EBX      ; 00403ab6
    CALL engine_2d.c_computeOutcode_FUN_00403900 ; 00403aba
        ;   XREF to: 00403900 (UNCONDITIONAL_CALL)  ; int engine_2d.c_computeOutcode_FUN_00403900(int x, int y, int x_min, int y_min, ...)
    ADD ESP,0x18                        ; 00403abf
    MOV EBP,EDI                         ; 00403ac2
    MOV dword ptr [ESP + 0xc],EAX       ; 00403ac4
    JMP 0x00403b8e                      ; 00403ac8
        ;   XREF to: 00403b8e (UNCONDITIONAL_JUMP)  ; LAB_00403b8e
    MOV EAX,EDX                         ; 00403acd
        ;   Label: LAB_00403acd
    JMP 0x00403a6a                      ; 00403acf
        ;   XREF to: 00403a6a (UNCONDITIONAL_JUMP)  ; LAB_00403a6a
    TEST AL,0x2                         ; 00403ad1
        ;   Label: LAB_00403ad1
    JZ 0x00403afe                       ; 00403ad3
        ;   XREF to: 00403afe (CONDITIONAL_JUMP)  ; LAB_00403afe
    TEST ESI,ESI                        ; 00403ad5
    JZ 0x00403af8                       ; 00403ad7
        ;   XREF to: 00403af8 (CONDITIONAL_JUMP)  ; LAB_00403af8
    MOV EAX,dword ptr [ESP + 0x38]      ; 00403ad9
    MOV EDX,0x10000                     ; 00403add
    MOV EBX,ESI                         ; 00403ae2
    SUB EAX,EBP                         ; 00403ae4
    IMUL EDX                            ; 00403ae6
    IDIV EBX                            ; 00403ae8
    MOV EDX,ECX                         ; 00403aea
    MOV EBX,dword ptr [ESP + 0x24]      ; 00403aec
    IMUL EDX                            ; 00403af0
    SHRD EAX,EDX,0x10                   ; 00403af2
    ADD EBX,EAX                         ; 00403af6
    MOV EDI,dword ptr [ESP + 0x38]      ; 00403af8
        ;   Label: LAB_00403af8
    JMP 0x00403a95                      ; 00403afc
        ;   XREF to: 00403a95 (UNCONDITIONAL_JUMP)  ; LAB_00403a95
    TEST AL,0x4                         ; 00403afe
        ;   Label: LAB_00403afe
    JZ 0x00403b2f                       ; 00403b00
        ;   XREF to: 00403b2f (CONDITIONAL_JUMP)  ; LAB_00403b2f
    TEST ECX,ECX                        ; 00403b02
    JZ 0x00403b26                       ; 00403b04
        ;   XREF to: 00403b26 (CONDITIONAL_JUMP)  ; LAB_00403b26
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00403b06
    MOV EBX,dword ptr [ESP + 0x24]      ; 00403b0a
    MOV EDX,0x10000                     ; 00403b0e
    SUB EAX,EBX                         ; 00403b13
    MOV EBX,ECX                         ; 00403b15
    IMUL EDX                            ; 00403b17
    IDIV EBX                            ; 00403b19
    MOV EDX,ESI                         ; 00403b1b
    IMUL EDX                            ; 00403b1d
    SHRD EAX,EDX,0x10                   ; 00403b1f
    LEA EDI,[EAX + EBP*0x1]             ; 00403b23
    MOV EBX,dword ptr [ESP + 0x3c]      ; 00403b26
        ;   Label: LAB_00403b26
    JMP 0x00403a95                      ; 00403b2a
        ;   XREF to: 00403a95 (UNCONDITIONAL_JUMP)  ; LAB_00403a95
    TEST AL,0x8                         ; 00403b2f
        ;   Label: LAB_00403b2f
    JZ 0x00403a95                       ; 00403b31
        ;   XREF to: 00403a95 (CONDITIONAL_JUMP)  ; LAB_00403a95
    TEST ECX,ECX                        ; 00403b37
    JZ 0x00403b5b                       ; 00403b39
        ;   XREF to: 00403b5b (CONDITIONAL_JUMP)  ; LAB_00403b5b
    MOV EAX,dword ptr [ESP + 0x34]      ; 00403b3b
    MOV EDX,dword ptr [ESP + 0x24]      ; 00403b3f
    MOV EBX,ECX                         ; 00403b43
    SUB EAX,EDX                         ; 00403b45
    MOV EDX,0x10000                     ; 00403b47
    IMUL EDX                            ; 00403b4c
    IDIV EBX                            ; 00403b4e
    MOV EDX,ESI                         ; 00403b50
    IMUL EDX                            ; 00403b52
    SHRD EAX,EDX,0x10                   ; 00403b54
    LEA EDI,[EAX + EBP*0x1]             ; 00403b58
    MOV EBX,dword ptr [ESP + 0x34]      ; 00403b5b
        ;   Label: LAB_00403b5b
    JMP 0x00403a95                      ; 00403b5f
        ;   XREF to: 00403a95 (UNCONDITIONAL_JUMP)  ; LAB_00403a95
    MOV EAX,dword ptr [ESP + 0x40]      ; 00403b64
        ;   Label: LAB_00403b64
    PUSH EAX                            ; 00403b68
    MOV EDX,dword ptr [ESP + 0x40]      ; 00403b69
    PUSH EDX                            ; 00403b6d
    MOV ECX,dword ptr [ESP + 0x40]      ; 00403b6e
    PUSH ECX                            ; 00403b72
    MOV ESI,dword ptr [ESP + 0x40]      ; 00403b73
    PUSH ESI                            ; 00403b77
    PUSH EDI                            ; 00403b78
    PUSH EBX                            ; 00403b79
    MOV dword ptr [ESP + 0x44],EBX      ; 00403b7a
    MOV dword ptr [ESP + 0x48],EDI      ; 00403b7e
    CALL engine_2d.c_computeOutcode_FUN_00403900 ; 00403b82
        ;   XREF to: 00403900 (UNCONDITIONAL_CALL)  ; int engine_2d.c_computeOutcode_FUN_00403900(int x, int y, int x_min, int y_min, ...)
    ADD ESP,0x18                        ; 00403b87
    MOV dword ptr [ESP + 0x8],EAX       ; 00403b8a
    MOV EAX,dword ptr [ESP + 0x4]       ; 00403b8e
        ;   Label: LAB_00403b8e
    INC EAX                             ; 00403b92
    MOV dword ptr [ESP + 0x4],EAX       ; 00403b93
    CMP EAX,0x64                        ; 00403b97
    JL 0x004039f1                       ; 00403b9a
        ;   XREF to: 004039f1 (CONDITIONAL_JUMP)  ; LAB_004039f1
    JMP 0x00403a1a                      ; 00403ba0
        ;   XREF to: 00403a1a (UNCONDITIONAL_JUMP)  ; LAB_00403a1a
    MOV EDX,dword ptr [ESP + 0x30]      ; 00403ba5
        ;   Label: LAB_00403ba5
    PUSH EDX                            ; 00403ba9
    MOV ECX,dword ptr [ESP + 0x30]      ; 00403baa
    PUSH ECX                            ; 00403bae
    PUSH EBP                            ; 00403baf
    MOV EBX,dword ptr [ESP + 0x30]      ; 00403bb0
    PUSH EBX                            ; 00403bb4
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 00403bb5
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004015a0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 00403bba
    ADD ESP,0x10                        ; 00403bbd
    POP EBP                             ; 00403bc0
    POP EDI                             ; 00403bc1
    POP ESI                             ; 00403bc2
    POP EBX                             ; 00403bc3
    RET                                 ; 00403bc4

