; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_moloch_cpp_CMoloch_processAI_FUN_004de1b0(CMoloch *this_ptr,float delta_time)
;
; Parameters:
; CMoloch *        Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
;
; XREF[1]:
;   core_moloch.cpp_CMoloch_process_FUN_004ddb20 at 004dde5b
;
; Referenced Globals:
;   double DOUBLE_0058a812 = 6
;   double DOUBLE_0058a81a = 0.318309886192889
;   double DOUBLE_0058a822 = 4
;   double DOUBLE_0058a82a = 3.14159265350000
;   double DOUBLE_0058a832 = -3.14159265350000
;   int g_LocalHeroIndex
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;   core_charactr.cpp_CCharacter_FUN_0042af70
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_004f1600
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
;   crt_memory.c_memset_FUN_00563cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004de1b0
        ;   Label: core_moloch.cpp_CMoloch_processAI_FUN_004de1b0
    PUSH ESI                            ; 004de1b1
    PUSH EDI                            ; 004de1b2
    PUSH EBP                            ; 004de1b3
    MOV EBP,ESP                         ; 004de1b4
    SUB ESP,0x7c                        ; 004de1b6
    AND ESP,0xfffffff8                  ; 004de1b9
    MOV EBX,dword ptr [EBP + 0x14]      ; 004de1bc
    MOV EDX,0x3e800000                  ; 004de1bf
    PUSH 0x2c                           ; 004de1c4
    MOV ECX,0x3f490fdb                  ; 004de1c6
    MOV ESI,dword ptr [0x01cae0e8]      ; 004de1cb | g_LocalHeroIndex
    PUSH 0x0                            ; 004de1d1
    LEA EAX,[EBX + 0xbc94]              ; 004de1d3
    MOV dword ptr [ESP + 0x78],EDX      ; 004de1d9
    PUSH EAX                            ; 004de1dd
    MOV dword ptr [ESP + 0x78],ECX      ; 004de1de
    MOV ESI,dword ptr [ESI*0x4 + 0x1cae0d8] ; 004de1e2
    CALL crt_memory.c_memset_FUN_00563cc0 ; 004de1e9
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    MOV EDI,dword ptr [EBX + 0x1fa38]   ; 004de1ee
    ADD ESP,0xc                         ; 004de1f4
    TEST EDI,EDI                        ; 004de1f7
    JZ 0x004de49f                       ; 004de1f9
        ;   XREF to: 004de49f (CONDITIONAL_JUMP)  ; LAB_004de49f
    CMP EDI,0x1                         ; 004de1ff
    JNZ 0x004de49f                      ; 004de202
        ;   XREF to: 004de49f (CONDITIONAL_JUMP)  ; LAB_004de49f
    MOV EAX,[0x01cae0e8]                ; 004de208 | g_LocalHeroIndex
    MOV EDX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004de20d
    LEA EAX,[EBX + 0x20]                ; 004de214
    FLD float ptr [EAX]                 ; 004de217
    FSUB float ptr [EDX + 0x20]         ; 004de219
    FSTP float ptr [ESP + 0x1c]         ; 004de21c
    FLD float ptr [EAX + 0x4]           ; 004de220
    FSUB float ptr [EDX + 0x24]         ; 004de223
    FSTP float ptr [ESP + 0x20]         ; 004de226
    FLD float ptr [EAX + 0x8]           ; 004de22a
    FSUB float ptr [EDX + 0x28]         ; 004de22d
    LEA EDX,[ESI + 0x20]                ; 004de230
    FSTP float ptr [ESP + 0x24]         ; 004de233
    FLD float ptr [EDX]                 ; 004de237
    FSUB float ptr [EAX]                ; 004de239
    FSTP float ptr [ESP + 0x4c]         ; 004de23b
    FLD float ptr [EDX + 0x4]           ; 004de23f
    FSUB float ptr [EAX + 0x4]          ; 004de242
    FSTP float ptr [ESP + 0x50]         ; 004de245
    FLD float ptr [EDX + 0x8]           ; 004de249
    LEA EDX,[ESP + 0x1c]                ; 004de24c
    FSUB float ptr [EAX + 0x8]          ; 004de250
    LEA EAX,[ESP + 0x4c]                ; 004de253
    FSTP float ptr [ESP + 0x54]         ; 004de257
    CMP EDX,EAX                         ; 004de25b
    JNZ 0x004de4a6                      ; 004de25d
        ;   XREF to: 004de4a6 (CONDITIONAL_JUMP)  ; LAB_004de4a6
    FLD float ptr [ESP + 0x20]          ; 004de263
        ;   Label: LAB_004de263
    FMUL ST0                            ; 004de267
    FLD float ptr [ESP + 0x1c]          ; 004de269
    FMUL ST0                            ; 004de26d
    FADDP                               ; 004de26f
    FLD float ptr [ESP + 0x24]          ; 004de271
    FMUL ST0                            ; 004de275
    FADDP                               ; 004de277
    FSQRT                               ; 004de279
    MOV EDX,dword ptr [0x01cae0e8]      ; 004de27b | g_LocalHeroIndex
    SHL EDX,0x2                         ; 004de281
    MOV dword ptr [EBX + 0x2410],0x0    ; 004de284
    FCOMP double ptr [0x0058a812]       ; 004de28e | DOUBLE_0058a812
    FNSTSW AX                           ; 004de294
    SAHF                                ; 004de296
    JBE 0x004de4c3                      ; 004de297
        ;   XREF to: 004de4c3 (CONDITIONAL_JUMP)  ; LAB_004de4c3
    MOV EAX,dword ptr [EDX + 0x1cae0d8] ; 004de29d
    PUSH EAX                            ; 004de2a3
    MOV EDX,dword ptr [EAX + 0x14c]     ; 004de2a4
    CALL dword ptr [EDX + 0xbc]         ; 004de2aa
    ADD ESP,0x4                         ; 004de2b0
    MOV EDX,dword ptr [EBX + 0x6c]      ; 004de2b3
    PUSH EDX                            ; 004de2b6
    LEA EDX,[ESP + 0x2c]                ; 004de2b7
    PUSH EDX                            ; 004de2bb
    LEA EDX,[EBX + 0x20]                ; 004de2bc
    PUSH EDX                            ; 004de2bf
    PUSH EAX                            ; 004de2c0
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_004f1600 ; 004de2c1
        ;   XREF to: 004f1600 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathWithRetry_FUN_004f1600(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 004de2c6
    TEST EAX,EAX                        ; 004de2c9
    JZ 0x004de33c                       ; 004de2cb
        ;   XREF to: 004de33c (CONDITIONAL_JUMP)  ; LAB_004de33c
    FLD float ptr [ESP + 0x2c]          ; 004de2cd
    FSUB float ptr [EBX + 0x34]         ; 004de2d1
    SUB ESP,0x4                         ; 004de2d4
    FSTP float ptr [ESP]                ; 004de2d7
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004de2da
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)
    MOV dword ptr [ESP + 0x7c],EAX      ; 004de2df
    FLD float ptr [ESP + 0x7c]          ; 004de2e3
    FMUL double ptr [0x0058a81a]        ; 004de2e7 | DOUBLE_0058a81a
    ADD ESP,0x4                         ; 004de2ed
    FMUL double ptr [0x0058a822]        ; 004de2f0 | DOUBLE_0058a822
    FLD float ptr [ESP + 0x70]          ; 004de2f6
    FCHS                                ; 004de2fa
    FSTP float ptr [ESP + 0x68]         ; 004de2fc
    FST float ptr [EBX + 0xbcb8]        ; 004de300
    FCOMP float ptr [ESP + 0x68]        ; 004de306
    FNSTSW AX                           ; 004de30a
    SAHF                                ; 004de30c
    JNC 0x004de319                      ; 004de30d
        ;   XREF to: 004de319 (CONDITIONAL_JUMP)  ; LAB_004de319
    MOV EAX,dword ptr [ESP + 0x68]      ; 004de30f
    MOV dword ptr [EBX + 0xbcb8],EAX    ; 004de313
    FLD float ptr [EBX + 0xbcb8]        ; 004de319
        ;   Label: LAB_004de319
    FCOMP float ptr [ESP + 0x70]        ; 004de31f
    FNSTSW AX                           ; 004de323
    SAHF                                ; 004de325
    JBE 0x004de332                      ; 004de326
        ;   XREF to: 004de332 (CONDITIONAL_JUMP)  ; LAB_004de332
    MOV EAX,dword ptr [ESP + 0x70]      ; 004de328
    MOV dword ptr [EBX + 0xbcb8],EAX    ; 004de32c
    MOV dword ptr [EBX + 0xbc94],0x1    ; 004de332
        ;   Label: LAB_004de332
    MOV dword ptr [EBX + 0x2dbc],0x0    ; 004de33c
        ;   Label: LAB_004de33c
    FLDZ                                ; 004de346
        ;   Label: LAB_004de346
    FLD float ptr [EBX + 0x2410]        ; 004de348
    FSTP double ptr [ESP + 0x8]         ; 004de34e
    FCOMP double ptr [ESP + 0x8]        ; 004de352
    FNSTSW AX                           ; 004de356
    SAHF                                ; 004de358
    JNC 0x004de52a                      ; 004de359
        ;   XREF to: 004de52a (CONDITIONAL_JUMP)  ; LAB_004de52a
    MOV EAX,dword ptr [ESP + 0x70]      ; 004de35f
    MOV dword ptr [EBX + 0x2410],0x0    ; 004de363
    MOV dword ptr [EBX + 0xbcb8],EAX    ; 004de36d
    LEA EDX,[ESI + 0x20]                ; 004de373
        ;   Label: LAB_004de373
    LEA EAX,[EBX + 0x20]                ; 004de376
    FLD float ptr [EDX]                 ; 004de379
    FSUB float ptr [EAX]                ; 004de37b
    FSTP float ptr [ESP + 0x58]         ; 004de37d
    FLD float ptr [EDX + 0x4]           ; 004de381
    FSUB float ptr [EAX + 0x4]          ; 004de384
    FSTP float ptr [ESP + 0x5c]         ; 004de387
    FLD float ptr [EDX + 0x8]           ; 004de38b
    LEA EDX,[ESP + 0x1c]                ; 004de38e
    FSUB float ptr [EAX + 0x8]          ; 004de392
    LEA EAX,[ESP + 0x58]                ; 004de395
    FSTP float ptr [ESP + 0x60]         ; 004de399
    CMP EDX,EAX                         ; 004de39d
    JZ 0x004de3b9                       ; 004de39f
        ;   XREF to: 004de3b9 (CONDITIONAL_JUMP)  ; LAB_004de3b9
    MOV EAX,dword ptr [ESP + 0x58]      ; 004de3a1
    MOV dword ptr [ESP + 0x1c],EAX      ; 004de3a5
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004de3a9
    MOV dword ptr [ESP + 0x20],EAX      ; 004de3ad
    MOV EAX,dword ptr [ESP + 0x60]      ; 004de3b1
    MOV dword ptr [ESP + 0x24],EAX      ; 004de3b5
    LEA EAX,[ESP + 0x1c]                ; 004de3b9
        ;   Label: LAB_004de3b9
    PUSH EAX                            ; 004de3bd
    LEA EAX,[ESP + 0x44]                ; 004de3be
    PUSH EAX                            ; 004de3c2
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 004de3c3
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    MOV EDX,EAX                         ; 004de3c8
    LEA EAX,[ESP + 0x24]                ; 004de3ca
    ADD ESP,0x8                         ; 004de3ce
    CMP EAX,EDX                         ; 004de3d1
    JZ 0x004de3e9                       ; 004de3d3
        ;   XREF to: 004de3e9 (CONDITIONAL_JUMP)  ; LAB_004de3e9
    MOV EAX,dword ptr [EDX]             ; 004de3d5
    MOV dword ptr [ESP + 0x1c],EAX      ; 004de3d7
    MOV EAX,dword ptr [EDX + 0x4]       ; 004de3db
    MOV dword ptr [ESP + 0x20],EAX      ; 004de3de
    MOV EAX,dword ptr [EDX + 0x8]       ; 004de3e2
    MOV dword ptr [ESP + 0x24],EAX      ; 004de3e5
    FLD float ptr [ESP + 0x20]          ; 004de3e9
        ;   Label: LAB_004de3e9
    FSUB float ptr [EBX + 0x34]         ; 004de3ed
    SUB ESP,0x4                         ; 004de3f0
    FSTP float ptr [ESP]                ; 004de3f3
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004de3f6
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)
    MOV dword ptr [ESP + 0x7c],EAX      ; 004de3fb
    FLD float ptr [ESP + 0x7c]          ; 004de3ff
    ADD ESP,0x4                         ; 004de403
    FST float ptr [ESP + 0x38]          ; 004de406
    FCOMP float ptr [ESP + 0x6c]        ; 004de40a
    FNSTSW AX                           ; 004de40e
    SAHF                                ; 004de410
    JBE 0x004de41b                      ; 004de411
        ;   XREF to: 004de41b (CONDITIONAL_JUMP)  ; LAB_004de41b
    MOV EAX,dword ptr [ESP + 0x6c]      ; 004de413
    MOV dword ptr [ESP + 0x38],EAX      ; 004de417
    FLD float ptr [ESP + 0x38]          ; 004de41b
        ;   Label: LAB_004de41b
    FLD float ptr [ESP + 0x6c]          ; 004de41f
    FCHS                                ; 004de423
    FSTP float ptr [ESP + 0x64]         ; 004de425
    FCOMP float ptr [ESP + 0x64]        ; 004de429
    FNSTSW AX                           ; 004de42d
    SAHF                                ; 004de42f
    JNC 0x004de43a                      ; 004de430
        ;   XREF to: 004de43a (CONDITIONAL_JUMP)  ; LAB_004de43a
    MOV EAX,dword ptr [ESP + 0x64]      ; 004de432
    MOV dword ptr [ESP + 0x38],EAX      ; 004de436
    FLD float ptr [ESP + 0x38]          ; 004de43a
        ;   Label: LAB_004de43a
    FLD float ptr [EBP + 0x18]          ; 004de43e
    FXCH                                ; 004de441
    FSUB float ptr [EBX + 0x229f4]      ; 004de443
    FXCH                                ; 004de449
    FMUL double ptr [0x0058a82a]        ; 004de44b | DOUBLE_0058a82a
    FXCH                                ; 004de451
    FST float ptr [ESP + 0x18]          ; 004de453
    FXCH                                ; 004de457
    FSTP double ptr [ESP + 0x10]        ; 004de459
    FCOMP double ptr [ESP + 0x10]       ; 004de45d
    FNSTSW AX                           ; 004de461
    SAHF                                ; 004de463
    JBE 0x004de46e                      ; 004de464
        ;   XREF to: 004de46e (CONDITIONAL_JUMP)  ; LAB_004de46e
    FLD double ptr [ESP + 0x10]         ; 004de466
    FSTP float ptr [ESP + 0x18]         ; 004de46a
    FLD float ptr [EBP + 0x18]          ; 004de46e
        ;   Label: LAB_004de46e
    FMUL double ptr [0x0058a832]        ; 004de471 | DOUBLE_0058a832
    FLD float ptr [ESP + 0x18]          ; 004de477
    FXCH                                ; 004de47b
    FSTP double ptr [ESP]               ; 004de47d
    FCOMP double ptr [ESP]              ; 004de480
    FNSTSW AX                           ; 004de483
    SAHF                                ; 004de485
    JNC 0x004de48f                      ; 004de486
        ;   XREF to: 004de48f (CONDITIONAL_JUMP)  ; LAB_004de48f
    FLD double ptr [ESP]                ; 004de488
    FSTP float ptr [ESP + 0x18]         ; 004de48b
    FLD float ptr [EBX + 0x229f4]       ; 004de48f
        ;   Label: LAB_004de48f
    FADD float ptr [ESP + 0x18]         ; 004de495
    FSTP float ptr [EBX + 0x229f4]      ; 004de499
    MOV ESP,EBP                         ; 004de49f
        ;   Label: LAB_004de49f
    POP EBP                             ; 004de4a1
    POP EDI                             ; 004de4a2
    POP ESI                             ; 004de4a3
    POP EBX                             ; 004de4a4
    RET                                 ; 004de4a5
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004de4a6
        ;   Label: LAB_004de4a6
    MOV dword ptr [ESP + 0x1c],EAX      ; 004de4aa
    MOV EAX,dword ptr [ESP + 0x50]      ; 004de4ae
    MOV dword ptr [ESP + 0x20],EAX      ; 004de4b2
    MOV EAX,dword ptr [ESP + 0x54]      ; 004de4b6
    MOV dword ptr [ESP + 0x24],EAX      ; 004de4ba
    JMP 0x004de263                      ; 004de4be
        ;   XREF to: 004de263 (UNCONDITIONAL_JUMP)  ; LAB_004de263
    MOV EAX,dword ptr [EDX + 0x1cae0d8] ; 004de4c3
        ;   Label: LAB_004de4c3
    PUSH EAX                            ; 004de4c9
    MOV EDX,dword ptr [EAX + 0x14c]     ; 004de4ca
    CALL dword ptr [EDX + 0x140]        ; 004de4d0
    ADD ESP,0x4                         ; 004de4d6
    TEST EAX,EAX                        ; 004de4d9
    JNZ 0x004de346                      ; 004de4db
        ;   XREF to: 004de346 (CONDITIONAL_JUMP)  ; LAB_004de346
    PUSH dword ptr [EBP + 0x18]         ; 004de4e1
    PUSH EBX                            ; 004de4e4
    CALL core_charactr.cpp_CCharacter_FUN_0042af70 ; 004de4e5
        ;   XREF to: 0042af70 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_0042af70(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004de4ea
    CMP EAX,0x1                         ; 004de4ed
    JC 0x004de346                       ; 004de4f0
        ;   XREF to: 004de346 (CONDITIONAL_JUMP)  ; LAB_004de346
    JA 0x004de520                       ; 004de4f6
        ;   XREF to: 004de520 (CONDITIONAL_JUMP)  ; LAB_004de520
    MOV dword ptr [EBX + 0xbc94],0x1    ; 004de4f8
    JMP 0x004de346                      ; 004de502
        ;   XREF to: 004de346 (UNCONDITIONAL_JUMP)  ; LAB_004de346
    MOV dword ptr [EBX + 0xbc9c],0x1    ; 004de507
        ;   Label: LAB_004de507
    MOV dword ptr [EBX + 0xbc94],0x1    ; 004de511
    JMP 0x004de346                      ; 004de51b
        ;   XREF to: 004de346 (UNCONDITIONAL_JUMP)  ; LAB_004de346
    CMP EAX,0x2                         ; 004de520
        ;   Label: LAB_004de520
    JZ 0x004de507                       ; 004de523
        ;   XREF to: 004de507 (CONDITIONAL_JUMP)  ; LAB_004de507
    JMP 0x004de346                      ; 004de525
        ;   XREF to: 004de346 (UNCONDITIONAL_JUMP)  ; LAB_004de346
    JBE 0x004de373                      ; 004de52a
        ;   XREF to: 004de373 (CONDITIONAL_JUMP)  ; LAB_004de373
        ;   Label: LAB_004de52a
    FLD float ptr [ESP + 0x70]          ; 004de530
    MOV dword ptr [EBX + 0x2410],0x0    ; 004de534
    FCHS                                ; 004de53e
    FSTP float ptr [EBX + 0xbcb8]       ; 004de540
    JMP 0x004de373                      ; 004de546
        ;   XREF to: 004de373 (UNCONDITIONAL_JUMP)  ; LAB_004de373

