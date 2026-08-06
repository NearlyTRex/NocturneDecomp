; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_FUN_0042f050(int param_1,short *param_2,int param_3,int param_4,int param_5)
;
; Local Variables:
; undefined        Stack[-0x114]:1  local_114
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_Edge_out_of_range_edge_d_0057a984
;   TerminatedCString s_cockpit_ckptutil_c_0057a99f
;   TerminatedCString s_Edge_out_of_range_edge_d_0057a9b5
;   TerminatedCString s_cockpit_ckptutil_c_0057a9d0
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   crt_stdio.c_sprintf_FUN_00563c90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042f050
        ;   Label: cockpit_ckptutil.c_FUN_0042f050
    PUSH ESI                            ; 0042f051
    PUSH EDI                            ; 0042f052
    PUSH EBP                            ; 0042f053
    SUB ESP,0x104                       ; 0042f054
    CMP dword ptr [ESP + 0x118],0x0     ; 0042f05a
    JZ 0x0042f17d                       ; 0042f062
        ;   XREF to: 0042f17d (CONDITIONAL_JUMP)  ; LAB_0042f17d
    MOV ECX,0xfb                        ; 0042f068
    MOV EBX,dword ptr [ESP + 0x120]     ; 0042f06d
    XOR EDI,EDI                         ; 0042f074
    MOV dword ptr [ESP + 0x100],ECX     ; 0042f076
    TEST EBX,EBX                        ; 0042f07d
    JLE 0x0042f17d                      ; 0042f07f
        ;   XREF to: 0042f17d (CONDITIONAL_JUMP)  ; LAB_0042f17d
    MOV EBP,dword ptr [ESP + 0x124]     ; 0042f085
    IMUL EBP,dword ptr [ESP + 0x128]    ; 0042f08c
    MOV ESI,dword ptr [ESP + 0x11c]     ; 0042f094
    DEC EBP                             ; 0042f09b
    MOV AX,word ptr [ESI + 0x2]         ; 0042f09c
        ;   Label: LAB_0042f09c
    MOV EBX,dword ptr [ESP + 0x124]     ; 0042f0a0
    MOVSX EDX,AX                        ; 0042f0a7
    IMUL EDX,EBX                        ; 0042f0aa
    MOV AX,word ptr [ESI]               ; 0042f0ad
    MOVSX EBX,AX                        ; 0042f0b0
    ADD EBX,EDX                         ; 0042f0b3
    TEST EBX,EBX                        ; 0042f0b5
    JL 0x0042f0bd                       ; 0042f0b7
        ;   XREF to: 0042f0bd (CONDITIONAL_JUMP)  ; LAB_0042f0bd
    CMP EBX,EBP                         ; 0042f0b9
    JLE 0x0042f0f0                      ; 0042f0bb
        ;   XREF to: 0042f0f0 (CONDITIONAL_JUMP)  ; LAB_0042f0f0
    PUSH EDI                            ; 0042f0bd
        ;   Label: LAB_0042f0bd
    PUSH 0x57a984                       ; 0042f0be | = "Edge out of range: edge %d"
    LEA EAX,[ESP + 0x8]                 ; 0042f0c3
    PUSH EAX                            ; 0042f0c7
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0042f0c8
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    MOV EAX,0x57a99f                    ; 0042f0cd | = "..\\cockpit\\ckptutil.c"
    ADD ESP,0xc                         ; 0042f0d2
    MOV [0x01cc4800],EAX                ; 0042f0d5 | g_CurrentFilename
    MOV EAX,ESP                         ; 0042f0da
    MOV EDX,0x54b                       ; 0042f0dc
    PUSH EAX                            ; 0042f0e1
    MOV dword ptr [0x01cc4804],EDX      ; 0042f0e2 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0042f0e8
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 0042f0ed
    ADD EBX,dword ptr [ESP + 0x118]     ; 0042f0f0
        ;   Label: LAB_0042f0f0
    MOV AL,byte ptr [ESP + 0x100]       ; 0042f0f7
    MOV byte ptr [EBX],AL               ; 0042f0fe
    MOV AX,word ptr [ESI + 0x6]         ; 0042f100
    ADD EAX,EAX                         ; 0042f104
    SAR AX,0x1                          ; 0042f106
    MOV EDX,dword ptr [ESP + 0x124]     ; 0042f109
    CWDE                                ; 0042f110
    IMUL EDX,EAX                        ; 0042f111
    MOV AX,word ptr [ESI + 0x4]         ; 0042f114
    MOVSX EBX,AX                        ; 0042f118
    ADD EBX,EDX                         ; 0042f11b
    TEST EBX,EBX                        ; 0042f11d
    JL 0x0042f125                       ; 0042f11f
        ;   XREF to: 0042f125 (CONDITIONAL_JUMP)  ; LAB_0042f125
    CMP EBX,EBP                         ; 0042f121
    JLE 0x0042f158                      ; 0042f123
        ;   XREF to: 0042f158 (CONDITIONAL_JUMP)  ; LAB_0042f158
    PUSH EDI                            ; 0042f125
        ;   Label: LAB_0042f125
    PUSH 0x57a9b5                       ; 0042f126 | = "Edge out of range: edge %d"
    LEA EAX,[ESP + 0x8]                 ; 0042f12b
    PUSH EAX                            ; 0042f12f
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0042f130
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    MOV EAX,0x57a9d0                    ; 0042f135 | = "..\\cockpit\\ckptutil.c"
    ADD ESP,0xc                         ; 0042f13a
    MOV [0x01cc4800],EAX                ; 0042f13d | g_CurrentFilename
    MOV EAX,ESP                         ; 0042f142
    MOV EDX,0x554                       ; 0042f144
    PUSH EAX                            ; 0042f149
    MOV dword ptr [0x01cc4804],EDX      ; 0042f14a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0042f150
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 0042f155
    MOV EAX,dword ptr [ESP + 0x118]     ; 0042f158
        ;   Label: LAB_0042f158
    MOV EDX,dword ptr [ESP + 0x120]     ; 0042f15f
    ADD ESI,0x8                         ; 0042f166
    ADD EBX,EAX                         ; 0042f169
    MOV AL,byte ptr [ESP + 0x100]       ; 0042f16b
    INC EDI                             ; 0042f172
    MOV byte ptr [EBX],AL               ; 0042f173
    CMP EDI,EDX                         ; 0042f175
    JL 0x0042f09c                       ; 0042f177
        ;   XREF to: 0042f09c (CONDITIONAL_JUMP)  ; LAB_0042f09c
    ADD ESP,0x104                       ; 0042f17d
        ;   Label: LAB_0042f17d
    POP EBP                             ; 0042f183
    POP EDI                             ; 0042f184
    POP ESI                             ; 0042f185
    POP EBX                             ; 0042f186
    RET                                 ; 0042f187

