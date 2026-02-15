; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_charactr_cpp_CCharacter_updateWanderToWaypoint_FUN_0042e050(CCharacter *this_ptr,float delta_time,char *pattern)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; char *           Stack[0xc]:4   pattern
; Local Variables:
; undefined4       Stack[-0x1f80]:4  local_1f80
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_enemy.cpp_CEnemy_FUN_004a9fd0 at 004aa002
;
; Referenced Globals:
;   double DOUBLE_006174d2 = 4
;   float FLOAT_006174da = 20
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 DAT_032690dc
;   undefined4 DAT_032690e0
;   undefined4 DAT_032690e4
;   CVector3f g_ZeroVector
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_actor.cpp_getRandomInt_FUN_0040cc70
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
;   core_waypoint.cpp_CWayPoint_FUN_005ec320
;   shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042e050
        ;   Label: core_charactr.cpp_CCharacter_updateWanderToWaypoint_FUN_0042e050
    PUSH ESI                            ; 0042e051
    PUSH EDI                            ; 0042e052
    PUSH EBP                            ; 0042e053
    SUB ESP,0x1f70                      ; 0042e054
    MOV EDI,dword ptr [ESP + 0x1f84]    ; 0042e05a
    MOV EDX,dword ptr [ESP + 0x1f8c]    ; 0042e061
    TEST EDX,EDX                        ; 0042e068
    JZ 0x0042e180                       ; 0042e06a
        ;   XREF to: 0042e180 (CONDITIONAL_JUMP)  ; LAB_0042e180
    CMP byte ptr [EDX],0x0              ; 0042e070
    JZ 0x0042e180                       ; 0042e073
        ;   XREF to: 0042e180 (CONDITIONAL_JUMP)  ; LAB_0042e180
    FLD float ptr [EDI + 0x25f4]        ; 0042e079
    FSUB float ptr [ESP + 0x1f88]       ; 0042e07f
    FST float ptr [EDI + 0x25f4]        ; 0042e086
    FLDZ                                ; 0042e08c
    FCOMPP                              ; 0042e08e
    FNSTSW AX                           ; 0042e090
    SAHF                                ; 0042e092
    JC 0x0042e20c                       ; 0042e093
        ;   XREF to: 0042e20c (CONDITIONAL_JUMP)  ; LAB_0042e20c
    MOV ECX,dword ptr [EDI + 0x25ec]    ; 0042e099
    TEST ECX,ECX                        ; 0042e09f
    JZ 0x0042e1ab                       ; 0042e0a1
        ;   XREF to: 0042e1ab (CONDITIONAL_JUMP)  ; LAB_0042e1ab
    MOV EAX,ECX                         ; 0042e0a7
    LEA EBX,[EDI + 0x20]                ; 0042e0a9
    FLD float ptr [EAX + 0x20]          ; 0042e0ac
    FSUB float ptr [EBX]                ; 0042e0af
    FMUL ST0                            ; 0042e0b1
    FLD float ptr [EAX + 0x24]          ; 0042e0b3
    FSUB float ptr [EBX + 0x4]          ; 0042e0b6
    FMUL ST0                            ; 0042e0b9
    FLD float ptr [EAX + 0x28]          ; 0042e0bb
    FXCH                                ; 0042e0be
    FADDP ST2,ST0                       ; 0042e0c0
    FSUB float ptr [EBX + 0x8]          ; 0042e0c2
    FMUL ST0                            ; 0042e0c5
    FADDP                               ; 0042e0c7
    FSQRT                               ; 0042e0c9
    FCOMP double ptr [0x006174d2]       ; 0042e0cb | DOUBLE_006174d2
    FNSTSW AX                           ; 0042e0d1
    SAHF                                ; 0042e0d3
    JNC 0x0042e1ab                      ; 0042e0d4
        ;   XREF to: 0042e1ab (CONDITIONAL_JUMP)  ; LAB_0042e1ab
    MOV dword ptr [EDI + 0x25f0],0x0    ; 0042e0da
    MOV dword ptr [EDI + 0x25ec],0x0    ; 0042e0e4
        ;   Label: LAB_0042e0e4
    MOV dword ptr [EDI + 0x25f0],0x0    ; 0042e0ee
        ;   Label: LAB_0042e0ee
    XOR EAX,EAX                         ; 0042e0f8
    XOR ECX,ECX                         ; 0042e0fa
    XOR EBP,EBP                         ; 0042e0fc
    MOV dword ptr [ESP + 0x1f58],EAX    ; 0042e0fe
    MOV dword ptr [ESP + 0x1f60],EAX    ; 0042e105
    LEA EAX,[EDI + 0x20]                ; 0042e10c
    MOV dword ptr [ESP + 0x1f5c],ECX    ; 0042e10f
    MOV dword ptr [ESP + 0x1f64],EAX    ; 0042e116
    MOV ESI,dword ptr [0x006810c8]      ; 0042e11d | g_CDemonSetPtr
        ;   Label: LAB_0042e11d
    MOV EAX,dword ptr [ESP + 0x1f60]    ; 0042e123
    CMP EAX,dword ptr [ESI + 0x154e64]  ; 0042e12a | DAT_032690dc
    JGE 0x0042e279                      ; 0042e130
        ;   XREF to: 0042e279 (CONDITIONAL_JUMP)  ; LAB_0042e279
    ADD ESI,dword ptr [ESP + 0x1f5c]    ; 0042e136
    PUSH 0x0                            ; 0042e13d
    MOV ESI,dword ptr [ESI + 0x154e68]  ; 0042e13f | DAT_032690e0 | DAT_032690e4
    PUSH ESI                            ; 0042e145
    MOV EDX,dword ptr [ESP + 0x1f94]    ; 0042e146
    PUSH EDX                            ; 0042e14d
    CALL shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20 ; 0042e14e
        ;   XREF to: 004a6e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20(char * pattern, char * target_string, int case_sensitive)
    ADD ESP,0xc                         ; 0042e153
    TEST EAX,EAX                        ; 0042e156
    JNZ 0x0042e227                      ; 0042e158
        ;   XREF to: 0042e227 (CONDITIONAL_JUMP)  ; LAB_0042e227
    MOV ESI,dword ptr [ESP + 0x1f60]    ; 0042e15e
        ;   Label: LAB_0042e15e
    MOV EBX,dword ptr [ESP + 0x1f5c]    ; 0042e165
    INC ESI                             ; 0042e16c
    ADD EBX,0x4                         ; 0042e16d
    MOV dword ptr [ESP + 0x1f60],ESI    ; 0042e170
    MOV dword ptr [ESP + 0x1f5c],EBX    ; 0042e177
    JMP 0x0042e11d                      ; 0042e17e
        ;   XREF to: 0042e11d (UNCONDITIONAL_JUMP)  ; LAB_0042e11d
    MOV dword ptr [EDI + 0x25f0],0x0    ; 0042e180
        ;   Label: LAB_0042e180
    MOV dword ptr [EDI + 0x25f4],0x0    ; 0042e18a
    MOV dword ptr [EDI + 0x25ec],0x0    ; 0042e194
    XOR EAX,EAX                         ; 0042e19e
    ADD ESP,0x1f70                      ; 0042e1a0
    POP EBP                             ; 0042e1a6
    POP EDI                             ; 0042e1a7
    POP ESI                             ; 0042e1a8
    POP EBX                             ; 0042e1a9
    RET                                 ; 0042e1aa
    CMP dword ptr [EDI + 0x25f0],0x0    ; 0042e1ab
        ;   Label: LAB_0042e1ab
    JZ 0x0042e0e4                       ; 0042e1b2
        ;   XREF to: 0042e0e4 (CONDITIONAL_JUMP)  ; LAB_0042e0e4
    MOV ESI,dword ptr [EDI + 0x25ec]    ; 0042e1b8
    TEST ESI,ESI                        ; 0042e1be
    JZ 0x0042e0ee                       ; 0042e1c0
        ;   XREF to: 0042e0ee (CONDITIONAL_JUMP)  ; LAB_0042e0ee
    PUSH ESI                            ; 0042e1c6
    LEA EAX,[EDI + 0x20]                ; 0042e1c7
    PUSH EAX                            ; 0042e1ca
    CALL core_waypoint.cpp_CWayPoint_FUN_005ec320 ; 0042e1cb
        ;   XREF to: 005ec320 (UNCONDITIONAL_CALL)  ; int core_waypoint.cpp_CWayPoint_FUN_005ec320(CWayPoint * this_ptr)
    ADD ESP,0x8                         ; 0042e1d0
    MOV dword ptr [EDI + 0x25f0],EAX    ; 0042e1d3
    CMP dword ptr [EDI + 0x25f0],0x0    ; 0042e1d9
        ;   Label: LAB_0042e1d9
    JZ 0x0042e2f6                       ; 0042e1e0
        ;   XREF to: 0042e2f6 (CONDITIONAL_JUMP)  ; LAB_0042e2f6
    PUSH 0x40000000                     ; 0042e1e6
    PUSH 0x3f800000                     ; 0042e1eb
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 0042e1f0
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
        ;   Label: LAB_0042e1f0
    MOV EBX,dword ptr [EDI + 0x25f0]    ; 0042e20c
        ;   Label: LAB_0042e20c
    TEST EBX,EBX                        ; 0042e212
    JNZ 0x0042e305                      ; 0042e214
        ;   XREF to: 0042e305 (CONDITIONAL_JUMP)  ; LAB_0042e305
    XOR EAX,EAX                         ; 0042e21a
    ADD ESP,0x1f70                      ; 0042e21c
    POP EBP                             ; 0042e222
    POP EDI                             ; 0042e223
    POP ESI                             ; 0042e224
    POP EBX                             ; 0042e225
    RET                                 ; 0042e226
    MOV EAX,dword ptr [ESP + 0x1f64]    ; 0042e227
        ;   Label: LAB_0042e227
    LEA EBX,[ESI + 0x20]                ; 0042e22e
    FLD float ptr [EAX]                 ; 0042e231
    FSUB float ptr [EBX]                ; 0042e233
    FMUL ST0                            ; 0042e235
    FLD float ptr [EAX + 0x4]           ; 0042e237
    FSUB float ptr [EBX + 0x4]          ; 0042e23a
    FMUL ST0                            ; 0042e23d
    FLD float ptr [EAX + 0x8]           ; 0042e23f
    FXCH                                ; 0042e242
    FADDP ST2,ST0                       ; 0042e244
    FSUB float ptr [EBX + 0x8]          ; 0042e246
    FMUL ST0                            ; 0042e249
    FADDP                               ; 0042e24b
    FSQRT                               ; 0042e24d
    FCOMP float ptr [0x006174da]        ; 0042e24f | FLOAT_006174da
    FNSTSW AX                           ; 0042e255
    SAHF                                ; 0042e257
    JC 0x0042e15e                       ; 0042e258
        ;   XREF to: 0042e15e (CONDITIONAL_JUMP)  ; LAB_0042e15e
    MOV ECX,dword ptr [ESP + 0x1f58]    ; 0042e25e
    ADD EBP,0x4                         ; 0042e265
    INC ECX                             ; 0042e268
    MOV dword ptr [ESP + EBP*0x1 + -0x4],ESI ; 0042e269
    MOV dword ptr [ESP + 0x1f58],ECX    ; 0042e26d
    JMP 0x0042e15e                      ; 0042e274
        ;   XREF to: 0042e15e (UNCONDITIONAL_JUMP)  ; LAB_0042e15e
    CMP dword ptr [ESP + 0x1f58],0x0    ; 0042e279
        ;   Label: LAB_0042e279
    JLE 0x0042e1d9                      ; 0042e281
        ;   XREF to: 0042e1d9 (CONDITIONAL_JUMP)  ; LAB_0042e1d9
    MOV EAX,dword ptr [ESP + 0x1f58]    ; 0042e287
    LEA EBP,[EDI + 0x20]                ; 0042e28e
    DEC EAX                             ; 0042e291
    XOR ESI,ESI                         ; 0042e292
    MOV dword ptr [ESP + 0x1f54],EAX    ; 0042e294
    MOV EAX,dword ptr [ESP + 0x1f54]    ; 0042e29b
        ;   Label: LAB_0042e29b
    PUSH EAX                            ; 0042e2a2
    PUSH 0x0                            ; 0042e2a3
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 0042e2a5
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
    LEA EBX,[EAX*0x4 + 0x0]             ; 0042e2aa
    ADD ESP,0x8                         ; 0042e2b1
    MOV EDX,dword ptr [ESP + EBX*0x1]   ; 0042e2b4
    TEST EDX,EDX                        ; 0042e2b7
    JNZ 0x0042e2c6                      ; 0042e2b9
        ;   XREF to: 0042e2c6 (CONDITIONAL_JUMP)  ; LAB_0042e2c6
    INC ESI                             ; 0042e2bb
    CMP ESI,0xa                         ; 0042e2bc
    JL 0x0042e29b                       ; 0042e2bf
        ;   XREF to: 0042e29b (CONDITIONAL_JUMP)  ; LAB_0042e29b
    JMP 0x0042e1d9                      ; 0042e2c1
        ;   XREF to: 0042e1d9 (UNCONDITIONAL_JUMP)  ; LAB_0042e1d9
    PUSH EDX                            ; 0042e2c6
        ;   Label: LAB_0042e2c6
    PUSH EBP                            ; 0042e2c7
    CALL core_waypoint.cpp_CWayPoint_FUN_005ec320 ; 0042e2c8
        ;   XREF to: 005ec320 (UNCONDITIONAL_CALL)  ; int core_waypoint.cpp_CWayPoint_FUN_005ec320(CWayPoint * this_ptr)
    ADD ESP,0x8                         ; 0042e2cd
    MOV dword ptr [EDI + 0x25f0],EAX    ; 0042e2d0
    TEST EAX,EAX                        ; 0042e2d6
    JZ 0x0042e2e8                       ; 0042e2d8
        ;   XREF to: 0042e2e8 (CONDITIONAL_JUMP)  ; LAB_0042e2e8
    MOV EAX,dword ptr [ESP + EBX*0x1]   ; 0042e2da
    MOV dword ptr [EDI + 0x25ec],EAX    ; 0042e2dd
    JMP 0x0042e1d9                      ; 0042e2e3
        ;   XREF to: 0042e1d9 (UNCONDITIONAL_JUMP)  ; LAB_0042e1d9
    MOV dword ptr [ESP + EBX*0x1],EAX   ; 0042e2e8
        ;   Label: LAB_0042e2e8
    INC ESI                             ; 0042e2eb
    CMP ESI,0xa                         ; 0042e2ec
    JL 0x0042e29b                       ; 0042e2ef
        ;   XREF to: 0042e29b (CONDITIONAL_JUMP)  ; LAB_0042e29b
    JMP 0x0042e1d9                      ; 0042e2f1
        ;   XREF to: 0042e1d9 (UNCONDITIONAL_JUMP)  ; LAB_0042e1d9
    PUSH 0x41200000                     ; 0042e2f6
        ;   Label: LAB_0042e2f6
    PUSH 0x40800000                     ; 0042e2fb
    JMP 0x0042e1f0                      ; 0042e300
        ;   XREF to: 0042e1f0 (UNCONDITIONAL_JUMP)  ; LAB_0042e1f0
    PUSH 0x0                            ; 0042e305
        ;   Label: LAB_0042e305
    PUSH 0x0                            ; 0042e307
    PUSH 0x3f87558                      ; 0042e309 | g_ZeroVector
    MOV EAX,EBX                         ; 0042e30e
    MOV EBX,dword ptr [EBX + 0x154]     ; 0042e310
    PUSH EAX                            ; 0042e316
    CALL dword ptr [EBX + 0xbc]         ; 0042e317
    ADD ESP,0x4                         ; 0042e31d
    PUSH EAX                            ; 0042e320
    MOV EAX,dword ptr [EDI + 0x25f0]    ; 0042e321
    ADD EAX,0x20                        ; 0042e327
    PUSH EAX                            ; 0042e32a
    PUSH EDI                            ; 0042e32b
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 ; 0042e32c
        ;   XREF to: 004286e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 0042e331
    TEST EAX,EAX                        ; 0042e334
    JZ 0x0042e347                       ; 0042e336
        ;   XREF to: 0042e347 (CONDITIONAL_JUMP)  ; LAB_0042e347
    JL 0x0042e357                       ; 0042e338
        ;   XREF to: 0042e357 (CONDITIONAL_JUMP)  ; LAB_0042e357
    XOR EAX,EAX                         ; 0042e33a
    ADD ESP,0x1f70                      ; 0042e33c
    POP EBP                             ; 0042e342
    POP EDI                             ; 0042e343
    POP ESI                             ; 0042e344
    POP EBX                             ; 0042e345
    RET                                 ; 0042e346
    MOV EAX,0x1                         ; 0042e347
        ;   Label: LAB_0042e347
    ADD ESP,0x1f70                      ; 0042e34c
    POP EBP                             ; 0042e352
    POP EDI                             ; 0042e353
    POP ESI                             ; 0042e354
    POP EBX                             ; 0042e355
    RET                                 ; 0042e356
    MOV dword ptr [EDI + 0x25f0],0x0    ; 0042e357
        ;   Label: LAB_0042e357
    XOR EAX,EAX                         ; 0042e361
    ADD ESP,0x1f70                      ; 0042e363
    POP EBP                             ; 0042e369
    POP EDI                             ; 0042e36a
    POP ESI                             ; 0042e36b
    POP EBX                             ; 0042e36c
    RET                                 ; 0042e36d

