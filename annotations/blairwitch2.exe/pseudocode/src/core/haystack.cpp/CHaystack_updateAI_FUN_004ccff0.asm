; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_haystack_cpp_CHaystack_updateAI_FUN_004ccff0(CHaystack *this_ptr,float delta_time)
;
; Parameters:
; CHaystack *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0xec]:4  local_ec
; undefined8       Stack[-0xe8]:8  local_e8
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined        Stack[-0xd8]:1  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined        Stack[-0xcc]:1  local_cc
; undefined4       Stack[-0xbc]:4  local_bc
; undefined        Stack[-0xb4]:1  local_b4
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined        Stack[-0x78]:1  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
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
;
; XREF[1]:
;   core_haystack.cpp_CHaystack_process_FUN_004cc990 at 004cccbc
;
; Referenced Globals:
;   undefined4 DAT_005d9942
;   undefined4 DAT_005d9946
;   undefined4 DAT_005d994e
;   undefined4 DAT_005d9956
;   undefined4 DAT_005d995e
;   undefined4 DAT_005d9966
;   undefined4 DAT_005d996e
;   undefined4 DAT_005d9976
;   undefined4 DAT_005d997e
;   undefined4 DAT_005d9982
;   undefined4 DAT_01cedef4
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0
;   core_hero.cpp_FUN_004d00c0
;   core_motion.cpp_FUN_005035c0
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_00513650
;   core_path.cpp_getPathMap_FUN_00513ea0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
;   crt_memory.c_memset_FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ccff0
        ;   Label: core_haystack.cpp_CHaystack_updateAI_FUN_004ccff0
    PUSH ESI                            ; 004ccff1
    PUSH EDI                            ; 004ccff2
    PUSH EBP                            ; 004ccff3
    MOV EBP,ESP                         ; 004ccff4
    SUB ESP,0xd4                        ; 004ccff6
    AND ESP,0xfffffff8                  ; 004ccffc
    MOV EBX,dword ptr [EBP + 0x14]      ; 004ccfff
    MOV ECX,0x3e800000                  ; 004cd002
    MOV ESI,0x3f490fdb                  ; 004cd007
    MOV EAX,[0x01cedef4]                ; 004cd00c | DAT_01cedef4
    PUSH 0x34                           ; 004cd011
    XOR EDX,EDX                         ; 004cd013
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004cd015
    PUSH EDX                            ; 004cd01c
    MOV dword ptr [ESP + 0xc4],EAX      ; 004cd01d
    LEA EAX,[EBX + 0x10a68]             ; 004cd024
    MOV dword ptr [ESP + 0xcc],EDX      ; 004cd02a
    PUSH EAX                            ; 004cd031
    MOV dword ptr [ESP + 0xd4],ECX      ; 004cd032
    MOV dword ptr [ESP + 0xc4],ESI      ; 004cd039
    CALL crt_memory.c_memset_FUN_005b77c0 ; 004cd040
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    MOV EDI,dword ptr [EBX + 0x25638]   ; 004cd045
    ADD ESP,0xc                         ; 004cd04b
    TEST EDI,EDI                        ; 004cd04e
    JZ 0x004cd474                       ; 004cd050
        ;   XREF to: 004cd474 (CONDITIONAL_JUMP)  ; LAB_004cd474
    LEA EDI,[ESP + 0x4c]                ; 004cd056
    LEA EDX,[EBX + 0x20]                ; 004cd05a
    LEA ESI,[ESP + 0x88]                ; 004cd05d
    MOV EAX,[0x01cedef4]                ; 004cd064 | DAT_01cedef4
    FLD float ptr [EDX]                 ; 004cd069
    FLD float ptr [EDX + 0x4]           ; 004cd06b
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004cd06e
    FLD float ptr [EDX + 0x8]           ; 004cd075
    FXCH ST2                            ; 004cd078
    FSUB float ptr [EAX + 0x20]         ; 004cd07a
    FXCH                                ; 004cd07d
    FSUB float ptr [EAX + 0x24]         ; 004cd07f
    FXCH ST2                            ; 004cd082
    FSUB float ptr [EAX + 0x28]         ; 004cd084
    FXCH                                ; 004cd087
    FSTP float ptr [ESP + 0x88]         ; 004cd089
    FXCH                                ; 004cd090
    FSTP float ptr [ESP + 0x8c]         ; 004cd092
    FSTP float ptr [ESP + 0x90]         ; 004cd099
    MOVSD ES:EDI,ESI                    ; 004cd0a0
    MOVSD ES:EDI,ESI                    ; 004cd0a1
    MOVSD ES:EDI,ESI                    ; 004cd0a2
    FLD float ptr [ESP + 0x50]          ; 004cd0a3
    FMUL ST0                            ; 004cd0a7
    FLD float ptr [ESP + 0x4c]          ; 004cd0a9
    FMUL ST0                            ; 004cd0ad
    FADDP                               ; 004cd0af
    FLD float ptr [ESP + 0x54]          ; 004cd0b1
    FMUL ST0                            ; 004cd0b5
    FADDP                               ; 004cd0b7
    FSQRT                               ; 004cd0b9
    MOV EAX,dword ptr [EBX + 0x25638]   ; 004cd0bb
    FSTP float ptr [ESP + 0xa0]         ; 004cd0c1
    CMP EAX,0x3                         ; 004cd0c8
    JNZ 0x004cd47b                      ; 004cd0cb
        ;   XREF to: 004cd47b (CONDITIONAL_JUMP)  ; LAB_004cd47b
    MOV EDX,dword ptr [EBX + 0x25638]   ; 004cd0d1
        ;   Label: LAB_004cd0d1
    CMP EDX,0x2                         ; 004cd0d7
    JNZ 0x004cd496                      ; 004cd0da
        ;   XREF to: 004cd496 (CONDITIONAL_JUMP)  ; LAB_004cd496
    LEA EAX,[ESP + 0xc]                 ; 004cd0e0
        ;   Label: LAB_004cd0e0
    PUSH EAX                            ; 004cd0e4
    MOV ESI,0x461c3f9a                  ; 004cd0e5
    PUSH EBX                            ; 004cd0ea
    MOV dword ptr [ESP + 0x14],ESI      ; 004cd0eb
    CALL core_hero.cpp_FUN_004d00c0     ; 004cd0ef
        ;   XREF to: 004d00c0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d00c0()
    MOV EDX,EAX                         ; 004cd0f4
    ADD ESP,0x8                         ; 004cd0f6
    TEST EAX,EAX                        ; 004cd0f9
    JZ 0x004cd4a4                       ; 004cd0fb
        ;   XREF to: 004cd4a4 (CONDITIONAL_JUMP)  ; LAB_004cd4a4
    FLD float ptr [ESP + 0xc]           ; 004cd101
    FCOMP double ptr [0x005d9946]       ; 004cd105 | DAT_005d9946
    FNSTSW AX                           ; 004cd10b
    SAHF                                ; 004cd10d
    JNC 0x004cd4a4                      ; 004cd10e
        ;   XREF to: 004cd4a4 (CONDITIONAL_JUMP)  ; LAB_004cd4a4
    MOV EAX,0x1                         ; 004cd114
    MOV dword ptr [ESP + 0xbc],EDX      ; 004cd119
    MOV dword ptr [ESP + 0xc4],EAX      ; 004cd120
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004cd127
        ;   Label: LAB_004cd127
    LEA EDI,[ESP + 0x94]                ; 004cd12e
    LEA ESI,[ESP + 0x64]                ; 004cd135
    LEA EDX,[EBX + 0x20]                ; 004cd139
    FLD float ptr [EAX + 0x24]          ; 004cd13c
    FLD float ptr [EAX + 0x28]          ; 004cd13f
    FLD float ptr [EAX + 0x20]          ; 004cd142
    LEA EAX,[ESP + 0x4c]                ; 004cd145
    FSUB float ptr [EDX]                ; 004cd149
    FXCH ST2                            ; 004cd14b
    FSUB float ptr [EDX + 0x4]          ; 004cd14d
    FXCH                                ; 004cd150
    FSUB float ptr [EDX + 0x8]          ; 004cd152
    FXCH ST2                            ; 004cd155
    FSTP float ptr [ESP + 0x64]         ; 004cd157
    FSTP float ptr [ESP + 0x68]         ; 004cd15b
    FSTP float ptr [ESP + 0x6c]         ; 004cd15f
    LEA EDX,[ESP + 0x94]                ; 004cd163
    MOVSD ES:EDI,ESI                    ; 004cd16a
    MOVSD ES:EDI,ESI                    ; 004cd16b
    MOVSD ES:EDI,ESI                    ; 004cd16c
    CMP EAX,EDX                         ; 004cd16d
    JZ 0x004cd192                       ; 004cd16f
        ;   XREF to: 004cd192 (CONDITIONAL_JUMP)  ; LAB_004cd192
    MOV EAX,dword ptr [ESP + 0x94]      ; 004cd171
    MOV dword ptr [ESP + 0x4c],EAX      ; 004cd178
    MOV EAX,dword ptr [ESP + 0x98]      ; 004cd17c
    MOV dword ptr [ESP + 0x50],EAX      ; 004cd183
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004cd187
    MOV dword ptr [ESP + 0x54],EAX      ; 004cd18e
    FLD float ptr [ESP + 0x50]          ; 004cd192
        ;   Label: LAB_004cd192
    FMUL ST0                            ; 004cd196
    FLD float ptr [ESP + 0x4c]          ; 004cd198
    FMUL ST0                            ; 004cd19c
    FADDP                               ; 004cd19e
    FLD float ptr [ESP + 0x54]          ; 004cd1a0
    FMUL ST0                            ; 004cd1a4
    FADDP                               ; 004cd1a6
    FSQRT                               ; 004cd1a8
    FSTP float ptr [ESP + 0xcc]         ; 004cd1aa
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004cd1b1
    FLD float ptr [ESP + 0xcc]          ; 004cd1b8
    MOV dword ptr [ESP + 0x8],EAX       ; 004cd1bf
    FCOMP double ptr [0x005d994e]       ; 004cd1c3 | DAT_005d994e
    FNSTSW AX                           ; 004cd1c9
    SAHF                                ; 004cd1cb
    JNC 0x004cd519                      ; 004cd1cc
        ;   XREF to: 004cd519 (CONDITIONAL_JUMP)  ; LAB_004cd519
    MOV EDI,dword ptr [ESP + 0xc4]      ; 004cd1d2
    LEA EAX,[EBX + 0x2b4]               ; 004cd1d9
    CMP EDI,0x1                         ; 004cd1df
    JNZ 0x004cd4e8                      ; 004cd1e2
        ;   XREF to: 004cd4e8 (CONDITIONAL_JUMP)  ; LAB_004cd4e8
    CMP dword ptr [EBX + 0x25640],0x0   ; 004cd1e8
    JNZ 0x004cd4c0                      ; 004cd1ef
        ;   XREF to: 004cd4c0 (CONDITIONAL_JUMP)  ; LAB_004cd4c0
    MOV dword ptr [EBX + 0x10a80],EDI   ; 004cd1f5
    CMP dword ptr [ESP + 0xc4],0x1      ; 004cd1fb
        ;   Label: LAB_004cd1fb
    JNZ 0x004cd2d7                      ; 004cd203
        ;   XREF to: 004cd2d7 (CONDITIONAL_JUMP)  ; LAB_004cd2d7
    LEA EAX,[ESP + 0x4c]                ; 004cd209
    PUSH EAX                            ; 004cd20d
    LEA ESI,[ESP + 0x38]                ; 004cd20e
    LEA EDI,[ESP + 0x74]                ; 004cd212
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 004cd216
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[ESP + 0x38]                ; 004cd21b
    ADD ESP,0x4                         ; 004cd21f
    MOVSD ES:EDI,ESI                    ; 004cd222
    MOVSD ES:EDI,ESI                    ; 004cd223
    MOVSD ES:EDI,ESI                    ; 004cd224
    FLD float ptr [ESP + 0x74]          ; 004cd225
    FSUB float ptr [EBX + 0x34]         ; 004cd229
    SUB ESP,0x4                         ; 004cd22c
    FSTP float ptr [ESP]                ; 004cd22f
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 004cd232
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [ESP + 0xd4],EAX      ; 004cd237
    FLD float ptr [ESP + 0xd4]          ; 004cd23e
    FMUL float ptr [0x005d9956]         ; 004cd245 | DAT_005d9956
    ADD ESP,0x4                         ; 004cd24b
    FMUL double ptr [0x005d995e]        ; 004cd24e | DAT_005d995e
    FLD float ptr [ESP + 0xc8]          ; 004cd254
    FCHS                                ; 004cd25b
    FSTP float ptr [ESP + 0xa8]         ; 004cd25d
    FST float ptr [EBX + 0x10a90]       ; 004cd264
    FCOMP float ptr [ESP + 0xa8]        ; 004cd26a
    FNSTSW AX                           ; 004cd271
    SAHF                                ; 004cd273
    JNC 0x004cd283                      ; 004cd274
        ;   XREF to: 004cd283 (CONDITIONAL_JUMP)  ; LAB_004cd283
    MOV EAX,dword ptr [ESP + 0xa8]      ; 004cd276
    MOV dword ptr [EBX + 0x10a90],EAX   ; 004cd27d
    FLD float ptr [EBX + 0x10a90]       ; 004cd283
        ;   Label: LAB_004cd283
    FCOMP float ptr [ESP + 0xc8]        ; 004cd289
    FNSTSW AX                           ; 004cd290
    SAHF                                ; 004cd292
    JBE 0x004cd2a2                      ; 004cd293
        ;   XREF to: 004cd2a2 (CONDITIONAL_JUMP)  ; LAB_004cd2a2
    MOV EAX,dword ptr [ESP + 0xc8]      ; 004cd295
    MOV dword ptr [EBX + 0x10a90],EAX   ; 004cd29c
    FLD float ptr [EBX + 0x10a90]       ; 004cd2a2
        ;   Label: LAB_004cd2a2
    FST double ptr [ESP]                ; 004cd2a8
    FCOMP double ptr [0x005d996e]       ; 004cd2ab | DAT_005d996e
    FNSTSW AX                           ; 004cd2b1
    SAHF                                ; 004cd2b3
    JBE 0x004cd2d7                      ; 004cd2b4
        ;   XREF to: 004cd2d7 (CONDITIONAL_JUMP)  ; LAB_004cd2d7
    FLD double ptr [ESP]                ; 004cd2b6
    FCOMP double ptr [0x005d9976]       ; 004cd2b9 | DAT_005d9976
    FNSTSW AX                           ; 004cd2bf
    SAHF                                ; 004cd2c1
    JNC 0x004cd2d7                      ; 004cd2c2
        ;   XREF to: 004cd2d7 (CONDITIONAL_JUMP)  ; LAB_004cd2d7
    CMP dword ptr [EBX + 0x10a74],0x0   ; 004cd2c4
    JZ 0x004cd2d7                       ; 004cd2cb
        ;   XREF to: 004cd2d7 (CONDITIONAL_JUMP)  ; LAB_004cd2d7
    MOV dword ptr [EBX + 0x10a90],0x0   ; 004cd2cd
    MOV EDX,dword ptr [ESP + 0xbc]      ; 004cd2d7
        ;   Label: LAB_004cd2d7
    LEA EDI,[ESP + 0x40]                ; 004cd2de
    LEA ESI,[ESP + 0x58]                ; 004cd2e2
    LEA EAX,[EBX + 0x20]                ; 004cd2e6
    FLD float ptr [EDX + 0x24]          ; 004cd2e9
    FLD float ptr [EDX + 0x28]          ; 004cd2ec
    FLD float ptr [EDX + 0x20]          ; 004cd2ef
    LEA EDX,[ESP + 0x4c]                ; 004cd2f2
    FSUB float ptr [EAX]                ; 004cd2f6
    FXCH ST2                            ; 004cd2f8
    FSUB float ptr [EAX + 0x4]          ; 004cd2fa
    FXCH                                ; 004cd2fd
    FSUB float ptr [EAX + 0x8]          ; 004cd2ff
    FXCH ST2                            ; 004cd302
    FSTP float ptr [ESP + 0x58]         ; 004cd304
    FSTP float ptr [ESP + 0x5c]         ; 004cd308
    FSTP float ptr [ESP + 0x60]         ; 004cd30c
    LEA EAX,[ESP + 0x40]                ; 004cd310
    MOVSD ES:EDI,ESI                    ; 004cd314
    MOVSD ES:EDI,ESI                    ; 004cd315
    MOVSD ES:EDI,ESI                    ; 004cd316
    CMP EDX,EAX                         ; 004cd317
    JZ 0x004cd333                       ; 004cd319
        ;   XREF to: 004cd333 (CONDITIONAL_JUMP)  ; LAB_004cd333
    MOV EAX,dword ptr [ESP + 0x40]      ; 004cd31b
    MOV dword ptr [ESP + 0x4c],EAX      ; 004cd31f
    MOV EAX,dword ptr [ESP + 0x44]      ; 004cd323
    MOV dword ptr [ESP + 0x50],EAX      ; 004cd327
    MOV EAX,dword ptr [ESP + 0x48]      ; 004cd32b
    MOV dword ptr [ESP + 0x54],EAX      ; 004cd32f
    LEA EAX,[ESP + 0x4c]                ; 004cd333
        ;   Label: LAB_004cd333
    PUSH EAX                            ; 004cd337
    LEA ESI,[ESP + 0x20]                ; 004cd338
    LEA EDI,[ESP + 0x80]                ; 004cd33c
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 004cd343
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[ESP + 0x20]                ; 004cd348
    LEA EDX,[ESP + 0x80]                ; 004cd34c
    ADD ESP,0x4                         ; 004cd353
    LEA EAX,[ESP + 0x4c]                ; 004cd356
    MOVSD ES:EDI,ESI                    ; 004cd35a
    MOVSD ES:EDI,ESI                    ; 004cd35b
    MOVSD ES:EDI,ESI                    ; 004cd35c
    CMP EAX,EDX                         ; 004cd35d
    JZ 0x004cd37f                       ; 004cd35f
        ;   XREF to: 004cd37f (CONDITIONAL_JUMP)  ; LAB_004cd37f
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004cd361
    MOV dword ptr [ESP + 0x4c],EAX      ; 004cd365
    MOV EAX,dword ptr [ESP + 0x80]      ; 004cd369
    MOV dword ptr [ESP + 0x50],EAX      ; 004cd370
    MOV EAX,dword ptr [ESP + 0x84]      ; 004cd374
    MOV dword ptr [ESP + 0x54],EAX      ; 004cd37b
    FLD float ptr [ESP + 0x50]          ; 004cd37f
        ;   Label: LAB_004cd37f
    FSUB float ptr [EBX + 0x34]         ; 004cd383
    SUB ESP,0x4                         ; 004cd386
    FSTP float ptr [ESP]                ; 004cd389
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 004cd38c
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [ESP + 0xd4],EAX      ; 004cd391
    FLD float ptr [ESP + 0xd4]          ; 004cd398
    ADD ESP,0x4                         ; 004cd39f
    FST float ptr [ESP + 0x2c]          ; 004cd3a2
    FCOMP float ptr [ESP + 0xb8]        ; 004cd3a6
    FNSTSW AX                           ; 004cd3ad
    SAHF                                ; 004cd3af
    JBE 0x004cd3bd                      ; 004cd3b0
        ;   XREF to: 004cd3bd (CONDITIONAL_JUMP)  ; LAB_004cd3bd
    MOV EAX,dword ptr [ESP + 0xb8]      ; 004cd3b2
    MOV dword ptr [ESP + 0x2c],EAX      ; 004cd3b9
    FLD float ptr [ESP + 0x2c]          ; 004cd3bd
        ;   Label: LAB_004cd3bd
    FLD float ptr [ESP + 0xb8]          ; 004cd3c1
    FCHS                                ; 004cd3c8
    FSTP float ptr [ESP + 0xb0]         ; 004cd3ca
    FCOMP float ptr [ESP + 0xb0]        ; 004cd3d1
    FNSTSW AX                           ; 004cd3d8
    SAHF                                ; 004cd3da
    JNC 0x004cd3e8                      ; 004cd3db
        ;   XREF to: 004cd3e8 (CONDITIONAL_JUMP)  ; LAB_004cd3e8
    MOV EAX,dword ptr [ESP + 0xb0]      ; 004cd3dd
    MOV dword ptr [ESP + 0x2c],EAX      ; 004cd3e4
    FLD float ptr [EBP + 0x18]          ; 004cd3e8
        ;   Label: LAB_004cd3e8
    FLD float ptr [ESP + 0x2c]          ; 004cd3eb
    FSUB float ptr [EBX + 0x2564c]      ; 004cd3ef
    FXCH                                ; 004cd3f5
    FMUL float ptr [0x005d997e]         ; 004cd3f7 | DAT_005d997e
    FXCH                                ; 004cd3fd
    FSTP float ptr [ESP + 0xc0]         ; 004cd3ff
    FSTP float ptr [ESP + 0xa4]         ; 004cd406
    FLD float ptr [ESP + 0xc0]          ; 004cd40d
    FCOMP float ptr [ESP + 0xa4]        ; 004cd414
    FNSTSW AX                           ; 004cd41b
    SAHF                                ; 004cd41d
    JBE 0x004cd42e                      ; 004cd41e
        ;   XREF to: 004cd42e (CONDITIONAL_JUMP)  ; LAB_004cd42e
    MOV EAX,dword ptr [ESP + 0xa4]      ; 004cd420
    MOV dword ptr [ESP + 0xc0],EAX      ; 004cd427
    FLD float ptr [EBP + 0x18]          ; 004cd42e
        ;   Label: LAB_004cd42e
    FMUL float ptr [0x005d9982]         ; 004cd431 | DAT_005d9982
    FLD float ptr [ESP + 0xc0]          ; 004cd437
    FXCH                                ; 004cd43e
    FSTP float ptr [ESP + 0xb4]         ; 004cd440
    FCOMP float ptr [ESP + 0xb4]        ; 004cd447
    FNSTSW AX                           ; 004cd44e
    SAHF                                ; 004cd450
    JNC 0x004cd461                      ; 004cd451
        ;   XREF to: 004cd461 (CONDITIONAL_JUMP)  ; LAB_004cd461
    MOV EAX,dword ptr [ESP + 0xb4]      ; 004cd453
    MOV dword ptr [ESP + 0xc0],EAX      ; 004cd45a
    FLD float ptr [EBX + 0x2564c]       ; 004cd461
        ;   Label: LAB_004cd461
    FADD float ptr [ESP + 0xc0]         ; 004cd467
    FSTP float ptr [EBX + 0x2564c]      ; 004cd46e
    MOV ESP,EBP                         ; 004cd474
        ;   Label: LAB_004cd474
    POP EBP                             ; 004cd476
    POP EDI                             ; 004cd477
    POP ESI                             ; 004cd478
    POP EBX                             ; 004cd479
    RET                                 ; 004cd47a
    FLD float ptr [ESP + 0xa0]          ; 004cd47b
        ;   Label: LAB_004cd47b
    FCOMP float ptr [0x005d9942]        ; 004cd482 | DAT_005d9942
    FNSTSW AX                           ; 004cd488
    SAHF                                ; 004cd48a
    JC 0x004cd0d1                       ; 004cd48b
        ;   XREF to: 004cd0d1 (CONDITIONAL_JUMP)  ; LAB_004cd0d1
    JMP 0x004cd127                      ; 004cd491
        ;   XREF to: 004cd127 (UNCONDITIONAL_JUMP)  ; LAB_004cd127
    CMP EDX,0x3                         ; 004cd496
        ;   Label: LAB_004cd496
    JZ 0x004cd0e0                       ; 004cd499
        ;   XREF to: 004cd0e0 (CONDITIONAL_JUMP)  ; LAB_004cd0e0
    JMP 0x004cd127                      ; 004cd49f
        ;   XREF to: 004cd127 (UNCONDITIONAL_JUMP)  ; LAB_004cd127
    CMP dword ptr [EBX + 0x25640],0x0   ; 004cd4a4
        ;   Label: LAB_004cd4a4
    JZ 0x004cd127                       ; 004cd4ab
        ;   XREF to: 004cd127 (CONDITIONAL_JUMP)  ; LAB_004cd127
    MOV dword ptr [EBX + 0x10a80],0x1   ; 004cd4b1
    JMP 0x004cd127                      ; 004cd4bb
        ;   XREF to: 004cd127 (UNCONDITIONAL_JUMP)  ; LAB_004cd127
    PUSH EAX                            ; 004cd4c0
        ;   Label: LAB_004cd4c0
    CALL core_motion.cpp_FUN_005035c0   ; 004cd4c1
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004cd4c6
    ADD ESP,0x4                         ; 004cd4c9
    CMP EAX,0x2                         ; 004cd4cc
    JZ 0x004cd1fb                       ; 004cd4cf
        ;   XREF to: 004cd1fb (CONDITIONAL_JUMP)  ; LAB_004cd1fb
    CMP EAX,EDI                         ; 004cd4d5
    JZ 0x004cd1fb                       ; 004cd4d7
        ;   XREF to: 004cd1fb (CONDITIONAL_JUMP)  ; LAB_004cd1fb
    MOV dword ptr [EBX + 0x10a74],EDI   ; 004cd4dd
    JMP 0x004cd1fb                      ; 004cd4e3
        ;   XREF to: 004cd1fb (UNCONDITIONAL_JUMP)  ; LAB_004cd1fb
    PUSH EAX                            ; 004cd4e8
        ;   Label: LAB_004cd4e8
    CALL core_motion.cpp_FUN_005035c0   ; 004cd4e9
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004cd4ee
    ADD ESP,0x4                         ; 004cd4f1
    CMP EAX,0xa                         ; 004cd4f4
    JNZ 0x004cd1fb                      ; 004cd4f7
        ;   XREF to: 004cd1fb (CONDITIONAL_JUMP)  ; LAB_004cd1fb
    CMP dword ptr [EBX + 0x25640],0x0   ; 004cd4fd
    JZ 0x004cd1fb                       ; 004cd504
        ;   XREF to: 004cd1fb (CONDITIONAL_JUMP)  ; LAB_004cd1fb
    MOV dword ptr [EBX + 0x10a80],0x1   ; 004cd50a
    JMP 0x004cd1fb                      ; 004cd514
        ;   XREF to: 004cd1fb (UNCONDITIONAL_JUMP)  ; LAB_004cd1fb
    MOV EDX,dword ptr [ESP + 0xc4]      ; 004cd519
        ;   Label: LAB_004cd519
    XOR EAX,EAX                         ; 004cd520
    TEST EDX,EDX                        ; 004cd522
    JNZ 0x004cd542                      ; 004cd524
        ;   XREF to: 004cd542 (CONDITIONAL_JUMP)  ; LAB_004cd542
    MOV EAX,[0x01cedef4]                ; 004cd526 | DAT_01cedef4
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004cd52b
    PUSH EAX                            ; 004cd532
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004cd533
    CALL dword ptr [EDX + 0xcc]         ; 004cd539
    ADD ESP,0x4                         ; 004cd53f
    TEST EAX,EAX                        ; 004cd542
        ;   Label: LAB_004cd542
    JNZ 0x004cd559                      ; 004cd544
        ;   XREF to: 004cd559 (CONDITIONAL_JUMP)  ; LAB_004cd559
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004cd546
    ADD EAX,0x20                        ; 004cd54d
    PUSH EAX                            ; 004cd550
    CALL core_path.cpp_getPathMap_FUN_00513ea0 ; 004cd551
        ;   XREF to: 00513ea0 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_getPathMap_FUN_00513ea0(CLocation * location)
    ADD ESP,0x4                         ; 004cd556
    MOV ECX,dword ptr [EBX + 0x6c]      ; 004cd559
        ;   Label: LAB_004cd559
    PUSH ECX                            ; 004cd55c
    LEA EDX,[ESP + 0x14]                ; 004cd55d
    PUSH EDX                            ; 004cd561
    LEA EDX,[EBX + 0x20]                ; 004cd562
    PUSH EDX                            ; 004cd565
    PUSH EAX                            ; 004cd566
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_00513650 ; 004cd567
        ;   XREF to: 00513650 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathWithRetry_FUN_00513650(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 004cd56c
    TEST EAX,EAX                        ; 004cd56f
    JZ 0x004cd2d7                       ; 004cd571
        ;   XREF to: 004cd2d7 (CONDITIONAL_JUMP)  ; LAB_004cd2d7
    FLD float ptr [ESP + 0x14]          ; 004cd577
    FSUB float ptr [EBX + 0x34]         ; 004cd57b
    SUB ESP,0x4                         ; 004cd57e
    FSTP float ptr [ESP]                ; 004cd581
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 004cd584
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [ESP + 0xd4],EAX      ; 004cd589
    FLD float ptr [ESP + 0xd4]          ; 004cd590
    FMUL float ptr [0x005d9956]         ; 004cd597 | DAT_005d9956
    ADD ESP,0x4                         ; 004cd59d
    FMUL double ptr [0x005d995e]        ; 004cd5a0 | DAT_005d995e
    FLD float ptr [ESP + 0xc8]          ; 004cd5a6
    FCHS                                ; 004cd5ad
    FSTP float ptr [ESP + 0xac]         ; 004cd5af
    FST float ptr [EBX + 0x10a90]       ; 004cd5b6
    FCOMP float ptr [ESP + 0xac]        ; 004cd5bc
    FNSTSW AX                           ; 004cd5c3
    SAHF                                ; 004cd5c5
    JC 0x004cd60f                       ; 004cd5c6
        ;   XREF to: 004cd60f (CONDITIONAL_JUMP)  ; LAB_004cd60f
    FLD float ptr [EBX + 0x10a90]       ; 004cd5c8
        ;   Label: LAB_004cd5c8
    FCOMP float ptr [ESP + 0xc8]        ; 004cd5ce
    FNSTSW AX                           ; 004cd5d5
    SAHF                                ; 004cd5d7
    JBE 0x004cd5e7                      ; 004cd5d8
        ;   XREF to: 004cd5e7 (CONDITIONAL_JUMP)  ; LAB_004cd5e7
    MOV EAX,dword ptr [ESP + 0xc8]      ; 004cd5da
    MOV dword ptr [EBX + 0x10a90],EAX   ; 004cd5e1
    FLD float ptr [ESP + 0x8]           ; 004cd5e7
        ;   Label: LAB_004cd5e7
    FCOMP double ptr [0x005d9966]       ; 004cd5eb | DAT_005d9966
    FNSTSW AX                           ; 004cd5f1
    SAHF                                ; 004cd5f3
    JNC 0x004cd61e                      ; 004cd5f4
        ;   XREF to: 004cd61e (CONDITIONAL_JUMP)  ; LAB_004cd61e
    CMP dword ptr [ESP + 0xc4],0x1      ; 004cd5f6
    JZ 0x004cd61e                       ; 004cd5fe
        ;   XREF to: 004cd61e (CONDITIONAL_JUMP)  ; LAB_004cd61e
    MOV dword ptr [EBX + 0x10a68],0x1   ; 004cd600
    JMP 0x004cd2d7                      ; 004cd60a
        ;   XREF to: 004cd2d7 (UNCONDITIONAL_JUMP)  ; LAB_004cd2d7
    MOV EAX,dword ptr [ESP + 0xac]      ; 004cd60f
        ;   Label: LAB_004cd60f
    MOV dword ptr [EBX + 0x10a90],EAX   ; 004cd616
    JMP 0x004cd5c8                      ; 004cd61c
        ;   XREF to: 004cd5c8 (UNCONDITIONAL_JUMP)  ; LAB_004cd5c8
    MOV dword ptr [EBX + 0x10a70],0x1   ; 004cd61e
        ;   Label: LAB_004cd61e
    MOV dword ptr [EBX + 0x10a68],0x1   ; 004cd628
    JMP 0x004cd2d7                      ; 004cd632
        ;   XREF to: 004cd2d7 (UNCONDITIONAL_JUMP)  ; LAB_004cd2d7

