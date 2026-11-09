; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_FUN_004941e0(void)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   shape_edittool.cpp_FUN_00496dd0 at 00496dd0
;   shape_edittool.cpp_FUN_00496ee0 at 00496f5d
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005dbd65
;   TerminatedCString s_paintWindowBackground_ca_005dbd7b
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c3eb5c
;   undefined4 DAT_01c4354c
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004941e0
        ;   Label: shape_edittool.cpp_FUN_004941e0
    PUSH ESI                            ; 004941e1
    PUSH EDI                            ; 004941e2
    PUSH EBP                            ; 004941e3
    SUB ESP,0x8                         ; 004941e4
    CMP dword ptr [0x01c3eb5c],0x1      ; 004941e7 | DAT_01c3eb5c
    JL 0x00494277                       ; 004941ee
        ;   XREF to: 00494277 (CONDITIONAL_JUMP)  ; LAB_00494277
    MOV EAX,[0x01c3eb5c]                ; 004941f4 | DAT_01c3eb5c
        ;   Label: LAB_004941f4
    DEC EAX                             ; 004941f9
    SHL EAX,0x3                         ; 004941fa
    MOV EDX,EAX                         ; 004941fd
    SHL EAX,0x6                         ; 004941ff
    SUB EAX,EDX                         ; 00494202
    MOV EDX,0x1c3eb60                   ; 00494204
    ADD EDX,EAX                         ; 00494209
    MOV EBX,dword ptr [EDX + 0x1d8]     ; 0049420b
    MOV dword ptr [ESP + 0x4],EDX       ; 00494211
    TEST EBX,EBX                        ; 00494215
    JZ 0x0049426f                       ; 00494217
        ;   XREF to: 0049426f (CONDITIONAL_JUMP)  ; LAB_0049426f
    MOV ESI,dword ptr [0x0061b4a0]      ; 00494219 | DAT_0061b4a0
    MOV EDX,dword ptr [EDX + 0x1e4]     ; 0049421f
    IMUL EDX,ESI                        ; 00494225
    MOV EAX,EDX                         ; 00494228
    SAR EDX,0x1f                        ; 0049422a
    SHL EDX,0x3                         ; 0049422d
    SBB EAX,EDX                         ; 00494230
    SAR EAX,0x3                         ; 00494232
    MOV dword ptr [ESP],EAX             ; 00494235
    MOV EAX,dword ptr [ESP + 0x4]       ; 00494238
    MOV EDI,dword ptr [EAX + 0x1e8]     ; 0049423c
    XOR EBP,EBP                         ; 00494242
    TEST EDI,EDI                        ; 00494244
    JLE 0x0049426f                      ; 00494246
        ;   XREF to: 0049426f (CONDITIONAL_JUMP)  ; LAB_0049426f
    MOV EDI,dword ptr [ESP + 0x4]       ; 00494248
        ;   Label: LAB_00494248
    MOV EDI,dword ptr [EDI + 0x1e0]     ; 0049424c
    ADD EDI,EBP                         ; 00494252
    MOV EDI,dword ptr [EDI*0x4 + 0x1c4354c] ; 00494254 | DAT_01c4354c
    TEST EDI,EDI                        ; 0049425b
    JNZ 0x0049429f                      ; 0049425d
        ;   XREF to: 0049429f (CONDITIONAL_JUMP)  ; LAB_0049429f
    ADD EBX,dword ptr [ESP]             ; 0049425f
        ;   Label: LAB_0049425f
    MOV EAX,dword ptr [ESP + 0x4]       ; 00494262
    INC EBP                             ; 00494266
    CMP EBP,dword ptr [EAX + 0x1e8]     ; 00494267
    JL 0x00494248                       ; 0049426d
        ;   XREF to: 00494248 (CONDITIONAL_JUMP)  ; LAB_00494248
    ADD ESP,0x8                         ; 0049426f
        ;   Label: LAB_0049426f
    POP EBP                             ; 00494272
    POP EDI                             ; 00494273
    POP ESI                             ; 00494274
    POP EBX                             ; 00494275
    RET                                 ; 00494276
    MOV ECX,0x5dbd65                    ; 00494277 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_00494277
    MOV EBX,0x3dc                       ; 0049427c
    PUSH 0x5dbd7b                       ; 00494281 | = "paintWindowBackground called but no w..."
    MOV dword ptr [0x01d1d400],ECX      ; 00494286 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 0049428c | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00494292
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00494297
    JMP 0x004941f4                      ; 0049429a
        ;   XREF to: 004941f4 (UNCONDITIONAL_JUMP)  ; LAB_004941f4
    MOV EDX,dword ptr [ESP + 0x4]       ; 0049429f
        ;   Label: LAB_0049429f
    MOV ECX,dword ptr [0x0061b4a0]      ; 004942a3 | DAT_0061b4a0
    MOV EDX,dword ptr [EDX + 0x1dc]     ; 004942a9
    IMUL EDX,ECX                        ; 004942af
    MOV EAX,EDX                         ; 004942b2
    SAR EDX,0x1f                        ; 004942b4
    SHL EDX,0x3                         ; 004942b7
    SBB EAX,EDX                         ; 004942ba
    SAR EAX,0x3                         ; 004942bc
    MOV ESI,EBX                         ; 004942bf
    MOV ECX,dword ptr [ESP]             ; 004942c1
    ADD EDI,EAX                         ; 004942c4
    PUSH EDI                            ; 004942c6
    MOV EAX,ECX                         ; 004942c7
    SHR ECX,0x2                         ; 004942c9
    MOVSD.REP ES:EDI,ESI                ; 004942cc
    MOV CL,AL                           ; 004942ce
    AND CL,0x3                          ; 004942d0
    MOVSB.REP ES:EDI,ESI                ; 004942d3
    POP EDI                             ; 004942d5
    JMP 0x0049425f                      ; 004942d6
        ;   XREF to: 0049425f (UNCONDITIONAL_JUMP)  ; LAB_0049425f

