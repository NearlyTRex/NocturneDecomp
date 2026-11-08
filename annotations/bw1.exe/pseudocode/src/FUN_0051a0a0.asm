; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051a0a0(undefined4 param_1,int *param_2,int *param_3)
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
;   FUN_00552490 at 005526e7
;
; Referenced Globals:
;   undefined4 DAT_00603ce4
;   undefined4 DAT_00603ce8
;   undefined4 DAT_00603cec
;
; Called Functions:
;   FUN_00519920
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051a0a0
        ;   Label: FUN_0051a0a0
    PUSH EDI                            ; 0051a0a1
    PUSH EBP                            ; 0051a0a2
    SUB ESP,0x84                        ; 0051a0a3
    MOV EAX,dword ptr [ESP + 0x98]      ; 0051a0a9
    MOV EBP,ESI                         ; 0051a0b0
    MOV ESI,dword ptr [ESP + 0x9c]      ; 0051a0b2
    LEA EBX,[ESP + 0x54]                ; 0051a0b9
    FILD dword ptr [EAX]                ; 0051a0bd
    FMUL float ptr [0x00603ce8]         ; 0051a0bf | DAT_00603ce8
    FSTP float ptr [EBX]                ; 0051a0c5
    FILD dword ptr [EAX + 0x4]          ; 0051a0c7
    FMUL float ptr [0x00603ce8]         ; 0051a0ca | DAT_00603ce8
    FSTP float ptr [EBX + 0x4]          ; 0051a0d0
    FILD dword ptr [EAX + 0x8]          ; 0051a0d3
    FMUL float ptr [0x00603ce8]         ; 0051a0d6 | DAT_00603ce8
    FSTP float ptr [EBX + 0x8]          ; 0051a0dc
    LEA EBX,[ESP + 0x6c]                ; 0051a0df
    MOV EAX,ESI                         ; 0051a0e3
    LEA EDI,[ESP + 0x3c]                ; 0051a0e5
    FILD dword ptr [EAX]                ; 0051a0e9
    FMUL float ptr [0x00603cec]         ; 0051a0eb | DAT_00603cec
    FSTP float ptr [EBX]                ; 0051a0f1
    FILD dword ptr [EAX + 0x4]          ; 0051a0f3
    FMUL float ptr [0x00603cec]         ; 0051a0f6 | DAT_00603cec
    FSTP float ptr [EBX + 0x4]          ; 0051a0fc
    FILD dword ptr [EAX + 0x8]          ; 0051a0ff
    FMUL float ptr [0x00603cec]         ; 0051a102 | DAT_00603cec
    FSTP float ptr [EBX + 0x8]          ; 0051a108
    FLD float ptr [ESP + 0x6c]          ; 0051a10b
    FLD float ptr [ESP + 0x70]          ; 0051a10f
    FLD float ptr [ESP + 0x74]          ; 0051a113
    LEA ESI,[ESP + 0xc]                 ; 0051a117
    LEA EAX,[ESP + 0x3c]                ; 0051a11b
    LEA EBX,[ESP + 0x6c]                ; 0051a11f
    FXCH ST2                            ; 0051a123
    FADD float ptr [ESP + 0x54]         ; 0051a125
    FXCH                                ; 0051a129
    FADD float ptr [ESP + 0x58]         ; 0051a12b
    FXCH ST2                            ; 0051a12f
    FADD float ptr [ESP + 0x5c]         ; 0051a131
    FXCH                                ; 0051a135
    FSTP float ptr [ESP + 0xc]          ; 0051a137
    FXCH                                ; 0051a13b
    FSTP float ptr [ESP + 0x10]         ; 0051a13d
    FSTP float ptr [ESP + 0x14]         ; 0051a141
    MOVSD ES:EDI,ESI                    ; 0051a145
    MOVSD ES:EDI,ESI                    ; 0051a146
    MOVSD ES:EDI,ESI                    ; 0051a147
    CMP EBX,EAX                         ; 0051a148
    JZ 0x0051a164                       ; 0051a14a
        ;   XREF to: 0051a164 (CONDITIONAL_JUMP)  ; LAB_0051a164
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0051a14c
    MOV dword ptr [ESP + 0x6c],EAX      ; 0051a150
    MOV EAX,dword ptr [ESP + 0x40]      ; 0051a154
    MOV dword ptr [ESP + 0x70],EAX      ; 0051a158
    MOV EAX,dword ptr [ESP + 0x44]      ; 0051a15c
    MOV dword ptr [ESP + 0x74],EAX      ; 0051a160
    LEA EAX,[ESP + 0x54]                ; 0051a164
        ;   Label: LAB_0051a164
    PUSH EAX                            ; 0051a168
    MOV EDX,dword ptr [ESP + 0x98]      ; 0051a169
    LEA ESI,[ESP + 0x7c]                ; 0051a170
    PUSH EDX                            ; 0051a174
    LEA EDI,[ESP + 0x8]                 ; 0051a175
    LEA EBX,[ESP + 0x5c]                ; 0051a179
    CALL FUN_00519920                   ; 0051a17d
        ;   XREF to: 00519920 (UNCONDITIONAL_CALL)  ; undefined FUN_00519920()
    LEA ESI,[ESP + 0x80]                ; 0051a182
    ADD ESP,0x8                         ; 0051a189
    MOV EAX,ESP                         ; 0051a18c
    MOVSD ES:EDI,ESI                    ; 0051a18e
    MOVSD ES:EDI,ESI                    ; 0051a18f
    MOVSD ES:EDI,ESI                    ; 0051a190
    CMP EBX,EAX                         ; 0051a191
    JZ 0x0051a1ac                       ; 0051a193
        ;   XREF to: 0051a1ac (CONDITIONAL_JUMP)  ; LAB_0051a1ac
    MOV EAX,dword ptr [ESP]             ; 0051a195
    MOV dword ptr [ESP + 0x54],EAX      ; 0051a198
    MOV EAX,dword ptr [ESP + 0x4]       ; 0051a19c
    MOV dword ptr [ESP + 0x58],EAX      ; 0051a1a0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0051a1a4
    MOV dword ptr [ESP + 0x5c],EAX      ; 0051a1a8
    LEA EAX,[ESP + 0x6c]                ; 0051a1ac
        ;   Label: LAB_0051a1ac
    PUSH EAX                            ; 0051a1b0
    MOV ECX,dword ptr [ESP + 0x98]      ; 0051a1b1
    LEA ESI,[ESP + 0x4c]                ; 0051a1b8
    PUSH ECX                            ; 0051a1bc
    LEA EDI,[ESP + 0x38]                ; 0051a1bd
    LEA EBX,[ESP + 0x74]                ; 0051a1c1
    CALL FUN_00519920                   ; 0051a1c5
        ;   XREF to: 00519920 (UNCONDITIONAL_CALL)  ; undefined FUN_00519920()
    LEA ESI,[ESP + 0x50]                ; 0051a1ca
    ADD ESP,0x8                         ; 0051a1ce
    LEA EAX,[ESP + 0x30]                ; 0051a1d1
    MOVSD ES:EDI,ESI                    ; 0051a1d5
    MOVSD ES:EDI,ESI                    ; 0051a1d6
    MOVSD ES:EDI,ESI                    ; 0051a1d7
    CMP EBX,EAX                         ; 0051a1d8
    JZ 0x0051a1f4                       ; 0051a1da
        ;   XREF to: 0051a1f4 (CONDITIONAL_JUMP)  ; LAB_0051a1f4
    MOV EAX,dword ptr [ESP + 0x30]      ; 0051a1dc
    MOV dword ptr [ESP + 0x6c],EAX      ; 0051a1e0
    MOV EAX,dword ptr [ESP + 0x34]      ; 0051a1e4
    MOV dword ptr [ESP + 0x70],EAX      ; 0051a1e8
    MOV EAX,dword ptr [ESP + 0x38]      ; 0051a1ec
    MOV dword ptr [ESP + 0x74],EAX      ; 0051a1f0
    FLD float ptr [ESP + 0x6c]          ; 0051a1f4
        ;   Label: LAB_0051a1f4
    FLD float ptr [ESP + 0x70]          ; 0051a1f8
    FLD float ptr [ESP + 0x74]          ; 0051a1fc
    LEA EDI,[ESP + 0x60]                ; 0051a200
    LEA ESI,[ESP + 0x18]                ; 0051a204
    LEA EAX,[ESP + 0x60]                ; 0051a208
    LEA EBX,[ESP + 0x6c]                ; 0051a20c
    FXCH ST2                            ; 0051a210
    FSUB float ptr [ESP + 0x54]         ; 0051a212
    FXCH                                ; 0051a216
    FSUB float ptr [ESP + 0x58]         ; 0051a218
    FXCH ST2                            ; 0051a21c
    FSUB float ptr [ESP + 0x5c]         ; 0051a21e
    FXCH ST2                            ; 0051a222
    FSTP float ptr [ESP + 0x1c]         ; 0051a224
    FXCH                                ; 0051a228
    FSTP float ptr [ESP + 0x20]         ; 0051a22a
    FSTP float ptr [ESP + 0x18]         ; 0051a22e
    MOVSD ES:EDI,ESI                    ; 0051a232
    MOVSD ES:EDI,ESI                    ; 0051a233
    MOVSD ES:EDI,ESI                    ; 0051a234
    CMP EBX,EAX                         ; 0051a235
    JZ 0x0051a251                       ; 0051a237
        ;   XREF to: 0051a251 (CONDITIONAL_JUMP)  ; LAB_0051a251
    MOV EAX,dword ptr [ESP + 0x60]      ; 0051a239
    MOV dword ptr [ESP + 0x6c],EAX      ; 0051a23d
    MOV EAX,dword ptr [ESP + 0x64]      ; 0051a241
    MOV dword ptr [ESP + 0x70],EAX      ; 0051a245
    MOV EAX,dword ptr [ESP + 0x68]      ; 0051a249
    MOV dword ptr [ESP + 0x74],EAX      ; 0051a24d
    LEA EBX,[ESP + 0x24]                ; 0051a251
        ;   Label: LAB_0051a251
    LEA EAX,[ESP + 0x6c]                ; 0051a255
    LEA ESI,[ESP + 0x24]                ; 0051a259
    MOV EDI,EBP                         ; 0051a25d
    FLD float ptr [EAX]                 ; 0051a25f
    FMUL float ptr [0x00603ce4]         ; 0051a261 | DAT_00603ce4
    FISTP dword ptr [EBX]               ; 0051a267
    FLD float ptr [EAX + 0x4]           ; 0051a269
    FMUL float ptr [0x00603ce4]         ; 0051a26c | DAT_00603ce4
    FISTP dword ptr [EBX + 0x4]         ; 0051a272
    FLD float ptr [EAX + 0x8]           ; 0051a275
    FMUL float ptr [0x00603ce4]         ; 0051a278 | DAT_00603ce4
    FISTP dword ptr [EBX + 0x8]         ; 0051a27e
    MOVSD ES:EDI,ESI                    ; 0051a281
    MOVSD ES:EDI,ESI                    ; 0051a282
    MOVSD ES:EDI,ESI                    ; 0051a283
    MOV EAX,EBP                         ; 0051a284
    ADD ESP,0x84                        ; 0051a286
    POP EBP                             ; 0051a28c
    POP EDI                             ; 0051a28d
    POP EBX                             ; 0051a28e
    RET                                 ; 0051a28f

