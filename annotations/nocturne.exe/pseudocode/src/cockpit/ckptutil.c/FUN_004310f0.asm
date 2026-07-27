; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_FUN_004310f0(ushort *param_1,int param_2,short param_3)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004310f0
        ;   Label: cockpit_ckptutil.c_FUN_004310f0
    PUSH ESI                            ; 004310f1
    PUSH EDI                            ; 004310f2
    PUSH EBP                            ; 004310f3
    SUB ESP,0x1c                        ; 004310f4
    MOV EBP,dword ptr [ESP + 0x34]      ; 004310f7
    XOR ECX,ECX                         ; 004310fb
    TEST EBP,EBP                        ; 004310fd
    JLE 0x004311d4                      ; 004310ff
        ;   XREF to: 004311d4 (CONDITIONAL_JUMP)  ; LAB_004311d4
    MOV EAX,dword ptr [ESP + 0x30]      ; 00431105
    MOV SI,word ptr [EAX + 0x2]         ; 00431109
        ;   Label: LAB_00431109
    MOVSX ESI,SI                        ; 0043110d
    MOV dword ptr [ESP + 0x4],ESI       ; 00431110
    MOV SI,word ptr [EAX + 0x4]         ; 00431114
    MOVSX ESI,SI                        ; 00431118
    MOV EDI,dword ptr [ESP + 0x38]      ; 0043111b
    MOV dword ptr [ESP],ESI             ; 0043111f
    MOV DX,word ptr [EAX]               ; 00431122
    SUB EDI,dword ptr [ESP]             ; 00431125
    MOVSX EBX,DX                        ; 00431128
    MOV dword ptr [ESP + 0xc],EDI       ; 0043112b
    MOV EDI,dword ptr [ESP + 0x38]      ; 0043112f
    SUB EDI,EBX                         ; 00431133
    MOV SI,word ptr [EAX + 0x6]         ; 00431135
    MOV dword ptr [ESP + 0x8],EDI       ; 00431139
    MOV EDI,dword ptr [ESP + 0xc]       ; 0043113d
    ADD ESI,ESI                         ; 00431141
    DEC EDI                             ; 00431143
    SAR SI,0x1                          ; 00431144
    MOV dword ptr [ESP + 0x18],EDI      ; 00431147
    MOV EDI,dword ptr [ESP + 0x8]       ; 0043114b
    MOVSX ESI,SI                        ; 0043114f
    DEC EDI                             ; 00431152
    MOV dword ptr [ESP + 0x14],ESI      ; 00431153
    MOV dword ptr [ESP + 0x10],EDI      ; 00431157
    MOV EDI,dword ptr [ESP]             ; 0043115b
    MOV ESI,dword ptr [ESP + 0x4]       ; 0043115e
    CMP EBX,EDI                         ; 00431162
    JG 0x004311dc                       ; 00431164
        ;   XREF to: 004311dc (CONDITIONAL_JUMP)  ; LAB_004311dc
    MOV DI,word ptr [EAX + 0x2]         ; 00431166
    AND EDX,0xffff0000                  ; 0043116a
    AND EDI,0xffff0000                  ; 00431170
    MOV word ptr [EAX],DX               ; 00431176
    MOV EDX,dword ptr [ESP + 0x14]      ; 00431179
    MOV BX,word ptr [EAX]               ; 0043117d
    MOV word ptr [EAX + 0x2],DI         ; 00431180
    OR EBX,EDX                          ; 00431184
    MOV EDX,dword ptr [ESP + 0x18]      ; 00431186
    MOV word ptr [EAX],BX               ; 0043118a
    MOV EBX,EDI                         ; 0043118d
    MOV DI,word ptr [EAX + 0x4]         ; 0043118f
    OR EBX,EDX                          ; 00431193
    AND EDI,0xffff0000                  ; 00431195
    MOV word ptr [EAX + 0x2],BX         ; 0043119b
    MOV EDX,EDI                         ; 0043119f
    MOV BX,word ptr [EAX + 0x6]         ; 004311a1
    MOV word ptr [EAX + 0x4],DI         ; 004311a5
    OR EDX,ESI                          ; 004311a9
    AND EBX,0xffff8000                  ; 004311ab
    MOV word ptr [EAX + 0x4],DX         ; 004311b1
    MOV EDX,dword ptr [ESP + 0x10]      ; 004311b5
    MOV ESI,EBX                         ; 004311b9
    AND DH,0x7f                         ; 004311bb
    MOV word ptr [EAX + 0x6],BX         ; 004311be
    OR ESI,EDX                          ; 004311c2
    MOV word ptr [EAX + 0x6],SI         ; 004311c4
    INC ECX                             ; 004311c8
    ADD EAX,0x8                         ; 004311c9
    CMP ECX,EBP                         ; 004311cc
    JL 0x00431109                       ; 004311ce
        ;   XREF to: 00431109 (CONDITIONAL_JUMP)  ; LAB_00431109
    ADD ESP,0x1c                        ; 004311d4
        ;   Label: LAB_004311d4
    POP EBP                             ; 004311d7
    POP EDI                             ; 004311d8
    POP ESI                             ; 004311d9
    POP EBX                             ; 004311da
    RET                                 ; 004311db
    AND EDX,0xffff0000                  ; 004311dc
        ;   Label: LAB_004311dc
    MOV BX,word ptr [EAX + 0x2]         ; 004311e2
    MOV EDI,EDX                         ; 004311e6
    AND EBX,0xffff0000                  ; 004311e8
    MOV word ptr [EAX],DX               ; 004311ee
    OR EDI,ESI                          ; 004311f1
    MOV word ptr [EAX + 0x2],BX         ; 004311f3
    MOV EDX,dword ptr [ESP + 0x10]      ; 004311f7
    MOV word ptr [EAX],DI               ; 004311fb
    MOV ESI,EBX                         ; 004311fe
    MOV DI,word ptr [EAX + 0x4]         ; 00431200
    OR ESI,EDX                          ; 00431204
    MOV EDX,dword ptr [ESP + 0x14]      ; 00431206
    AND EDI,0xffff0000                  ; 0043120a
    MOV word ptr [EAX + 0x2],SI         ; 00431210
    MOV EBX,EDI                         ; 00431214
    MOV SI,word ptr [EAX + 0x6]         ; 00431216
    MOV word ptr [EAX + 0x4],DI         ; 0043121a
    AND ESI,0xffff8000                  ; 0043121e
    OR EBX,EDX                          ; 00431224
    MOV EDX,dword ptr [ESP + 0x18]      ; 00431226
    MOV EDI,ESI                         ; 0043122a
    MOV word ptr [EAX + 0x4],BX         ; 0043122c
    AND DH,0x7f                         ; 00431230
    MOV word ptr [EAX + 0x6],SI         ; 00431233
    OR EDI,EDX                          ; 00431237
    MOV word ptr [EAX + 0x6],DI         ; 00431239
    INC ECX                             ; 0043123d
    ADD EAX,0x8                         ; 0043123e
    CMP ECX,EBP                         ; 00431241
    JL 0x00431109                       ; 00431243
        ;   XREF to: 00431109 (CONDITIONAL_JUMP)  ; LAB_00431109
    ADD ESP,0x1c                        ; 00431249
    POP EBP                             ; 0043124c
    POP EDI                             ; 0043124d
    POP ESI                             ; 0043124e
    POP EBX                             ; 0043124f
    RET                                 ; 00431250

