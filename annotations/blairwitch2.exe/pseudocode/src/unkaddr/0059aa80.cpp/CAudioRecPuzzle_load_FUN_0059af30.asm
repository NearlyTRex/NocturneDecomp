; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl unkaddr_0059aa80_cpp_CAudioRecPuzzle_load_FUN_0059af30(CAudioRecPuzzle *this_ptr,int param_2)
;
; Parameters:
; CAudioRecPuzzle * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0
;   engine_alphabit.cpp_FUN_0040d540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059af30
        ;   Label: unkaddr_0059aa80.cpp_CAudioRecPuzzle_load_FUN_0059af30
    PUSH ESI                            ; 0059af31
    PUSH EBP                            ; 0059af32
    MOV EBX,dword ptr [ESP + 0x10]      ; 0059af33
    MOV EDX,dword ptr [ESP + 0x14]      ; 0059af37
    LEA ESI,[EBX + 0x4]                 ; 0059af3b
    TEST EDX,EDX                        ; 0059af3e
    JZ 0x0059b36e                       ; 0059af40
        ;   XREF to: 0059b36e (CONDITIONAL_JUMP)  ; LAB_0059b36e
    LEA EAX,[EBX + 0x574]               ; 0059af46
    PUSH EAX                            ; 0059af4c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 0059af4d
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059af52
    LEA EAX,[EBX + 0x6f0]               ; 0059af55
    PUSH EAX                            ; 0059af5b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 0059af5c
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059af61
    PUSH 0x1e0                          ; 0059af64
    PUSH 0x280                          ; 0059af69
    MOV dword ptr [EBX + 0x44],0x1      ; 0059af6e
    PUSH 0x5ef42e                       ; 0059af75
    MOV dword ptr [EBX + 0x30],0x1      ; 0059af7a
    PUSH ESI                            ; 0059af81
    MOV dword ptr [EBX + 0x1c],0x0      ; 0059af82
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 0059af89
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 0059af8e
    PUSH 0x12                           ; 0059af91
    PUSH 0xd                            ; 0059af93
    PUSH 0x5ef438                       ; 0059af95
    PUSH 0x26677ec                      ; 0059af9a
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 0059af9f
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 0059afa4
    PUSH 0xc                            ; 0059afa7
    PUSH 0x2a                           ; 0059afa9
    PUSH 0x5ef446                       ; 0059afab
    PUSH 0x2667800                      ; 0059afb0
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 0059afb5
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 0059afba
    PUSH 0xc                            ; 0059afbd
    PUSH 0x15                           ; 0059afbf
    PUSH 0x5ef453                       ; 0059afc1
    PUSH 0x2667814                      ; 0059afc6
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 0059afcb
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 0059afd0
    PUSH 0xc                            ; 0059afd3
    PUSH 0x15                           ; 0059afd5
    PUSH 0x5ef463                       ; 0059afd7
    PUSH 0x2667828                      ; 0059afdc
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 0059afe1
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 0059afe6
    PUSH 0x0                            ; 0059afe9
    PUSH 0x195                          ; 0059afeb
    PUSH 0x1f9                          ; 0059aff0
    PUSH 0x1                            ; 0059aff5
    PUSH 0x3a                           ; 0059aff7
    PUSH 0x3d                           ; 0059aff9
    PUSH 0x5ef474                       ; 0059affb
    PUSH 0x0                            ; 0059b000
    MOV EAX,dword ptr [EBX]             ; 0059b002
    PUSH EBX                            ; 0059b004
    CALL dword ptr [EAX + 0x28]         ; 0059b005
    ADD ESP,0x24                        ; 0059b008
    PUSH 0x0                            ; 0059b00b
    PUSH 0x195                          ; 0059b00d
    PUSH 0x1f9                          ; 0059b012
    PUSH 0x1                            ; 0059b017
    PUSH 0x3a                           ; 0059b019
    PUSH 0x3d                           ; 0059b01b
    PUSH 0x5ef47c                       ; 0059b01d
    PUSH 0x1                            ; 0059b022
    MOV EAX,dword ptr [EBX]             ; 0059b024
    PUSH EBX                            ; 0059b026
    CALL dword ptr [EAX + 0x28]         ; 0059b027
    ADD ESP,0x24                        ; 0059b02a
    PUSH 0x0                            ; 0059b02d
    PUSH 0x8a                           ; 0059b02f
    PUSH 0x128                          ; 0059b034
    PUSH 0x2                            ; 0059b039
    PUSH 0x4c                           ; 0059b03b
    PUSH 0x2d                           ; 0059b03d
    PUSH 0x5ef485                       ; 0059b03f
    PUSH 0x2                            ; 0059b044
    MOV EAX,dword ptr [EBX]             ; 0059b046
    PUSH EBX                            ; 0059b048
    CALL dword ptr [EAX + 0x28]         ; 0059b049
    ADD ESP,0x24                        ; 0059b04c
    PUSH 0x0                            ; 0059b04f
    PUSH 0x8a                           ; 0059b051
    PUSH 0x128                          ; 0059b056
    PUSH 0x2                            ; 0059b05b
    PUSH 0x4c                           ; 0059b05d
    PUSH 0x2d                           ; 0059b05f
    PUSH 0x5ef491                       ; 0059b061
    PUSH 0x3                            ; 0059b066
    MOV EAX,dword ptr [EBX]             ; 0059b068
    PUSH EBX                            ; 0059b06a
    CALL dword ptr [EAX + 0x28]         ; 0059b06b
    ADD ESP,0x24                        ; 0059b06e
    PUSH 0x0                            ; 0059b071
    PUSH 0x8a                           ; 0059b073
    PUSH 0x128                          ; 0059b078
    PUSH 0x2                            ; 0059b07d
    PUSH 0x4c                           ; 0059b07f
    PUSH 0x2d                           ; 0059b081
    PUSH 0x5ef49a                       ; 0059b083
    PUSH 0x4                            ; 0059b088
    MOV EAX,dword ptr [EBX]             ; 0059b08a
    PUSH EBX                            ; 0059b08c
    CALL dword ptr [EAX + 0x28]         ; 0059b08d
    ADD ESP,0x24                        ; 0059b090
    PUSH 0x0                            ; 0059b093
    PUSH 0x12e                          ; 0059b095
    PUSH 0x171                          ; 0059b09a
    PUSH 0x3                            ; 0059b09f
    PUSH 0x20                           ; 0059b0a1
    PUSH 0x16                           ; 0059b0a3
    PUSH 0x5ef4a6                       ; 0059b0a5
    PUSH 0x5                            ; 0059b0aa
    MOV EAX,dword ptr [EBX]             ; 0059b0ac
    PUSH EBX                            ; 0059b0ae
    CALL dword ptr [EAX + 0x28]         ; 0059b0af
    ADD ESP,0x24                        ; 0059b0b2
    PUSH 0x0                            ; 0059b0b5
    PUSH 0x12e                          ; 0059b0b7
    PUSH 0x195                          ; 0059b0bc
    PUSH 0x3                            ; 0059b0c1
    PUSH 0x20                           ; 0059b0c3
    PUSH 0x16                           ; 0059b0c5
    PUSH 0x5ef4ad                       ; 0059b0c7
    PUSH 0x6                            ; 0059b0cc
    MOV EAX,dword ptr [EBX]             ; 0059b0ce
    PUSH EBX                            ; 0059b0d0
    CALL dword ptr [EAX + 0x28]         ; 0059b0d1
    ADD ESP,0x24                        ; 0059b0d4
    PUSH 0x0                            ; 0059b0d7
    PUSH 0x12e                          ; 0059b0d9
    PUSH 0x1bd                          ; 0059b0de
    PUSH 0x3                            ; 0059b0e3
    PUSH 0x20                           ; 0059b0e5
    PUSH 0x16                           ; 0059b0e7
    PUSH 0x5ef4b4                       ; 0059b0e9
    PUSH 0x7                            ; 0059b0ee
    MOV EAX,dword ptr [EBX]             ; 0059b0f0
    PUSH EBX                            ; 0059b0f2
    CALL dword ptr [EAX + 0x28]         ; 0059b0f3
    ADD ESP,0x24                        ; 0059b0f6
    PUSH 0x0                            ; 0059b0f9
    PUSH 0x12e                          ; 0059b0fb
    PUSH 0x1e3                          ; 0059b100
    PUSH 0x3                            ; 0059b105
    PUSH 0x20                           ; 0059b107
    PUSH 0x16                           ; 0059b109
    PUSH 0x5ef4bb                       ; 0059b10b
    PUSH 0x8                            ; 0059b110
    MOV EAX,dword ptr [EBX]             ; 0059b112
    PUSH EBX                            ; 0059b114
    CALL dword ptr [EAX + 0x28]         ; 0059b115
    ADD ESP,0x24                        ; 0059b118
    PUSH 0x0                            ; 0059b11b
    PUSH 0x12e                          ; 0059b11d
    PUSH 0x20a                          ; 0059b122
    PUSH 0x3                            ; 0059b127
    PUSH 0x20                           ; 0059b129
    PUSH 0x16                           ; 0059b12b
    PUSH 0x5ef4c2                       ; 0059b12d
    PUSH 0x9                            ; 0059b132
    MOV EAX,dword ptr [EBX]             ; 0059b134
    PUSH EBX                            ; 0059b136
    CALL dword ptr [EAX + 0x28]         ; 0059b137
    ADD ESP,0x24                        ; 0059b13a
    PUSH 0x0                            ; 0059b13d
    PUSH 0x62                           ; 0059b13f
    PUSH 0x135                          ; 0059b141
    PUSH 0x0                            ; 0059b146
    PUSH 0x15                           ; 0059b148
    PUSH 0x14                           ; 0059b14a
    PUSH 0x5ef4c9                       ; 0059b14c
    PUSH 0xa                            ; 0059b151
    MOV EAX,dword ptr [EBX]             ; 0059b153
    PUSH EBX                            ; 0059b155
    CALL dword ptr [EAX + 0x28]         ; 0059b156
    ADD ESP,0x24                        ; 0059b159
    PUSH 0x0                            ; 0059b15c
    PUSH 0x62                           ; 0059b15e
    PUSH 0x135                          ; 0059b160
    PUSH 0x0                            ; 0059b165
    PUSH 0x15                           ; 0059b167
    PUSH 0x14                           ; 0059b169
    PUSH 0x5ef4d1                       ; 0059b16b
    PUSH 0xb                            ; 0059b170
    MOV EAX,dword ptr [EBX]             ; 0059b172
    PUSH EBX                            ; 0059b174
    CALL dword ptr [EAX + 0x28]         ; 0059b175
    ADD ESP,0x24                        ; 0059b178
    PUSH 0x0                            ; 0059b17b
    PUSH 0x1a3                          ; 0059b17d
    PUSH 0x4b                           ; 0059b182
    PUSH 0x2                            ; 0059b184
    PUSH 0x27                           ; 0059b186
    PUSH 0x27                           ; 0059b188
    PUSH 0x5ef4da                       ; 0059b18a
    PUSH 0xc                            ; 0059b18f
    MOV EAX,dword ptr [EBX]             ; 0059b191
    PUSH EBX                            ; 0059b193
    CALL dword ptr [EAX + 0x28]         ; 0059b194
    ADD ESP,0x24                        ; 0059b197
    PUSH 0x0                            ; 0059b19a
    PUSH 0x1a3                          ; 0059b19c
    PUSH 0x4b                           ; 0059b1a1
    PUSH 0x2                            ; 0059b1a3
    PUSH 0x27                           ; 0059b1a5
    PUSH 0x27                           ; 0059b1a7
    PUSH 0x5ef4e5                       ; 0059b1a9
    PUSH 0xd                            ; 0059b1ae
    MOV EAX,dword ptr [EBX]             ; 0059b1b0
    PUSH EBX                            ; 0059b1b2
    CALL dword ptr [EAX + 0x28]         ; 0059b1b3
    ADD ESP,0x24                        ; 0059b1b6
    PUSH 0x0                            ; 0059b1b9
    PUSH 0x1a3                          ; 0059b1bb
    PUSH 0x4b                           ; 0059b1c0
    PUSH 0x2                            ; 0059b1c2
    PUSH 0x27                           ; 0059b1c4
    PUSH 0x27                           ; 0059b1c6
    PUSH 0x5ef4f0                       ; 0059b1c8
    PUSH 0xe                            ; 0059b1cd
    MOV EAX,dword ptr [EBX]             ; 0059b1cf
    PUSH EBX                            ; 0059b1d1
    CALL dword ptr [EAX + 0x28]         ; 0059b1d2
    ADD ESP,0x24                        ; 0059b1d5
    PUSH 0x0                            ; 0059b1d8
    PUSH 0x1a3                          ; 0059b1da
    PUSH 0x4b                           ; 0059b1df
    PUSH 0x2                            ; 0059b1e1
    PUSH 0x27                           ; 0059b1e3
    PUSH 0x27                           ; 0059b1e5
    PUSH 0x5ef4fb                       ; 0059b1e7
    PUSH 0xf                            ; 0059b1ec
    MOV EAX,dword ptr [EBX]             ; 0059b1ee
    PUSH EBX                            ; 0059b1f0
    CALL dword ptr [EAX + 0x28]         ; 0059b1f1
    ADD ESP,0x24                        ; 0059b1f4
    PUSH 0x0                            ; 0059b1f7
    PUSH 0x1a3                          ; 0059b1f9
    PUSH 0x4b                           ; 0059b1fe
    PUSH 0x2                            ; 0059b200
    PUSH 0x27                           ; 0059b202
    PUSH 0x27                           ; 0059b204
    PUSH 0x5ef506                       ; 0059b206
    PUSH 0x10                           ; 0059b20b
    MOV EAX,dword ptr [EBX]             ; 0059b20d
    PUSH EBX                            ; 0059b20f
    CALL dword ptr [EAX + 0x28]         ; 0059b210
    ADD ESP,0x24                        ; 0059b213
    PUSH 0x0                            ; 0059b216
    PUSH 0x1a3                          ; 0059b218
    PUSH 0xaf                           ; 0059b21d
    PUSH 0x2                            ; 0059b222
    PUSH 0x27                           ; 0059b224
    PUSH 0x27                           ; 0059b226
    PUSH 0x5ef511                       ; 0059b228
    PUSH 0x11                           ; 0059b22d
    MOV EAX,dword ptr [EBX]             ; 0059b22f
    PUSH EBX                            ; 0059b231
    CALL dword ptr [EAX + 0x28]         ; 0059b232
    ADD ESP,0x24                        ; 0059b235
    PUSH 0x0                            ; 0059b238
    PUSH 0x1a3                          ; 0059b23a
    PUSH 0xaf                           ; 0059b23f
    PUSH 0x2                            ; 0059b244
    PUSH 0x27                           ; 0059b246
    PUSH 0x27                           ; 0059b248
    PUSH 0x5ef51c                       ; 0059b24a
    PUSH 0x12                           ; 0059b24f
    MOV EAX,dword ptr [EBX]             ; 0059b251
    PUSH EBX                            ; 0059b253
    CALL dword ptr [EAX + 0x28]         ; 0059b254
    ADD ESP,0x24                        ; 0059b257
    PUSH 0x0                            ; 0059b25a
    PUSH 0x1a3                          ; 0059b25c
    PUSH 0xaf                           ; 0059b261
    PUSH 0x2                            ; 0059b266
    PUSH 0x27                           ; 0059b268
    PUSH 0x27                           ; 0059b26a
    PUSH 0x5ef527                       ; 0059b26c
    PUSH 0x13                           ; 0059b271
    MOV EAX,dword ptr [EBX]             ; 0059b273
    PUSH EBX                            ; 0059b275
    CALL dword ptr [EAX + 0x28]         ; 0059b276
    ADD ESP,0x24                        ; 0059b279
    PUSH 0x0                            ; 0059b27c
    PUSH 0x1a3                          ; 0059b27e
    PUSH 0xaf                           ; 0059b283
    PUSH 0x2                            ; 0059b288
    PUSH 0x27                           ; 0059b28a
    PUSH 0x27                           ; 0059b28c
    PUSH 0x5ef532                       ; 0059b28e
    PUSH 0x14                           ; 0059b293
    MOV EAX,dword ptr [EBX]             ; 0059b295
    PUSH EBX                            ; 0059b297
    CALL dword ptr [EAX + 0x28]         ; 0059b298
    ADD ESP,0x24                        ; 0059b29b
    PUSH 0x0                            ; 0059b29e
    PUSH 0x1a3                          ; 0059b2a0
    PUSH 0xaf                           ; 0059b2a5
    PUSH 0x2                            ; 0059b2aa
    PUSH 0x27                           ; 0059b2ac
    PUSH 0x27                           ; 0059b2ae
    PUSH 0x5ef53d                       ; 0059b2b0
    PUSH 0x15                           ; 0059b2b5
    MOV EAX,dword ptr [EBX]             ; 0059b2b7
    PUSH EBX                            ; 0059b2b9
    CALL dword ptr [EAX + 0x28]         ; 0059b2ba
    ADD ESP,0x24                        ; 0059b2bd
    PUSH 0x0                            ; 0059b2c0
    PUSH 0x1a3                          ; 0059b2c2
    PUSH 0x111                          ; 0059b2c7
    PUSH 0x2                            ; 0059b2cc
    PUSH 0x27                           ; 0059b2ce
    PUSH 0x27                           ; 0059b2d0
    PUSH 0x5ef548                       ; 0059b2d2
    PUSH 0x16                           ; 0059b2d7
    MOV EAX,dword ptr [EBX]             ; 0059b2d9
    PUSH EBX                            ; 0059b2db
    CALL dword ptr [EAX + 0x28]         ; 0059b2dc
    ADD ESP,0x24                        ; 0059b2df
    PUSH 0x0                            ; 0059b2e2
    PUSH 0x1a3                          ; 0059b2e4
    PUSH 0x111                          ; 0059b2e9
    PUSH 0x2                            ; 0059b2ee
    PUSH 0x27                           ; 0059b2f0
    PUSH 0x27                           ; 0059b2f2
    PUSH 0x5ef553                       ; 0059b2f4
    PUSH 0x17                           ; 0059b2f9
    MOV EAX,dword ptr [EBX]             ; 0059b2fb
    PUSH EBX                            ; 0059b2fd
    CALL dword ptr [EAX + 0x28]         ; 0059b2fe
    ADD ESP,0x24                        ; 0059b301
    PUSH 0x0                            ; 0059b304
    PUSH 0x1a3                          ; 0059b306
    PUSH 0x111                          ; 0059b30b
    PUSH 0x2                            ; 0059b310
    PUSH 0x27                           ; 0059b312
    PUSH 0x27                           ; 0059b314
    PUSH 0x5ef55e                       ; 0059b316
    PUSH 0x18                           ; 0059b31b
    MOV EAX,dword ptr [EBX]             ; 0059b31d
    PUSH EBX                            ; 0059b31f
    CALL dword ptr [EAX + 0x28]         ; 0059b320
    ADD ESP,0x24                        ; 0059b323
    PUSH 0x0                            ; 0059b326
    PUSH 0x1a3                          ; 0059b328
    PUSH 0x111                          ; 0059b32d
    PUSH 0x2                            ; 0059b332
    PUSH 0x27                           ; 0059b334
    PUSH 0x27                           ; 0059b336
    PUSH 0x5ef569                       ; 0059b338
    PUSH 0x19                           ; 0059b33d
    MOV EAX,dword ptr [EBX]             ; 0059b33f
    PUSH EBX                            ; 0059b341
    CALL dword ptr [EAX + 0x28]         ; 0059b342
    ADD ESP,0x24                        ; 0059b345
    PUSH 0x0                            ; 0059b348
    PUSH 0x1a3                          ; 0059b34a
    PUSH 0x111                          ; 0059b34f
    PUSH 0x2                            ; 0059b354
    PUSH 0x27                           ; 0059b356
    PUSH 0x27                           ; 0059b358
    PUSH 0x5ef574                       ; 0059b35a
    PUSH 0x1a                           ; 0059b35f
    MOV EAX,dword ptr [EBX]             ; 0059b361
    PUSH EBX                            ; 0059b363
    CALL dword ptr [EAX + 0x28]         ; 0059b364
    ADD ESP,0x24                        ; 0059b367
    POP EBP                             ; 0059b36a
    POP ESI                             ; 0059b36b
    POP EBX                             ; 0059b36c
    RET                                 ; 0059b36d
    PUSH ESI                            ; 0059b36e
        ;   Label: LAB_0059b36e
    CALL engine_alphabit.cpp_FUN_0040d540 ; 0059b36f
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 0059b374
    PUSH 0x26677ec                      ; 0059b377
    CALL engine_alphabit.cpp_FUN_0040d540 ; 0059b37c
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 0059b381
    PUSH 0x2667800                      ; 0059b384
    XOR ESI,ESI                         ; 0059b389
    CALL engine_alphabit.cpp_FUN_0040d540 ; 0059b38b
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    MOV ECX,dword ptr [EBX + 0x1c]      ; 0059b390
    ADD ESP,0x4                         ; 0059b393
    TEST ECX,ECX                        ; 0059b396
    JLE 0x0059b3b3                      ; 0059b398
        ;   XREF to: 0059b3b3 (CONDITIONAL_JUMP)  ; LAB_0059b3b3
    PUSH EDI                            ; 0059b39a
    LEA EDI,[EBX + 0x4c]                ; 0059b39b
    PUSH EDI                            ; 0059b39e
        ;   Label: LAB_0059b39e
    CALL engine_alphabit.cpp_FUN_0040d540 ; 0059b39f
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    INC ESI                             ; 0059b3a4
    ADD ESP,0x4                         ; 0059b3a5
    MOV EBP,dword ptr [EBX + 0x1c]      ; 0059b3a8
    ADD EDI,0x2c                        ; 0059b3ab
    CMP ESI,EBP                         ; 0059b3ae
    JL 0x0059b39e                       ; 0059b3b0
        ;   XREF to: 0059b39e (CONDITIONAL_JUMP)  ; LAB_0059b39e
    POP EDI                             ; 0059b3b2
    MOV dword ptr [EBX + 0x1c],0x0      ; 0059b3b3
        ;   Label: LAB_0059b3b3
    POP EBP                             ; 0059b3ba
    POP ESI                             ; 0059b3bb
    POP EBX                             ; 0059b3bc
    RET                                 ; 0059b3bd

