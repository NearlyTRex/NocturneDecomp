; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041a0c0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x48]:1  local_48
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
; XREF[2]:
;   FUN_004186c0 at 00418718
;   FUN_00419eb0 at 00419eeb
;
; Referenced Globals:
;   TerminatedCString s_core_boneguy_cpp_005cc391
;   TerminatedCString s_CBoneGuy_explode_Not_eno_005cc3a5
;   TerminatedCString s_boneguy_fallapart_wav_005cc3cf
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_0040cf60
;   FUN_004154f0
;   FUN_00416700
;   FUN_004277e0
;   FUN_00428e00
;   FUN_004e4500
;   FUN_00547810
;   FUN_00594380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041a0c0
        ;   Label: FUN_0041a0c0
    PUSH ESI                            ; 0041a0c1
    PUSH EDI                            ; 0041a0c2
    PUSH EBP                            ; 0041a0c3
    SUB ESP,0x38                        ; 0041a0c4
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0041a0c7
    PUSH EDX                            ; 0041a0cb
    CALL FUN_00428e00                   ; 0041a0cc
        ;   XREF to: 00428e00 (UNCONDITIONAL_CALL)  ; undefined FUN_00428e00()
    ADD ESP,0x4                         ; 0041a0d1
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0041a0d4
    ADD EAX,0x2b4                       ; 0041a0d8
    MOV dword ptr [EAX + 0x10e64],0x1   ; 0041a0dd
    PUSH EAX                            ; 0041a0e7
    MOV dword ptr [EAX + 0x10e68],0x0   ; 0041a0e8
    CALL FUN_00547810                   ; 0041a0f2
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; undefined FUN_00547810()
    ADD ESP,0x4                         ; 0041a0f7
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0041a0fa
    MOV dword ptr [ESP + 0x24],EAX      ; 0041a0fe
    MOV EAX,dword ptr [EAX + 0xc00]     ; 0041a102
    MOV dword ptr [EBX + 0x10b74],EAX   ; 0041a108
    CMP EAX,0x14                        ; 0041a10e
    JG 0x0041a2b5                       ; 0041a111
        ;   XREF to: 0041a2b5 (CONDITIONAL_JUMP)  ; LAB_0041a2b5
    MOV EAX,dword ptr [ESP + 0x24]      ; 0041a117
        ;   Label: LAB_0041a117
    XOR EDI,EDI                         ; 0041a11b
    MOV EBP,dword ptr [EAX + 0xc00]     ; 0041a11d
    MOV dword ptr [ESP + 0x30],EDI      ; 0041a123
    TEST EBP,EBP                        ; 0041a127
    JLE 0x0041a293                      ; 0041a129
        ;   XREF to: 0041a293 (CONDITIONAL_JUMP)  ; LAB_0041a293
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0041a12f
    ADD EAX,0x10b78                     ; 0041a133
    MOV dword ptr [ESP + 0x28],EAX      ; 0041a138
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0041a13c
    ADD EAX,0x30                        ; 0041a140
    MOV dword ptr [ESP + 0x1c],EAX      ; 0041a143
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0041a147
    ADD EAX,0x20                        ; 0041a14b
    MOV EBP,dword ptr [ESP + 0x28]      ; 0041a14e
    MOV dword ptr [ESP + 0x20],EAX      ; 0041a152
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0041a156
    ADD EBP,0xc                         ; 0041a15a
    MOV dword ptr [ESP + 0x2c],EAX      ; 0041a15d
    PUSH 0x40a00000                     ; 0041a161
        ;   Label: LAB_0041a161
    PUSH 0xc0a00000                     ; 0041a166
    CALL FUN_0040cf60                   ; 0041a16b
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0x3c],EAX      ; 0041a170
    FLD float ptr [ESP + 0x3c]          ; 0041a174
    ADD ESP,0x8                         ; 0041a178
    PUSH 0x41200000                     ; 0041a17b
    PUSH 0x0                            ; 0041a180
    FSTP float ptr [ESP + 0x18]         ; 0041a182
    CALL FUN_0040cf60                   ; 0041a186
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0x3c],EAX      ; 0041a18b
    FLD float ptr [ESP + 0x3c]          ; 0041a18f
    ADD ESP,0x8                         ; 0041a193
    PUSH 0x40a00000                     ; 0041a196
    PUSH 0xc0a00000                     ; 0041a19b
    FSTP float ptr [ESP + 0x1c]         ; 0041a1a0
    CALL FUN_0040cf60                   ; 0041a1a4
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0x3c],EAX      ; 0041a1a9
    FLD float ptr [ESP + 0x3c]          ; 0041a1ad
    ADD ESP,0x8                         ; 0041a1b1
    PUSH 0x2                            ; 0041a1b4
    PUSH 0x1                            ; 0041a1b6
    PUSH 0x1                            ; 0041a1b8
    MOV EBX,dword ptr [ESP + 0x58]      ; 0041a1ba
    PUSH EBX                            ; 0041a1be
    LEA EAX,[ESP + 0x20]                ; 0041a1bf
    PUSH EAX                            ; 0041a1c3
    MOV ESI,dword ptr [ESP + 0x30]      ; 0041a1c4
    PUSH ESI                            ; 0041a1c8
    MOV EDI,dword ptr [ESP + 0x38]      ; 0041a1c9
    PUSH EDI                            ; 0041a1cd
    FSTP float ptr [ESP + 0x34]         ; 0041a1ce
    CALL FUN_004154f0                   ; 0041a1d2
        ;   XREF to: 004154f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004154f0()
    ADD ESP,0x1c                        ; 0041a1d7
    MOV EBX,EAX                         ; 0041a1da
    PUSH 0x0                            ; 0041a1dc
    MOV ESI,EAX                         ; 0041a1de
    MOV EAX,dword ptr [ESP + 0x34]      ; 0041a1e0
    PUSH EAX                            ; 0041a1e4
    PUSH EBX                            ; 0041a1e5
    MOV EDX,dword ptr [ESP + 0x58]      ; 0041a1e6
    PUSH EDX                            ; 0041a1ea
    CALL FUN_004277e0                   ; 0041a1eb
        ;   XREF to: 004277e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004277e0()
    ADD ESP,0x10                        ; 0041a1f0
    PUSH EBX                            ; 0041a1f3
    MOV dword ptr [EBX + 0x10d8],0x1    ; 0041a1f4
    CALL FUN_00416700                   ; 0041a1fe
        ;   XREF to: 00416700 (UNCONDITIONAL_CALL)  ; undefined FUN_00416700()
    ADD ESP,0x4                         ; 0041a203
    IMUL EAX,dword ptr [ESP + 0x30],0x48 ; 0041a206
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0041a20b
    MOV dword ptr [EDI + 0x10bbc],EBX   ; 0041a20f
    MOV EDI,dword ptr [ESP + 0x28]      ; 0041a215
    ADD EBX,0x20                        ; 0041a219
    ADD EAX,EDI                         ; 0041a21c
    CMP EAX,EBX                         ; 0041a21e
    JZ 0x0041a232                       ; 0041a220
        ;   XREF to: 0041a232 (CONDITIONAL_JUMP)  ; LAB_0041a232
    MOV EDX,dword ptr [EBX]             ; 0041a222
    MOV dword ptr [EAX],EDX             ; 0041a224
    MOV EDX,dword ptr [EBX + 0x4]       ; 0041a226
    MOV dword ptr [EAX + 0x4],EDX       ; 0041a229
    MOV EDX,dword ptr [EBX + 0x8]       ; 0041a22c
    MOV dword ptr [EAX + 0x8],EDX       ; 0041a22f
    LEA EAX,[ESI + 0x30]                ; 0041a232
        ;   Label: LAB_0041a232
    CMP EBP,EAX                         ; 0041a235
    JZ 0x0041a24a                       ; 0041a237
        ;   XREF to: 0041a24a (CONDITIONAL_JUMP)  ; LAB_0041a24a
    MOV EDX,dword ptr [EAX]             ; 0041a239
    MOV dword ptr [EBP],EDX             ; 0041a23b
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041a23e
    MOV dword ptr [EBP + 0x4],EDX       ; 0041a241
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041a244
    MOV dword ptr [EBP + 0x8],EDX       ; 0041a247
    ADD ESI,0x30                        ; 0041a24a
        ;   Label: LAB_0041a24a
    PUSH ESI                            ; 0041a24d
    LEA ESI,[ESP + 0x4]                 ; 0041a24e
    ADD EBP,0x48                        ; 0041a252
    CALL FUN_00594380                   ; 0041a255
        ;   XREF to: 00594380 (UNCONDITIONAL_CALL)  ; undefined FUN_00594380()
    ADD ESP,0x4                         ; 0041a25a
    MOV ESI,ESP                         ; 0041a25d
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0041a25f
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0041a263
    MOV EDX,dword ptr [ESP + 0x30]      ; 0041a267
    MOV EBX,dword ptr [ESP + 0x24]      ; 0041a26b
    LEA EDI,[EDI + 0x10ba0]             ; 0041a26f
    ADD EAX,0x48                        ; 0041a275
    INC EDX                             ; 0041a278
    MOVSD ES:EDI,ESI                    ; 0041a279
    MOVSD ES:EDI,ESI                    ; 0041a27a
    MOVSD ES:EDI,ESI                    ; 0041a27b
    MOVSD ES:EDI,ESI                    ; 0041a27c
    MOV dword ptr [ESP + 0x2c],EAX      ; 0041a27d
    MOV ECX,dword ptr [EBX + 0xc00]     ; 0041a281
    MOV dword ptr [ESP + 0x30],EDX      ; 0041a287
    CMP EDX,ECX                         ; 0041a28b
    JL 0x0041a161                       ; 0041a28d
        ;   XREF to: 0041a161 (CONDITIONAL_JUMP)  ; LAB_0041a161
    PUSH 0x5cc3cf                       ; 0041a293 | = "boneguy-fallapart.wav"
        ;   Label: LAB_0041a293
    MOV EBP,dword ptr [ESP + 0x50]      ; 0041a298
    MOV EAX,dword ptr [ESP + 0x50]      ; 0041a29c
    PUSH EBP                            ; 0041a2a0
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 0041a2a1
    CALL dword ptr [EAX + 0x34]         ; 0041a2a7
    ADD ESP,0x8                         ; 0041a2aa
    ADD ESP,0x38                        ; 0041a2ad
    POP EBP                             ; 0041a2b0
    POP EDI                             ; 0041a2b1
    POP ESI                             ; 0041a2b2
    POP EBX                             ; 0041a2b3
    RET                                 ; 0041a2b4
    MOV EBX,0x5cc391                    ; 0041a2b5 | = "..\\core\\boneguy.cpp"
        ;   Label: LAB_0041a2b5
    MOV ESI,0x444                       ; 0041a2ba
    PUSH 0x5cc3a5                       ; 0041a2bf | = "CBoneGuy::explode - Not enough contai..."
    MOV dword ptr [0x01d046a0],EBX      ; 0041a2c4 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0041a2ca | DAT_01d046a4
    CALL FUN_004e4500                   ; 0041a2d0
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0041a2d5
    JMP 0x0041a117                      ; 0041a2d8
        ;   XREF to: 0041a117 (UNCONDITIONAL_JUMP)  ; LAB_0041a117

