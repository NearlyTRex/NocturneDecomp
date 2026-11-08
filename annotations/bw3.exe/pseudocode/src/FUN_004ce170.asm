; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ce170(float *param_1,float *param_2,int param_3,float param_4,float param_5,float param_6)
;
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_004cee70 at 004ceed8
;
; Referenced Globals:
;   undefined4 DAT_005c4739
;   undefined4 DAT_005c4741
;   undefined4 DAT_005c4749
;   undefined4 DAT_005c474d
;   undefined4 DAT_005ffe8c
;   undefined4 DAT_005ffe90
;   undefined4 DAT_005ffe9c
;   undefined4 DAT_01d5ba14
;   undefined4 DAT_0203b37c
;
; Called Functions:
;   FUN_00473cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ce170
        ;   Label: FUN_004ce170
    PUSH ESI                            ; 004ce171
    PUSH EDI                            ; 004ce172
    PUSH EBP                            ; 004ce173
    MOV EBP,ESP                         ; 004ce174
    SUB ESP,0x2c                        ; 004ce176
    AND ESP,0xfffffff8                  ; 004ce179
    MOV EDI,dword ptr [EBP + 0x18]      ; 004ce17c
    MOV ESI,dword ptr [EBP + 0x14]      ; 004ce17f
    XOR EBX,EBX                         ; 004ce182
    ADD ESI,0xc                         ; 004ce184
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004ce187
        ;   Label: LAB_004ce187
    FLD float ptr [EAX + 0x4]           ; 004ce18a
    FLD ST0                             ; 004ce18d
    FSIN                                ; 004ce18f
    FXCH                                ; 004ce191
    FCOS                                ; 004ce193
    FXCH                                ; 004ce195
    FLD double ptr [0x005c4739]         ; 004ce197 | DAT_005c4739
    FXCH                                ; 004ce19d
    FMUL ST1                            ; 004ce19f
    FXCH ST2                            ; 004ce1a1
    FMULP                               ; 004ce1a3
    FLD ST1                             ; 004ce1a5
    FMUL float ptr [EBX + 0x5ffe8c]     ; 004ce1a7 | DAT_005ffe8c | DAT_005ffe90
    FLD ST1                             ; 004ce1ad
    FCHS                                ; 004ce1af
    FMUL float ptr [EBX + 0x5ffe8c]     ; 004ce1b1 | DAT_005ffe8c | DAT_005ffe90
    FXCH ST2                            ; 004ce1b7
    FMUL float ptr [EBX + 0x5ffe9c]     ; 004ce1b9 | DAT_005ffe9c
    XOR EDX,EDX                         ; 004ce1bf
    FXCH ST3                            ; 004ce1c1
    FMUL float ptr [EBX + 0x5ffe9c]     ; 004ce1c3 | DAT_005ffe9c
    MOV dword ptr [ESP + 0x10],EDX      ; 004ce1c9
    FXCH ST3                            ; 004ce1cd
    FADDP                               ; 004ce1cf
    FXCH ST2                            ; 004ce1d1
    FADDP                               ; 004ce1d3
    FXCH                                ; 004ce1d5
    FSTP float ptr [ESP + 0x14]         ; 004ce1d7
    FST float ptr [ESP + 0xc]           ; 004ce1db
    FADD float ptr [EDI]                ; 004ce1df
    FSTP float ptr [ESP + 0xc]          ; 004ce1e1
    MOV EAX,dword ptr [EDI + 0x4]       ; 004ce1e5
    MOV EDX,ESP                         ; 004ce1e8
    MOV dword ptr [ESP + 0x10],EAX      ; 004ce1ea
    FLD float ptr [ESP + 0x14]          ; 004ce1ee
    FADD float ptr [EDI + 0x8]          ; 004ce1f2
    LEA EAX,[ESP + 0xc]                 ; 004ce1f5
    FSTP float ptr [ESP + 0x14]         ; 004ce1f9
    CMP EDX,EAX                         ; 004ce1fd
    JZ 0x004ce218                       ; 004ce1ff
        ;   XREF to: 004ce218 (CONDITIONAL_JUMP)  ; LAB_004ce218
    MOV EAX,dword ptr [ESP + 0xc]       ; 004ce201
    MOV dword ptr [ESP],EAX             ; 004ce205
    MOV EAX,dword ptr [ESP + 0x10]      ; 004ce208
    MOV dword ptr [ESP + 0x4],EAX       ; 004ce20c
    MOV EAX,dword ptr [ESP + 0x14]      ; 004ce210
    MOV dword ptr [ESP + 0x8],EAX       ; 004ce214
    FLD1                                ; 004ce218
        ;   Label: LAB_004ce218
    PUSH 0x0                            ; 004ce21a
    FLD float ptr [ESP + 0x8]           ; 004ce21c
    LEA EAX,[ESP + 0x4]                 ; 004ce220
    PUSH 0x0                            ; 004ce224
    FXCH                                ; 004ce226
    FADD float ptr [ESP + 0x18]         ; 004ce228
    PUSH EAX                            ; 004ce22c
    LEA EAX,[ESP + 0x18]                ; 004ce22d
    FXCH                                ; 004ce231
    FADD float ptr [0x005c4749]         ; 004ce233 | DAT_005c4749
    PUSH EAX                            ; 004ce239
    FXCH                                ; 004ce23a
    FSTP float ptr [ESP + 0x20]         ; 004ce23c
    PUSH 0x203b37c                      ; 004ce240 | DAT_0203b37c
    FSTP float ptr [ESP + 0x18]         ; 004ce245
    CALL FUN_00473cd0                   ; 004ce249
        ;   XREF to: 00473cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00473cd0()
    MOV dword ptr [ESP + 0x3c],EAX      ; 004ce24e
    FLD float ptr [ESP + 0x3c]          ; 004ce252
    FMUL double ptr [0x005c4741]        ; 004ce256 | DAT_005c4741
    ADD ESP,0x14                        ; 004ce25c
    FSUBR float ptr [ESP + 0x10]        ; 004ce25f
    FADD float ptr [0x005c474d]         ; 004ce263 | DAT_005c474d
    LEA EAX,[ESP + 0xc]                 ; 004ce269
    FSTP float ptr [ESP + 0x10]         ; 004ce26d
    CMP ESI,EAX                         ; 004ce271
    JZ 0x004ce289                       ; 004ce273
        ;   XREF to: 004ce289 (CONDITIONAL_JUMP)  ; LAB_004ce289
    MOV EAX,dword ptr [ESP + 0xc]       ; 004ce275
    MOV dword ptr [ESI],EAX             ; 004ce279
    MOV EAX,dword ptr [ESP + 0x10]      ; 004ce27b
    MOV dword ptr [ESI + 0x4],EAX       ; 004ce27f
    MOV EAX,dword ptr [ESP + 0x14]      ; 004ce282
    MOV dword ptr [ESI + 0x8],EAX       ; 004ce286
    ADD EBX,0x4                         ; 004ce289
        ;   Label: LAB_004ce289
    ADD ESI,0xc                         ; 004ce28c
    CMP EBX,0x10                        ; 004ce28f
    JNZ 0x004ce187                      ; 004ce292
        ;   XREF to: 004ce187 (CONDITIONAL_JUMP)  ; LAB_004ce187
    MOV EBX,dword ptr [EBP + 0x14]      ; 004ce298
    MOV EDX,dword ptr [EBP + 0x14]      ; 004ce29b
    ADD EBX,0xc                         ; 004ce29e
    ADD EDX,0x30                        ; 004ce2a1
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ce2a4
        ;   Label: LAB_004ce2a4
    FLD float ptr [EAX + 0x10]          ; 004ce2a7
    FSUB float ptr [EBX + 0x10]         ; 004ce2aa
    FABS                                ; 004ce2ad
    FCOMP double ptr [0x005c4739]       ; 004ce2af | DAT_005c4739
    FNSTSW AX                           ; 004ce2b5
    SAHF                                ; 004ce2b7
    JBE 0x004ce2c3                      ; 004ce2b8
        ;   XREF to: 004ce2c3 (CONDITIONAL_JUMP)  ; LAB_004ce2c3
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ce2ba
    MOV ECX,dword ptr [EAX + 0x10]      ; 004ce2bd
    MOV dword ptr [EBX + 0x10],ECX      ; 004ce2c0
    ADD EBX,0xc                         ; 004ce2c3
        ;   Label: LAB_004ce2c3
    CMP EBX,EDX                         ; 004ce2c6
    JNZ 0x004ce2a4                      ; 004ce2c8
        ;   XREF to: 004ce2a4 (CONDITIONAL_JUMP)  ; LAB_004ce2a4
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ce2ca
    MOV EDX,dword ptr [EBP + 0x24]      ; 004ce2cd
    MOV dword ptr [EAX],0x0             ; 004ce2d0
    MOV dword ptr [EAX + 0x3c],EDX      ; 004ce2d6
    MOV EDX,dword ptr [EBP + 0x20]      ; 004ce2d9
    MOV dword ptr [EAX + 0x40],EDX      ; 004ce2dc
    MOV EDX,dword ptr [EBP + 0x28]      ; 004ce2df
    MOV dword ptr [EAX + 0x4],EDX       ; 004ce2e2
    MOV EAX,[0x01d5ba14]                ; 004ce2e5 | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004ce2ea
    MOV EDX,dword ptr [EBP + 0x14]      ; 004ce2f1
    MOV EAX,dword ptr [EAX + 0x2c]      ; 004ce2f4
    MOV dword ptr [EDX + 0x8],EAX       ; 004ce2f7
    MOV ESP,EBP                         ; 004ce2fa
    POP EBP                             ; 004ce2fc
    POP EDI                             ; 004ce2fd
    POP ESI                             ; 004ce2fe
    POP EBX                             ; 004ce2ff
    RET                                 ; 004ce300

