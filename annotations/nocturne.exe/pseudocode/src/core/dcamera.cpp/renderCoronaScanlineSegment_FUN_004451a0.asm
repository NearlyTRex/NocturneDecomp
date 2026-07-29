; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_renderCoronaScanlineSegment_FUN_004451a0(int row_index,int column_start,int column_end)
;
; Parameters:
; int              Stack[0x4]:4   row_index
; int              Stack[0x8]:4   column_start
; int              Stack[0xc]:4   column_end
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined4 DAT_012b0660
;   undefined4 DAT_014b8458
;   undefined4 DAT_01bd4260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004451a0
        ;   Label: core_dcamera.cpp_renderCoronaScanlineSegment_FUN_004451a0
    PUSH ESI                            ; 004451a1
    PUSH EDI                            ; 004451a2
    PUSH EBP                            ; 004451a3
    SUB ESP,0xc                         ; 004451a4
    MOV ESI,dword ptr [ESP + 0x20]      ; 004451a7
    MOV EAX,ESI                         ; 004451ab
    SHL EAX,0x8                         ; 004451ad
    MOV EDX,EAX                         ; 004451b0
    SHL EAX,0x4                         ; 004451b2
    MOV EBX,0x7f7378                    ; 004451b5
    SUB EAX,EDX                         ; 004451ba
    MOV EDX,dword ptr [ESP + 0x24]      ; 004451bc
    ADD EBX,EAX                         ; 004451c0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004451c2
    SUB EAX,EDX                         ; 004451c9
    SHL EAX,0x2                         ; 004451cb
    ADD EBX,EAX                         ; 004451ce
    LEA EAX,[ESI*0x4 + 0x0]             ; 004451d0
    ADD EAX,ESI                         ; 004451d7
    SHL EAX,0x6                         ; 004451d9
    ADD EAX,0xa9d078                    ; 004451dc
    LEA EBP,[EDX + EAX*0x1]             ; 004451e1
    LEA EAX,[ESI*0x4 + 0x0]             ; 004451e4
    ADD EAX,ESI                         ; 004451eb
    SHL EAX,0x8                         ; 004451ed
    SHL EDX,0x2                         ; 004451f0
    ADD EAX,0x146ba10                   ; 004451f3
    ADD EAX,EDX                         ; 004451f8
    MOV CL,byte ptr [0x012b0660]        ; 004451fa | DAT_012b0660
    MOV dword ptr [ESP + 0x4],EAX       ; 00445200
    MOV EAX,dword ptr [ESP + 0x24]      ; 00445204
    SHL ESI,CL                          ; 00445208
    SHL EAX,CL                          ; 0044520a
    MOV EDX,dword ptr [ESI*0x4 + 0x1bd4260] ; 0044520c | DAT_01bd4260
    SHL EAX,0x2                         ; 00445213
    ADD EDX,EAX                         ; 00445216
    MOV EAX,dword ptr [ESP + 0x24]      ; 00445218
    MOV dword ptr [ESP + 0x8],EDX       ; 0044521c
    CMP EAX,dword ptr [ESP + 0x28]      ; 00445220
    JGE 0x0044526e                      ; 00445224
        ;   XREF to: 0044526e (CONDITIONAL_JUMP)  ; LAB_0044526e
    MOV EDX,dword ptr [ESP + 0x4]       ; 00445226
        ;   Label: LAB_00445226
    MOV EAX,dword ptr [ESP + 0x8]       ; 0044522a
    MOV ECX,dword ptr [EDX]             ; 0044522e
    CMP ECX,dword ptr [EAX]             ; 00445230
    JA 0x00445276                       ; 00445232
        ;   XREF to: 00445276 (CONDITIONAL_JUMP)  ; LAB_00445276
    MOV EAX,0x1                         ; 00445234
        ;   Label: LAB_00445234
    MOV ESI,dword ptr [ESP + 0x4]       ; 00445239
    MOV EDI,dword ptr [ESP + 0x24]      ; 0044523d
    MOV EDX,dword ptr [ESP + 0x28]      ; 00445241
    MOV CL,byte ptr [0x012b0660]        ; 00445245 | DAT_012b0660
    ADD EBX,0xc                         ; 0044524b
    INC EBP                             ; 0044524e
    ADD ESI,0x4                         ; 0044524f
    INC EDI                             ; 00445252
    SHL EAX,CL                          ; 00445253
    MOV ECX,dword ptr [ESP + 0x8]       ; 00445255
    SHL EAX,0x2                         ; 00445259
    MOV dword ptr [ESP + 0x4],ESI       ; 0044525c
    ADD ECX,EAX                         ; 00445260
    MOV dword ptr [ESP + 0x24],EDI      ; 00445262
    MOV dword ptr [ESP + 0x8],ECX       ; 00445266
    CMP EDI,EDX                         ; 0044526a
    JL 0x00445226                       ; 0044526c
        ;   XREF to: 00445226 (CONDITIONAL_JUMP)  ; LAB_00445226
    ADD ESP,0xc                         ; 0044526e
        ;   Label: LAB_0044526e
    POP EBP                             ; 00445271
    POP EDI                             ; 00445272
    POP ESI                             ; 00445273
    POP EBX                             ; 00445274
    RET                                 ; 00445275
    MOV ECX,dword ptr [0x014b8458]      ; 00445276 | DAT_014b8458
        ;   Label: LAB_00445276
    MOV ESI,dword ptr [EBX]             ; 0044527c
    MOV EDI,dword ptr [ECX]             ; 0044527e
    SUB ESI,EDI                         ; 00445280
    MOV EAX,ESI                         ; 00445282
    CDQ                                 ; 00445284
    XOR EAX,EDX                         ; 00445285
    SUB EAX,EDX                         ; 00445287
    CMP EAX,dword ptr [ECX + 0xc]       ; 00445289
    JGE 0x00445234                      ; 0044528c
        ;   XREF to: 00445234 (CONDITIONAL_JUMP)  ; LAB_00445234
    MOV EDI,dword ptr [0x014b8458]      ; 0044528e | DAT_014b8458
    MOV ECX,dword ptr [EBX + 0x4]       ; 00445294
    MOV EAX,dword ptr [EDI + 0x4]       ; 00445297
    SUB ECX,EAX                         ; 0044529a
    MOV EAX,ECX                         ; 0044529c
    CDQ                                 ; 0044529e
    XOR EAX,EDX                         ; 0044529f
    SUB EAX,EDX                         ; 004452a1
    CMP EAX,dword ptr [EDI + 0xc]       ; 004452a3
    JGE 0x00445234                      ; 004452a6
        ;   XREF to: 00445234 (CONDITIONAL_JUMP)  ; LAB_00445234
    MOV EAX,[0x014b8458]                ; 004452a8 | DAT_014b8458
    MOV EDI,dword ptr [EBX + 0x8]       ; 004452ad
    SUB EDI,dword ptr [EAX + 0x8]       ; 004452b0
    MOV dword ptr [ESP],EAX             ; 004452b3
    MOV EAX,EDI                         ; 004452b6
    CDQ                                 ; 004452b8
    XOR EAX,EDX                         ; 004452b9
    SUB EAX,EDX                         ; 004452bb
    MOV EDX,dword ptr [ESP]             ; 004452bd
    CMP EAX,dword ptr [EDX + 0xc]       ; 004452c0
    JGE 0x00445234                      ; 004452c3
        ;   XREF to: 00445234 (CONDITIONAL_JUMP)  ; LAB_00445234
    IMUL ESI,ESI                        ; 004452c9
    MOV EDX,ECX                         ; 004452cc
    IMUL EDX,ECX                        ; 004452ce
    MOV EAX,EDI                         ; 004452d1
    IMUL EAX,EDI                        ; 004452d3
    MOV ECX,dword ptr [0x014b8458]      ; 004452d6 | DAT_014b8458
    ADD EDX,ESI                         ; 004452dc
    MOV ESI,dword ptr [ECX + 0x10]      ; 004452de
    ADD EAX,EDX                         ; 004452e1
    CMP EAX,ESI                         ; 004452e3
    JGE 0x00445234                      ; 004452e5
        ;   XREF to: 00445234 (CONDITIONAL_JUMP)  ; LAB_00445234
    MOV EDX,ESI                         ; 004452eb
    SUB EDX,EAX                         ; 004452ed
    MOV EAX,EDX                         ; 004452ef
    SAR EAX,0x10                        ; 004452f1
    MOV EDX,dword ptr [ECX + 0x14]      ; 004452f4
    IMUL EDX                            ; 004452f7
    SHRD EAX,EDX,0x10                   ; 004452f9
    ADD byte ptr [EBP],AL               ; 004452fd
    JMP 0x00445234                      ; 00445300
        ;   XREF to: 00445234 (UNCONDITIONAL_JUMP)  ; LAB_00445234

