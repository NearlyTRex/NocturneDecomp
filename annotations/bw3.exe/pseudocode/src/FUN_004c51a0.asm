; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004c51a0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined        Stack[-0x48]:1  local_48
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
;
; XREF[1]:
;   FUN_004c5350 at 004c57b9
;
; Referenced Globals:
;   undefined4 DAT_005c3f28
;   undefined4 DAT_005c3f2c
;
; Called Functions:
;   FUN_0040cfa0
;   FUN_00576250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c51a0
        ;   Label: FUN_004c51a0
    PUSH ESI                            ; 004c51a1
    PUSH EDI                            ; 004c51a2
    PUSH EBP                            ; 004c51a3
    MOV EBP,ESP                         ; 004c51a4
    SUB ESP,0x50                        ; 004c51a6
    AND ESP,0xfffffff8                  ; 004c51a9
    MOV EBX,dword ptr [EBP + 0x14]      ; 004c51ac
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 004c51af
    MOV dword ptr [EBX + 0xd0a8],0x0    ; 004c51b5
    TEST EDX,EDX                        ; 004c51bf
    JZ 0x004c5281                       ; 004c51c1
        ;   XREF to: 004c5281 (CONDITIONAL_JUMP)  ; LAB_004c5281
    MOV EAX,EDX                         ; 004c51c7
    LEA EDX,[EBX + 0x20]                ; 004c51c9
    LEA EDI,[ESP + 0xc]                 ; 004c51cc
    MOV ESI,ESP                         ; 004c51d0
    FLD float ptr [EDX]                 ; 004c51d2
    FLD float ptr [EDX + 0x4]           ; 004c51d4
    FLD float ptr [EDX + 0x8]           ; 004c51d7
    FXCH ST2                            ; 004c51da
    FSUB float ptr [EAX + 0x20]         ; 004c51dc
    FXCH                                ; 004c51df
    FSUB float ptr [EAX + 0x24]         ; 004c51e1
    FXCH ST2                            ; 004c51e4
    FSUB float ptr [EAX + 0x28]         ; 004c51e6
    FXCH                                ; 004c51e9
    FSTP float ptr [ESP]                ; 004c51eb
    FXCH                                ; 004c51ee
    FSTP float ptr [ESP + 0x4]          ; 004c51f0
    FSTP float ptr [ESP + 0x8]          ; 004c51f4
    MOVSD ES:EDI,ESI                    ; 004c51f8
    MOVSD ES:EDI,ESI                    ; 004c51f9
    MOVSD ES:EDI,ESI                    ; 004c51fa
    FLD float ptr [ESP + 0x10]          ; 004c51fb
    FMUL ST0                            ; 004c51ff
    FLD float ptr [ESP + 0xc]           ; 004c5201
    FMUL ST0                            ; 004c5205
    FADDP                               ; 004c5207
    FLD float ptr [ESP + 0x14]          ; 004c5209
    FMUL ST0                            ; 004c520d
    FADDP                               ; 004c520f
    FSQRT                               ; 004c5211
    FCOMP float ptr [EBX + 0xcddc]      ; 004c5213
    FNSTSW AX                           ; 004c5219
    SAHF                                ; 004c521b
    JBE 0x004c52a0                      ; 004c521c
        ;   XREF to: 004c52a0 (CONDITIONAL_JUMP)  ; LAB_004c52a0
    MOV ECX,dword ptr [EBX + 0xd090]    ; 004c5222
    TEST ECX,ECX                        ; 004c5228
    JZ 0x004c5281                       ; 004c522a
        ;   XREF to: 004c5281 (CONDITIONAL_JUMP)  ; LAB_004c5281
    MOV EAX,ECX                         ; 004c522c
    LEA EDI,[ESP + 0x24]                ; 004c522e
    LEA ESI,[ESP + 0x30]                ; 004c5232
    FLD float ptr [EAX + 0x20]          ; 004c5236
    FLD float ptr [EAX + 0x24]          ; 004c5239
    FLD float ptr [EAX + 0x28]          ; 004c523c
    FXCH ST2                            ; 004c523f
    FSUB float ptr [EDX]                ; 004c5241
    FXCH                                ; 004c5243
    FSUB float ptr [EDX + 0x4]          ; 004c5245
    FXCH ST2                            ; 004c5248
    FSUB float ptr [EDX + 0x8]          ; 004c524a
    FXCH                                ; 004c524d
    FSTP float ptr [ESP + 0x30]         ; 004c524f
    FXCH                                ; 004c5253
    FSTP float ptr [ESP + 0x34]         ; 004c5255
    FSTP float ptr [ESP + 0x38]         ; 004c5259
    MOVSD ES:EDI,ESI                    ; 004c525d
    MOVSD ES:EDI,ESI                    ; 004c525e
    MOVSD ES:EDI,ESI                    ; 004c525f
    FLD float ptr [ESP + 0x28]          ; 004c5260
    FMUL ST0                            ; 004c5264
    FLD float ptr [ESP + 0x24]          ; 004c5266
    FMUL ST0                            ; 004c526a
    FADDP                               ; 004c526c
    FLD float ptr [ESP + 0x2c]          ; 004c526e
    FMUL ST0                            ; 004c5272
    FADDP                               ; 004c5274
    FSQRT                               ; 004c5276
    FLD1                                ; 004c5278
    FCOMPP                              ; 004c527a
    FNSTSW AX                           ; 004c527c
    SAHF                                ; 004c527e
    JBE 0x004c528a                      ; 004c527f
        ;   XREF to: 004c528a (CONDITIONAL_JUMP)  ; LAB_004c528a
    XOR EAX,EAX                         ; 004c5281
        ;   Label: LAB_004c5281
    MOV ESP,EBP                         ; 004c5283
    POP EBP                             ; 004c5285
    POP EDI                             ; 004c5286
    POP ESI                             ; 004c5287
    POP EBX                             ; 004c5288
    RET                                 ; 004c5289
    MOV EAX,0x1                         ; 004c528a
        ;   Label: LAB_004c528a
    MOV dword ptr [EBX + 0xd0a8],0x1    ; 004c528f
    MOV ESP,EBP                         ; 004c5299
    POP EBP                             ; 004c529b
    POP EDI                             ; 004c529c
    POP ESI                             ; 004c529d
    POP EBX                             ; 004c529e
    RET                                 ; 004c529f
    LEA EAX,[ESP + 0xc]                 ; 004c52a0
        ;   Label: LAB_004c52a0
    PUSH EAX                            ; 004c52a4
    LEA ESI,[ESP + 0x1c]                ; 004c52a5
    LEA EDI,[ESP + 0x40]                ; 004c52a9
    CALL FUN_00576250                   ; 004c52ad
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined FUN_00576250()
    LEA ESI,[ESP + 0x1c]                ; 004c52b2
    LEA EAX,[ESP + 0x40]                ; 004c52b6
    ADD ESP,0x4                         ; 004c52ba
    LEA EDX,[ESP + 0xc]                 ; 004c52bd
    MOVSD ES:EDI,ESI                    ; 004c52c1
    MOVSD ES:EDI,ESI                    ; 004c52c2
    MOVSD ES:EDI,ESI                    ; 004c52c3
    CMP EDX,EAX                         ; 004c52c4
    JZ 0x004c52e0                       ; 004c52c6
        ;   XREF to: 004c52e0 (CONDITIONAL_JUMP)  ; LAB_004c52e0
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004c52c8
    MOV dword ptr [ESP + 0xc],EAX       ; 004c52cc
    MOV EAX,dword ptr [ESP + 0x40]      ; 004c52d0
    MOV dword ptr [ESP + 0x10],EAX      ; 004c52d4
    MOV EAX,dword ptr [ESP + 0x44]      ; 004c52d8
    MOV dword ptr [ESP + 0x14],EAX      ; 004c52dc
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004c52e0
        ;   Label: LAB_004c52e0
    FLD float ptr [EAX + 0x34]          ; 004c52e6
    FSUB float ptr [ESP + 0x10]         ; 004c52e9
    SUB ESP,0x4                         ; 004c52ed
    FSTP float ptr [ESP]                ; 004c52f0
    CALL FUN_0040cfa0                   ; 004c52f3
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cfa0()
    MOV dword ptr [ESP + 0x50],EAX      ; 004c52f8
    FLD float ptr [ESP + 0x50]          ; 004c52fc
    ADD ESP,0x4                         ; 004c5300
    FST float ptr [ESP + 0x48]          ; 004c5303
    FCOMP float ptr [0x005c3f28]        ; 004c5307 | DAT_005c3f28
    FNSTSW AX                           ; 004c530d
    SAHF                                ; 004c530f
    JC 0x004c5325                       ; 004c5310
        ;   XREF to: 004c5325 (CONDITIONAL_JUMP)  ; LAB_004c5325
    FLD float ptr [ESP + 0x48]          ; 004c5312
    FCOMP float ptr [0x005c3f2c]        ; 004c5316 | DAT_005c3f2c
    FNSTSW AX                           ; 004c531c
    SAHF                                ; 004c531e
    JBE 0x004c5281                      ; 004c531f
        ;   XREF to: 004c5281 (CONDITIONAL_JUMP)  ; LAB_004c5281
    MOV EAX,0x1                         ; 004c5325
        ;   Label: LAB_004c5325
    MOV ESP,EBP                         ; 004c532a
    POP EBP                             ; 004c532c
    POP EDI                             ; 004c532d
    POP ESI                             ; 004c532e
    POP EBX                             ; 004c532f
    RET                                 ; 004c5330

