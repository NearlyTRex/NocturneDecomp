; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl unkafter_alphabit_cpp_CAudioRecPuzzle_load_FUN_00415fc0(CAudioRecPuzzle *this_ptr,int param_2)
;
; Parameters:
; CAudioRecPuzzle * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
;
; Referenced Globals:
;   undefined4 DAT_0061b4d0
;   undefined4 DAT_007c397c
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220
;   engine_alphabit.cpp_FUN_0040d1c0
;   sound_sndmain.cpp_killAllSfx_FUN_00573b00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415fc0
        ;   Label: unkafter_alphabit.cpp_CAudioRecPuzzle_load_FUN_00415fc0
    PUSH ESI                            ; 00415fc1
    PUSH EDI                            ; 00415fc2
    PUSH EBP                            ; 00415fc3
    MOV EBX,dword ptr [ESP + 0x14]      ; 00415fc4
    MOV EDX,dword ptr [ESP + 0x18]      ; 00415fc8
    LEA ESI,[EBX + 0x4]                 ; 00415fcc
    TEST EDX,EDX                        ; 00415fcf
    JZ 0x004164c1                       ; 00415fd1
        ;   XREF to: 004164c1 (CONDITIONAL_JUMP)  ; LAB_004164c1
    LEA EAX,[EBX + 0x8f8]               ; 00415fd7
    PUSH EAX                            ; 00415fdd
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 00415fde
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00415fe3
    LEA EAX,[EBX + 0xa74]               ; 00415fe6
    PUSH EAX                            ; 00415fec
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 00415fed
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00415ff2
    PUSH 0x1e0                          ; 00415ff5
    PUSH 0x280                          ; 00415ffa
    MOV dword ptr [EBX + 0x4c],0x1      ; 00415fff
    PUSH 0x5d3d9d                       ; 00416006
    MOV dword ptr [EBX + 0x34],0x1      ; 0041600b
    PUSH ESI                            ; 00416012
    MOV dword ptr [EBX + 0x1c],0x0      ; 00416013
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 0041601a
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 0041601f
    PUSH 0x12                           ; 00416022
    PUSH 0xd                            ; 00416024
    PUSH 0x5d3da7                       ; 00416026
    PUSH 0x7c3984                       ; 0041602b
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 00416030
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 00416035
    PUSH 0xc                            ; 00416038
    PUSH 0x2a                           ; 0041603a
    PUSH 0x5d3db5                       ; 0041603c
    PUSH 0x7c3998                       ; 00416041
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 00416046
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 0041604b
    PUSH 0xc                            ; 0041604e
    PUSH 0x15                           ; 00416050
    PUSH 0x5d3dc2                       ; 00416052
    PUSH 0x7c39ac                       ; 00416057
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 0041605c
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 00416061
    PUSH 0xc                            ; 00416064
    PUSH 0x15                           ; 00416066
    PUSH 0x5d3dd2                       ; 00416068
    PUSH 0x7c39c0                       ; 0041606d
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 00416072
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 00416077
    PUSH 0x0                            ; 0041607a
    PUSH 0x195                          ; 0041607c
    PUSH 0x1f9                          ; 00416081
    PUSH 0x1                            ; 00416086
    PUSH 0x3a                           ; 00416088
    PUSH 0x3d                           ; 0041608a
    PUSH 0x5d3de3                       ; 0041608c
    PUSH 0x0                            ; 00416091
    MOV EAX,dword ptr [EBX]             ; 00416093
    PUSH EBX                            ; 00416095
    CALL dword ptr [EAX + 0x28]         ; 00416096
    ADD ESP,0x24                        ; 00416099
    PUSH 0x0                            ; 0041609c
    PUSH 0x195                          ; 0041609e
    PUSH 0x1f9                          ; 004160a3
    PUSH 0x1                            ; 004160a8
    PUSH 0x3a                           ; 004160aa
    PUSH 0x3d                           ; 004160ac
    PUSH 0x5d3deb                       ; 004160ae
    PUSH 0x1                            ; 004160b3
    MOV EAX,dword ptr [EBX]             ; 004160b5
    PUSH EBX                            ; 004160b7
    CALL dword ptr [EAX + 0x28]         ; 004160b8
    ADD ESP,0x24                        ; 004160bb
    PUSH 0x0                            ; 004160be
    PUSH 0x8a                           ; 004160c0
    PUSH 0x128                          ; 004160c5
    PUSH 0x2                            ; 004160ca
    PUSH 0x4c                           ; 004160cc
    PUSH 0x2d                           ; 004160ce
    PUSH 0x5d3df4                       ; 004160d0
    PUSH 0x2                            ; 004160d5
    MOV EAX,dword ptr [EBX]             ; 004160d7
    PUSH EBX                            ; 004160d9
    CALL dword ptr [EAX + 0x28]         ; 004160da
    ADD ESP,0x24                        ; 004160dd
    PUSH 0x0                            ; 004160e0
    PUSH 0x8a                           ; 004160e2
    PUSH 0x128                          ; 004160e7
    PUSH 0x2                            ; 004160ec
    PUSH 0x4c                           ; 004160ee
    PUSH 0x2d                           ; 004160f0
    PUSH 0x5d3e00                       ; 004160f2
    PUSH 0x3                            ; 004160f7
    MOV EAX,dword ptr [EBX]             ; 004160f9
    PUSH EBX                            ; 004160fb
    CALL dword ptr [EAX + 0x28]         ; 004160fc
    ADD ESP,0x24                        ; 004160ff
    PUSH 0x0                            ; 00416102
    PUSH 0x8a                           ; 00416104
    PUSH 0x128                          ; 00416109
    PUSH 0x2                            ; 0041610e
    PUSH 0x4c                           ; 00416110
    PUSH 0x2d                           ; 00416112
    PUSH 0x5d3e09                       ; 00416114
    PUSH 0x4                            ; 00416119
    MOV EAX,dword ptr [EBX]             ; 0041611b
    PUSH EBX                            ; 0041611d
    CALL dword ptr [EAX + 0x28]         ; 0041611e
    ADD ESP,0x24                        ; 00416121
    PUSH 0x0                            ; 00416124
    PUSH 0x12e                          ; 00416126
    PUSH 0x171                          ; 0041612b
    PUSH 0x3                            ; 00416130
    PUSH 0x20                           ; 00416132
    PUSH 0x16                           ; 00416134
    PUSH 0x5d3e15                       ; 00416136
    PUSH 0x5                            ; 0041613b
    MOV EAX,dword ptr [EBX]             ; 0041613d
    PUSH EBX                            ; 0041613f
    CALL dword ptr [EAX + 0x28]         ; 00416140
    ADD ESP,0x24                        ; 00416143
    PUSH 0x0                            ; 00416146
    PUSH 0x12e                          ; 00416148
    PUSH 0x195                          ; 0041614d
    PUSH 0x3                            ; 00416152
    PUSH 0x20                           ; 00416154
    PUSH 0x16                           ; 00416156
    PUSH 0x5d3e1c                       ; 00416158
    PUSH 0x6                            ; 0041615d
    MOV EAX,dword ptr [EBX]             ; 0041615f
    PUSH EBX                            ; 00416161
    CALL dword ptr [EAX + 0x28]         ; 00416162
    ADD ESP,0x24                        ; 00416165
    PUSH 0x0                            ; 00416168
    PUSH 0x12e                          ; 0041616a
    PUSH 0x1bd                          ; 0041616f
    PUSH 0x3                            ; 00416174
    PUSH 0x20                           ; 00416176
    PUSH 0x16                           ; 00416178
    PUSH 0x5d3e23                       ; 0041617a
    PUSH 0x7                            ; 0041617f
    MOV EAX,dword ptr [EBX]             ; 00416181
    PUSH EBX                            ; 00416183
    CALL dword ptr [EAX + 0x28]         ; 00416184
    ADD ESP,0x24                        ; 00416187
    PUSH 0x0                            ; 0041618a
    PUSH 0x12e                          ; 0041618c
    PUSH 0x1e3                          ; 00416191
    PUSH 0x3                            ; 00416196
    PUSH 0x20                           ; 00416198
    PUSH 0x16                           ; 0041619a
    PUSH 0x5d3e2a                       ; 0041619c
    PUSH 0x8                            ; 004161a1
    MOV EAX,dword ptr [EBX]             ; 004161a3
    PUSH EBX                            ; 004161a5
    CALL dword ptr [EAX + 0x28]         ; 004161a6
    ADD ESP,0x24                        ; 004161a9
    PUSH 0x0                            ; 004161ac
    PUSH 0x12e                          ; 004161ae
    PUSH 0x20a                          ; 004161b3
    PUSH 0x3                            ; 004161b8
    PUSH 0x20                           ; 004161ba
    PUSH 0x16                           ; 004161bc
    PUSH 0x5d3e31                       ; 004161be
    PUSH 0x9                            ; 004161c3
    MOV EAX,dword ptr [EBX]             ; 004161c5
    PUSH EBX                            ; 004161c7
    CALL dword ptr [EAX + 0x28]         ; 004161c8
    ADD ESP,0x24                        ; 004161cb
    PUSH 0x0                            ; 004161ce
    PUSH 0x62                           ; 004161d0
    PUSH 0x135                          ; 004161d2
    PUSH 0x0                            ; 004161d7
    PUSH 0x15                           ; 004161d9
    PUSH 0x14                           ; 004161db
    PUSH 0x5d3e38                       ; 004161dd
    PUSH 0xa                            ; 004161e2
    MOV EAX,dword ptr [EBX]             ; 004161e4
    PUSH EBX                            ; 004161e6
    CALL dword ptr [EAX + 0x28]         ; 004161e7
    ADD ESP,0x24                        ; 004161ea
    PUSH 0x0                            ; 004161ed
    PUSH 0x62                           ; 004161ef
    PUSH 0x135                          ; 004161f1
    PUSH 0x0                            ; 004161f6
    PUSH 0x15                           ; 004161f8
    PUSH 0x14                           ; 004161fa
    PUSH 0x5d3e40                       ; 004161fc
    PUSH 0xb                            ; 00416201
    MOV EAX,dword ptr [EBX]             ; 00416203
    PUSH EBX                            ; 00416205
    CALL dword ptr [EAX + 0x28]         ; 00416206
    ADD ESP,0x24                        ; 00416209
    PUSH 0x0                            ; 0041620c
    PUSH 0x1a3                          ; 0041620e
    PUSH 0x4b                           ; 00416213
    PUSH 0x2                            ; 00416215
    PUSH 0x27                           ; 00416217
    PUSH 0x27                           ; 00416219
    PUSH 0x5d3e49                       ; 0041621b
    PUSH 0xc                            ; 00416220
    MOV EAX,dword ptr [EBX]             ; 00416222
    PUSH EBX                            ; 00416224
    CALL dword ptr [EAX + 0x28]         ; 00416225
    ADD ESP,0x24                        ; 00416228
    PUSH 0x0                            ; 0041622b
    PUSH 0x1a3                          ; 0041622d
    PUSH 0x4b                           ; 00416232
    PUSH 0x2                            ; 00416234
    PUSH 0x27                           ; 00416236
    PUSH 0x27                           ; 00416238
    PUSH 0x5d3e54                       ; 0041623a
    PUSH 0xd                            ; 0041623f
    MOV EAX,dword ptr [EBX]             ; 00416241
    PUSH EBX                            ; 00416243
    CALL dword ptr [EAX + 0x28]         ; 00416244
    ADD ESP,0x24                        ; 00416247
    PUSH 0x0                            ; 0041624a
    PUSH 0x1a3                          ; 0041624c
    PUSH 0x4b                           ; 00416251
    PUSH 0x2                            ; 00416253
    PUSH 0x27                           ; 00416255
    PUSH 0x27                           ; 00416257
    PUSH 0x5d3e5f                       ; 00416259
    PUSH 0xe                            ; 0041625e
    MOV EAX,dword ptr [EBX]             ; 00416260
    PUSH EBX                            ; 00416262
    CALL dword ptr [EAX + 0x28]         ; 00416263
    ADD ESP,0x24                        ; 00416266
    PUSH 0x0                            ; 00416269
    PUSH 0x1a3                          ; 0041626b
    PUSH 0x4b                           ; 00416270
    PUSH 0x2                            ; 00416272
    PUSH 0x27                           ; 00416274
    PUSH 0x27                           ; 00416276
    PUSH 0x5d3e6a                       ; 00416278
    PUSH 0xf                            ; 0041627d
    MOV EAX,dword ptr [EBX]             ; 0041627f
    PUSH EBX                            ; 00416281
    CALL dword ptr [EAX + 0x28]         ; 00416282
    ADD ESP,0x24                        ; 00416285
    PUSH 0x0                            ; 00416288
    PUSH 0x1a3                          ; 0041628a
    PUSH 0x4b                           ; 0041628f
    PUSH 0x2                            ; 00416291
    PUSH 0x27                           ; 00416293
    PUSH 0x27                           ; 00416295
    PUSH 0x5d3e75                       ; 00416297
    PUSH 0x10                           ; 0041629c
    MOV EAX,dword ptr [EBX]             ; 0041629e
    PUSH EBX                            ; 004162a0
    CALL dword ptr [EAX + 0x28]         ; 004162a1
    ADD ESP,0x24                        ; 004162a4
    PUSH 0x0                            ; 004162a7
    PUSH 0x1a3                          ; 004162a9
    PUSH 0xaf                           ; 004162ae
    PUSH 0x2                            ; 004162b3
    PUSH 0x27                           ; 004162b5
    PUSH 0x27                           ; 004162b7
    PUSH 0x5d3e80                       ; 004162b9
    PUSH 0x11                           ; 004162be
    MOV EAX,dword ptr [EBX]             ; 004162c0
    PUSH EBX                            ; 004162c2
    CALL dword ptr [EAX + 0x28]         ; 004162c3
    ADD ESP,0x24                        ; 004162c6
    PUSH 0x0                            ; 004162c9
    PUSH 0x1a3                          ; 004162cb
    PUSH 0xaf                           ; 004162d0
    PUSH 0x2                            ; 004162d5
    PUSH 0x27                           ; 004162d7
    PUSH 0x27                           ; 004162d9
    PUSH 0x5d3e8b                       ; 004162db
    PUSH 0x12                           ; 004162e0
    MOV EAX,dword ptr [EBX]             ; 004162e2
    PUSH EBX                            ; 004162e4
    CALL dword ptr [EAX + 0x28]         ; 004162e5
    ADD ESP,0x24                        ; 004162e8
    PUSH 0x0                            ; 004162eb
    PUSH 0x1a3                          ; 004162ed
    PUSH 0xaf                           ; 004162f2
    PUSH 0x2                            ; 004162f7
    PUSH 0x27                           ; 004162f9
    PUSH 0x27                           ; 004162fb
    PUSH 0x5d3e96                       ; 004162fd
    PUSH 0x13                           ; 00416302
    MOV EAX,dword ptr [EBX]             ; 00416304
    PUSH EBX                            ; 00416306
    CALL dword ptr [EAX + 0x28]         ; 00416307
    ADD ESP,0x24                        ; 0041630a
    PUSH 0x0                            ; 0041630d
    PUSH 0x1a3                          ; 0041630f
    PUSH 0xaf                           ; 00416314
    PUSH 0x2                            ; 00416319
    PUSH 0x27                           ; 0041631b
    PUSH 0x27                           ; 0041631d
    PUSH 0x5d3ea1                       ; 0041631f
    PUSH 0x14                           ; 00416324
    MOV EAX,dword ptr [EBX]             ; 00416326
    PUSH EBX                            ; 00416328
    CALL dword ptr [EAX + 0x28]         ; 00416329
    ADD ESP,0x24                        ; 0041632c
    PUSH 0x0                            ; 0041632f
    PUSH 0x1a3                          ; 00416331
    PUSH 0xaf                           ; 00416336
    PUSH 0x2                            ; 0041633b
    PUSH 0x27                           ; 0041633d
    PUSH 0x27                           ; 0041633f
    PUSH 0x5d3eac                       ; 00416341
    PUSH 0x15                           ; 00416346
    MOV EAX,dword ptr [EBX]             ; 00416348
    PUSH EBX                            ; 0041634a
    CALL dword ptr [EAX + 0x28]         ; 0041634b
    ADD ESP,0x24                        ; 0041634e
    PUSH 0x0                            ; 00416351
    PUSH 0x1a3                          ; 00416353
    PUSH 0x111                          ; 00416358
    PUSH 0x2                            ; 0041635d
    PUSH 0x27                           ; 0041635f
    PUSH 0x27                           ; 00416361
    PUSH 0x5d3eb7                       ; 00416363
    PUSH 0x16                           ; 00416368
    MOV EAX,dword ptr [EBX]             ; 0041636a
    PUSH EBX                            ; 0041636c
    CALL dword ptr [EAX + 0x28]         ; 0041636d
    ADD ESP,0x24                        ; 00416370
    PUSH 0x0                            ; 00416373
    PUSH 0x1a3                          ; 00416375
    PUSH 0x111                          ; 0041637a
    PUSH 0x2                            ; 0041637f
    PUSH 0x27                           ; 00416381
    PUSH 0x27                           ; 00416383
    PUSH 0x5d3ec2                       ; 00416385
    PUSH 0x17                           ; 0041638a
    MOV EAX,dword ptr [EBX]             ; 0041638c
    PUSH EBX                            ; 0041638e
    CALL dword ptr [EAX + 0x28]         ; 0041638f
    ADD ESP,0x24                        ; 00416392
    PUSH 0x0                            ; 00416395
    PUSH 0x1a3                          ; 00416397
    PUSH 0x111                          ; 0041639c
    PUSH 0x2                            ; 004163a1
    PUSH 0x27                           ; 004163a3
    PUSH 0x27                           ; 004163a5
    PUSH 0x5d3ecd                       ; 004163a7
    PUSH 0x18                           ; 004163ac
    MOV EAX,dword ptr [EBX]             ; 004163ae
    PUSH EBX                            ; 004163b0
    CALL dword ptr [EAX + 0x28]         ; 004163b1
    ADD ESP,0x24                        ; 004163b4
    PUSH 0x0                            ; 004163b7
    PUSH 0x1a3                          ; 004163b9
    PUSH 0x111                          ; 004163be
    PUSH 0x2                            ; 004163c3
    PUSH 0x27                           ; 004163c5
    PUSH 0x27                           ; 004163c7
    PUSH 0x5d3ed8                       ; 004163c9
    PUSH 0x19                           ; 004163ce
    MOV EAX,dword ptr [EBX]             ; 004163d0
    PUSH EBX                            ; 004163d2
    CALL dword ptr [EAX + 0x28]         ; 004163d3
    ADD ESP,0x24                        ; 004163d6
    PUSH 0x0                            ; 004163d9
    PUSH 0x1a3                          ; 004163db
    PUSH 0x111                          ; 004163e0
    PUSH 0x2                            ; 004163e5
    PUSH 0x27                           ; 004163e7
    PUSH 0x27                           ; 004163e9
    PUSH 0x5d3ee3                       ; 004163eb
    PUSH 0x1a                           ; 004163f0
    MOV EAX,dword ptr [EBX]             ; 004163f2
    PUSH EBX                            ; 004163f4
    CALL dword ptr [EAX + 0x28]         ; 004163f5
    ADD ESP,0x24                        ; 004163f8
    PUSH 0x5d3eee                       ; 004163fb
    MOV ESI,dword ptr [0x0061b4d0]      ; 00416400 | DAT_0061b4d0
    PUSH ESI                            ; 00416406
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 00416407
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0041640c
    TEST EAX,EAX                        ; 0041640f
    JZ 0x0041645e                       ; 00416411
        ;   XREF to: 0041645e (CONDITIONAL_JUMP)  ; LAB_0041645e
    MOV dword ptr [EBX + 0xc24],0x4     ; 00416413
    MOV dword ptr [EBX + 0xc28],0x2     ; 0041641d
    MOV dword ptr [EBX + 0xc2c],0x3     ; 00416427
    MOV dword ptr [EBX + 0xc30],0x0     ; 00416431
    MOV dword ptr [EBX + 0xc10],0x1     ; 0041643b
    MOV dword ptr [EBX + 0xc20],0x1     ; 00416445
    MOV dword ptr [EBX + 0xc34],0x0     ; 0041644f
        ;   Label: LAB_0041644f
    POP EBP                             ; 00416459
    POP EDI                             ; 0041645a
    POP ESI                             ; 0041645b
    POP EBX                             ; 0041645c
    RET                                 ; 0041645d
    PUSH 0x5d3f02                       ; 0041645e
        ;   Label: LAB_0041645e
    MOV EDI,dword ptr [0x0061b4d0]      ; 00416463 | DAT_0061b4d0
    PUSH EDI                            ; 00416469
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 0041646a
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0041646f
    TEST EAX,EAX                        ; 00416472
    JZ 0x0041644f                       ; 00416474
        ;   XREF to: 0041644f (CONDITIONAL_JUMP)  ; LAB_0041644f
    MOV dword ptr [EBX + 0xc24],0x1     ; 00416476
    MOV dword ptr [EBX + 0xc28],0x4     ; 00416480
    MOV dword ptr [EBX + 0xc2c],0x1     ; 0041648a
    MOV dword ptr [EBX + 0xc30],0x2     ; 00416494
    MOV dword ptr [EBX + 0xc10],0x2     ; 0041649e
    MOV dword ptr [EBX + 0xc20],0x3     ; 004164a8
    MOV dword ptr [EBX + 0xc34],0x0     ; 004164b2
    POP EBP                             ; 004164bc
    POP EDI                             ; 004164bd
    POP ESI                             ; 004164be
    POP EBX                             ; 004164bf
    RET                                 ; 004164c0
    PUSH ESI                            ; 004164c1
        ;   Label: LAB_004164c1
    CALL engine_alphabit.cpp_FUN_0040d1c0 ; 004164c2
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004164c7
    PUSH 0x7c3984                       ; 004164ca
    CALL engine_alphabit.cpp_FUN_0040d1c0 ; 004164cf
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004164d4
    PUSH 0x7c3998                       ; 004164d7
    CALL engine_alphabit.cpp_FUN_0040d1c0 ; 004164dc
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004164e1
    PUSH 0x7c39ac                       ; 004164e4
    CALL engine_alphabit.cpp_FUN_0040d1c0 ; 004164e9
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004164ee
    PUSH 0x7c39c0                       ; 004164f1
    XOR ESI,ESI                         ; 004164f6
    CALL engine_alphabit.cpp_FUN_0040d1c0 ; 004164f8
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    MOV ECX,dword ptr [EBX + 0x1c]      ; 004164fd
    ADD ESP,0x4                         ; 00416500
    TEST ECX,ECX                        ; 00416503
    JLE 0x00416520                      ; 00416505
        ;   XREF to: 00416520 (CONDITIONAL_JUMP)  ; LAB_00416520
    LEA EDI,[EBX + 0x60]                ; 00416507
    PUSH EDI                            ; 0041650a
        ;   Label: LAB_0041650a
    CALL engine_alphabit.cpp_FUN_0040d1c0 ; 0041650b
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    INC ESI                             ; 00416510
    ADD ESP,0x4                         ; 00416511
    MOV EBP,dword ptr [EBX + 0x1c]      ; 00416514
    ADD EDI,0x2c                        ; 00416517
    CMP ESI,EBP                         ; 0041651a
    JL 0x0041650a                       ; 0041651c
        ;   XREF to: 0041650a (CONDITIONAL_JUMP)  ; LAB_0041650a
    MOV EAX,EAX                         ; 0041651e
    MOV dword ptr [EBX + 0x1c],0x0      ; 00416520
        ;   Label: LAB_00416520
    CALL sound_sndmain.cpp_killAllSfx_FUN_00573b00 ; 00416527
        ;   XREF to: 00573b00 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_killAllSfx_FUN_00573b00()
    MOV dword ptr [EBX + 0x18],0x0      ; 0041652c
    MOV dword ptr [EBX + 0x30],0x0      ; 00416533
    MOV dword ptr [EBX + 0x24],0x0      ; 0041653a
    MOV dword ptr [EBX + 0x28],0x0      ; 00416541
    MOV dword ptr [EBX + 0x2c],0x0      ; 00416548
    MOV dword ptr [EBX + 0x5c],0x0      ; 0041654f
    MOV EAX,0xffffffff                  ; 00416556
    MOV dword ptr [EBX + 0xc34],0x0     ; 0041655b
    MOV [0x007c397c],EAX                ; 00416565 | DAT_007c397c
    POP EBP                             ; 0041656a
    POP EDI                             ; 0041656b
    POP ESI                             ; 0041656c
    POP EBX                             ; 0041656d
    RET                                 ; 0041656e

