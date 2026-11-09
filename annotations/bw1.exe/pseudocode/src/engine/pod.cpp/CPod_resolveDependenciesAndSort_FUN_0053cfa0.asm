; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_pod_cpp_CPod_resolveDependenciesAndSort_FUN_0053cfa0(CPod *this_ptr)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   engine_pod.cpp_CPod_dismountPod_FUN_0053d490
;   engine_pod.cpp_CPod_getPodIndexByFilename_FUN_0053d3f0
;   engine_pod.cpp_FUN_0053c3b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053cfa0
        ;   Label: engine_pod.cpp_CPod_resolveDependenciesAndSort_FUN_0053cfa0
    PUSH ESI                            ; 0053cfa1
    PUSH EDI                            ; 0053cfa2
    PUSH EBP                            ; 0053cfa3
    SUB ESP,0xaa0                       ; 0053cfa4
    MOV EBP,dword ptr [ESP + 0xab4]     ; 0053cfaa
    XOR EDX,EDX                         ; 0053cfb1
        ;   Label: LAB_0053cfb1
    MOV EBX,dword ptr [EBP]             ; 0053cfb3
    MOV dword ptr [ESP + 0xa88],EDX     ; 0053cfb6
    MOV dword ptr [ESP + 0xa6c],EDX     ; 0053cfbd
    TEST EBX,EBX                        ; 0053cfc4
    JLE 0x0053d037                      ; 0053cfc6
        ;   XREF to: 0053d037 (CONDITIONAL_JUMP)  ; LAB_0053d037
    MOV dword ptr [ESP + 0xa74],EBP     ; 0053cfc8
    MOV EAX,dword ptr [ESP + 0xa74]     ; 0053cfcf
        ;   Label: LAB_0053cfcf
    MOV EAX,dword ptr [EAX + 0x4]       ; 0053cfd6
    MOV dword ptr [ESP + 0xa98],EAX     ; 0053cfd9
    XOR EAX,EAX                         ; 0053cfe0
    XOR EBX,EBX                         ; 0053cfe2
    MOV dword ptr [ESP + 0xa70],EAX     ; 0053cfe4
    MOV EAX,dword ptr [ESP + 0xa98]     ; 0053cfeb
        ;   Label: LAB_0053cfeb
    MOV EAX,dword ptr [EAX + 0x424]     ; 0053cff2
    CMP EBX,EAX                         ; 0053cff8
    JL 0x0053d126                       ; 0053cffa
        ;   XREF to: 0053d126 (CONDITIONAL_JUMP)  ; LAB_0053d126
    CMP dword ptr [ESP + 0xa70],0x0     ; 0053d000
    JZ 0x0053d177                       ; 0053d008
        ;   XREF to: 0053d177 (CONDITIONAL_JUMP)  ; LAB_0053d177
    MOV EAX,dword ptr [ESP + 0xa88]     ; 0053d00e
        ;   Label: LAB_0053d00e
    PUSH EAX                            ; 0053d015
    PUSH EBP                            ; 0053d016
    CALL engine_pod.cpp_CPod_dismountPod_FUN_0053d490 ; 0053d017
        ;   XREF to: 0053d490 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPod_dismountPod_FUN_0053d490(CPod * this_ptr, int index)
    MOV EDX,0x1                         ; 0053d01c
    ADD ESP,0x8                         ; 0053d021
    MOV dword ptr [ESP + 0xa6c],EDX     ; 0053d024
    MOV EAX,dword ptr [ESP + 0xa88]     ; 0053d02b
        ;   Label: LAB_0053d02b
    CMP EAX,dword ptr [EBP]             ; 0053d032
    JL 0x0053cfcf                       ; 0053d035
        ;   XREF to: 0053cfcf (CONDITIONAL_JUMP)  ; LAB_0053cfcf
    CMP dword ptr [ESP + 0xa6c],0x0     ; 0053d037
        ;   Label: LAB_0053d037
    JNZ 0x0053cfb1                      ; 0053d03f
        ;   XREF to: 0053cfb1 (CONDITIONAL_JUMP)  ; LAB_0053cfb1
    MOV EDI,dword ptr [EBP]             ; 0053d045
    DEC EDI                             ; 0053d048
    TEST EDI,EDI                        ; 0053d049
    JLE 0x0053d07c                      ; 0053d04b
        ;   XREF to: 0053d07c (CONDITIONAL_JUMP)  ; LAB_0053d07c
    XOR EDX,EDX                         ; 0053d04d
        ;   Label: LAB_0053d04d
    TEST EDI,EDI                        ; 0053d04f
    JLE 0x0053d077                      ; 0053d051
        ;   XREF to: 0053d077 (CONDITIONAL_JUMP)  ; LAB_0053d077
    MOV EAX,EBP                         ; 0053d053
    MOV EBX,dword ptr [EAX + 0x4]       ; 0053d055
        ;   Label: LAB_0053d055
    MOV ECX,dword ptr [EAX + 0x8]       ; 0053d058
    MOV ESI,dword ptr [EBX + 0x408]     ; 0053d05b
    CMP ESI,dword ptr [ECX + 0x408]     ; 0053d061
    JLE 0x0053d06f                      ; 0053d067
        ;   XREF to: 0053d06f (CONDITIONAL_JUMP)  ; LAB_0053d06f
    MOV dword ptr [EAX + 0x8],EBX       ; 0053d069
    MOV dword ptr [EAX + 0x4],ECX       ; 0053d06c
    INC EDX                             ; 0053d06f
        ;   Label: LAB_0053d06f
    ADD EAX,0x4                         ; 0053d070
    CMP EDX,EDI                         ; 0053d073
    JL 0x0053d055                       ; 0053d075
        ;   XREF to: 0053d055 (CONDITIONAL_JUMP)  ; LAB_0053d055
    DEC EDI                             ; 0053d077
        ;   Label: LAB_0053d077
    TEST EDI,EDI                        ; 0053d078
    JG 0x0053d04d                       ; 0053d07a
        ;   XREF to: 0053d04d (CONDITIONAL_JUMP)  ; LAB_0053d04d
    XOR ECX,ECX                         ; 0053d07c
        ;   Label: LAB_0053d07c
    MOV ESI,dword ptr [EBP]             ; 0053d07e
    MOV dword ptr [ESP + 0xa68],ECX     ; 0053d081
    MOV dword ptr [ESP + 0xa8c],ECX     ; 0053d088
    TEST ESI,ESI                        ; 0053d08f
    JLE 0x0053d1c7                      ; 0053d091
        ;   XREF to: 0053d1c7 (CONDITIONAL_JUMP)  ; LAB_0053d1c7
    MOV dword ptr [ESP + 0xa64],EBP     ; 0053d097
    XOR EBX,EBX                         ; 0053d09e
        ;   Label: LAB_0053d09e
    MOV EAX,dword ptr [ESP + 0xa64]     ; 0053d0a0
    MOV dword ptr [ESP + 0xa80],EBX     ; 0053d0a7
    MOV EAX,dword ptr [EAX + 0x4]       ; 0053d0ae
    MOV EBX,dword ptr [ESP + 0xa8c]     ; 0053d0b1
    MOV dword ptr [ESP + 0xa84],EAX     ; 0053d0b8
    SHL EBX,0x3                         ; 0053d0bf
    MOV EAX,dword ptr [ESP + 0xa84]     ; 0053d0c2
        ;   Label: LAB_0053d0c2
    MOV ESI,dword ptr [ESP + 0xa80]     ; 0053d0c9
    CMP ESI,dword ptr [EAX + 0x424]     ; 0053d0d0
    JGE 0x0053d19c                      ; 0053d0d6
        ;   XREF to: 0053d19c (CONDITIONAL_JUMP)  ; LAB_0053d19c
    PUSH ESI                            ; 0053d0dc
    MOV EAX,dword ptr [ESP + 0xa88]     ; 0053d0dd
    PUSH EAX                            ; 0053d0e4
    LEA ESI,[ESP + 0x648]               ; 0053d0e5
    LEA EDI,[ESP + 0x960]               ; 0053d0ec
    CALL engine_pod.cpp_FUN_0053c3b0    ; 0053d0f3
        ;   XREF to: 0053c3b0 (UNCONDITIONAL_CALL)  ; undefined engine_pod.cpp_FUN_0053c3b0()
    MOV ECX,0x42                        ; 0053d0f8
    LEA ESI,[ESP + 0x648]               ; 0053d0fd
    ADD ESP,0x8                         ; 0053d104
    MOVSD.REP ES:EDI,ESI                ; 0053d107
    CMP dword ptr [ESP + 0xa58],0x0     ; 0053d109
    JNZ 0x0053d26e                      ; 0053d111
        ;   XREF to: 0053d26e (CONDITIONAL_JUMP)  ; LAB_0053d26e
    INC dword ptr [ESP + 0xa80]         ; 0053d117
        ;   Label: LAB_0053d117
    JMP 0x0053d0c2                      ; 0053d11e
        ;   XREF to: 0053d0c2 (UNCONDITIONAL_JUMP)  ; LAB_0053d0c2
    INC EBX                             ; 0053d120
        ;   Label: LAB_0053d120
    JMP 0x0053cfeb                      ; 0053d121
        ;   XREF to: 0053cfeb (UNCONDITIONAL_JUMP)  ; LAB_0053cfeb
    PUSH EBX                            ; 0053d126
        ;   Label: LAB_0053d126
    MOV ESI,dword ptr [ESP + 0xa9c]     ; 0053d127
    PUSH ESI                            ; 0053d12e
    LEA ESI,[ESP + 0x858]               ; 0053d12f
    LEA EDI,[ESP + 0x750]               ; 0053d136
    CALL engine_pod.cpp_FUN_0053c3b0    ; 0053d13d
        ;   XREF to: 0053c3b0 (UNCONDITIONAL_CALL)  ; undefined engine_pod.cpp_FUN_0053c3b0()
    MOV ECX,0x42                        ; 0053d142
    LEA ESI,[ESP + 0x858]               ; 0053d147
    ADD ESP,0x8                         ; 0053d14e
    MOVSD.REP ES:EDI,ESI                ; 0053d151
    CMP dword ptr [ESP + 0x84c],0x0     ; 0053d153
    JZ 0x0053d120                       ; 0053d15b
        ;   XREF to: 0053d120 (CONDITIONAL_JUMP)  ; LAB_0053d120
    LEA EAX,[ESP + 0x748]               ; 0053d15d
    PUSH EAX                            ; 0053d164
    PUSH EBP                            ; 0053d165
    CALL engine_pod.cpp_CPod_getPodIndexByFilename_FUN_0053d3f0 ; 0053d166
        ;   XREF to: 0053d3f0 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPod_getPodIndexByFilename_FUN_0053d3f0(CPod * this_ptr, char * target_filename)
    ADD ESP,0x8                         ; 0053d16b
    TEST EAX,EAX                        ; 0053d16e
    JGE 0x0053d120                      ; 0053d170
        ;   XREF to: 0053d120 (CONDITIONAL_JUMP)  ; LAB_0053d120
    JMP 0x0053d00e                      ; 0053d172
        ;   XREF to: 0053d00e (UNCONDITIONAL_JUMP)  ; LAB_0053d00e
    MOV EBX,dword ptr [ESP + 0xa88]     ; 0053d177
        ;   Label: LAB_0053d177
    MOV ECX,dword ptr [ESP + 0xa74]     ; 0053d17e
    INC EBX                             ; 0053d185
    ADD ECX,0x4                         ; 0053d186
    MOV dword ptr [ESP + 0xa88],EBX     ; 0053d189
    MOV dword ptr [ESP + 0xa74],ECX     ; 0053d190
    JMP 0x0053d02b                      ; 0053d197
        ;   XREF to: 0053d02b (UNCONDITIONAL_JUMP)  ; LAB_0053d02b
    MOV EDI,dword ptr [ESP + 0xa64]     ; 0053d19c
        ;   Label: LAB_0053d19c
    MOV EAX,dword ptr [ESP + 0xa68]     ; 0053d1a3
    MOV EDX,dword ptr [EBP]             ; 0053d1aa
    ADD EDI,0x4                         ; 0053d1ad
    INC EAX                             ; 0053d1b0
    MOV dword ptr [ESP + 0xa64],EDI     ; 0053d1b1
    MOV dword ptr [ESP + 0xa68],EAX     ; 0053d1b8
    CMP EAX,EDX                         ; 0053d1bf
    JL 0x0053d09e                       ; 0053d1c1
        ;   XREF to: 0053d09e (CONDITIONAL_JUMP)  ; LAB_0053d09e
    MOV ECX,dword ptr [EBP]             ; 0053d1c7
        ;   Label: LAB_0053d1c7
    XOR ESI,ESI                         ; 0053d1ca
    TEST ECX,ECX                        ; 0053d1cc
    JLE 0x0053d263                      ; 0053d1ce
        ;   XREF to: 0053d263 (CONDITIONAL_JUMP)  ; LAB_0053d263
    MOV dword ptr [ESP + 0xa60],EBP     ; 0053d1d4
    MOV EDX,dword ptr [EBP]             ; 0053d1db
        ;   Label: LAB_0053d1db
    MOV dword ptr [ESP + 0xa7c],ESI     ; 0053d1de
    CMP ESI,EDX                         ; 0053d1e5
    JL 0x0053d3af                       ; 0053d1e7
        ;   XREF to: 0053d3af (CONDITIONAL_JUMP)  ; LAB_0053d3af
    MOV EAX,dword ptr [ESP + 0xa7c]     ; 0053d1ed
        ;   Label: LAB_0053d1ed
    CMP EAX,dword ptr [EBP]             ; 0053d1f4
    JL 0x0053d21b                       ; 0053d1f7
        ;   XREF to: 0053d21b (CONDITIONAL_JUMP)  ; LAB_0053d21b
    MOV EAX,0x5edb24                    ; 0053d1f9
    MOV EDX,0x685                       ; 0053d1fe
    PUSH 0x5edb36                       ; 0053d203
    MOV [0x01d1d400],EAX                ; 0053d208 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0053d20d | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0053d213
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0053d218
    MOV EAX,dword ptr [ESP + 0xa7c]     ; 0053d21b
        ;   Label: LAB_0053d21b
    SHL EAX,0x2                         ; 0053d222
    ADD EAX,EBP                         ; 0053d225
    MOV EDX,dword ptr [ESP + 0xa7c]     ; 0053d227
    MOV EDI,dword ptr [EAX + 0x4]       ; 0053d22e
    CMP ESI,EDX                         ; 0053d231
    JGE 0x0053d243                      ; 0053d233
        ;   XREF to: 0053d243 (CONDITIONAL_JUMP)  ; LAB_0053d243
    SUB EAX,0x4                         ; 0053d235
        ;   Label: LAB_0053d235
    MOV ECX,dword ptr [EAX + 0x4]       ; 0053d238
    DEC EDX                             ; 0053d23b
    MOV dword ptr [EAX + 0x8],ECX       ; 0053d23c
    CMP EDX,ESI                         ; 0053d23f
    JG 0x0053d235                       ; 0053d241
        ;   XREF to: 0053d235 (CONDITIONAL_JUMP)  ; LAB_0053d235
    MOV EAX,dword ptr [ESP + 0xa60]     ; 0053d243
        ;   Label: LAB_0053d243
    MOV dword ptr [EAX + 0x4],EDI       ; 0053d24a
    LEA EDI,[EAX + 0x4]                 ; 0053d24d
    INC ESI                             ; 0053d250
    MOV EAX,dword ptr [EBP]             ; 0053d251
    MOV dword ptr [ESP + 0xa60],EDI     ; 0053d254
    CMP ESI,EAX                         ; 0053d25b
    JL 0x0053d1db                       ; 0053d25d
        ;   XREF to: 0053d1db (CONDITIONAL_JUMP)  ; LAB_0053d1db
    ADD ESP,0xaa0                       ; 0053d263
        ;   Label: LAB_0053d263
    POP EBP                             ; 0053d269
    POP EDI                             ; 0053d26a
    POP ESI                             ; 0053d26b
    POP EBX                             ; 0053d26c
    RET                                 ; 0053d26d
    LEA EAX,[ESP + 0x958]               ; 0053d26e
        ;   Label: LAB_0053d26e
    PUSH EAX                            ; 0053d275
    PUSH EBP                            ; 0053d276
    CALL engine_pod.cpp_CPod_getPodIndexByFilename_FUN_0053d3f0 ; 0053d277
        ;   XREF to: 0053d3f0 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPod_getPodIndexByFilename_FUN_0053d3f0(CPod * this_ptr, char * target_filename)
    ADD ESP,0x8                         ; 0053d27c
    MOV ESI,EAX                         ; 0053d27f
    TEST EAX,EAX                        ; 0053d281
    JL 0x0053d117                       ; 0053d283
        ;   XREF to: 0053d117 (CONDITIONAL_JUMP)  ; LAB_0053d117
    CMP dword ptr [ESP + 0xa8c],0xc8    ; 0053d289
    JL 0x0053d2b8                       ; 0053d294
        ;   XREF to: 0053d2b8 (CONDITIONAL_JUMP)  ; LAB_0053d2b8
    MOV EDI,0x5edaeb                    ; 0053d296
    MOV EAX,0x633                       ; 0053d29b
    PUSH 0x5edafd                       ; 0053d2a0
    MOV dword ptr [0x01d1d400],EDI      ; 0053d2a5 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0053d2ab | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0053d2b0
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0053d2b5
    LEA EAX,[ESI*0x4 + 0x0]             ; 0053d2b8
        ;   Label: LAB_0053d2b8
    MOV EDX,dword ptr [ESP + 0xa58]     ; 0053d2bf
    ADD EAX,EBP                         ; 0053d2c6
    TEST EDX,EDX                        ; 0053d2c8
    JL 0x0053d2fb                       ; 0053d2ca
        ;   XREF to: 0053d2fb (CONDITIONAL_JUMP)  ; LAB_0053d2fb
    MOV EAX,dword ptr [EAX + 0x4]       ; 0053d2cc
    MOV dword ptr [ESP + EBX*0x1],EAX   ; 0053d2cf
    MOV EAX,dword ptr [ESP + 0xa84]     ; 0053d2d2
    MOV dword ptr [ESP + EBX*0x1 + 0x4],EAX ; 0053d2d9
        ;   Label: LAB_0053d2d9
    MOV ECX,dword ptr [ESP + 0xa8c]     ; 0053d2dd
    INC ECX                             ; 0053d2e4
    ADD EBX,0x8                         ; 0053d2e5
    MOV dword ptr [ESP + 0xa8c],ECX     ; 0053d2e8
    INC dword ptr [ESP + 0xa80]         ; 0053d2ef
    JMP 0x0053d0c2                      ; 0053d2f6
        ;   XREF to: 0053d0c2 (UNCONDITIONAL_JUMP)  ; LAB_0053d0c2
    MOV EDX,dword ptr [ESP + 0xa84]     ; 0053d2fb
        ;   Label: LAB_0053d2fb
    MOV dword ptr [ESP + EBX*0x1],EDX   ; 0053d302
    MOV EAX,dword ptr [EAX + 0x4]       ; 0053d305
    JMP 0x0053d2d9                      ; 0053d308
        ;   XREF to: 0053d2d9 (UNCONDITIONAL_JUMP)  ; LAB_0053d2d9
    MOV ECX,dword ptr [ESP + 0xa78]     ; 0053d30a
        ;   Label: LAB_0053d30a
    MOV EBX,dword ptr [ESP + 0xa7c]     ; 0053d311
    MOV EDI,dword ptr [EBP]             ; 0053d318
    ADD ECX,0x4                         ; 0053d31b
    INC EBX                             ; 0053d31e
    MOV dword ptr [ESP + 0xa78],ECX     ; 0053d31f
    MOV dword ptr [ESP + 0xa7c],EBX     ; 0053d326
    CMP EBX,EDI                         ; 0053d32d
    JGE 0x0053d1ed                      ; 0053d32f
        ;   XREF to: 0053d1ed (CONDITIONAL_JUMP)  ; LAB_0053d1ed
    XOR EAX,EAX                         ; 0053d335
        ;   Label: LAB_0053d335
    MOV EDX,dword ptr [ESP + 0xa8c]     ; 0053d337
    MOV dword ptr [ESP + 0xa9c],EAX     ; 0053d33e
    TEST EDX,EDX                        ; 0053d345
    JLE 0x0053d396                      ; 0053d347
        ;   XREF to: 0053d396 (CONDITIONAL_JUMP)  ; LAB_0053d396
    MOV EAX,dword ptr [ESP + 0xa78]     ; 0053d349
    MOV dword ptr [ESP + 0xa90],EAX     ; 0053d350
    LEA EAX,[EDX*0x8 + 0x0]             ; 0053d357
    XOR EDI,EDI                         ; 0053d35e
    MOV dword ptr [ESP + 0xa94],EAX     ; 0053d360
    MOV EDX,dword ptr [ESP + 0xa90]     ; 0053d367
        ;   Label: LAB_0053d367
    MOV EAX,dword ptr [ESP + EDI*0x1 + 0x4] ; 0053d36e
    MOV ECX,dword ptr [EDX + 0x4]       ; 0053d372
    CMP EAX,ECX                         ; 0053d375
    JZ 0x0053d3c4                       ; 0053d377
        ;   XREF to: 0053d3c4 (CONDITIONAL_JUMP)  ; LAB_0053d3c4
    MOV ECX,dword ptr [ESP + 0xa9c]     ; 0053d379
        ;   Label: LAB_0053d379
    MOV EBX,dword ptr [ESP + 0xa94]     ; 0053d380
    INC ECX                             ; 0053d387
    ADD EDI,0x8                         ; 0053d388
    MOV dword ptr [ESP + 0xa9c],ECX     ; 0053d38b
    CMP EDI,EBX                         ; 0053d392
    JL 0x0053d367                       ; 0053d394
        ;   XREF to: 0053d367 (CONDITIONAL_JUMP)  ; LAB_0053d367
    MOV EAX,dword ptr [ESP + 0xa9c]     ; 0053d396
        ;   Label: LAB_0053d396
    CMP EAX,dword ptr [ESP + 0xa8c]     ; 0053d39d
    JGE 0x0053d1ed                      ; 0053d3a4
        ;   XREF to: 0053d1ed (CONDITIONAL_JUMP)  ; LAB_0053d1ed
    JMP 0x0053d30a                      ; 0053d3aa
        ;   XREF to: 0053d30a (UNCONDITIONAL_JUMP)  ; LAB_0053d30a
    LEA EAX,[ESI*0x4 + 0x0]             ; 0053d3af
        ;   Label: LAB_0053d3af
    ADD EAX,EBP                         ; 0053d3b6
    MOV dword ptr [ESP + 0xa78],EAX     ; 0053d3b8
    JMP 0x0053d335                      ; 0053d3bf
        ;   XREF to: 0053d335 (UNCONDITIONAL_JUMP)  ; LAB_0053d335
    XOR EAX,ECX                         ; 0053d3c4
        ;   Label: LAB_0053d3c4
    TEST ESI,ESI                        ; 0053d3c6
    JLE 0x0053d3d6                      ; 0053d3c8
        ;   XREF to: 0053d3d6 (CONDITIONAL_JUMP)  ; LAB_0053d3d6
    MOV EDX,EBP                         ; 0053d3ca
    MOV EBX,EDI                         ; 0053d3cc
    MOV ECX,dword ptr [EDX + 0x4]       ; 0053d3ce
        ;   Label: LAB_0053d3ce
    CMP ECX,dword ptr [ESP + EBX*0x1]   ; 0053d3d1
    JNZ 0x0053d3dc                      ; 0053d3d4
        ;   XREF to: 0053d3dc (CONDITIONAL_JUMP)  ; LAB_0053d3dc
    CMP EAX,ESI                         ; 0053d3d6
        ;   Label: LAB_0053d3d6
    JGE 0x0053d396                      ; 0053d3d8
        ;   XREF to: 0053d396 (CONDITIONAL_JUMP)  ; LAB_0053d396
    JMP 0x0053d379                      ; 0053d3da
        ;   XREF to: 0053d379 (UNCONDITIONAL_JUMP)  ; LAB_0053d379
    INC EAX                             ; 0053d3dc
        ;   Label: LAB_0053d3dc
    ADD EDX,0x4                         ; 0053d3dd
    CMP EAX,ESI                         ; 0053d3e0
    JL 0x0053d3ce                       ; 0053d3e2
        ;   XREF to: 0053d3ce (CONDITIONAL_JUMP)  ; LAB_0053d3ce
    CMP EAX,ESI                         ; 0053d3e4
    JGE 0x0053d396                      ; 0053d3e6
        ;   XREF to: 0053d396 (CONDITIONAL_JUMP)  ; LAB_0053d396
    JMP 0x0053d379                      ; 0053d3e8
        ;   XREF to: 0053d379 (UNCONDITIONAL_JUMP)  ; LAB_0053d379

