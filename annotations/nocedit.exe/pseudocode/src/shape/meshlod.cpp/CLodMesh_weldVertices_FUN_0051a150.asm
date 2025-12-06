; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_meshlod.cpp_CLodMesh_weldVertices_FUN_0051a150(CLodMesh * this_ptr, float weld_threshold)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   weld_threshold
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   shape_meshlod.cpp_CLodMesh_getLOD_FUN_0051b920 at 0051ba39
;   shape_meshlod.cpp_CLodMesh_postprocessMesh_FUN_0051b330 at 0051b386
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051a150
        ;   Label: shape_meshlod.cpp_CLodMesh_weldVertices_FUN_0051a150
    PUSH ESI                            ; 0051a151
    PUSH EDI                            ; 0051a152
    PUSH EBP                            ; 0051a153
    SUB ESP,0x20                        ; 0051a154
    MOV EDX,dword ptr [ESP + 0x34]      ; 0051a157
    MOV ECX,dword ptr [EDX]             ; 0051a15b
    XOR EDI,EDI                         ; 0051a15d
    TEST ECX,ECX                        ; 0051a15f
    JLE 0x0051a180                      ; 0051a161 | LAB_0051a180
        ;   XREF to: 0051a180 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 0051a163
    MOV ECX,dword ptr [EDX + 0x4]       ; 0051a165
        ;   Label: LAB_0051a165
    MOV dword ptr [ECX + EAX*0x1 + 0x3f4],EDI ; 0051a168
    INC EDI                             ; 0051a16f
    MOV EBX,dword ptr [EDX]             ; 0051a170
    ADD EAX,0x4c4                       ; 0051a172
    CMP EDI,EBX                         ; 0051a177
    JL 0x0051a165                       ; 0051a179 | LAB_0051a165
        ;   XREF to: 0051a165 (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 0051a17b
    MOV ECX,ECX                         ; 0051a17e
    FLD float ptr [ESP + 0x38]          ; 0051a180
        ;   Label: LAB_0051a180
    FMUL ST0                            ; 0051a184
    MOV ESI,dword ptr [EDX]             ; 0051a186
    XOR EDI,EDI                         ; 0051a188
    FSTP float ptr [ESP + 0x18]         ; 0051a18a
    TEST ESI,ESI                        ; 0051a18e
    JLE 0x0051a1c2                      ; 0051a190 | LAB_0051a1c2
        ;   XREF to: 0051a1c2 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x14],EDI      ; 0051a192
    MOV EBP,dword ptr [ESP + 0x14]      ; 0051a196
        ;   Label: LAB_0051a196
    MOV EAX,dword ptr [EDX + 0x4]       ; 0051a19a
    ADD EAX,EBP                         ; 0051a19d
    MOV ECX,dword ptr [EAX + 0x3f4]     ; 0051a19f
    CMP EDI,ECX                         ; 0051a1a5
    JZ 0x0051a278                       ; 0051a1a7 | LAB_0051a278
        ;   XREF to: 0051a278 (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [ESP + 0x14]      ; 0051a1ad
        ;   Label: LAB_0051a1ad
    INC EDI                             ; 0051a1b1
    ADD EBP,0x4c4                       ; 0051a1b2
    MOV EAX,dword ptr [EDX]             ; 0051a1b8
    MOV dword ptr [ESP + 0x14],EBP      ; 0051a1ba
    CMP EDI,EAX                         ; 0051a1be
    JL 0x0051a196                       ; 0051a1c0 | LAB_0051a196
        ;   XREF to: 0051a196 (CONDITIONAL_JUMP)
    XOR ECX,ECX                         ; 0051a1c2
        ;   Label: LAB_0051a1c2
    MOV EBX,dword ptr [EDX + 0x8]       ; 0051a1c4
    MOV dword ptr [ESP + 0x10],ECX      ; 0051a1c7
    TEST EBX,EBX                        ; 0051a1cb
    JLE 0x0051a219                      ; 0051a1cd | LAB_0051a219
        ;   XREF to: 0051a219 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0xc],ECX       ; 0051a1cf
    MOV EDI,dword ptr [ESP + 0xc]       ; 0051a1d3
        ;   Label: LAB_0051a1d3
    XOR EAX,EAX                         ; 0051a1d7
    MOV ECX,dword ptr [EDX + 0xc]       ; 0051a1d9
        ;   Label: LAB_0051a1d9
    ADD ECX,EDI                         ; 0051a1dc
    IMUL EBX,dword ptr [ECX + EAX*0x1 + 0x10],0x4c4 ; 0051a1de
    MOV ESI,dword ptr [EDX + 0x4]       ; 0051a1e6
    ADD EAX,0x4                         ; 0051a1e9
    MOV EBX,dword ptr [ESI + EBX*0x1 + 0x3f4] ; 0051a1ec
    MOV dword ptr [ECX + EAX*0x1 + 0xc],EBX ; 0051a1f3
    CMP EAX,0xc                         ; 0051a1f7
    JNZ 0x0051a1d9                      ; 0051a1fa | LAB_0051a1d9
        ;   XREF to: 0051a1d9 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0xc]       ; 0051a1fc
    MOV ECX,dword ptr [ESP + 0x10]      ; 0051a200
    MOV EBX,dword ptr [EDX + 0x8]       ; 0051a204
    ADD EAX,0x8c                        ; 0051a207
    INC ECX                             ; 0051a20c
    MOV dword ptr [ESP + 0xc],EAX       ; 0051a20d
    MOV dword ptr [ESP + 0x10],ECX      ; 0051a211
    CMP ECX,EBX                         ; 0051a215
    JL 0x0051a1d3                       ; 0051a217 | LAB_0051a1d3
        ;   XREF to: 0051a1d3 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [EDX + 0x44]      ; 0051a219
        ;   Label: LAB_0051a219
    XOR EDI,EDI                         ; 0051a21c
    TEST ESI,ESI                        ; 0051a21e
    JLE 0x0051a270                      ; 0051a220 | LAB_0051a270
        ;   XREF to: 0051a270 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 0051a222
    MOV ECX,dword ptr [EDX + 0x48]      ; 0051a224
        ;   Label: LAB_0051a224
    IMUL EBX,dword ptr [ECX + EAX*0x1],0x4c4 ; 0051a227
    MOV ESI,dword ptr [EDX + 0x4]       ; 0051a22e
    MOV EBX,dword ptr [ESI + EBX*0x1 + 0x3f4] ; 0051a231
    MOV dword ptr [ECX + EAX*0x1],EBX   ; 0051a238
    MOV ECX,dword ptr [EDX + 0x48]      ; 0051a23b
    IMUL ESI,dword ptr [ECX + EAX*0x1 + 0x4],0x4c4 ; 0051a23e
    MOV EBX,dword ptr [EDX + 0x4]       ; 0051a246
    MOV EBX,dword ptr [ESI + EBX*0x1 + 0x3f4] ; 0051a249
    MOV dword ptr [ECX + EAX*0x1 + 0x4],EBX ; 0051a250
    INC EDI                             ; 0051a254
    MOV ESI,dword ptr [EDX + 0x44]      ; 0051a255
    ADD EAX,0xf0                        ; 0051a258
    CMP EDI,ESI                         ; 0051a25d
    JL 0x0051a224                       ; 0051a25f | LAB_0051a224
        ;   XREF to: 0051a224 (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 0051a261
    LEA EDX,[EDX]                       ; 0051a267
    LEA EAX,[EAX]                       ; 0051a26d
    ADD ESP,0x20                        ; 0051a270
        ;   Label: LAB_0051a270
    POP EBP                             ; 0051a273
    POP EDI                             ; 0051a274
    POP ESI                             ; 0051a275
    POP EBX                             ; 0051a276
    RET                                 ; 0051a277
    INC ECX                             ; 0051a278
        ;   Label: LAB_0051a278
    CMP ECX,dword ptr [EDX]             ; 0051a279
    JGE 0x0051a1ad                      ; 0051a27b | LAB_0051a1ad
        ;   XREF to: 0051a1ad (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x1c],EBP      ; 0051a281
    IMUL EBX,ECX,0x4c4                  ; 0051a285
    MOV ESI,dword ptr [EDX + 0x4]       ; 0051a28b
        ;   Label: LAB_0051a28b
    LEA EAX,[ESI + EBX*0x1]             ; 0051a28e
    CMP ECX,dword ptr [EAX + 0x3f4]     ; 0051a291
    JZ 0x0051a2ac                       ; 0051a297 | LAB_0051a2ac
        ;   XREF to: 0051a2ac (CONDITIONAL_JUMP)
    INC ECX                             ; 0051a299
        ;   Label: LAB_0051a299
    MOV ESI,dword ptr [EDX]             ; 0051a29a
    ADD EBX,0x4c4                       ; 0051a29c
    CMP ECX,ESI                         ; 0051a2a2
    JGE 0x0051a1ad                      ; 0051a2a4 | LAB_0051a1ad
        ;   XREF to: 0051a1ad (CONDITIONAL_JUMP)
    JMP 0x0051a28b                      ; 0051a2aa | LAB_0051a28b
        ;   XREF to: 0051a28b (UNCONDITIONAL_JUMP)
    ADD ESI,dword ptr [ESP + 0x1c]      ; 0051a2ac
        ;   Label: LAB_0051a2ac
    FLD float ptr [ESI]                 ; 0051a2b0
    FSUB float ptr [EAX]                ; 0051a2b2
    FSTP float ptr [ESP]                ; 0051a2b4
    FLD float ptr [ESI + 0x4]           ; 0051a2b7
    FSUB float ptr [EAX + 0x4]          ; 0051a2ba
    FST float ptr [ESP + 0x4]           ; 0051a2bd
    FMUL float ptr [ESP + 0x4]          ; 0051a2c1
    FLD float ptr [ESP]                 ; 0051a2c5
    FMUL ST0                            ; 0051a2c8
    FLD float ptr [ESI + 0x8]           ; 0051a2ca
    FSUB float ptr [EAX + 0x8]          ; 0051a2cd
    FXCH                                ; 0051a2d0
    FADDP ST2,ST0                       ; 0051a2d2
    FST float ptr [ESP + 0x8]           ; 0051a2d4
    FMUL float ptr [ESP + 0x8]          ; 0051a2d8
    FADDP                               ; 0051a2dc
    FCOMP float ptr [ESP + 0x18]        ; 0051a2de
    FNSTSW AX                           ; 0051a2e2
    SAHF                                ; 0051a2e4
    JA 0x0051a299                       ; 0051a2e5 | LAB_0051a299
        ;   XREF to: 0051a299 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EDX + 0x4]       ; 0051a2e7
    MOV dword ptr [EBX + EAX*0x1 + 0x3f4],EDI ; 0051a2ea
    JMP 0x0051a299                      ; 0051a2f1 | LAB_0051a299
        ;   XREF to: 0051a299 (UNCONDITIONAL_JUMP)

