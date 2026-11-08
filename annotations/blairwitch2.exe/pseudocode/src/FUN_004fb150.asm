; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fb150(undefined4 param_1,int *param_2,int *param_3)
;
; Local Variables:
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
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   FUN_005311e0 at 00531437
;
; Referenced Globals:
;   undefined4 DAT_005fa1b4
;   undefined4 DAT_005fa1b8
;   undefined4 DAT_005fa1bc
;
; Called Functions:
;   FUN_004fa9d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fb150
        ;   Label: FUN_004fb150
    PUSH EDI                            ; 004fb151
    PUSH EBP                            ; 004fb152
    SUB ESP,0x84                        ; 004fb153
    MOV EAX,dword ptr [ESP + 0x98]      ; 004fb159
    MOV EBP,ESI                         ; 004fb160
    MOV ESI,dword ptr [ESP + 0x9c]      ; 004fb162
    LEA EBX,[ESP + 0x54]                ; 004fb169
    FILD dword ptr [EAX]                ; 004fb16d
    FMUL float ptr [0x005fa1b8]         ; 004fb16f | DAT_005fa1b8
    FSTP float ptr [EBX]                ; 004fb175
    FILD dword ptr [EAX + 0x4]          ; 004fb177
    FMUL float ptr [0x005fa1b8]         ; 004fb17a | DAT_005fa1b8
    FSTP float ptr [EBX + 0x4]          ; 004fb180
    FILD dword ptr [EAX + 0x8]          ; 004fb183
    FMUL float ptr [0x005fa1b8]         ; 004fb186 | DAT_005fa1b8
    FSTP float ptr [EBX + 0x8]          ; 004fb18c
    LEA EBX,[ESP + 0x6c]                ; 004fb18f
    MOV EAX,ESI                         ; 004fb193
    LEA EDI,[ESP + 0x3c]                ; 004fb195
    FILD dword ptr [EAX]                ; 004fb199
    FMUL float ptr [0x005fa1bc]         ; 004fb19b | DAT_005fa1bc
    FSTP float ptr [EBX]                ; 004fb1a1
    FILD dword ptr [EAX + 0x4]          ; 004fb1a3
    FMUL float ptr [0x005fa1bc]         ; 004fb1a6 | DAT_005fa1bc
    FSTP float ptr [EBX + 0x4]          ; 004fb1ac
    FILD dword ptr [EAX + 0x8]          ; 004fb1af
    FMUL float ptr [0x005fa1bc]         ; 004fb1b2 | DAT_005fa1bc
    FSTP float ptr [EBX + 0x8]          ; 004fb1b8
    FLD float ptr [ESP + 0x6c]          ; 004fb1bb
    FLD float ptr [ESP + 0x70]          ; 004fb1bf
    FLD float ptr [ESP + 0x74]          ; 004fb1c3
    LEA ESI,[ESP + 0xc]                 ; 004fb1c7
    LEA EAX,[ESP + 0x3c]                ; 004fb1cb
    LEA EBX,[ESP + 0x6c]                ; 004fb1cf
    FXCH ST2                            ; 004fb1d3
    FADD float ptr [ESP + 0x54]         ; 004fb1d5
    FXCH                                ; 004fb1d9
    FADD float ptr [ESP + 0x58]         ; 004fb1db
    FXCH ST2                            ; 004fb1df
    FADD float ptr [ESP + 0x5c]         ; 004fb1e1
    FXCH                                ; 004fb1e5
    FSTP float ptr [ESP + 0xc]          ; 004fb1e7
    FXCH                                ; 004fb1eb
    FSTP float ptr [ESP + 0x10]         ; 004fb1ed
    FSTP float ptr [ESP + 0x14]         ; 004fb1f1
    MOVSD ES:EDI,ESI                    ; 004fb1f5
    MOVSD ES:EDI,ESI                    ; 004fb1f6
    MOVSD ES:EDI,ESI                    ; 004fb1f7
    CMP EBX,EAX                         ; 004fb1f8
    JZ 0x004fb214                       ; 004fb1fa
        ;   XREF to: 004fb214 (CONDITIONAL_JUMP)  ; LAB_004fb214
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004fb1fc
    MOV dword ptr [ESP + 0x6c],EAX      ; 004fb200
    MOV EAX,dword ptr [ESP + 0x40]      ; 004fb204
    MOV dword ptr [ESP + 0x70],EAX      ; 004fb208
    MOV EAX,dword ptr [ESP + 0x44]      ; 004fb20c
    MOV dword ptr [ESP + 0x74],EAX      ; 004fb210
    LEA EAX,[ESP + 0x54]                ; 004fb214
        ;   Label: LAB_004fb214
    PUSH EAX                            ; 004fb218
    MOV EDX,dword ptr [ESP + 0x98]      ; 004fb219
    LEA ESI,[ESP + 0x7c]                ; 004fb220
    PUSH EDX                            ; 004fb224
    LEA EDI,[ESP + 0x8]                 ; 004fb225
    LEA EBX,[ESP + 0x5c]                ; 004fb229
    CALL FUN_004fa9d0                   ; 004fb22d
        ;   XREF to: 004fa9d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fa9d0()
    LEA ESI,[ESP + 0x80]                ; 004fb232
    ADD ESP,0x8                         ; 004fb239
    MOV EAX,ESP                         ; 004fb23c
    MOVSD ES:EDI,ESI                    ; 004fb23e
    MOVSD ES:EDI,ESI                    ; 004fb23f
    MOVSD ES:EDI,ESI                    ; 004fb240
    CMP EBX,EAX                         ; 004fb241
    JZ 0x004fb25c                       ; 004fb243
        ;   XREF to: 004fb25c (CONDITIONAL_JUMP)  ; LAB_004fb25c
    MOV EAX,dword ptr [ESP]             ; 004fb245
    MOV dword ptr [ESP + 0x54],EAX      ; 004fb248
    MOV EAX,dword ptr [ESP + 0x4]       ; 004fb24c
    MOV dword ptr [ESP + 0x58],EAX      ; 004fb250
    MOV EAX,dword ptr [ESP + 0x8]       ; 004fb254
    MOV dword ptr [ESP + 0x5c],EAX      ; 004fb258
    LEA EAX,[ESP + 0x6c]                ; 004fb25c
        ;   Label: LAB_004fb25c
    PUSH EAX                            ; 004fb260
    MOV ECX,dword ptr [ESP + 0x98]      ; 004fb261
    LEA ESI,[ESP + 0x4c]                ; 004fb268
    PUSH ECX                            ; 004fb26c
    LEA EDI,[ESP + 0x38]                ; 004fb26d
    LEA EBX,[ESP + 0x74]                ; 004fb271
    CALL FUN_004fa9d0                   ; 004fb275
        ;   XREF to: 004fa9d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fa9d0()
    LEA ESI,[ESP + 0x50]                ; 004fb27a
    ADD ESP,0x8                         ; 004fb27e
    LEA EAX,[ESP + 0x30]                ; 004fb281
    MOVSD ES:EDI,ESI                    ; 004fb285
    MOVSD ES:EDI,ESI                    ; 004fb286
    MOVSD ES:EDI,ESI                    ; 004fb287
    CMP EBX,EAX                         ; 004fb288
    JZ 0x004fb2a4                       ; 004fb28a
        ;   XREF to: 004fb2a4 (CONDITIONAL_JUMP)  ; LAB_004fb2a4
    MOV EAX,dword ptr [ESP + 0x30]      ; 004fb28c
    MOV dword ptr [ESP + 0x6c],EAX      ; 004fb290
    MOV EAX,dword ptr [ESP + 0x34]      ; 004fb294
    MOV dword ptr [ESP + 0x70],EAX      ; 004fb298
    MOV EAX,dword ptr [ESP + 0x38]      ; 004fb29c
    MOV dword ptr [ESP + 0x74],EAX      ; 004fb2a0
    FLD float ptr [ESP + 0x6c]          ; 004fb2a4
        ;   Label: LAB_004fb2a4
    FLD float ptr [ESP + 0x70]          ; 004fb2a8
    FLD float ptr [ESP + 0x74]          ; 004fb2ac
    LEA EDI,[ESP + 0x60]                ; 004fb2b0
    LEA ESI,[ESP + 0x18]                ; 004fb2b4
    LEA EAX,[ESP + 0x60]                ; 004fb2b8
    LEA EBX,[ESP + 0x6c]                ; 004fb2bc
    FXCH ST2                            ; 004fb2c0
    FSUB float ptr [ESP + 0x54]         ; 004fb2c2
    FXCH                                ; 004fb2c6
    FSUB float ptr [ESP + 0x58]         ; 004fb2c8
    FXCH ST2                            ; 004fb2cc
    FSUB float ptr [ESP + 0x5c]         ; 004fb2ce
    FXCH ST2                            ; 004fb2d2
    FSTP float ptr [ESP + 0x1c]         ; 004fb2d4
    FXCH                                ; 004fb2d8
    FSTP float ptr [ESP + 0x20]         ; 004fb2da
    FSTP float ptr [ESP + 0x18]         ; 004fb2de
    MOVSD ES:EDI,ESI                    ; 004fb2e2
    MOVSD ES:EDI,ESI                    ; 004fb2e3
    MOVSD ES:EDI,ESI                    ; 004fb2e4
    CMP EBX,EAX                         ; 004fb2e5
    JZ 0x004fb301                       ; 004fb2e7
        ;   XREF to: 004fb301 (CONDITIONAL_JUMP)  ; LAB_004fb301
    MOV EAX,dword ptr [ESP + 0x60]      ; 004fb2e9
    MOV dword ptr [ESP + 0x6c],EAX      ; 004fb2ed
    MOV EAX,dword ptr [ESP + 0x64]      ; 004fb2f1
    MOV dword ptr [ESP + 0x70],EAX      ; 004fb2f5
    MOV EAX,dword ptr [ESP + 0x68]      ; 004fb2f9
    MOV dword ptr [ESP + 0x74],EAX      ; 004fb2fd
    LEA EBX,[ESP + 0x24]                ; 004fb301
        ;   Label: LAB_004fb301
    LEA EAX,[ESP + 0x6c]                ; 004fb305
    LEA ESI,[ESP + 0x24]                ; 004fb309
    MOV EDI,EBP                         ; 004fb30d
    FLD float ptr [EAX]                 ; 004fb30f
    FMUL float ptr [0x005fa1b4]         ; 004fb311 | DAT_005fa1b4
    FISTP dword ptr [EBX]               ; 004fb317
    FLD float ptr [EAX + 0x4]           ; 004fb319
    FMUL float ptr [0x005fa1b4]         ; 004fb31c | DAT_005fa1b4
    FISTP dword ptr [EBX + 0x4]         ; 004fb322
    FLD float ptr [EAX + 0x8]           ; 004fb325
    FMUL float ptr [0x005fa1b4]         ; 004fb328 | DAT_005fa1b4
    FISTP dword ptr [EBX + 0x8]         ; 004fb32e
    MOVSD ES:EDI,ESI                    ; 004fb331
    MOVSD ES:EDI,ESI                    ; 004fb332
    MOVSD ES:EDI,ESI                    ; 004fb333
    MOV EAX,EBP                         ; 004fb334
    ADD ESP,0x84                        ; 004fb336
    POP EBP                             ; 004fb33c
    POP EDI                             ; 004fb33d
    POP EBX                             ; 004fb33e
    RET                                 ; 004fb33f

