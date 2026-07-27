; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcamera_cpp_FUN_00444180(int param_1,int param_2,int param_3)
;
;
; XREF[2]:
;   core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_0044ce80 at 0044cfe2
;   core_dlight.cpp_FUN_0044f0b0 at 0044f39e
;
; Referenced Globals:
;   undefined4 DAT_012b0660
;   undefined4 DAT_01c00c58
;   undefined4 DAT_01c00c5c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00444180
        ;   Label: core_dcamera.cpp_FUN_00444180
    PUSH ESI                            ; 00444181
    PUSH EDI                            ; 00444182
    PUSH EBP                            ; 00444183
    MOV EDI,dword ptr [ESP + 0x18]      ; 00444184
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00444188
    MOV ECX,dword ptr [ESP + 0x14]      ; 0044418c
    SUB ECX,dword ptr [0x01c00c5c]      ; 00444190 | DAT_01c00c5c
    MOV EBX,dword ptr [0x012b0660]      ; 00444196 | DAT_012b0660
    MOV dword ptr [ESP + 0x14],ECX      ; 0044419c
    CMP EBX,0x1                         ; 004441a0
    JNZ 0x004441b0                      ; 004441a3
        ;   XREF to: 004441b0 (CONDITIONAL_JUMP)  ; LAB_004441b0
    TEST byte ptr [ESP + 0x14],0x1      ; 004441a5
    JNZ 0x00444290                      ; 004441aa
        ;   XREF to: 00444290 (CONDITIONAL_JUMP)  ; LAB_00444290
    CMP dword ptr [0x012b0660],0x2      ; 004441b0 | DAT_012b0660
        ;   Label: LAB_004441b0
    JNZ 0x004441c4                      ; 004441b7
        ;   XREF to: 004441c4 (CONDITIONAL_JUMP)  ; LAB_004441c4
    TEST byte ptr [ESP + 0x14],0x3      ; 004441b9
    JNZ 0x00444290                      ; 004441be
        ;   XREF to: 00444290 (CONDITIONAL_JUMP)  ; LAB_00444290
    MOV EBP,dword ptr [ESP + 0x14]      ; 004441c4
        ;   Label: LAB_004441c4
    MOV CL,byte ptr [0x012b0660]        ; 004441c8 | DAT_012b0660
    MOV EAX,[0x01c00c58]                ; 004441ce | DAT_01c00c58
    MOV EBX,dword ptr [EDI + 0x8]       ; 004441d3
    MOV ESI,dword ptr [EDX + 0x8]       ; 004441d6
    SAR EBX,0x10                        ; 004441d9
    SAR ESI,0x10                        ; 004441dc
    SAR EBP,CL                          ; 004441df
    SUB EBX,EAX                         ; 004441e1
    SUB ESI,EAX                         ; 004441e3
    SAR EBX,CL                          ; 004441e5
    SAR ESI,CL                          ; 004441e7
    MOV dword ptr [ESP + 0x14],EBP      ; 004441e9
    CMP EBX,ESI                         ; 004441ed
    JLE 0x004441fd                      ; 004441ef
        ;   XREF to: 004441fd (CONDITIONAL_JUMP)  ; LAB_004441fd
    MOV EAX,EBX                         ; 004441f1
    MOV EBX,ESI                         ; 004441f3
    MOV ESI,EAX                         ; 004441f5
    MOV EAX,EDI                         ; 004441f7
    MOV EDI,EDX                         ; 004441f9
    MOV EDX,EAX                         ; 004441fb
    MOV EAX,dword ptr [ESP + 0x14]      ; 004441fd
        ;   Label: LAB_004441fd
    SHL EAX,0x2                         ; 00444201
    CMP EBX,dword ptr [EAX + 0x146b290] ; 00444204
    JNC 0x0044421b                      ; 0044420a
        ;   XREF to: 0044421b (CONDITIONAL_JUMP)  ; LAB_0044421b
    MOV dword ptr [EAX + 0x146b290],EBX ; 0044420c
    MOV ECX,dword ptr [EDI + 0x10]      ; 00444212
    MOV dword ptr [EAX + 0x14b6a10],ECX ; 00444215
    MOV EAX,dword ptr [ESP + 0x14]      ; 0044421b
        ;   Label: LAB_0044421b
    SHL EAX,0x2                         ; 0044421f
    CMP ESI,dword ptr [EAX + 0x146b650] ; 00444222
    JBE 0x00444239                      ; 00444228
        ;   XREF to: 00444239 (CONDITIONAL_JUMP)  ; LAB_00444239
    MOV dword ptr [EAX + 0x146b650],ESI ; 0044422a
    MOV ECX,dword ptr [EDX + 0x10]      ; 00444230
    MOV dword ptr [EAX + 0x14b6dd0],ECX ; 00444233
    MOV EAX,ESI                         ; 00444239
        ;   Label: LAB_00444239
    MOV EDX,dword ptr [EDX + 0x28]      ; 0044423b
    MOV ECX,dword ptr [EDI + 0x28]      ; 0044423e
    SUB EAX,EBX                         ; 00444241
    SUB EDX,ECX                         ; 00444243
    LEA EDI,[EAX + 0x1]                 ; 00444245
    MOV EAX,EDX                         ; 00444248
    SAR EDX,0x1f                        ; 0044424a
    IDIV EDI                            ; 0044424d
    MOV EDX,dword ptr [ESP + 0x14]      ; 0044424f
    MOV EDI,EAX                         ; 00444253
    LEA EAX,[EDX*0x4 + 0x0]             ; 00444255
    ADD EAX,EDX                         ; 0044425c
    MOV EDX,0x146ba10                   ; 0044425e
    SHL EAX,0x8                         ; 00444263
    ADD EDX,EAX                         ; 00444266
    LEA EAX,[EBX*0x4 + 0x0]             ; 00444268
    ADD EAX,EDX                         ; 0044426f
    CMP EBX,ESI                         ; 00444271
    JGE 0x00444290                      ; 00444273
        ;   XREF to: 00444290 (CONDITIONAL_JUMP)  ; LAB_00444290
    MOV EDX,ECX                         ; 00444275
        ;   Label: LAB_00444275
    INC EBX                             ; 00444277
    ADD EAX,0x4                         ; 00444278
    SAR EDX,0x8                         ; 0044427b
    ADD ECX,EDI                         ; 0044427e
    MOV dword ptr [EAX + -0x4],EDX      ; 00444280
    CMP EBX,ESI                         ; 00444283
    JL 0x00444275                       ; 00444285
        ;   XREF to: 00444275 (CONDITIONAL_JUMP)  ; LAB_00444275
    LEA EAX,[EAX]                       ; 00444287
    LEA EDX,[EDX]                       ; 0044428d
    POP EBP                             ; 00444290
        ;   Label: LAB_00444290
    POP EDI                             ; 00444291
    POP ESI                             ; 00444292
    POP EBX                             ; 00444293
    RET                                 ; 00444294

