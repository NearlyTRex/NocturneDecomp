; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_pcx.c_writePCXScanline_FUN_00548c50(int row_index, FILE * pcx_file)
;
; Parameters:
; int              Stack[0x4]:4   row_index
; FILE *           Stack[0x8]:4   pcx_file
;
; XREF[1]:
;   engine_pcx.c_saveScreenshotGeneral_FUN_005490c0 at 005491f4
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   void*[1024] g_ScreenBufferArray
;
; Called Functions:
;   crt_stdio.c_fputc_FUN_006007a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548c50
        ;   Label: engine_pcx.c_writePCXScanline_FUN_00548c50
    PUSH ESI                            ; 00548c51
    PUSH EDI                            ; 00548c52
    PUSH EBP                            ; 00548c53
    MOV EBX,dword ptr [ESP + 0x18]      ; 00548c54
    MOV ESI,dword ptr [ESP + 0x14]      ; 00548c58
    MOV EDX,dword ptr [0x00679394]      ; 00548c5c | int g_WindowWidth
    XOR EDI,EDI                         ; 00548c62
    MOV ESI,dword ptr [ESI*0x4 + 0x2cf6a9c] ; 00548c64 | void *[1024] g_ScreenBufferArray
    TEST EDX,EDX                        ; 00548c6b
    JLE 0x00548cae                      ; 00548c6d | LAB_00548cae
        ;   XREF to: 00548cae (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 00548c6f
        ;   Label: LAB_00548c6f
    MOV AL,byte ptr [ESI]               ; 00548c71
    CMP EAX,0xc0                        ; 00548c73
    JL 0x00548c8e                       ; 00548c78 | LAB_00548c8e
        ;   XREF to: 00548c8e (CONDITIONAL_JUMP)
    TEST byte ptr [EBX + 0xd],0x4       ; 00548c7a
    JZ 0x00548cb3                       ; 00548c7e | LAB_00548cb3
        ;   XREF to: 00548cb3 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 00548c80
        ;   Label: LAB_00548c80
    PUSH 0xc1                           ; 00548c81
    CALL crt_stdio.c_fputc_FUN_006007a0 ; 00548c86 | int crt_stdio.c_fputc_FUN_006007a0(int character, FILE * file)
        ;   Label: LAB_00548c86
        ;   XREF to: 006007a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00548c8b
    TEST byte ptr [EBX + 0xd],0x4       ; 00548c8e
        ;   Label: LAB_00548c8e
    JZ 0x00548ce8                       ; 00548c92 | LAB_00548ce8
        ;   XREF to: 00548ce8 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 00548c94
        ;   Label: LAB_00548c94
    PUSH EBX                            ; 00548c96
    MOV AL,byte ptr [ESI]               ; 00548c97
    PUSH EAX                            ; 00548c99
    CALL crt_stdio.c_fputc_FUN_006007a0 ; 00548c9a | int crt_stdio.c_fputc_FUN_006007a0(int character, FILE * file)
        ;   Label: LAB_00548c9a
        ;   XREF to: 006007a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00548c9f
    MOV ECX,dword ptr [0x00679394]      ; 00548ca2 | int g_WindowWidth
        ;   Label: LAB_00548ca2
    INC EDI                             ; 00548ca8
    INC ESI                             ; 00548ca9
    CMP EDI,ECX                         ; 00548caa
    JL 0x00548c6f                       ; 00548cac | LAB_00548c6f
        ;   XREF to: 00548c6f (CONDITIONAL_JUMP)
    POP EBP                             ; 00548cae
        ;   Label: LAB_00548cae
    POP EDI                             ; 00548caf
    POP ESI                             ; 00548cb0
    POP EBX                             ; 00548cb1
    RET                                 ; 00548cb2
    MOV EBP,dword ptr [EBX + 0x4]       ; 00548cb3
        ;   Label: LAB_00548cb3
    MOV EAX,dword ptr [EBX + 0x14]      ; 00548cb6
    SUB EAX,EBP                         ; 00548cb9
    CMP EAX,0x1                         ; 00548cbb
    JBE 0x00548c80                      ; 00548cbe | LAB_00548c80
        ;   XREF to: 00548c80 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX]             ; 00548cc0
    MOV byte ptr [EAX],0xc1             ; 00548cc2
    MOV EAX,dword ptr [EBX]             ; 00548cc5
    CMP byte ptr [EAX],0xa              ; 00548cc7
    JZ 0x00548ce3                       ; 00548cca | LAB_00548ce3
        ;   XREF to: 00548ce3 (CONDITIONAL_JUMP)
    MOV DH,byte ptr [EBX + 0xd]         ; 00548ccc
    OR DH,0x10                          ; 00548ccf
    MOV EAX,dword ptr [EBX + 0x4]       ; 00548cd2
    MOV byte ptr [EBX + 0xd],DH         ; 00548cd5
    INC EAX                             ; 00548cd8
    MOV EDX,dword ptr [EBX]             ; 00548cd9
    MOV dword ptr [EBX + 0x4],EAX       ; 00548cdb
    INC EDX                             ; 00548cde
    MOV dword ptr [EBX],EDX             ; 00548cdf
    JMP 0x00548c8e                      ; 00548ce1 | LAB_00548c8e
        ;   XREF to: 00548c8e (UNCONDITIONAL_JUMP)
    PUSH EBX                            ; 00548ce3
        ;   Label: LAB_00548ce3
    PUSH 0xa                            ; 00548ce4
    JMP 0x00548c86                      ; 00548ce6 | LAB_00548c86
        ;   XREF to: 00548c86 (UNCONDITIONAL_JUMP)
    MOV ECX,dword ptr [EBX + 0x4]       ; 00548ce8
        ;   Label: LAB_00548ce8
    MOV EAX,dword ptr [EBX + 0x14]      ; 00548ceb
    SUB EAX,ECX                         ; 00548cee
    CMP EAX,0x1                         ; 00548cf0
    JBE 0x00548c94                      ; 00548cf3 | LAB_00548c94
        ;   XREF to: 00548c94 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX]             ; 00548cf5
    MOV DL,byte ptr [ESI]               ; 00548cf7
    MOV byte ptr [EAX],DL               ; 00548cf9
    MOV EAX,dword ptr [EBX]             ; 00548cfb
    CMP byte ptr [EAX],0xa              ; 00548cfd
    JZ 0x00548d18                       ; 00548d00 | LAB_00548d18
        ;   XREF to: 00548d18 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [EBX + 0xd]         ; 00548d02
    OR AL,0x10                          ; 00548d05
    MOV EBP,dword ptr [EBX + 0x4]       ; 00548d07
    MOV byte ptr [EBX + 0xd],AL         ; 00548d0a
    INC EBP                             ; 00548d0d
    MOV EAX,dword ptr [EBX]             ; 00548d0e
    MOV dword ptr [EBX + 0x4],EBP       ; 00548d10
    INC EAX                             ; 00548d13
    MOV dword ptr [EBX],EAX             ; 00548d14
    JMP 0x00548ca2                      ; 00548d16 | LAB_00548ca2
        ;   XREF to: 00548ca2 (UNCONDITIONAL_JUMP)
    PUSH EBX                            ; 00548d18
        ;   Label: LAB_00548d18
    PUSH 0xa                            ; 00548d19
    JMP 0x00548c9a                      ; 00548d1b | LAB_00548c9a
        ;   XREF to: 00548c9a (UNCONDITIONAL_JUMP)

