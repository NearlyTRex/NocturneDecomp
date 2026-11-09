; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_spline_cpp_FUN_005841d0(int param_1,float *param_2,float *param_3,float *param_4,float *param_5)
;
; Local Variables:
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   core_dracbrid.cpp_FUN_0047d920 at 0047dd4a
;   core_dracbrid.cpp_FUN_0047de00 at 0047e10d
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005841d0
        ;   Label: core_spline.cpp_FUN_005841d0
    PUSH EDI                            ; 005841d1
    PUSH EBP                            ; 005841d2
    SUB ESP,0x9c                        ; 005841d3
    MOV ECX,dword ptr [ESP + 0xac]      ; 005841d9
    MOV EBX,dword ptr [ESP + 0xb0]      ; 005841e0
    MOV EBP,dword ptr [ESP + 0xb4]      ; 005841e7
    MOV EAX,ESI                         ; 005841ee
    MOV ESI,dword ptr [ESP + 0xbc]      ; 005841f0
    LEA EDX,[ECX + 0x1c]                ; 005841f7
    FLD float ptr [ESI]                 ; 005841fa
    FMUL float ptr [EDX]                ; 005841fc
    FLD float ptr [ESI + 0x4]           ; 005841fe
    FMUL float ptr [EDX]                ; 00584201
    FLD float ptr [ESI + 0x8]           ; 00584203
    FMUL float ptr [EDX]                ; 00584206
    LEA EDI,[ESP + 0x84]                ; 00584208
    LEA ESI,[ESP + 0x24]                ; 0058420f
    FXCH ST2                            ; 00584213
    FSTP float ptr [ESP + 0x24]         ; 00584215
    FSTP float ptr [ESP + 0x28]         ; 00584219
    FSTP float ptr [ESP + 0x2c]         ; 0058421d
    MOVSD ES:EDI,ESI                    ; 00584221
    MOVSD ES:EDI,ESI                    ; 00584222
    MOVSD ES:EDI,ESI                    ; 00584223
    MOV ESI,dword ptr [ESP + 0xb8]      ; 00584224
    LEA EDX,[ECX + 0x18]                ; 0058422b
    FLD float ptr [ESI]                 ; 0058422e
    FMUL float ptr [EDX]                ; 00584230
    FLD float ptr [ESI + 0x4]           ; 00584232
    FMUL float ptr [EDX]                ; 00584235
    FLD float ptr [ESI + 0x8]           ; 00584237
    FMUL float ptr [EDX]                ; 0058423a
    LEA EDI,[ESP + 0x18]                ; 0058423c
    LEA ESI,[ESP + 0x6c]                ; 00584240
    FXCH ST2                            ; 00584244
    FSTP float ptr [ESP + 0x6c]         ; 00584246
    FSTP float ptr [ESP + 0x70]         ; 0058424a
    FSTP float ptr [ESP + 0x74]         ; 0058424e
    MOVSD ES:EDI,ESI                    ; 00584252
    MOVSD ES:EDI,ESI                    ; 00584253
    MOVSD ES:EDI,ESI                    ; 00584254
    LEA EDX,[ECX + 0x14]                ; 00584255
    FLD float ptr [EBP]                 ; 00584258
    FMUL float ptr [EDX]                ; 0058425b
    FLD float ptr [EBP + 0x4]           ; 0058425d
    FMUL float ptr [EDX]                ; 00584260
    FLD float ptr [EBP + 0x8]           ; 00584262
    FMUL float ptr [EDX]                ; 00584265
    MOV EDI,ESP                         ; 00584267
    LEA ESI,[ESP + 0x30]                ; 00584269
    FXCH ST2                            ; 0058426d
    FSTP float ptr [ESP + 0x30]         ; 0058426f
    FSTP float ptr [ESP + 0x34]         ; 00584273
    FSTP float ptr [ESP + 0x38]         ; 00584277
    MOVSD ES:EDI,ESI                    ; 0058427b
    MOVSD ES:EDI,ESI                    ; 0058427c
    MOVSD ES:EDI,ESI                    ; 0058427d
    LEA EDX,[ECX + 0x10]                ; 0058427e
    FLD float ptr [EBX]                 ; 00584281
    FMUL float ptr [EDX]                ; 00584283
    FLD float ptr [EBX + 0x4]           ; 00584285
    FMUL float ptr [EDX]                ; 00584288
    FLD float ptr [EBX + 0x8]           ; 0058428a
    FMUL float ptr [EDX]                ; 0058428d
    LEA EDI,[ESP + 0x54]                ; 0058428f
    LEA ESI,[ESP + 0x48]                ; 00584293
    FXCH ST2                            ; 00584297
    FSTP float ptr [ESP + 0x48]         ; 00584299
    FSTP float ptr [ESP + 0x4c]         ; 0058429d
    FSTP float ptr [ESP + 0x50]         ; 005842a1
    MOVSD ES:EDI,ESI                    ; 005842a5
    MOVSD ES:EDI,ESI                    ; 005842a6
    MOVSD ES:EDI,ESI                    ; 005842a7
    FLD float ptr [ESP + 0x54]          ; 005842a8
    FLD float ptr [ESP + 0x58]          ; 005842ac
    FLD float ptr [ESP + 0x5c]          ; 005842b0
    LEA EDI,[ESP + 0xc]                 ; 005842b4
    LEA ESI,[ESP + 0x78]                ; 005842b8
    FXCH ST2                            ; 005842bc
    FADD float ptr [ESP]                ; 005842be
    FXCH                                ; 005842c1
    FADD float ptr [ESP + 0x4]          ; 005842c3
    FXCH ST2                            ; 005842c7
    FADD float ptr [ESP + 0x8]          ; 005842c9
    FXCH                                ; 005842cd
    FSTP float ptr [ESP + 0x78]         ; 005842cf
    FXCH                                ; 005842d3
    FSTP float ptr [ESP + 0x7c]         ; 005842d5
    FSTP float ptr [ESP + 0x80]         ; 005842d9
    MOVSD ES:EDI,ESI                    ; 005842e0
    MOVSD ES:EDI,ESI                    ; 005842e1
    MOVSD ES:EDI,ESI                    ; 005842e2
    FLD float ptr [ESP + 0xc]           ; 005842e3
    FLD float ptr [ESP + 0x10]          ; 005842e7
    FLD float ptr [ESP + 0x14]          ; 005842eb
    LEA EDI,[ESP + 0x60]                ; 005842ef
    LEA ESI,[ESP + 0x3c]                ; 005842f3
    FXCH ST2                            ; 005842f7
    FADD float ptr [ESP + 0x18]         ; 005842f9
    FXCH                                ; 005842fd
    FADD float ptr [ESP + 0x1c]         ; 005842ff
    FXCH ST2                            ; 00584303
    FADD float ptr [ESP + 0x20]         ; 00584305
    FXCH                                ; 00584309
    FSTP float ptr [ESP + 0x3c]         ; 0058430b
    FXCH                                ; 0058430f
    FSTP float ptr [ESP + 0x40]         ; 00584311
    FSTP float ptr [ESP + 0x44]         ; 00584315
    MOVSD ES:EDI,ESI                    ; 00584319
    MOVSD ES:EDI,ESI                    ; 0058431a
    MOVSD ES:EDI,ESI                    ; 0058431b
    FLD float ptr [ESP + 0x60]          ; 0058431c
    FLD float ptr [ESP + 0x64]          ; 00584320
    FLD float ptr [ESP + 0x68]          ; 00584324
    LEA ESI,[ESP + 0x90]                ; 00584328
    MOV EDI,EAX                         ; 0058432f
    FXCH ST2                            ; 00584331
    FADD float ptr [ESP + 0x84]         ; 00584333
    FXCH                                ; 0058433a
    FADD float ptr [ESP + 0x88]         ; 0058433c
    FXCH ST2                            ; 00584343
    FADD float ptr [ESP + 0x8c]         ; 00584345
    FXCH                                ; 0058434c
    FSTP float ptr [ESP + 0x90]         ; 0058434e
    FXCH                                ; 00584355
    FSTP float ptr [ESP + 0x94]         ; 00584357
    FSTP float ptr [ESP + 0x98]         ; 0058435e
    MOVSD ES:EDI,ESI                    ; 00584365
    MOVSD ES:EDI,ESI                    ; 00584366
    MOVSD ES:EDI,ESI                    ; 00584367
    ADD ESP,0x9c                        ; 00584368
    POP EBP                             ; 0058436e
    POP EDI                             ; 0058436f
    POP EBX                             ; 00584370
    RET                                 ; 00584371

