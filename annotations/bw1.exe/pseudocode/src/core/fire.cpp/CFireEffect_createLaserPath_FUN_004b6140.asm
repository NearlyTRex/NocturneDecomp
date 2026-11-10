; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createLaserPath_FUN_004b6140(CFireEffect *this_ptr,CVector3f *start_position,CVector3f *velocity,float beam_width ,float reticle_intensity,CVector3f *reflection_normal,float total_time,int red,int green,int blue)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   start_position
; CVector3f *      Stack[0xc]:4   velocity
; float            Stack[0x10]:4   beam_width
; float            Stack[0x14]:4   reticle_intensity
; CVector3f *      Stack[0x18]:4   reflection_normal
; float            Stack[0x1c]:4   total_time
; int              Stack[0x20]:4   red
; int              Stack[0x24]:4   green
; int              Stack[0x28]:4   blue
; Local Variables:
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_doc.cpp_CDoc_renderOpaque_FUN_00471af0 at 00471c68
;   core_stranger.cpp_CStranger_renderOpaque_FUN_0058e3c0 at 0058e523
;
; Referenced Globals:
;   undefined4 DAT_005df610
;   undefined4 DAT_005df614
;   undefined4 DAT_005df61c
;   undefined4 DAT_005df624
;   undefined4 DAT_005fffac
;
; Called Functions:
;   core_fire.cpp_CFireEffect_createLaserSegment_FUN_004b6070
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b6140
        ;   Label: core_fire.cpp_CFireEffect_createLaserPath_FUN_004b6140
    PUSH ESI                            ; 004b6141
    PUSH EDI                            ; 004b6142
    PUSH EBP                            ; 004b6143
    MOV EBP,ESP                         ; 004b6144
    SUB ESP,0xa8                        ; 004b6146
    AND ESP,0xfffffff8                  ; 004b614c
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004b614f
    MOV EAX,dword ptr [EBP + 0x2c]      ; 004b6152
    MOV EBX,dword ptr [EBP + 0x38]      ; 004b6155
    MOV dword ptr [ESP + 0x4],EAX       ; 004b6158
    FLD float ptr [ESP + 0x4]           ; 004b615c
    FMUL float ptr [0x005df610]         ; 004b6160 | DAT_005df610
    FST float ptr [ESP + 0x8]           ; 004b6166
    FCOMP double ptr [0x005df614]       ; 004b616a | DAT_005df614
    FNSTSW AX                           ; 004b6170
    SAHF                                ; 004b6172
    JC 0x004b6374                       ; 004b6173
        ;   XREF to: 004b6374 (CONDITIONAL_JUMP)  ; LAB_004b6374
    LEA EDI,[ESP + 0x30]                ; 004b6179
        ;   Label: LAB_004b6179
    MOV ESI,dword ptr [EBP + 0x18]      ; 004b617d
    MOVSD ES:EDI,ESI                    ; 004b6180
    MOVSD ES:EDI,ESI                    ; 004b6181
    MOVSD ES:EDI,ESI                    ; 004b6182
    LEA EDI,[ESP + 0x3c]                ; 004b6183
    MOV ESI,EDX                         ; 004b6187
    MOVSD ES:EDI,ESI                    ; 004b6189
    MOVSD ES:EDI,ESI                    ; 004b618a
    MOVSD ES:EDI,ESI                    ; 004b618b
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b618c
        ;   Label: LAB_004b618c
    FLD float ptr [ESP + 0x4]           ; 004b6190
    MOV dword ptr [ESP],EAX             ; 004b6194
    FCOMP float ptr [ESP + 0x8]         ; 004b6197
    FNSTSW AX                           ; 004b619b
    SAHF                                ; 004b619d
    JBE 0x004b61a7                      ; 004b619e
        ;   XREF to: 004b61a7 (CONDITIONAL_JUMP)  ; LAB_004b61a7
    MOV EAX,dword ptr [ESP + 0x8]       ; 004b61a0
    MOV dword ptr [ESP],EAX             ; 004b61a4
    FLD float ptr [ESP + 0x3c]          ; 004b61a7
        ;   Label: LAB_004b61a7
    FMUL float ptr [ESP]                ; 004b61ab
    FLD float ptr [ESP + 0x40]          ; 004b61ae
    FMUL float ptr [ESP]                ; 004b61b2
    FLD float ptr [ESP]                 ; 004b61b5
    FLD ST0                             ; 004b61b8
    FMUL double ptr [0x005df61c]        ; 004b61ba | DAT_005df61c
    FLD float ptr [ESP + 0x44]          ; 004b61c0
    FMUL float ptr [ESP]                ; 004b61c4
    FXCH                                ; 004b61c7
    FMULP ST2                           ; 004b61c9
    FLDZ                                ; 004b61cb
    FXCH ST2                            ; 004b61cd
    FSTP float ptr [ESP + 0xa4]         ; 004b61cf
    FXCH                                ; 004b61d6
    FMUL float ptr [ESP + 0xa4]         ; 004b61d8
    FLD float ptr [ESP + 0xa4]          ; 004b61df
    FMUL float ptr [0x005df624]         ; 004b61e6 | DAT_005df624
    FLD float ptr [ESP + 0x30]          ; 004b61ec
    FLD float ptr [ESP + 0x34]          ; 004b61f0
    FXCH ST3                            ; 004b61f4
    FSTP float ptr [ESP + 0x90]         ; 004b61f6
    FLD float ptr [ESP + 0x38]          ; 004b61fd
    LEA EDI,[ESP + 0x60]                ; 004b6201
    LEA ESI,[ESP + 0x90]                ; 004b6205
    FXCH ST6                            ; 004b620c
    FSTP float ptr [ESP + 0x78]         ; 004b620e
    MOV EAX,dword ptr [ESP + 0x90]      ; 004b6212
    FLD float ptr [ESP + 0x4]           ; 004b6219
    FSUB float ptr [ESP]                ; 004b621d
    FXCH ST5                            ; 004b6220
    FSTP float ptr [ESP + 0x7c]         ; 004b6222
    MOV dword ptr [ESP + 0x98],EAX      ; 004b6226
    FXCH                                ; 004b622d
    FSTP float ptr [ESP + 0x94]         ; 004b622f
    MOVSD ES:EDI,ESI                    ; 004b6236
    MOVSD ES:EDI,ESI                    ; 004b6237
    MOVSD ES:EDI,ESI                    ; 004b6238
    FXCH ST2                            ; 004b6239
    FSTP float ptr [ESP + 0x80]         ; 004b623b
    LEA EDI,[ESP + 0x54]                ; 004b6242
    LEA ESI,[ESP + 0x78]                ; 004b6246
    FXCH ST2                            ; 004b624a
    FSTP float ptr [ESP + 0x4]          ; 004b624c
    MOVSD ES:EDI,ESI                    ; 004b6250
    MOVSD ES:EDI,ESI                    ; 004b6251
    MOVSD ES:EDI,ESI                    ; 004b6252
    FLD float ptr [ESP + 0x4]           ; 004b6253
    LEA EDI,[ESP + 0x24]                ; 004b6257
    LEA ESI,[ESP + 0x6c]                ; 004b625b
    FXCH                                ; 004b625f
    FADD float ptr [ESP + 0x54]         ; 004b6261
    FXCH ST2                            ; 004b6265
    FADD float ptr [ESP + 0x58]         ; 004b6267
    FXCH ST3                            ; 004b626b
    FADD float ptr [ESP + 0x5c]         ; 004b626d
    FXCH ST2                            ; 004b6271
    FSTP float ptr [ESP + 0x6c]         ; 004b6273
    FXCH ST2                            ; 004b6277
    FSTP float ptr [ESP + 0x70]         ; 004b6279
    FSTP float ptr [ESP + 0x74]         ; 004b627d
    MOVSD ES:EDI,ESI                    ; 004b6281
    MOVSD ES:EDI,ESI                    ; 004b6282
    MOVSD ES:EDI,ESI                    ; 004b6283
    FLDZ                                ; 004b6284
    FLD float ptr [ESP + 0x24]          ; 004b6286
    FLD float ptr [ESP + 0x28]          ; 004b628a
    FLD float ptr [ESP + 0x2c]          ; 004b628e
    LEA EDI,[ESP + 0x18]                ; 004b6292
    LEA ESI,[ESP + 0x48]                ; 004b6296
    FXCH ST2                            ; 004b629a
    FADD float ptr [ESP + 0x60]         ; 004b629c
    FXCH                                ; 004b62a0
    FADD float ptr [ESP + 0x64]         ; 004b62a2
    FXCH ST2                            ; 004b62a6
    FADD float ptr [ESP + 0x68]         ; 004b62a8
    FXCH                                ; 004b62ac
    FSTP float ptr [ESP + 0x48]         ; 004b62ae
    FXCH                                ; 004b62b2
    FSTP float ptr [ESP + 0x4c]         ; 004b62b4
    FSTP float ptr [ESP + 0x50]         ; 004b62b8
    MOVSD ES:EDI,ESI                    ; 004b62bc
    MOVSD ES:EDI,ESI                    ; 004b62bd
    MOVSD ES:EDI,ESI                    ; 004b62be
    FCOMPP                              ; 004b62bf
    FNSTSW AX                           ; 004b62c1
    SAHF                                ; 004b62c3
    JNC 0x004b639e                      ; 004b62c4
        ;   XREF to: 004b639e (CONDITIONAL_JUMP)  ; LAB_004b639e
    PUSH dword ptr [0x005fffac]         ; 004b62ca | DAT_005fffac
    PUSH EBX                            ; 004b62d0
    MOV ESI,dword ptr [EBP + 0x34]      ; 004b62d1
    PUSH ESI                            ; 004b62d4
    MOV EDI,dword ptr [EBP + 0x30]      ; 004b62d5
    PUSH EDI                            ; 004b62d8
    MOV EAX,dword ptr [EBP + 0x28]      ; 004b62d9
    PUSH EAX                            ; 004b62dc
    PUSH 0x0                            ; 004b62dd
    LEA EAX,[ESP + 0x30]                ; 004b62df
    PUSH dword ptr [EBP + 0x20]         ; 004b62e3
    PUSH EAX                            ; 004b62e6
    LEA EAX,[ESP + 0x50]                ; 004b62e7
    PUSH EAX                            ; 004b62eb
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b62ec
    PUSH EDX                            ; 004b62ef
    CALL core_fire.cpp_CFireEffect_createLaserSegment_FUN_004b6070 ; 004b62f0
        ;   XREF to: 004b6070 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLaserSegment_FUN_004b6070(CFireEffect * this_ptr, CVector3f * origin, CVector3f * hit_position, float beam_width, ...)
    LEA EDX,[ESP + 0x40]                ; 004b62f5
    LEA EAX,[ESP + 0x58]                ; 004b62f9
    ADD ESP,0x28                        ; 004b62fd
    CMP EAX,EDX                         ; 004b6300
    JNZ 0x004b6381                      ; 004b6302
        ;   XREF to: 004b6381 (CONDITIONAL_JUMP)  ; LAB_004b6381
    FLDZ                                ; 004b6304
        ;   Label: LAB_004b6304
    FLD float ptr [ESP]                 ; 004b6306
    FXCH                                ; 004b6309
    FMUL ST1                            ; 004b630b
    FXCH                                ; 004b630d
    FMUL float ptr [0x005df624]         ; 004b630f | DAT_005df624
    FLD float ptr [ESP + 0x3c]          ; 004b6315
    FLD float ptr [ESP + 0x40]          ; 004b6319
    LEA EDI,[ESP + 0xc]                 ; 004b631d
    FXCH ST3                            ; 004b6321
    FSTP float ptr [ESP + 0x84]         ; 004b6323
    MOV EAX,dword ptr [ESP + 0x84]      ; 004b632a
    LEA ESI,[ESP + 0x84]                ; 004b6331
    MOV dword ptr [ESP + 0x8c],EAX      ; 004b6338
    FXCH                                ; 004b633f
    FSTP float ptr [ESP + 0x88]         ; 004b6341
    MOVSD ES:EDI,ESI                    ; 004b6348
    MOVSD ES:EDI,ESI                    ; 004b6349
    MOVSD ES:EDI,ESI                    ; 004b634a
    FLD float ptr [ESP + 0x44]          ; 004b634b
    FXCH                                ; 004b634f
    FADD float ptr [ESP + 0xc]          ; 004b6351
    FXCH ST2                            ; 004b6355
    FADD float ptr [ESP + 0x10]         ; 004b6357
    FXCH                                ; 004b635b
    FADD float ptr [ESP + 0x14]         ; 004b635d
    FXCH ST2                            ; 004b6361
    FSTP float ptr [ESP + 0x3c]         ; 004b6363
    FSTP float ptr [ESP + 0x40]         ; 004b6367
    FSTP float ptr [ESP + 0x44]         ; 004b636b
    JMP 0x004b618c                      ; 004b636f
        ;   XREF to: 004b618c (UNCONDITIONAL_JUMP)  ; LAB_004b618c
    MOV dword ptr [ESP + 0x8],0x3d4ccccd ; 004b6374
        ;   Label: LAB_004b6374
    JMP 0x004b6179                      ; 004b637c
        ;   XREF to: 004b6179 (UNCONDITIONAL_JUMP)  ; LAB_004b6179
    MOV EAX,dword ptr [ESP + 0x18]      ; 004b6381
        ;   Label: LAB_004b6381
    MOV dword ptr [ESP + 0x30],EAX      ; 004b6385
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004b6389
    MOV dword ptr [ESP + 0x34],EAX      ; 004b638d
    MOV EAX,dword ptr [ESP + 0x20]      ; 004b6391
    MOV dword ptr [ESP + 0x38],EAX      ; 004b6395
    JMP 0x004b6304                      ; 004b6399
        ;   XREF to: 004b6304 (UNCONDITIONAL_JUMP)  ; LAB_004b6304
    PUSH dword ptr [0x005fffac]         ; 004b639e | DAT_005fffac
        ;   Label: LAB_004b639e
    PUSH EBX                            ; 004b63a4
    MOV ECX,dword ptr [EBP + 0x34]      ; 004b63a5
    PUSH ECX                            ; 004b63a8
    MOV EBX,dword ptr [EBP + 0x30]      ; 004b63a9
    PUSH EBX                            ; 004b63ac
    MOV ESI,dword ptr [EBP + 0x28]      ; 004b63ad
    PUSH ESI                            ; 004b63b0
    PUSH dword ptr [EBP + 0x24]         ; 004b63b1
    LEA EAX,[ESP + 0x30]                ; 004b63b4
    PUSH dword ptr [EBP + 0x20]         ; 004b63b8
    PUSH EAX                            ; 004b63bb
    LEA EAX,[ESP + 0x50]                ; 004b63bc
    PUSH EAX                            ; 004b63c0
    MOV EDI,dword ptr [EBP + 0x14]      ; 004b63c1
    PUSH EDI                            ; 004b63c4
    CALL core_fire.cpp_CFireEffect_createLaserSegment_FUN_004b6070 ; 004b63c5
        ;   XREF to: 004b6070 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLaserSegment_FUN_004b6070(CFireEffect * this_ptr, CVector3f * origin, CVector3f * hit_position, float beam_width, ...)
    ADD ESP,0x28                        ; 004b63ca
    MOV ESP,EBP                         ; 004b63cd
    POP EBP                             ; 004b63cf
    POP EDI                             ; 004b63d0
    POP ESI                             ; 004b63d1
    POP EBX                             ; 004b63d2
    RET                                 ; 004b63d3

