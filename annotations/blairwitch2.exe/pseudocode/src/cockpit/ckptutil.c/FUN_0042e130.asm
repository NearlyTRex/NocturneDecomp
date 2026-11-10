; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_FUN_0042e130(char *param_1,int param_2,int param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_stdio.c_fclose_FUN_005b89c0
;   crt_unknown.c_FUN_005b8010
;   crt_unknown.c_sprintf_FUN_005b7790
;   engine_dosio.cpp_FUN_00460c70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042e130
        ;   Label: cockpit_ckptutil.c_FUN_0042e130
    PUSH ESI                            ; 0042e131
    PUSH EDI                            ; 0042e132
    PUSH EBP                            ; 0042e133
    SUB ESP,0x5c                        ; 0042e134
    MOV ESI,dword ptr [ESP + 0x70]      ; 0042e137
    MOV EBX,dword ptr [ESP + 0x78]      ; 0042e13b
    CMP dword ptr [ESP + 0x74],0x0      ; 0042e13f
    JZ 0x0042e234                       ; 0042e144
        ;   XREF to: 0042e234 (CONDITIONAL_JUMP)  ; LAB_0042e234
    PUSH 0x5cd643                       ; 0042e14a
        ;   Label: LAB_0042e14a
    PUSH ESI                            ; 0042e14f
    PUSH 0x5cd646                       ; 0042e150
    CALL engine_dosio.cpp_FUN_00460c70  ; 0042e155
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00460c70(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0042e15a
    MOV EDI,EAX                         ; 0042e15d
    TEST EAX,EAX                        ; 0042e15f
    JNZ 0x0042e196                      ; 0042e161
        ;   XREF to: 0042e196 (CONDITIONAL_JUMP)  ; LAB_0042e196
    PUSH ESI                            ; 0042e163
    PUSH 0x5cd64a                       ; 0042e164
    LEA EAX,[ESP + 0x8]                 ; 0042e169
    PUSH EAX                            ; 0042e16d
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0042e16e
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    MOV EAX,0x52c                       ; 0042e173
    ADD ESP,0xc                         ; 0042e178
    MOV [0x01d046a4],EAX                ; 0042e17b | DAT_01d046a4
    MOV EAX,ESP                         ; 0042e180
    MOV EBP,0x5cd66d                    ; 0042e182
    PUSH EAX                            ; 0042e187
    MOV dword ptr [0x01d046a0],EBP      ; 0042e188 | DAT_01d046a0
    CALL core_main.c_FUN_004e4500       ; 0042e18e
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0042e193
    PUSH EBX                            ; 0042e196
        ;   Label: LAB_0042e196
    PUSH 0x5cd683                       ; 0042e197
    PUSH EDI                            ; 0042e19c
    CALL crt_unknown.c_FUN_005b8010     ; 0042e19d
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 0042e1a2
    TEST EBX,EBX                        ; 0042e1a5
    JLE 0x0042e27e                      ; 0042e1a7
        ;   XREF to: 0042e27e (CONDITIONAL_JUMP)  ; LAB_0042e27e
    MOV EAX,dword ptr [ESP + 0x74]      ; 0042e1ad
    SHL EBX,0x3                         ; 0042e1b1
    XOR ESI,ESI                         ; 0042e1b4
    MOV dword ptr [ESP + 0x54],EAX      ; 0042e1b6
    MOV dword ptr [ESP + 0x50],EBX      ; 0042e1ba
    MOV dword ptr [ESP + 0x58],ESI      ; 0042e1be
    MOV EAX,dword ptr [ESP + 0x54]      ; 0042e1c2
        ;   Label: LAB_0042e1c2
    MOV EBP,dword ptr [EAX + 0x4]       ; 0042e1c6
    PUSH EBP                            ; 0042e1c9
    PUSH 0x5cd687                       ; 0042e1ca
    PUSH EDI                            ; 0042e1cf
    XOR EBX,EBX                         ; 0042e1d0
    CALL crt_unknown.c_FUN_005b8010     ; 0042e1d2
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 0042e1d7
    XOR ESI,ESI                         ; 0042e1da
    MOV EBP,dword ptr [ESP + 0x58]      ; 0042e1dc
    MOV EAX,dword ptr [ESP + 0x74]      ; 0042e1e0
        ;   Label: LAB_0042e1e0
    ADD EAX,EBP                         ; 0042e1e4
    CMP EBX,dword ptr [EAX + 0x4]       ; 0042e1e6
    JGE 0x0042e25c                      ; 0042e1e9
        ;   XREF to: 0042e25c (CONDITIONAL_JUMP)  ; LAB_0042e25c
    MOV EAX,dword ptr [EAX]             ; 0042e1eb
    MOV DX,word ptr [ESI + EAX*0x1 + 0x6] ; 0042e1ed
    MOV ECX,EDX                         ; 0042e1f2
    SHR CX,0xf                          ; 0042e1f4
    ADD EDX,EDX                         ; 0042e1f8
    AND ECX,0xffff                      ; 0042e1fa
    SAR DX,0x1                          ; 0042e200
    PUSH ECX                            ; 0042e203
    MOVSX ECX,DX                        ; 0042e204
    MOV DX,word ptr [ESI + EAX*0x1 + 0x4] ; 0042e207
    PUSH ECX                            ; 0042e20c
    MOVSX ECX,DX                        ; 0042e20d
    MOV DX,word ptr [ESI + EAX*0x1 + 0x2] ; 0042e210
    PUSH ECX                            ; 0042e215
    MOVSX ECX,DX                        ; 0042e216
    MOV AX,word ptr [ESI + EAX*0x1]     ; 0042e219
    PUSH ECX                            ; 0042e21d
    CWDE                                ; 0042e21e
    PUSH EAX                            ; 0042e21f
    PUSH 0x5cd68b                       ; 0042e220
    PUSH EDI                            ; 0042e225
    ADD ESI,0x8                         ; 0042e226
    INC EBX                             ; 0042e229
    CALL crt_unknown.c_FUN_005b8010     ; 0042e22a
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x1c                        ; 0042e22f
    JMP 0x0042e1e0                      ; 0042e232
        ;   XREF to: 0042e1e0 (UNCONDITIONAL_JUMP)  ; LAB_0042e1e0
    MOV ECX,0x5cd613                    ; 0042e234
        ;   Label: LAB_0042e234
    MOV EDI,0x525                       ; 0042e239
    PUSH 0x5cd629                       ; 0042e23e
    MOV dword ptr [0x01d046a0],ECX      ; 0042e243 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 0042e249 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0042e24f
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0042e254
    JMP 0x0042e14a                      ; 0042e257
        ;   XREF to: 0042e14a (UNCONDITIONAL_JUMP)  ; LAB_0042e14a
    MOV EDX,dword ptr [ESP + 0x58]      ; 0042e25c
        ;   Label: LAB_0042e25c
    MOV ECX,dword ptr [ESP + 0x54]      ; 0042e260
    MOV EBX,dword ptr [ESP + 0x50]      ; 0042e264
    ADD EDX,0x8                         ; 0042e268
    ADD ECX,0x8                         ; 0042e26b
    MOV dword ptr [ESP + 0x58],EDX      ; 0042e26e
    MOV dword ptr [ESP + 0x54],ECX      ; 0042e272
    CMP EDX,EBX                         ; 0042e276
    JL 0x0042e1c2                       ; 0042e278
        ;   XREF to: 0042e1c2 (CONDITIONAL_JUMP)  ; LAB_0042e1c2
    PUSH EDI                            ; 0042e27e
        ;   Label: LAB_0042e27e
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 0042e27f
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 0042e284
    ADD ESP,0x5c                        ; 0042e287
    POP EBP                             ; 0042e28a
    POP EDI                             ; 0042e28b
    POP ESI                             ; 0042e28c
    POP EBX                             ; 0042e28d
    RET                                 ; 0042e28e

