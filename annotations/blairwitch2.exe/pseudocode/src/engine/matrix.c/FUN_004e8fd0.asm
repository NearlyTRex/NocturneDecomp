; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e8fd0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
;
; Local Variables:
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
;
; XREF[2]:
;   FUN_0046b300 at 0046b31d
;   FUN_0046b350 at 0046b3be
;
; Referenced Globals:
;   TerminatedCString s_engine_matrix_c_005dc79e
;   TerminatedCString s_Matrix_unbalance_005dc7b1
;   undefined4 DAT_01c38b6c
;   undefined4 DAT_01c38b70
;   undefined4 DAT_01c38b74
;   undefined4 DAT_01c38b90
;   undefined4 DAT_01c38b94
;   undefined4 DAT_01c38b98
;   undefined4 DAT_01c38b9c
;   undefined4 DAT_01c38ba0
;   undefined4 DAT_01c38ba4
;   undefined4 DAT_01c38ba8
;   undefined4 DAT_01c38bac
;   undefined4 DAT_01c38bb0
;   undefined4 DAT_01c38bb4
;   ... and 8 more
;
; Called Functions:
;   FUN_004e4500
;   FUN_004e86b0
;   FUN_004e86f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e8fd0
        ;   Label: FUN_004e8fd0
    PUSH ESI                            ; 004e8fd1
    PUSH EDI                            ; 004e8fd2
    PUSH EBP                            ; 004e8fd3
    SUB ESP,0x30                        ; 004e8fd4
    MOV EDI,dword ptr [ESP + 0x44]      ; 004e8fd7
    MOV EBX,dword ptr [ESP + 0x48]      ; 004e8fdb
    MOV ESI,dword ptr [ESP + 0x4c]      ; 004e8fdf
    MOV EAX,[0x01d05014]                ; 004e8fe3 | DAT_01d05014
    MOV EDX,dword ptr [0x01c38b6c]      ; 004e8fe8 | DAT_01c38b6c
    MOV dword ptr [EAX*0x4 + 0x1d05180],EDX ; 004e8fee
    MOV EDX,dword ptr [0x01c38b70]      ; 004e8ff5 | DAT_01c38b70
    MOV dword ptr [EAX*0x4 + 0x1d051a8],EDX ; 004e8ffb
    MOV EDX,dword ptr [0x01c38b74]      ; 004e9002 | DAT_01c38b74
    MOV dword ptr [EAX*0x4 + 0x1d051d0],EDX ; 004e9008
    MOV EDX,dword ptr [0x01c38b90]      ; 004e900f | DAT_01c38b90
    MOV dword ptr [EAX*0x4 + 0x1d051f8],EDX ; 004e9015
    MOV EDX,dword ptr [0x01c38b94]      ; 004e901c | DAT_01c38b94
    MOV dword ptr [EAX*0x4 + 0x1d05220],EDX ; 004e9022
    MOV EDX,dword ptr [0x01c38b98]      ; 004e9029 | DAT_01c38b98
    MOV dword ptr [EAX*0x4 + 0x1d05248],EDX ; 004e902f
    MOV EDX,dword ptr [0x01c38b9c]      ; 004e9036 | DAT_01c38b9c
    MOV dword ptr [EAX*0x4 + 0x1d05018],EDX ; 004e903c
    MOV EDX,dword ptr [0x01c38ba0]      ; 004e9043 | DAT_01c38ba0
    MOV dword ptr [EAX*0x4 + 0x1d05040],EDX ; 004e9049
    MOV EDX,dword ptr [0x01c38ba4]      ; 004e9050 | DAT_01c38ba4
    MOV dword ptr [EAX*0x4 + 0x1d05068],EDX ; 004e9056
    MOV EDX,dword ptr [0x01c38ba8]      ; 004e905d | DAT_01c38ba8
    MOV dword ptr [EAX*0x4 + 0x1d05090],EDX ; 004e9063
    MOV EDX,dword ptr [0x01c38bac]      ; 004e906a | DAT_01c38bac
    MOV dword ptr [EAX*0x4 + 0x1d050b8],EDX ; 004e9070
    MOV EDX,dword ptr [0x01c38bb0]      ; 004e9077 | DAT_01c38bb0
    MOV dword ptr [EAX*0x4 + 0x1d050e0],EDX ; 004e907d
    MOV EDX,dword ptr [0x01c38bb4]      ; 004e9084 | DAT_01c38bb4
    MOV dword ptr [EAX*0x4 + 0x1d05108],EDX ; 004e908a
    MOV EDX,dword ptr [0x01c38bb8]      ; 004e9091 | DAT_01c38bb8
    MOV dword ptr [EAX*0x4 + 0x1d05130],EDX ; 004e9097
    MOV EDX,dword ptr [0x01c38bbc]      ; 004e909e | DAT_01c38bbc
    MOV dword ptr [EAX*0x4 + 0x1d05158],EDX ; 004e90a4
    MOV EDX,dword ptr [ESP + 0x50]      ; 004e90ab
    MOV EAX,[0x01c38b6c]                ; 004e90af | DAT_01c38b6c
    SUB EAX,EDX                         ; 004e90b4
    MOV ECX,dword ptr [ESP + 0x54]      ; 004e90b6
    MOV dword ptr [ESP + 0x8],EAX       ; 004e90ba
    MOV EAX,[0x01c38b70]                ; 004e90be | DAT_01c38b70
    SUB EAX,ECX                         ; 004e90c3
    MOV EBP,dword ptr [ESP + 0x58]      ; 004e90c5
    MOV dword ptr [ESP + 0x4],EAX       ; 004e90c9
    MOV EAX,[0x01c38b74]                ; 004e90cd | DAT_01c38b74
    SUB EAX,EBP                         ; 004e90d2
    MOV dword ptr [0x01d05008],EBX      ; 004e90d4 | DAT_01d05008
    MOV dword ptr [ESP + 0x10],EAX      ; 004e90da
    MOV EAX,EDI                         ; 004e90de
    MOV dword ptr [0x01d0500c],ESI      ; 004e90e0 | DAT_01d0500c
    OR EAX,EBX                          ; 004e90e6
    MOV dword ptr [0x01d05004],EDI      ; 004e90e8 | DAT_01d05004
    OR EAX,ESI                          ; 004e90ee
    JNZ 0x004e912b                      ; 004e90f0
        ;   XREF to: 004e912b (CONDITIONAL_JUMP)  ; LAB_004e912b
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e90f2
    MOV [0x01c38b6c],EAX                ; 004e90f6 | DAT_01c38b6c
    MOV EAX,dword ptr [ESP + 0x4]       ; 004e90fb
    MOV [0x01c38b70],EAX                ; 004e90ff | DAT_01c38b70
    MOV EAX,dword ptr [ESP + 0x10]      ; 004e9104
    MOV [0x01c38b74],EAX                ; 004e9108 | DAT_01c38b74
    MOV EDX,dword ptr [0x01d05014]      ; 004e910d | DAT_01d05014
        ;   Label: LAB_004e910d
    INC EDX                             ; 004e9113
    MOV dword ptr [0x01d05014],EDX      ; 004e9114 | DAT_01d05014
    CMP EDX,0x9                         ; 004e911a
    JG 0x004e96e5                       ; 004e911d
        ;   XREF to: 004e96e5 (CONDITIONAL_JUMP)  ; LAB_004e96e5
    ADD ESP,0x30                        ; 004e9123
    POP EBP                             ; 004e9126
    POP EDI                             ; 004e9127
    POP ESI                             ; 004e9128
    POP EBX                             ; 004e9129
    RET                                 ; 004e912a
    PUSH EDI                            ; 004e912b
        ;   Label: LAB_004e912b
    CALL FUN_004e86b0                   ; 004e912c
        ;   XREF to: 004e86b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e86b0()
    MOV dword ptr [ESP + 0x20],EAX      ; 004e9131
    ADD ESP,0x4                         ; 004e9135
    PUSH EDI                            ; 004e9138
    CALL FUN_004e86f0                   ; 004e9139
        ;   XREF to: 004e86f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e86f0()
    MOV dword ptr [ESP + 0x10],EAX      ; 004e913e
    ADD ESP,0x4                         ; 004e9142
    PUSH EBX                            ; 004e9145
    CALL FUN_004e86b0                   ; 004e9146
        ;   XREF to: 004e86b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e86b0()
    ADD ESP,0x4                         ; 004e914b
    PUSH EBX                            ; 004e914e
    MOV EBP,EAX                         ; 004e914f
    CALL FUN_004e86f0                   ; 004e9151
        ;   XREF to: 004e86f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e86f0()
    ADD ESP,0x4                         ; 004e9156
    PUSH ESI                            ; 004e9159
    MOV EBX,EAX                         ; 004e915a
    CALL FUN_004e86b0                   ; 004e915c
        ;   XREF to: 004e86b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e86b0()
    MOV dword ptr [ESP + 0x28],EAX      ; 004e9161
    ADD ESP,0x4                         ; 004e9165
    PUSH ESI                            ; 004e9168
    CALL FUN_004e86f0                   ; 004e9169
        ;   XREF to: 004e86f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e86f0()
    MOV dword ptr [ESP + 0x2c],EAX      ; 004e916e
    ADD ESP,0x4                         ; 004e9172
    MOV EAX,EBX                         ; 004e9175
    MOV EDX,dword ptr [ESP + 0x28]      ; 004e9177
    IMUL EDX                            ; 004e917b
    SHRD EAX,EDX,0x10                   ; 004e917d
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004e9181
    MOV ECX,EAX                         ; 004e9185
    MOV EAX,EBP                         ; 004e9187
    IMUL EDX                            ; 004e9189
    SHRD EAX,EDX,0x10                   ; 004e918b
    MOV EDX,dword ptr [ESP + 0x24]      ; 004e918f
    IMUL EDX                            ; 004e9193
    SHRD EAX,EDX,0x10                   ; 004e9195
    MOV EDX,dword ptr [ESP + 0x28]      ; 004e9199
    ADD ECX,EAX                         ; 004e919d
    NEG EDX                             ; 004e919f
    MOV EAX,EBP                         ; 004e91a1
    MOV dword ptr [ESP + 0x18],ECX      ; 004e91a3
    IMUL EDX                            ; 004e91a7
    SHRD EAX,EDX,0x10                   ; 004e91a9
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004e91ad
    MOV ECX,EAX                         ; 004e91b1
    MOV EAX,EBX                         ; 004e91b3
    IMUL EDX                            ; 004e91b5
    SHRD EAX,EDX,0x10                   ; 004e91b7
    MOV EDX,dword ptr [ESP + 0x24]      ; 004e91bb
    IMUL EDX                            ; 004e91bf
    SHRD EAX,EDX,0x10                   ; 004e91c1
    MOV EDX,dword ptr [ESP + 0x24]      ; 004e91c5
    ADD ECX,EAX                         ; 004e91c9
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e91cb
    MOV dword ptr [ESP + 0x20],ECX      ; 004e91cf
    IMUL EDX                            ; 004e91d3
    SHRD EAX,EDX,0x10                   ; 004e91d5
    MOV ECX,EAX                         ; 004e91d9
    MOV EDX,EBP                         ; 004e91db
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e91dd
    IMUL EDX                            ; 004e91e1
    SHRD EAX,EDX,0x10                   ; 004e91e3
    MOV ESI,EAX                         ; 004e91e7
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e91e9
    MOV EDX,EBX                         ; 004e91ed
    IMUL EDX                            ; 004e91ef
    SHRD EAX,EDX,0x10                   ; 004e91f1
    MOV EDI,EAX                         ; 004e91f5
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004e91f7
    MOV EDX,dword ptr [ESP + 0x24]      ; 004e91fb
    MOV dword ptr [ESP + 0x14],EAX      ; 004e91ff
    NEG EAX                             ; 004e9203
    NEG EDX                             ; 004e9205
    MOV dword ptr [ESP + 0x14],EAX      ; 004e9207
    MOV EAX,EBX                         ; 004e920b
    IMUL EDX                            ; 004e920d
    SHRD EAX,EDX,0x10                   ; 004e920f
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004e9213
    MOV dword ptr [ESP],EAX             ; 004e9217
    MOV EAX,EBP                         ; 004e921a
    IMUL EDX                            ; 004e921c
    SHRD EAX,EDX,0x10                   ; 004e921e
    MOV EDX,dword ptr [ESP + 0x28]      ; 004e9222
    IMUL EDX                            ; 004e9226
    SHRD EAX,EDX,0x10                   ; 004e9228
    MOV EDX,dword ptr [ESP]             ; 004e922c
    ADD EDX,EAX                         ; 004e922f
    MOV EAX,dword ptr [ESP + 0x24]      ; 004e9231
    MOV dword ptr [ESP + 0x2c],EDX      ; 004e9235
    MOV EDX,EBP                         ; 004e9239
    IMUL EDX                            ; 004e923b
    SHRD EAX,EDX,0x10                   ; 004e923d
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004e9241
    MOV EBP,EAX                         ; 004e9245
    MOV EAX,EBX                         ; 004e9247
    IMUL EDX                            ; 004e9249
    SHRD EAX,EDX,0x10                   ; 004e924b
    MOV EDX,dword ptr [ESP + 0x28]      ; 004e924f
    IMUL EDX                            ; 004e9253
    SHRD EAX,EDX,0x10                   ; 004e9255
    MOV EDX,dword ptr [ESP + 0x28]      ; 004e9259
    ADD EBP,EAX                         ; 004e925d
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e925f
    IMUL EDX                            ; 004e9263
    SHRD EAX,EDX,0x10                   ; 004e9265
    MOV EDX,dword ptr [ESP + 0x8]       ; 004e9269
    MOV EBX,EAX                         ; 004e926d
    MOV EAX,dword ptr [ESP + 0x18]      ; 004e926f
    IMUL EDX                            ; 004e9273
    SHRD EAX,EDX,0x10                   ; 004e9275
    MOV EDX,dword ptr [ESP + 0x4]       ; 004e9279
    MOV dword ptr [ESP],EAX             ; 004e927d
    MOV EAX,ESI                         ; 004e9280
    IMUL EDX                            ; 004e9282
    SHRD EAX,EDX,0x10                   ; 004e9284
    MOV EDX,dword ptr [ESP]             ; 004e9288
    ADD EDX,EAX                         ; 004e928b
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004e928d
    MOV dword ptr [ESP],EDX             ; 004e9291
    MOV EDX,dword ptr [ESP + 0x10]      ; 004e9294
    IMUL EDX                            ; 004e9298
    SHRD EAX,EDX,0x10                   ; 004e929a
    MOV EDX,dword ptr [ESP]             ; 004e929e
    ADD EDX,EAX                         ; 004e92a1
    MOV EAX,dword ptr [ESP + 0x20]      ; 004e92a3
    MOV dword ptr [0x01c38b6c],EDX      ; 004e92a7 | DAT_01c38b6c
    MOV EDX,dword ptr [ESP + 0x8]       ; 004e92ad
    IMUL EDX                            ; 004e92b1
    SHRD EAX,EDX,0x10                   ; 004e92b3
    MOV EDX,dword ptr [ESP + 0x4]       ; 004e92b7
    MOV dword ptr [ESP],EAX             ; 004e92bb
    MOV EAX,EDI                         ; 004e92be
    IMUL EDX                            ; 004e92c0
    SHRD EAX,EDX,0x10                   ; 004e92c2
    MOV EDX,dword ptr [ESP]             ; 004e92c6
    ADD EDX,EAX                         ; 004e92c9
    MOV dword ptr [ESP],EDX             ; 004e92cb
    MOV EAX,EBP                         ; 004e92ce
    MOV EDX,dword ptr [ESP + 0x10]      ; 004e92d0
    IMUL EDX                            ; 004e92d4
    SHRD EAX,EDX,0x10                   ; 004e92d6
    MOV EDX,dword ptr [ESP]             ; 004e92da
    ADD EDX,EAX                         ; 004e92dd
    MOV dword ptr [0x01c38b70],EDX      ; 004e92df | DAT_01c38b70
    MOV EDX,dword ptr [ESP + 0x8]       ; 004e92e5
    MOV EAX,ECX                         ; 004e92e9
    IMUL EDX                            ; 004e92eb
    SHRD EAX,EDX,0x10                   ; 004e92ed
    MOV EDX,dword ptr [ESP + 0x4]       ; 004e92f1
    MOV dword ptr [ESP],EAX             ; 004e92f5
    MOV EAX,dword ptr [ESP + 0x14]      ; 004e92f8
    IMUL EDX                            ; 004e92fc
    SHRD EAX,EDX,0x10                   ; 004e92fe
    MOV EDX,dword ptr [ESP]             ; 004e9302
    ADD EDX,EAX                         ; 004e9305
    MOV dword ptr [ESP],EDX             ; 004e9307
    MOV EAX,EBX                         ; 004e930a
    MOV EDX,dword ptr [ESP + 0x10]      ; 004e930c
    IMUL EDX                            ; 004e9310
    SHRD EAX,EDX,0x10                   ; 004e9312
    MOV EDX,dword ptr [ESP]             ; 004e9316
    ADD EDX,EAX                         ; 004e9319
    MOV dword ptr [0x01c38b74],EDX      ; 004e931b | DAT_01c38b74
    MOV EDX,dword ptr [0x01d05014]      ; 004e9321 | DAT_01d05014
    MOV EAX,dword ptr [ESP + 0x18]      ; 004e9327
    MOV EDX,dword ptr [EDX*0x4 + 0x1d051f8] ; 004e932b
    IMUL EDX                            ; 004e9332
    SHRD EAX,EDX,0x10                   ; 004e9334
    MOV EDX,dword ptr [0x01d05014]      ; 004e9338 | DAT_01d05014
    MOV dword ptr [ESP],EAX             ; 004e933e
    MOV EAX,ESI                         ; 004e9341
    MOV EDX,dword ptr [EDX*0x4 + 0x1d05220] ; 004e9343
    IMUL EDX                            ; 004e934a
    SHRD EAX,EDX,0x10                   ; 004e934c
    MOV EDX,dword ptr [ESP]             ; 004e9350
    ADD EDX,EAX                         ; 004e9353
    MOV dword ptr [ESP],EDX             ; 004e9355
    MOV EDX,dword ptr [0x01d05014]      ; 004e9358 | DAT_01d05014
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004e935e
    MOV EDX,dword ptr [EDX*0x4 + 0x1d05248] ; 004e9362
    IMUL EDX                            ; 004e9369
    SHRD EAX,EDX,0x10                   ; 004e936b
    MOV EDX,dword ptr [ESP]             ; 004e936f
    ADD EDX,EAX                         ; 004e9372
    MOV dword ptr [0x01c38b90],EDX      ; 004e9374 | DAT_01c38b90
    MOV EDX,dword ptr [0x01d05014]      ; 004e937a | DAT_01d05014
    MOV EAX,dword ptr [ESP + 0x20]      ; 004e9380
    MOV EDX,dword ptr [EDX*0x4 + 0x1d051f8] ; 004e9384
    IMUL EDX                            ; 004e938b
    SHRD EAX,EDX,0x10                   ; 004e938d
    MOV EDX,dword ptr [0x01d05014]      ; 004e9391 | DAT_01d05014
    MOV dword ptr [ESP],EAX             ; 004e9397
    MOV EAX,EDI                         ; 004e939a
    MOV EDX,dword ptr [EDX*0x4 + 0x1d05220] ; 004e939c
    IMUL EDX                            ; 004e93a3
    SHRD EAX,EDX,0x10                   ; 004e93a5
    MOV EDX,dword ptr [ESP]             ; 004e93a9
    ADD EDX,EAX                         ; 004e93ac
    MOV dword ptr [ESP],EDX             ; 004e93ae
    MOV EDX,dword ptr [0x01d05014]      ; 004e93b1 | DAT_01d05014
    MOV EAX,EBP                         ; 004e93b7
    MOV EDX,dword ptr [EDX*0x4 + 0x1d05248] ; 004e93b9
    IMUL EDX                            ; 004e93c0
    SHRD EAX,EDX,0x10                   ; 004e93c2
    MOV EDX,dword ptr [ESP]             ; 004e93c6
    ADD EDX,EAX                         ; 004e93c9
    MOV dword ptr [0x01c38b94],EDX      ; 004e93cb | DAT_01c38b94
    MOV EDX,dword ptr [0x01d05014]      ; 004e93d1 | DAT_01d05014
    MOV EAX,ECX                         ; 004e93d7
    MOV EDX,dword ptr [EDX*0x4 + 0x1d051f8] ; 004e93d9
    IMUL EDX                            ; 004e93e0
    SHRD EAX,EDX,0x10                   ; 004e93e2
    MOV EDX,dword ptr [0x01d05014]      ; 004e93e6 | DAT_01d05014
    MOV dword ptr [ESP],EAX             ; 004e93ec
    MOV EAX,dword ptr [ESP + 0x14]      ; 004e93ef
    MOV EDX,dword ptr [EDX*0x4 + 0x1d05220] ; 004e93f3
    IMUL EDX                            ; 004e93fa
    SHRD EAX,EDX,0x10                   ; 004e93fc
    MOV EDX,dword ptr [ESP]             ; 004e9400
    ADD EDX,EAX                         ; 004e9403
    MOV dword ptr [ESP],EDX             ; 004e9405
    MOV EDX,dword ptr [0x01d05014]      ; 004e9408 | DAT_01d05014
    MOV EAX,EBX                         ; 004e940e
    MOV EDX,dword ptr [EDX*0x4 + 0x1d05248] ; 004e9410
    IMUL EDX                            ; 004e9417
    SHRD EAX,EDX,0x10                   ; 004e9419
    MOV EDX,dword ptr [ESP]             ; 004e941d
    ADD EDX,EAX                         ; 004e9420
    MOV dword ptr [0x01c38b98],EDX      ; 004e9422 | DAT_01c38b98
    MOV EAX,[0x01d05014]                ; 004e9428 | DAT_01d05014
    MOV EDX,dword ptr [ESP + 0x18]      ; 004e942d
    MOV EAX,dword ptr [EAX*0x4 + 0x1d05018] ; 004e9431
    IMUL EDX                            ; 004e9438
    SHRD EAX,EDX,0x10                   ; 004e943a
    MOV dword ptr [ESP],EAX             ; 004e943e
    MOV EAX,[0x01d05014]                ; 004e9441 | DAT_01d05014
    MOV EDX,ESI                         ; 004e9446
    MOV EAX,dword ptr [EAX*0x4 + 0x1d05090] ; 004e9448
    IMUL EDX                            ; 004e944f
    SHRD EAX,EDX,0x10                   ; 004e9451
    MOV EDX,dword ptr [ESP]             ; 004e9455
    ADD EDX,EAX                         ; 004e9458
    MOV EAX,[0x01d05014]                ; 004e945a | DAT_01d05014
    MOV dword ptr [ESP],EDX             ; 004e945f
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004e9462
    MOV EAX,dword ptr [EAX*0x4 + 0x1d05108] ; 004e9466
    IMUL EDX                            ; 004e946d
    SHRD EAX,EDX,0x10                   ; 004e946f
    MOV EDX,dword ptr [ESP]             ; 004e9473
    ADD EDX,EAX                         ; 004e9476
    MOV EAX,[0x01d05014]                ; 004e9478 | DAT_01d05014
    MOV dword ptr [0x01c38b9c],EDX      ; 004e947d | DAT_01c38b9c
    MOV EDX,dword ptr [ESP + 0x18]      ; 004e9483
    MOV EAX,dword ptr [EAX*0x4 + 0x1d05040] ; 004e9487
    IMUL EDX                            ; 004e948e
    SHRD EAX,EDX,0x10                   ; 004e9490
    MOV dword ptr [ESP],EAX             ; 004e9494
    MOV EAX,[0x01d05014]                ; 004e9497 | DAT_01d05014
    MOV EDX,ESI                         ; 004e949c
    MOV EAX,dword ptr [EAX*0x4 + 0x1d050b8] ; 004e949e
    IMUL EDX                            ; 004e94a5
    SHRD EAX,EDX,0x10                   ; 004e94a7
    MOV EDX,dword ptr [ESP]             ; 004e94ab
    ADD EDX,EAX                         ; 004e94ae
    MOV EAX,[0x01d05014]                ; 004e94b0 | DAT_01d05014
    MOV dword ptr [ESP],EDX             ; 004e94b5
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004e94b8
    MOV EAX,dword ptr [EAX*0x4 + 0x1d05130] ; 004e94bc
    IMUL EDX                            ; 004e94c3
    SHRD EAX,EDX,0x10                   ; 004e94c5
    MOV EDX,dword ptr [ESP]             ; 004e94c9
    ADD EDX,EAX                         ; 004e94cc
    MOV EAX,[0x01d05014]                ; 004e94ce | DAT_01d05014
    MOV dword ptr [0x01c38ba0],EDX      ; 004e94d3 | DAT_01c38ba0
    MOV EDX,dword ptr [ESP + 0x18]      ; 004e94d9
    MOV EAX,dword ptr [EAX*0x4 + 0x1d05068] ; 004e94dd
    IMUL EDX                            ; 004e94e4
    SHRD EAX,EDX,0x10                   ; 004e94e6
    MOV dword ptr [ESP],EAX             ; 004e94ea
    MOV EAX,[0x01d05014]                ; 004e94ed | DAT_01d05014
    MOV EDX,ESI                         ; 004e94f2
    MOV EAX,dword ptr [EAX*0x4 + 0x1d050e0] ; 004e94f4
    MOV ESI,dword ptr [ESP]             ; 004e94fb
    IMUL EDX                            ; 004e94fe
    SHRD EAX,EDX,0x10                   ; 004e9500
    ADD ESI,EAX                         ; 004e9504
    MOV EAX,[0x01d05014]                ; 004e9506 | DAT_01d05014
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004e950b
    MOV EAX,dword ptr [EAX*0x4 + 0x1d05158] ; 004e950f
    IMUL EDX                            ; 004e9516
    SHRD EAX,EDX,0x10                   ; 004e9518
    ADD ESI,EAX                         ; 004e951c
    MOV EAX,[0x01d05014]                ; 004e951e | DAT_01d05014
    MOV EDX,dword ptr [ESP + 0x20]      ; 004e9523
    MOV EAX,dword ptr [EAX*0x4 + 0x1d05018] ; 004e9527
    MOV dword ptr [0x01c38ba4],ESI      ; 004e952e | DAT_01c38ba4
    IMUL EDX                            ; 004e9534
    SHRD EAX,EDX,0x10                   ; 004e9536
    MOV ESI,EAX                         ; 004e953a
    MOV EAX,[0x01d05014]                ; 004e953c | DAT_01d05014
    MOV EDX,EDI                         ; 004e9541
    MOV EAX,dword ptr [EAX*0x4 + 0x1d05090] ; 004e9543
    IMUL EDX                            ; 004e954a
    SHRD EAX,EDX,0x10                   ; 004e954c
    ADD ESI,EAX                         ; 004e9550
    MOV EAX,[0x01d05014]                ; 004e9552 | DAT_01d05014
    MOV EDX,EBP                         ; 004e9557
    MOV EAX,dword ptr [EAX*0x4 + 0x1d05108] ; 004e9559
    IMUL EDX                            ; 004e9560
    SHRD EAX,EDX,0x10                   ; 004e9562
    ADD ESI,EAX                         ; 004e9566
    MOV dword ptr [0x01c38ba8],ESI      ; 004e9568 | DAT_01c38ba8
    MOV EAX,[0x01d05014]                ; 004e956e | DAT_01d05014
    MOV EDX,dword ptr [ESP + 0x20]      ; 004e9573
    MOV EAX,dword ptr [EAX*0x4 + 0x1d05040] ; 004e9577
    IMUL EDX                            ; 004e957e
    SHRD EAX,EDX,0x10                   ; 004e9580
    MOV ESI,EAX                         ; 004e9584
    MOV EAX,[0x01d05014]                ; 004e9586 | DAT_01d05014
    MOV EDX,EDI                         ; 004e958b
    MOV EAX,dword ptr [EAX*0x4 + 0x1d050b8] ; 004e958d
    IMUL EDX                            ; 004e9594
    SHRD EAX,EDX,0x10                   ; 004e9596
    ADD ESI,EAX                         ; 004e959a
    MOV EAX,[0x01d05014]                ; 004e959c | DAT_01d05014
    MOV EDX,EBP                         ; 004e95a1
    MOV EAX,dword ptr [EAX*0x4 + 0x1d05130] ; 004e95a3
    IMUL EDX                            ; 004e95aa
    SHRD EAX,EDX,0x10                   ; 004e95ac
    ADD ESI,EAX                         ; 004e95b0
    MOV EAX,[0x01d05014]                ; 004e95b2 | DAT_01d05014
    MOV EDX,dword ptr [ESP + 0x20]      ; 004e95b7
    MOV EAX,dword ptr [EAX*0x4 + 0x1d05068] ; 004e95bb
    MOV dword ptr [0x01c38bac],ESI      ; 004e95c2 | DAT_01c38bac
    IMUL EDX                            ; 004e95c8
    SHRD EAX,EDX,0x10                   ; 004e95ca
    MOV ESI,EAX                         ; 004e95ce
    MOV EAX,[0x01d05014]                ; 004e95d0 | DAT_01d05014
    MOV EDX,EDI                         ; 004e95d5
    MOV EAX,dword ptr [EAX*0x4 + 0x1d050e0] ; 004e95d7
    IMUL EDX                            ; 004e95de
    SHRD EAX,EDX,0x10                   ; 004e95e0
    ADD ESI,EAX                         ; 004e95e4
    MOV EAX,[0x01d05014]                ; 004e95e6 | DAT_01d05014
    MOV EDX,EBP                         ; 004e95eb
    MOV EAX,dword ptr [EAX*0x4 + 0x1d05158] ; 004e95ed
    IMUL EDX                            ; 004e95f4
    SHRD EAX,EDX,0x10                   ; 004e95f6
    ADD ESI,EAX                         ; 004e95fa
    MOV EAX,[0x01d05014]                ; 004e95fc | DAT_01d05014
    MOV EDX,ECX                         ; 004e9601
    MOV EAX,dword ptr [EAX*0x4 + 0x1d05018] ; 004e9603
    MOV dword ptr [0x01c38bb0],ESI      ; 004e960a | DAT_01c38bb0
    IMUL EDX                            ; 004e9610
    SHRD EAX,EDX,0x10                   ; 004e9612
    MOV ESI,EAX                         ; 004e9616
    MOV EAX,[0x01d05014]                ; 004e9618 | DAT_01d05014
    MOV EDX,dword ptr [ESP + 0x14]      ; 004e961d
    MOV EAX,dword ptr [EAX*0x4 + 0x1d05090] ; 004e9621
    IMUL EDX                            ; 004e9628
    SHRD EAX,EDX,0x10                   ; 004e962a
    ADD ESI,EAX                         ; 004e962e
    MOV EAX,[0x01d05014]                ; 004e9630 | DAT_01d05014
    MOV EDX,EBX                         ; 004e9635
    MOV EAX,dword ptr [EAX*0x4 + 0x1d05108] ; 004e9637
    IMUL EDX                            ; 004e963e
    SHRD EAX,EDX,0x10                   ; 004e9640
    ADD ESI,EAX                         ; 004e9644
    MOV EAX,[0x01d05014]                ; 004e9646 | DAT_01d05014
    MOV EDX,ECX                         ; 004e964b
    MOV EAX,dword ptr [EAX*0x4 + 0x1d05040] ; 004e964d
    MOV dword ptr [0x01c38bb4],ESI      ; 004e9654 | DAT_01c38bb4
    IMUL EDX                            ; 004e965a
    SHRD EAX,EDX,0x10                   ; 004e965c
    MOV ESI,EAX                         ; 004e9660
    MOV EAX,[0x01d05014]                ; 004e9662 | DAT_01d05014
    MOV EDX,dword ptr [ESP + 0x14]      ; 004e9667
    MOV EAX,dword ptr [EAX*0x4 + 0x1d050b8] ; 004e966b
    IMUL EDX                            ; 004e9672
    SHRD EAX,EDX,0x10                   ; 004e9674
    ADD ESI,EAX                         ; 004e9678
    MOV EAX,[0x01d05014]                ; 004e967a | DAT_01d05014
    MOV EDX,EBX                         ; 004e967f
    MOV EAX,dword ptr [EAX*0x4 + 0x1d05130] ; 004e9681
    IMUL EDX                            ; 004e9688
    SHRD EAX,EDX,0x10                   ; 004e968a
    ADD ESI,EAX                         ; 004e968e
    MOV dword ptr [0x01c38bb8],ESI      ; 004e9690 | DAT_01c38bb8
    MOV EAX,[0x01d05014]                ; 004e9696 | DAT_01d05014
    MOV EDX,ECX                         ; 004e969b
    MOV EAX,dword ptr [EAX*0x4 + 0x1d05068] ; 004e969d
    IMUL EDX                            ; 004e96a4
    SHRD EAX,EDX,0x10                   ; 004e96a6
    MOV ECX,EAX                         ; 004e96aa
    MOV EAX,[0x01d05014]                ; 004e96ac | DAT_01d05014
    MOV EDX,dword ptr [ESP + 0x14]      ; 004e96b1
    MOV EAX,dword ptr [EAX*0x4 + 0x1d050e0] ; 004e96b5
    IMUL EDX                            ; 004e96bc
    SHRD EAX,EDX,0x10                   ; 004e96be
    ADD ECX,EAX                         ; 004e96c2
    MOV EAX,[0x01d05014]                ; 004e96c4 | DAT_01d05014
    MOV EDX,EBX                         ; 004e96c9
    MOV EAX,dword ptr [EAX*0x4 + 0x1d05158] ; 004e96cb
    IMUL EDX                            ; 004e96d2
    SHRD EAX,EDX,0x10                   ; 004e96d4
    ADD ECX,EAX                         ; 004e96d8
    MOV dword ptr [0x01c38bbc],ECX      ; 004e96da | DAT_01c38bbc
    JMP 0x004e910d                      ; 004e96e0
        ;   XREF to: 004e910d (UNCONDITIONAL_JUMP)  ; LAB_004e910d
    MOV EBX,0x5dc79e                    ; 004e96e5 | = "..\\engine\\matrix.c"
        ;   Label: LAB_004e96e5
    MOV ESI,0x31f                       ; 004e96ea
    PUSH 0x5dc7b1                       ; 004e96ef | = "Matrix unbalance"
    MOV dword ptr [0x01d046a0],EBX      ; 004e96f4 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 004e96fa | DAT_01d046a4
    CALL FUN_004e4500                   ; 004e9700
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004e9705
    ADD ESP,0x30                        ; 004e9708
    POP EBP                             ; 004e970b
    POP EDI                             ; 004e970c
    POP ESI                             ; 004e970d
    POP EBX                             ; 004e970e
    RET                                 ; 004e970f

