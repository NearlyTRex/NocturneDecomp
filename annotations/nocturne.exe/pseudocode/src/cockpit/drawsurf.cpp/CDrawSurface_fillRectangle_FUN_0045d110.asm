; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_fillRectangle_FUN_0045d110(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x1
; int              Stack[0xc]:4   y1
; int              Stack[0x10]:4   x2
; int              Stack[0x14]:4   y2
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_0045d2b0 at 0045d2c2
;
; Referenced Globals:
;   TerminatedCString s_cockpit_drawsurf_cpp_0057da56
;   TerminatedCString s_Invalid_bitsPerPixel_0057da6e
;   undefined4 DAT_005b7624
;   undefined4 DAT_01b4d710
;   undefined4 DAT_01b4d71c
;   undefined4 DAT_01bd2fa0
;   undefined4 DAT_01bd2fa4
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   cockpit_drawsurf.cpp_drawHorizontalLineWithEffect_FUN_0045bc20
;   core_main.c_FUN_004c8440
;   crt_memory.c_memset_FUN_00563cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045d110
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_fillRectangle_FUN_0045d110
    PUSH ESI                            ; 0045d111
    PUSH EDI                            ; 0045d112
    PUSH EBP                            ; 0045d113
    SUB ESP,0x14                        ; 0045d114
    MOV EAX,dword ptr [ESP + 0x28]      ; 0045d117
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0045d11b
    MOV ESI,dword ptr [ESP + 0x30]      ; 0045d11f
    MOV EBX,dword ptr [ESP + 0x34]      ; 0045d123
    MOV EBP,dword ptr [ESP + 0x38]      ; 0045d127
    MOV EDX,dword ptr [EAX + 0x8]       ; 0045d12b
    MOV ECX,dword ptr [EAX + 0xc]       ; 0045d12e
    ADD EBX,EDX                         ; 0045d131
    ADD EDI,EDX                         ; 0045d133
    ADD ESI,ECX                         ; 0045d135
    MOV EDX,dword ptr [EAX + 0x10]      ; 0045d137
    ADD EBP,ECX                         ; 0045d13a
    CMP EDI,EDX                         ; 0045d13c
    JGE 0x0045d142                      ; 0045d13e
        ;   XREF to: 0045d142 (CONDITIONAL_JUMP)  ; LAB_0045d142
    MOV EDI,EDX                         ; 0045d140
    MOV ECX,dword ptr [EAX + 0x18]      ; 0045d142
        ;   Label: LAB_0045d142
    CMP EBX,ECX                         ; 0045d145
    JLE 0x0045d14b                      ; 0045d147
        ;   XREF to: 0045d14b (CONDITIONAL_JUMP)  ; LAB_0045d14b
    MOV EBX,ECX                         ; 0045d149
    CMP EDI,EBX                         ; 0045d14b
        ;   Label: LAB_0045d14b
    JG 0x0045d190                       ; 0045d14d
        ;   XREF to: 0045d190 (CONDITIONAL_JUMP)  ; LAB_0045d190
    MOV EDX,dword ptr [EAX + 0x14]      ; 0045d14f
    CMP ESI,EDX                         ; 0045d152
    JGE 0x0045d158                      ; 0045d154
        ;   XREF to: 0045d158 (CONDITIONAL_JUMP)  ; LAB_0045d158
    MOV ESI,EDX                         ; 0045d156
    MOV ECX,dword ptr [EAX + 0x1c]      ; 0045d158
        ;   Label: LAB_0045d158
    CMP EBP,ECX                         ; 0045d15b
    JLE 0x0045d161                      ; 0045d15d
        ;   XREF to: 0045d161 (CONDITIONAL_JUMP)  ; LAB_0045d161
    MOV EBP,ECX                         ; 0045d15f
    CMP ESI,EBP                         ; 0045d161
        ;   Label: LAB_0045d161
    JG 0x0045d190                       ; 0045d163
        ;   XREF to: 0045d190 (CONDITIONAL_JUMP)  ; LAB_0045d190
    CMP dword ptr [0x01b4d71c],0x0      ; 0045d165 | DAT_01b4d71c
    JZ 0x0045d250                       ; 0045d16c
        ;   XREF to: 0045d250 (CONDITIONAL_JUMP)  ; LAB_0045d250
    PUSH ESI                            ; 0045d172
        ;   Label: LAB_0045d172
    PUSH EBX                            ; 0045d173
    PUSH EDI                            ; 0045d174
    INC ESI                             ; 0045d175
    CALL cockpit_drawsurf.cpp_drawHorizontalLineWithEffect_FUN_0045bc20 ; 0045d176
        ;   XREF to: 0045bc20 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_drawHorizontalLineWithEffect_FUN_0045bc20(int start_x, int end_x, int y)
    ADD ESP,0xc                         ; 0045d17b
    CMP ESI,EBP                         ; 0045d17e
    JLE 0x0045d172                      ; 0045d180
        ;   XREF to: 0045d172 (CONDITIONAL_JUMP)  ; LAB_0045d172
    LEA EAX,[EAX]                       ; 0045d182
    LEA EDX,[EDX]                       ; 0045d188
    MOV EAX,EAX                         ; 0045d18e
    ADD ESP,0x14                        ; 0045d190
        ;   Label: LAB_0045d190
    POP EBP                             ; 0045d193
    POP EDI                             ; 0045d194
    POP ESI                             ; 0045d195
    POP EBX                             ; 0045d196
    RET                                 ; 0045d197
    SUB EBX,EDI                         ; 0045d198
        ;   Label: LAB_0045d198
    INC EBX                             ; 0045d19a
    MOV dword ptr [ESP],EBX             ; 0045d19b
    MOV EBX,EBP                         ; 0045d19e
    MOV EBP,EDX                         ; 0045d1a0
    MOV EDX,dword ptr [ESP]             ; 0045d1a2
        ;   Label: LAB_0045d1a2
    PUSH EDX                            ; 0045d1a5
    MOV ECX,dword ptr [0x01b4d710]      ; 0045d1a6 | DAT_01b4d710
    MOV EAX,dword ptr [EBX + 0x1bd2fa0] ; 0045d1ac | DAT_01bd2fa0 | DAT_01bd2fa4
    PUSH ECX                            ; 0045d1b2
    ADD EAX,EDI                         ; 0045d1b3
    PUSH EAX                            ; 0045d1b5
    ADD EBX,0x4                         ; 0045d1b6
    INC ESI                             ; 0045d1b9
    CALL crt_memory.c_memset_FUN_00563cc0 ; 0045d1ba
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0045d1bf
    CMP EBX,EBP                         ; 0045d1c2
    JLE 0x0045d1a2                      ; 0045d1c4
        ;   XREF to: 0045d1a2 (CONDITIONAL_JUMP)  ; LAB_0045d1a2
    ADD ESP,0x14                        ; 0045d1c6
    POP EBP                             ; 0045d1c9
    POP EDI                             ; 0045d1ca
    POP ESI                             ; 0045d1cb
    POP EBX                             ; 0045d1cc
    RET                                 ; 0045d1cd
    MOV dword ptr [ESP + 0x8],EDX       ; 0045d1ce
        ;   Label: LAB_0045d1ce
    MOV EAX,dword ptr [EBP + 0x1bd2fa0] ; 0045d1d2 | DAT_01bd2fa0 | DAT_01bd2fa4
        ;   Label: LAB_0045d1d2
    MOV dword ptr [ESP + 0x10],EAX      ; 0045d1d8
    MOV EAX,EDI                         ; 0045d1dc
    CMP EDI,EBX                         ; 0045d1de
    JG 0x0045d1fe                       ; 0045d1e0
        ;   XREF to: 0045d1fe (CONDITIONAL_JUMP)  ; LAB_0045d1fe
    MOV ECX,dword ptr [ESP + 0x10]      ; 0045d1e2
    LEA EDX,[EDI + EDI*0x1]             ; 0045d1e6
    ADD EDX,ECX                         ; 0045d1e9
    ADD EDX,0x2                         ; 0045d1eb
        ;   Label: LAB_0045d1eb
    MOV CX,word ptr [0x01b4d710]        ; 0045d1ee | DAT_01b4d710
    INC EAX                             ; 0045d1f5
    MOV word ptr [EDX + -0x2],CX        ; 0045d1f6
    CMP EAX,EBX                         ; 0045d1fa
    JLE 0x0045d1eb                      ; 0045d1fc
        ;   XREF to: 0045d1eb (CONDITIONAL_JUMP)  ; LAB_0045d1eb
    MOV EAX,dword ptr [ESP + 0x8]       ; 0045d1fe
        ;   Label: LAB_0045d1fe
    ADD EBP,0x4                         ; 0045d202
    INC ESI                             ; 0045d205
    CMP EBP,EAX                         ; 0045d206
    JG 0x0045d190                       ; 0045d208
        ;   XREF to: 0045d190 (CONDITIONAL_JUMP)  ; LAB_0045d190
    JMP 0x0045d1d2                      ; 0045d20a
        ;   XREF to: 0045d1d2 (UNCONDITIONAL_JUMP)  ; LAB_0045d1d2
    MOV dword ptr [ESP + 0x4],EDX       ; 0045d20c
        ;   Label: LAB_0045d20c
    MOV EAX,dword ptr [EBP + 0x1bd2fa0] ; 0045d210 | DAT_01bd2fa0 | DAT_01bd2fa4
        ;   Label: LAB_0045d210
    MOV EDX,EDI                         ; 0045d216
    MOV dword ptr [ESP + 0xc],EAX       ; 0045d218
    CMP EDI,EBX                         ; 0045d21c
    JG 0x0045d23e                       ; 0045d21e
        ;   XREF to: 0045d23e (CONDITIONAL_JUMP)  ; LAB_0045d23e
    MOV ECX,dword ptr [ESP + 0xc]       ; 0045d220
    LEA EAX,[EDI*0x4 + 0x0]             ; 0045d224
    ADD EAX,ECX                         ; 0045d22b
    ADD EAX,0x4                         ; 0045d22d
        ;   Label: LAB_0045d22d
    MOV ECX,dword ptr [0x01b4d710]      ; 0045d230 | DAT_01b4d710
    INC EDX                             ; 0045d236
    MOV dword ptr [EAX + -0x4],ECX      ; 0045d237
    CMP EDX,EBX                         ; 0045d23a
    JLE 0x0045d22d                      ; 0045d23c
        ;   XREF to: 0045d22d (CONDITIONAL_JUMP)  ; LAB_0045d22d
    MOV EAX,dword ptr [ESP + 0x4]       ; 0045d23e
        ;   Label: LAB_0045d23e
    ADD EBP,0x4                         ; 0045d242
    INC ESI                             ; 0045d245
    CMP EBP,EAX                         ; 0045d246
    JG 0x0045d190                       ; 0045d248
        ;   XREF to: 0045d190 (CONDITIONAL_JUMP)  ; LAB_0045d190
    JMP 0x0045d210                      ; 0045d24e
        ;   XREF to: 0045d210 (UNCONDITIONAL_JUMP)  ; LAB_0045d210
    LEA EDX,[EBP*0x4 + 0x0]             ; 0045d250
        ;   Label: LAB_0045d250
    MOV EAX,[0x005b7624]                ; 0045d257 | DAT_005b7624
    LEA EBP,[ESI*0x4 + 0x0]             ; 0045d25c
    CMP EAX,0x10                        ; 0045d263
    JNC 0x0045d273                      ; 0045d266
        ;   XREF to: 0045d273 (CONDITIONAL_JUMP)  ; LAB_0045d273
    CMP EAX,0x8                         ; 0045d268
    JZ 0x0045d198                       ; 0045d26b
        ;   XREF to: 0045d198 (CONDITIONAL_JUMP)  ; LAB_0045d198
    JMP 0x0045d27e                      ; 0045d271
        ;   XREF to: 0045d27e (UNCONDITIONAL_JUMP)  ; LAB_0045d27e
    JBE 0x0045d1ce                      ; 0045d273
        ;   XREF to: 0045d1ce (CONDITIONAL_JUMP)  ; LAB_0045d1ce
        ;   Label: LAB_0045d273
    CMP EAX,0x20                        ; 0045d279
    JZ 0x0045d20c                       ; 0045d27c
        ;   XREF to: 0045d20c (CONDITIONAL_JUMP)  ; LAB_0045d20c
    MOV EDX,0x57da56                    ; 0045d27e | = "..\\cockpit\\drawsurf.cpp"
        ;   Label: LAB_0045d27e
    MOV ECX,0x524                       ; 0045d283
    PUSH 0x57da6e                       ; 0045d288 | = "Invalid bitsPerPixel!"
    MOV dword ptr [0x01cc4800],EDX      ; 0045d28d | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0045d293 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0045d299
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0045d29e
    ADD ESP,0x14                        ; 0045d2a1
    POP EBP                             ; 0045d2a4
    POP EDI                             ; 0045d2a5
    POP ESI                             ; 0045d2a6
    POP EBX                             ; 0045d2a7
    RET                                 ; 0045d2a8

