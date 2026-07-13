; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004da150(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0054eae0 at 0054f083
;
; Referenced Globals:
;   undefined4 s_mobster1.dfm_0058a180+1
;   undefined1 DAT_0058a18e
;   undefined1 DAT_0058a18f
;   undefined1 DAT_0058a190
;   undefined1 DAT_0058a191
;   undefined4 DAT_005a0920
;   undefined4 DAT_005a0924
;   undefined1* PTR_FUN_005a0934 = 004da290
;
; Called Functions:
;   FUN_0040de00
;   FUN_00479560
;   FUN_0051e0c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004da150
        ;   Label: FUN_004da150
    PUSH ESI                            ; 004da151
    PUSH EDI                            ; 004da152
    MOV EDX,dword ptr [ESP + 0x10]      ; 004da153
    PUSH EDX                            ; 004da157
    CALL FUN_00479560                   ; 004da158
        ;   XREF to: 00479560 (UNCONDITIONAL_CALL)  ; undefined FUN_00479560()
    ADD ESP,0x4                         ; 004da15d
    PUSH 0x58a181                       ; 004da160 | s_mobster1.dfm_0058a180+1
    MOV EBX,EAX                         ; 004da165
    ADD EAX,0x150                       ; 004da167
    PUSH EAX                            ; 004da16c
    MOV dword ptr [EAX + -0x4],0x5a0934 ; 004da16d | PTR_FUN_005a0934
    CALL FUN_0051e0c0                   ; 004da174
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051e0c0()
    FLD float ptr [0x005a0920]          ; 004da179 | DAT_005a0920
    ADD ESP,0x8                         ; 004da17f
    MOV dword ptr [EBX + 0x2dd4],0x3f19999a ; 004da182
    FLD float ptr [0x005a0924]          ; 004da18c | DAT_005a0924
    MOV dword ptr [EBX + 0x2dd8],0x3f666666 ; 004da192
    PUSH 0xff                           ; 004da19c
    FXCH                                ; 004da1a1
    FSTP float ptr [EBX + 0x2ddc]       ; 004da1a3
    PUSH 0x0                            ; 004da1a9
    FSTP float ptr [EBX + 0x2de0]       ; 004da1ab
    CALL FUN_0040de00                   ; 004da1b1
        ;   XREF to: 0040de00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040de00()
    MOV dword ptr [EBX + 0xbd28],0x0    ; 004da1b6
    MOV dword ptr [EBX + 0xbd2c],0x0    ; 004da1c0
    MOV dword ptr [EBX + 0xbd30],0x0    ; 004da1ca
    MOV dword ptr [EBX + 0xbdf4],0x0    ; 004da1d4
    ADD ESP,0x8                         ; 004da1de
    MOV dword ptr [EBX + 0xbdf8],0x0    ; 004da1e1
    PUSH 0x65                           ; 004da1eb
    MOV dword ptr [EBX + 0xbd18],0x42200000 ; 004da1ed
    PUSH 0x62                           ; 004da1f7
    MOV dword ptr [EBX + 0xbd24],EAX    ; 004da1f9
    CALL FUN_0040de00                   ; 004da1ff
        ;   XREF to: 0040de00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040de00()
    MOV dword ptr [EBX + 0xbd3c],0x0    ; 004da204
    MOV dword ptr [EBX + 0xbd34],0x0    ; 004da20e
    MOV dword ptr [EBX + 0xbd40],0x0    ; 004da218
    MOV dword ptr [EBX + 0xbd44],0x0    ; 004da222
    MOV dword ptr [EBX + 0xbd48],0x0    ; 004da22c
    MOV ESI,0x58a18e                    ; 004da236 | DAT_0058a18e
    MOV dword ptr [EBX + 0xbd4c],0x0    ; 004da23b
    ADD ESP,0x8                         ; 004da245
    MOV dword ptr [EBX + 0xbd50],0x0    ; 004da248
    LEA EDI,[EBX + 0xbd54]              ; 004da252
    MOV byte ptr [EBX + 0xbd38],AL      ; 004da258
    PUSH EDI                            ; 004da25e
    MOV AL,byte ptr [ESI]               ; 004da25f | DAT_0058a18e | DAT_0058a190
        ;   Label: LAB_004da25f
    MOV byte ptr [EDI],AL               ; 004da261
    CMP AL,0x0                          ; 004da263
    JZ 0x004da277                       ; 004da265
        ;   XREF to: 004da277 (CONDITIONAL_JUMP)  ; LAB_004da277
    MOV AL,byte ptr [ESI + 0x1]         ; 004da267 | DAT_0058a18f | DAT_0058a191
    ADD ESI,0x2                         ; 004da26a
    MOV byte ptr [EDI + 0x1],AL         ; 004da26d
    ADD EDI,0x2                         ; 004da270
    CMP AL,0x0                          ; 004da273
    JNZ 0x004da25f                      ; 004da275
        ;   XREF to: 004da25f (CONDITIONAL_JUMP)  ; LAB_004da25f
    POP EDI                             ; 004da277
        ;   Label: LAB_004da277
    MOV EAX,EBX                         ; 004da278
    MOV dword ptr [EBX + 0xbd20],0x0    ; 004da27a
    POP EDI                             ; 004da284
    POP ESI                             ; 004da285
    POP EBX                             ; 004da286
    RET                                 ; 004da287

