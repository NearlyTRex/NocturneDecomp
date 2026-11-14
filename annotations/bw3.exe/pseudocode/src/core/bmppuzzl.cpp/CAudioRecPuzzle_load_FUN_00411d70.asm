; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_load_FUN_00411d70(CAudioRecPuzzle *this_ptr,int activate)
;
; Parameters:
; CAudioRecPuzzle * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   activate
;
; Referenced Globals:
;   undefined4 DAT_005fba60
;   undefined4 DAT_007dffb8
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580
;   core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0
;   engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460
;   sound_sndmain.cpp_killAllSfx_FUN_00556c60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411d70
        ;   Label: core_bmppuzzl.cpp_CAudioRecPuzzle_load_FUN_00411d70
    PUSH ESI                            ; 00411d71
    PUSH EDI                            ; 00411d72
    PUSH EBP                            ; 00411d73
    MOV EBX,dword ptr [ESP + 0x14]      ; 00411d74
    MOV EDX,dword ptr [ESP + 0x18]      ; 00411d78
    LEA ESI,[EBX + 0x4]                 ; 00411d7c
    TEST EDX,EDX                        ; 00411d7f
    JZ 0x00412271                       ; 00411d81
        ;   XREF to: 00412271 (CONDITIONAL_JUMP)  ; LAB_00412271
    LEA EAX,[EBX + 0x8ec]               ; 00411d87
    PUSH EAX                            ; 00411d8d
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580 ; 00411d8e
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00411d93
    LEA EAX,[EBX + 0xa68]               ; 00411d96
    PUSH EAX                            ; 00411d9c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580 ; 00411d9d
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00411da2
    PUSH 0x1e0                          ; 00411da5
    PUSH 0x280                          ; 00411daa
    MOV dword ptr [EBX + 0x4c],0x1      ; 00411daf
    PUSH 0x5b65e9                       ; 00411db6
    MOV dword ptr [EBX + 0x34],0x1      ; 00411dbb
    PUSH ESI                            ; 00411dc2
    MOV dword ptr [EBX + 0x1c],0x0      ; 00411dc3
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 00411dca
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 00411dcf
    PUSH 0x12                           ; 00411dd2
    PUSH 0xd                            ; 00411dd4
    PUSH 0x5b65f3                       ; 00411dd6
    PUSH 0x7dffc0                       ; 00411ddb
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 00411de0
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 00411de5
    PUSH 0xc                            ; 00411de8
    PUSH 0x2a                           ; 00411dea
    PUSH 0x5b6601                       ; 00411dec
    PUSH 0x7dffd4                       ; 00411df1
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 00411df6
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 00411dfb
    PUSH 0xc                            ; 00411dfe
    PUSH 0x15                           ; 00411e00
    PUSH 0x5b660e                       ; 00411e02
    PUSH 0x7dffe8                       ; 00411e07
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 00411e0c
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 00411e11
    PUSH 0xc                            ; 00411e14
    PUSH 0x15                           ; 00411e16
    PUSH 0x5b661e                       ; 00411e18
    PUSH 0x7dfffc                       ; 00411e1d
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 00411e22
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 00411e27
    PUSH 0x0                            ; 00411e2a
    PUSH 0x195                          ; 00411e2c
    PUSH 0x1f9                          ; 00411e31
    PUSH 0x1                            ; 00411e36
    PUSH 0x3a                           ; 00411e38
    PUSH 0x3d                           ; 00411e3a
    PUSH 0x5b662f                       ; 00411e3c
    PUSH 0x0                            ; 00411e41
    MOV EAX,dword ptr [EBX]             ; 00411e43
    PUSH EBX                            ; 00411e45
    CALL dword ptr [EAX + 0x28]         ; 00411e46
    ADD ESP,0x24                        ; 00411e49
    PUSH 0x0                            ; 00411e4c
    PUSH 0x195                          ; 00411e4e
    PUSH 0x1f9                          ; 00411e53
    PUSH 0x1                            ; 00411e58
    PUSH 0x3a                           ; 00411e5a
    PUSH 0x3d                           ; 00411e5c
    PUSH 0x5b6637                       ; 00411e5e
    PUSH 0x1                            ; 00411e63
    MOV EAX,dword ptr [EBX]             ; 00411e65
    PUSH EBX                            ; 00411e67
    CALL dword ptr [EAX + 0x28]         ; 00411e68
    ADD ESP,0x24                        ; 00411e6b
    PUSH 0x0                            ; 00411e6e
    PUSH 0x8a                           ; 00411e70
    PUSH 0x128                          ; 00411e75
    PUSH 0x2                            ; 00411e7a
    PUSH 0x4c                           ; 00411e7c
    PUSH 0x2d                           ; 00411e7e
    PUSH 0x5b6640                       ; 00411e80
    PUSH 0x2                            ; 00411e85
    MOV EAX,dword ptr [EBX]             ; 00411e87
    PUSH EBX                            ; 00411e89
    CALL dword ptr [EAX + 0x28]         ; 00411e8a
    ADD ESP,0x24                        ; 00411e8d
    PUSH 0x0                            ; 00411e90
    PUSH 0x8a                           ; 00411e92
    PUSH 0x128                          ; 00411e97
    PUSH 0x2                            ; 00411e9c
    PUSH 0x4c                           ; 00411e9e
    PUSH 0x2d                           ; 00411ea0
    PUSH 0x5b664c                       ; 00411ea2
    PUSH 0x3                            ; 00411ea7
    MOV EAX,dword ptr [EBX]             ; 00411ea9
    PUSH EBX                            ; 00411eab
    CALL dword ptr [EAX + 0x28]         ; 00411eac
    ADD ESP,0x24                        ; 00411eaf
    PUSH 0x0                            ; 00411eb2
    PUSH 0x8a                           ; 00411eb4
    PUSH 0x128                          ; 00411eb9
    PUSH 0x2                            ; 00411ebe
    PUSH 0x4c                           ; 00411ec0
    PUSH 0x2d                           ; 00411ec2
    PUSH 0x5b6655                       ; 00411ec4
    PUSH 0x4                            ; 00411ec9
    MOV EAX,dword ptr [EBX]             ; 00411ecb
    PUSH EBX                            ; 00411ecd
    CALL dword ptr [EAX + 0x28]         ; 00411ece
    ADD ESP,0x24                        ; 00411ed1
    PUSH 0x0                            ; 00411ed4
    PUSH 0x12e                          ; 00411ed6
    PUSH 0x171                          ; 00411edb
    PUSH 0x3                            ; 00411ee0
    PUSH 0x20                           ; 00411ee2
    PUSH 0x16                           ; 00411ee4
    PUSH 0x5b6661                       ; 00411ee6
    PUSH 0x5                            ; 00411eeb
    MOV EAX,dword ptr [EBX]             ; 00411eed
    PUSH EBX                            ; 00411eef
    CALL dword ptr [EAX + 0x28]         ; 00411ef0
    ADD ESP,0x24                        ; 00411ef3
    PUSH 0x0                            ; 00411ef6
    PUSH 0x12e                          ; 00411ef8
    PUSH 0x195                          ; 00411efd
    PUSH 0x3                            ; 00411f02
    PUSH 0x20                           ; 00411f04
    PUSH 0x16                           ; 00411f06
    PUSH 0x5b6668                       ; 00411f08
    PUSH 0x6                            ; 00411f0d
    MOV EAX,dword ptr [EBX]             ; 00411f0f
    PUSH EBX                            ; 00411f11
    CALL dword ptr [EAX + 0x28]         ; 00411f12
    ADD ESP,0x24                        ; 00411f15
    PUSH 0x0                            ; 00411f18
    PUSH 0x12e                          ; 00411f1a
    PUSH 0x1bd                          ; 00411f1f
    PUSH 0x3                            ; 00411f24
    PUSH 0x20                           ; 00411f26
    PUSH 0x16                           ; 00411f28
    PUSH 0x5b666f                       ; 00411f2a
    PUSH 0x7                            ; 00411f2f
    MOV EAX,dword ptr [EBX]             ; 00411f31
    PUSH EBX                            ; 00411f33
    CALL dword ptr [EAX + 0x28]         ; 00411f34
    ADD ESP,0x24                        ; 00411f37
    PUSH 0x0                            ; 00411f3a
    PUSH 0x12e                          ; 00411f3c
    PUSH 0x1e3                          ; 00411f41
    PUSH 0x3                            ; 00411f46
    PUSH 0x20                           ; 00411f48
    PUSH 0x16                           ; 00411f4a
    PUSH 0x5b6676                       ; 00411f4c
    PUSH 0x8                            ; 00411f51
    MOV EAX,dword ptr [EBX]             ; 00411f53
    PUSH EBX                            ; 00411f55
    CALL dword ptr [EAX + 0x28]         ; 00411f56
    ADD ESP,0x24                        ; 00411f59
    PUSH 0x0                            ; 00411f5c
    PUSH 0x12e                          ; 00411f5e
    PUSH 0x20a                          ; 00411f63
    PUSH 0x3                            ; 00411f68
    PUSH 0x20                           ; 00411f6a
    PUSH 0x16                           ; 00411f6c
    PUSH 0x5b667d                       ; 00411f6e
    PUSH 0x9                            ; 00411f73
    MOV EAX,dword ptr [EBX]             ; 00411f75
    PUSH EBX                            ; 00411f77
    CALL dword ptr [EAX + 0x28]         ; 00411f78
    ADD ESP,0x24                        ; 00411f7b
    PUSH 0x0                            ; 00411f7e
    PUSH 0x62                           ; 00411f80
    PUSH 0x135                          ; 00411f82
    PUSH 0x0                            ; 00411f87
    PUSH 0x15                           ; 00411f89
    PUSH 0x14                           ; 00411f8b
    PUSH 0x5b6684                       ; 00411f8d
    PUSH 0xa                            ; 00411f92
    MOV EAX,dword ptr [EBX]             ; 00411f94
    PUSH EBX                            ; 00411f96
    CALL dword ptr [EAX + 0x28]         ; 00411f97
    ADD ESP,0x24                        ; 00411f9a
    PUSH 0x0                            ; 00411f9d
    PUSH 0x62                           ; 00411f9f
    PUSH 0x135                          ; 00411fa1
    PUSH 0x0                            ; 00411fa6
    PUSH 0x15                           ; 00411fa8
    PUSH 0x14                           ; 00411faa
    PUSH 0x5b668c                       ; 00411fac
    PUSH 0xb                            ; 00411fb1
    MOV EAX,dword ptr [EBX]             ; 00411fb3
    PUSH EBX                            ; 00411fb5
    CALL dword ptr [EAX + 0x28]         ; 00411fb6
    ADD ESP,0x24                        ; 00411fb9
    PUSH 0x0                            ; 00411fbc
    PUSH 0x1a3                          ; 00411fbe
    PUSH 0x4b                           ; 00411fc3
    PUSH 0x2                            ; 00411fc5
    PUSH 0x27                           ; 00411fc7
    PUSH 0x27                           ; 00411fc9
    PUSH 0x5b6695                       ; 00411fcb
    PUSH 0xc                            ; 00411fd0
    MOV EAX,dword ptr [EBX]             ; 00411fd2
    PUSH EBX                            ; 00411fd4
    CALL dword ptr [EAX + 0x28]         ; 00411fd5
    ADD ESP,0x24                        ; 00411fd8
    PUSH 0x0                            ; 00411fdb
    PUSH 0x1a3                          ; 00411fdd
    PUSH 0x4b                           ; 00411fe2
    PUSH 0x2                            ; 00411fe4
    PUSH 0x27                           ; 00411fe6
    PUSH 0x27                           ; 00411fe8
    PUSH 0x5b66a0                       ; 00411fea
    PUSH 0xd                            ; 00411fef
    MOV EAX,dword ptr [EBX]             ; 00411ff1
    PUSH EBX                            ; 00411ff3
    CALL dword ptr [EAX + 0x28]         ; 00411ff4
    ADD ESP,0x24                        ; 00411ff7
    PUSH 0x0                            ; 00411ffa
    PUSH 0x1a3                          ; 00411ffc
    PUSH 0x4b                           ; 00412001
    PUSH 0x2                            ; 00412003
    PUSH 0x27                           ; 00412005
    PUSH 0x27                           ; 00412007
    PUSH 0x5b66ab                       ; 00412009
    PUSH 0xe                            ; 0041200e
    MOV EAX,dword ptr [EBX]             ; 00412010
    PUSH EBX                            ; 00412012
    CALL dword ptr [EAX + 0x28]         ; 00412013
    ADD ESP,0x24                        ; 00412016
    PUSH 0x0                            ; 00412019
    PUSH 0x1a3                          ; 0041201b
    PUSH 0x4b                           ; 00412020
    PUSH 0x2                            ; 00412022
    PUSH 0x27                           ; 00412024
    PUSH 0x27                           ; 00412026
    PUSH 0x5b66b6                       ; 00412028
    PUSH 0xf                            ; 0041202d
    MOV EAX,dword ptr [EBX]             ; 0041202f
    PUSH EBX                            ; 00412031
    CALL dword ptr [EAX + 0x28]         ; 00412032
    ADD ESP,0x24                        ; 00412035
    PUSH 0x0                            ; 00412038
    PUSH 0x1a3                          ; 0041203a
    PUSH 0x4b                           ; 0041203f
    PUSH 0x2                            ; 00412041
    PUSH 0x27                           ; 00412043
    PUSH 0x27                           ; 00412045
    PUSH 0x5b66c1                       ; 00412047
    PUSH 0x10                           ; 0041204c
    MOV EAX,dword ptr [EBX]             ; 0041204e
    PUSH EBX                            ; 00412050
    CALL dword ptr [EAX + 0x28]         ; 00412051
    ADD ESP,0x24                        ; 00412054
    PUSH 0x0                            ; 00412057
    PUSH 0x1a3                          ; 00412059
    PUSH 0xaf                           ; 0041205e
    PUSH 0x2                            ; 00412063
    PUSH 0x27                           ; 00412065
    PUSH 0x27                           ; 00412067
    PUSH 0x5b66cc                       ; 00412069
    PUSH 0x11                           ; 0041206e
    MOV EAX,dword ptr [EBX]             ; 00412070
    PUSH EBX                            ; 00412072
    CALL dword ptr [EAX + 0x28]         ; 00412073
    ADD ESP,0x24                        ; 00412076
    PUSH 0x0                            ; 00412079
    PUSH 0x1a3                          ; 0041207b
    PUSH 0xaf                           ; 00412080
    PUSH 0x2                            ; 00412085
    PUSH 0x27                           ; 00412087
    PUSH 0x27                           ; 00412089
    PUSH 0x5b66d7                       ; 0041208b
    PUSH 0x12                           ; 00412090
    MOV EAX,dword ptr [EBX]             ; 00412092
    PUSH EBX                            ; 00412094
    CALL dword ptr [EAX + 0x28]         ; 00412095
    ADD ESP,0x24                        ; 00412098
    PUSH 0x0                            ; 0041209b
    PUSH 0x1a3                          ; 0041209d
    PUSH 0xaf                           ; 004120a2
    PUSH 0x2                            ; 004120a7
    PUSH 0x27                           ; 004120a9
    PUSH 0x27                           ; 004120ab
    PUSH 0x5b66e2                       ; 004120ad
    PUSH 0x13                           ; 004120b2
    MOV EAX,dword ptr [EBX]             ; 004120b4
    PUSH EBX                            ; 004120b6
    CALL dword ptr [EAX + 0x28]         ; 004120b7
    ADD ESP,0x24                        ; 004120ba
    PUSH 0x0                            ; 004120bd
    PUSH 0x1a3                          ; 004120bf
    PUSH 0xaf                           ; 004120c4
    PUSH 0x2                            ; 004120c9
    PUSH 0x27                           ; 004120cb
    PUSH 0x27                           ; 004120cd
    PUSH 0x5b66ed                       ; 004120cf
    PUSH 0x14                           ; 004120d4
    MOV EAX,dword ptr [EBX]             ; 004120d6
    PUSH EBX                            ; 004120d8
    CALL dword ptr [EAX + 0x28]         ; 004120d9
    ADD ESP,0x24                        ; 004120dc
    PUSH 0x0                            ; 004120df
    PUSH 0x1a3                          ; 004120e1
    PUSH 0xaf                           ; 004120e6
    PUSH 0x2                            ; 004120eb
    PUSH 0x27                           ; 004120ed
    PUSH 0x27                           ; 004120ef
    PUSH 0x5b66f8                       ; 004120f1
    PUSH 0x15                           ; 004120f6
    MOV EAX,dword ptr [EBX]             ; 004120f8
    PUSH EBX                            ; 004120fa
    CALL dword ptr [EAX + 0x28]         ; 004120fb
    ADD ESP,0x24                        ; 004120fe
    PUSH 0x0                            ; 00412101
    PUSH 0x1a3                          ; 00412103
    PUSH 0x111                          ; 00412108
    PUSH 0x2                            ; 0041210d
    PUSH 0x27                           ; 0041210f
    PUSH 0x27                           ; 00412111
    PUSH 0x5b6703                       ; 00412113
    PUSH 0x16                           ; 00412118
    MOV EAX,dword ptr [EBX]             ; 0041211a
    PUSH EBX                            ; 0041211c
    CALL dword ptr [EAX + 0x28]         ; 0041211d
    ADD ESP,0x24                        ; 00412120
    PUSH 0x0                            ; 00412123
    PUSH 0x1a3                          ; 00412125
    PUSH 0x111                          ; 0041212a
    PUSH 0x2                            ; 0041212f
    PUSH 0x27                           ; 00412131
    PUSH 0x27                           ; 00412133
    PUSH 0x5b670e                       ; 00412135
    PUSH 0x17                           ; 0041213a
    MOV EAX,dword ptr [EBX]             ; 0041213c
    PUSH EBX                            ; 0041213e
    CALL dword ptr [EAX + 0x28]         ; 0041213f
    ADD ESP,0x24                        ; 00412142
    PUSH 0x0                            ; 00412145
    PUSH 0x1a3                          ; 00412147
    PUSH 0x111                          ; 0041214c
    PUSH 0x2                            ; 00412151
    PUSH 0x27                           ; 00412153
    PUSH 0x27                           ; 00412155
    PUSH 0x5b6719                       ; 00412157
    PUSH 0x18                           ; 0041215c
    MOV EAX,dword ptr [EBX]             ; 0041215e
    PUSH EBX                            ; 00412160
    CALL dword ptr [EAX + 0x28]         ; 00412161
    ADD ESP,0x24                        ; 00412164
    PUSH 0x0                            ; 00412167
    PUSH 0x1a3                          ; 00412169
    PUSH 0x111                          ; 0041216e
    PUSH 0x2                            ; 00412173
    PUSH 0x27                           ; 00412175
    PUSH 0x27                           ; 00412177
    PUSH 0x5b6724                       ; 00412179
    PUSH 0x19                           ; 0041217e
    MOV EAX,dword ptr [EBX]             ; 00412180
    PUSH EBX                            ; 00412182
    CALL dword ptr [EAX + 0x28]         ; 00412183
    ADD ESP,0x24                        ; 00412186
    PUSH 0x0                            ; 00412189
    PUSH 0x1a3                          ; 0041218b
    PUSH 0x111                          ; 00412190
    PUSH 0x2                            ; 00412195
    PUSH 0x27                           ; 00412197
    PUSH 0x27                           ; 00412199
    PUSH 0x5b672f                       ; 0041219b
    PUSH 0x1a                           ; 004121a0
    MOV EAX,dword ptr [EBX]             ; 004121a2
    PUSH EBX                            ; 004121a4
    CALL dword ptr [EAX + 0x28]         ; 004121a5
    ADD ESP,0x24                        ; 004121a8
    PUSH 0x5b673a                       ; 004121ab
    MOV ESI,dword ptr [0x005fba60]      ; 004121b0 | DAT_005fba60
    PUSH ESI                            ; 004121b6
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 004121b7
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004121bc
    TEST EAX,EAX                        ; 004121bf
    JZ 0x0041220e                       ; 004121c1
        ;   XREF to: 0041220e (CONDITIONAL_JUMP)  ; LAB_0041220e
    MOV dword ptr [EBX + 0xc18],0x4     ; 004121c3
    MOV dword ptr [EBX + 0xc1c],0x2     ; 004121cd
    MOV dword ptr [EBX + 0xc20],0x4     ; 004121d7
    MOV dword ptr [EBX + 0xc24],0x0     ; 004121e1
    MOV dword ptr [EBX + 0xc04],0x1     ; 004121eb
    MOV dword ptr [EBX + 0xc14],0x1     ; 004121f5
    MOV dword ptr [EBX + 0xc28],0x0     ; 004121ff
        ;   Label: LAB_004121ff
    POP EBP                             ; 00412209
    POP EDI                             ; 0041220a
    POP ESI                             ; 0041220b
    POP EBX                             ; 0041220c
    RET                                 ; 0041220d
    PUSH 0x5b674e                       ; 0041220e
        ;   Label: LAB_0041220e
    MOV EDI,dword ptr [0x005fba60]      ; 00412213 | DAT_005fba60
    PUSH EDI                            ; 00412219
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 0041221a
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0041221f
    TEST EAX,EAX                        ; 00412222
    JZ 0x004121ff                       ; 00412224
        ;   XREF to: 004121ff (CONDITIONAL_JUMP)  ; LAB_004121ff
    MOV dword ptr [EBX + 0xc18],0x1     ; 00412226
    MOV dword ptr [EBX + 0xc1c],0x4     ; 00412230
    MOV dword ptr [EBX + 0xc20],0x1     ; 0041223a
    MOV dword ptr [EBX + 0xc24],0x2     ; 00412244
    MOV dword ptr [EBX + 0xc04],0x2     ; 0041224e
    MOV dword ptr [EBX + 0xc14],0x3     ; 00412258
    MOV dword ptr [EBX + 0xc28],0x0     ; 00412262
    POP EBP                             ; 0041226c
    POP EDI                             ; 0041226d
    POP ESI                             ; 0041226e
    POP EBX                             ; 0041226f
    RET                                 ; 00412270
    PUSH ESI                            ; 00412271
        ;   Label: LAB_00412271
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 00412272
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 00412277
    PUSH 0x7dffc0                       ; 0041227a
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 0041227f
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 00412284
    PUSH 0x7dffd4                       ; 00412287
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 0041228c
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 00412291
    PUSH 0x7dffe8                       ; 00412294
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 00412299
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 0041229e
    PUSH 0x7dfffc                       ; 004122a1
    XOR ESI,ESI                         ; 004122a6
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 004122a8
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    MOV ECX,dword ptr [EBX + 0x1c]      ; 004122ad
    ADD ESP,0x4                         ; 004122b0
    TEST ECX,ECX                        ; 004122b3
    JLE 0x004122d0                      ; 004122b5
        ;   XREF to: 004122d0 (CONDITIONAL_JUMP)  ; LAB_004122d0
    LEA EDI,[EBX + 0x54]                ; 004122b7
    PUSH EDI                            ; 004122ba
        ;   Label: LAB_004122ba
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 004122bb
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    INC ESI                             ; 004122c0
    ADD ESP,0x4                         ; 004122c1
    MOV EBP,dword ptr [EBX + 0x1c]      ; 004122c4
    ADD EDI,0x2c                        ; 004122c7
    CMP ESI,EBP                         ; 004122ca
    JL 0x004122ba                       ; 004122cc
        ;   XREF to: 004122ba (CONDITIONAL_JUMP)  ; LAB_004122ba
    MOV EAX,EAX                         ; 004122ce
    MOV dword ptr [EBX + 0x1c],0x0      ; 004122d0
        ;   Label: LAB_004122d0
    CALL sound_sndmain.cpp_killAllSfx_FUN_00556c60 ; 004122d7
        ;   XREF to: 00556c60 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_killAllSfx_FUN_00556c60()
    MOV dword ptr [EBX + 0x18],0x0      ; 004122dc
    MOV dword ptr [EBX + 0x30],0x0      ; 004122e3
    MOV dword ptr [EBX + 0x24],0x0      ; 004122ea
    MOV dword ptr [EBX + 0x28],0x0      ; 004122f1
    MOV dword ptr [EBX + 0x2c],0x0      ; 004122f8
    MOV dword ptr [EBX + 0x50],0x0      ; 004122ff
    MOV EAX,0xffffffff                  ; 00412306
    MOV dword ptr [EBX + 0xc28],0x0     ; 0041230b
    MOV [0x007dffb8],EAX                ; 00412315 | DAT_007dffb8
    POP EBP                             ; 0041231a
    POP EDI                             ; 0041231b
    POP ESI                             ; 0041231c
    POP EBX                             ; 0041231d
    RET                                 ; 0041231e

