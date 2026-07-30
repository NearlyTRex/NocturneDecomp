; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200(CGore *this_ptr,CVector3f *position,CVector3f *direction,int count,int blood_type)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   direction
; int              Stack[0x10]:4   count
; int              Stack[0x14]:4   blood_type
; Local Variables:
; undefined4       Stack[-0x78]:4  local_78
; undefined        Stack[-0x74]:1  local_74
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x54]:4  local_54
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
; XREF[17]:
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040b300 at 0040b5e9
;   core_charactr.cpp_CCharacter_dismember_FUN_00427b60 at 00427d8a
;   core_charactr.cpp_CCharacter_processDamage_FUN_00428510 at 004285f5
;   core_charactr.cpp_CCharacter_testDamageLine_FUN_004282d0 at 00428425
;   core_dracbrid.cpp_CDraculaBride_explode_FUN_00459f70 at 0045a183
;   core_enemy.cpp_CEnemy_testAttackLine_FUN_00479990 at 00479a14
;   core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0 at 00479975
;   core_gabriela.cpp_CGabriella_processMotionEvents_FUN_00497410 at 00497745
;   core_ghoul.cpp_CGhoul_process_FUN_004a9270 at 004a9975
;   core_imp.cpp_CImp_process_FUN_004bbaf0 at 004bbd98
;   ... and 7 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
;   core_gore.cpp_CGore_spawnBloodParticles_FUN_004b00f0
;   crt_math.c_atan2_FUN_00566c81
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0200
        ;   Label: core_gore.cpp_CGore_spawnBloodBurst_FUN_004b0200
    PUSH ESI                            ; 004b0201
    PUSH EDI                            ; 004b0202
    PUSH EBP                            ; 004b0203
    MOV EBP,ESP                         ; 004b0204
    SUB ESP,0x64                        ; 004b0206
    AND ESP,0xfffffff8                  ; 004b0209
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004b020c
    MOV ESI,dword ptr [EBP + 0x20]      ; 004b020f
    MOV EDI,dword ptr [EBP + 0x24]      ; 004b0212
    CMP EDI,0x2                         ; 004b0215
    JZ 0x004b0240                       ; 004b0218
        ;   XREF to: 004b0240 (CONDITIONAL_JUMP)  ; LAB_004b0240
    TEST EDX,EDX                        ; 004b021a
    JNZ 0x004b0247                      ; 004b021c
        ;   XREF to: 004b0247 (CONDITIONAL_JUMP)  ; LAB_004b0247
    XOR EBX,EBX                         ; 004b021e
    TEST ESI,ESI                        ; 004b0220
    JLE 0x004b0240                      ; 004b0222
        ;   XREF to: 004b0240 (CONDITIONAL_JUMP)  ; LAB_004b0240
    PUSH EDI                            ; 004b0224
        ;   Label: LAB_004b0224
    PUSH 0x0                            ; 004b0225
    MOV EAX,dword ptr [EBP + 0x18]      ; 004b0227
    PUSH EAX                            ; 004b022a
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b022b
    PUSH EDX                            ; 004b022e
    INC EBX                             ; 004b022f
    CALL core_gore.cpp_CGore_spawnBloodParticles_FUN_004b00f0 ; 004b0230
        ;   XREF to: 004b00f0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodParticles_FUN_004b00f0(CGore * this_ptr, CVector3f * position, CVector3f * velocity, int blood_type)
    ADD ESP,0x10                        ; 004b0235
    CMP EBX,ESI                         ; 004b0238
    JL 0x004b0224                       ; 004b023a
        ;   XREF to: 004b0224 (CONDITIONAL_JUMP)  ; LAB_004b0224
    LEA EAX,[EAX]                       ; 004b023c
    MOV ESP,EBP                         ; 004b0240
        ;   Label: LAB_004b0240
    POP EBP                             ; 004b0242
    POP EDI                             ; 004b0243
    POP ESI                             ; 004b0244
    POP EBX                             ; 004b0245
    RET                                 ; 004b0246
    FLD float ptr [EDX + 0x4]           ; 004b0247
        ;   Label: LAB_004b0247
    FMUL ST0                            ; 004b024a
    FLD float ptr [EDX]                 ; 004b024c
    FMUL ST0                            ; 004b024e
    FADDP                               ; 004b0250
    FLD float ptr [EDX + 0x8]           ; 004b0252
    FMUL ST0                            ; 004b0255
    FADDP                               ; 004b0257
    FSQRT                               ; 004b0259
    LEA EAX,[ESP + 0x38]                ; 004b025b
    FSTP float ptr [ESP + 0x5c]         ; 004b025f
    CMP EAX,EDX                         ; 004b0263
    JZ 0x004b027b                       ; 004b0265
        ;   XREF to: 004b027b (CONDITIONAL_JUMP)  ; LAB_004b027b
    MOV EAX,dword ptr [EDX]             ; 004b0267
    MOV dword ptr [ESP + 0x38],EAX      ; 004b0269
    MOV EAX,dword ptr [EDX + 0x4]       ; 004b026d
    MOV dword ptr [ESP + 0x3c],EAX      ; 004b0270
    MOV EAX,dword ptr [EDX + 0x8]       ; 004b0274
    MOV dword ptr [ESP + 0x40],EAX      ; 004b0277
    FLD float ptr [ESP + 0x3c]          ; 004b027b
        ;   Label: LAB_004b027b
    FMUL ST0                            ; 004b027f
    FLD float ptr [ESP + 0x38]          ; 004b0281
    FMUL ST0                            ; 004b0285
    FADDP                               ; 004b0287
    FLD float ptr [ESP + 0x40]          ; 004b0289
    FMUL ST0                            ; 004b028d
    FADDP                               ; 004b028f
    FSQRT                               ; 004b0291
    FST float ptr [ESP]                 ; 004b0293
    FLDZ                                ; 004b0296
    FCOMPP                              ; 004b0298
    FNSTSW AX                           ; 004b029a
    SAHF                                ; 004b029c
    JNC 0x004b0412                      ; 004b029d
        ;   XREF to: 004b0412 (CONDITIONAL_JUMP)  ; LAB_004b0412
    FLD1                                ; 004b02a3
    FLD float ptr [ESP + 0x38]          ; 004b02a5
    FXCH                                ; 004b02a9
    FDIV float ptr [ESP]                ; 004b02ab
    FXCH                                ; 004b02ae
    FMUL ST1                            ; 004b02b0
    FLD float ptr [ESP + 0x3c]          ; 004b02b2
    FMUL ST2                            ; 004b02b6
    FLD float ptr [ESP + 0x40]          ; 004b02b8
    FMULP ST3                           ; 004b02bc
    FXCH                                ; 004b02be
    FSTP float ptr [ESP + 0x38]         ; 004b02c0
    FSTP float ptr [ESP + 0x3c]         ; 004b02c4
    FSTP float ptr [ESP + 0x40]         ; 004b02c8
    FLD float ptr [ESP + 0x40]          ; 004b02cc
        ;   Label: LAB_004b02cc
    FMUL ST0                            ; 004b02d0
    FLD float ptr [ESP + 0x38]          ; 004b02d2
    FMUL ST0                            ; 004b02d6
    FADDP                               ; 004b02d8
    FSQRT                               ; 004b02da
    FLD float ptr [ESP + 0x3c]          ; 004b02dc
    CALL crt_math.c_atan2_FUN_00566c81  ; 004b02e0
        ;   XREF to: 00566c81 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_atan2_FUN_00566c81(float10 y, float10 x)
    FLD float ptr [ESP + 0x40]          ; 004b02e5
    XOR EAX,EAX                         ; 004b02e9
    FLD float ptr [ESP + 0x38]          ; 004b02eb
    MOV dword ptr [ESP + 0x58],EAX      ; 004b02ef
    CALL crt_math.c_atan2_FUN_00566c81  ; 004b02f3
        ;   XREF to: 00566c81 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_atan2_FUN_00566c81(float10 y, float10 x)
    XOR EBX,EBX                         ; 004b02f8
    FXCH                                ; 004b02fa
    FCHS                                ; 004b02fc
    FSTP float ptr [ESP + 0x50]         ; 004b02fe
    FSTP float ptr [ESP + 0x54]         ; 004b0302
    TEST ESI,ESI                        ; 004b0306
    JLE 0x004b0240                      ; 004b0308
        ;   XREF to: 004b0240 (CONDITIONAL_JUMP)  ; LAB_004b0240
    MOV EAX,dword ptr [ESP + 0x50]      ; 004b030e
        ;   Label: LAB_004b030e
    MOV dword ptr [ESP + 0x44],EAX      ; 004b0312
    MOV EAX,dword ptr [ESP + 0x54]      ; 004b0316
    PUSH 0x3f490fdb                     ; 004b031a
    MOV dword ptr [ESP + 0x4c],EAX      ; 004b031f
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004b0323
    PUSH 0xbf490fdb                     ; 004b0327
    MOV dword ptr [ESP + 0x54],EAX      ; 004b032c
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 004b0330
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x68],EAX      ; 004b0335
    FLD float ptr [ESP + 0x68]          ; 004b0339
    ADD ESP,0x8                         ; 004b033d
    PUSH 0x3f490fdb                     ; 004b0340
    FADD float ptr [ESP + 0x48]         ; 004b0345
    PUSH 0xbf490fdb                     ; 004b0349
    FSTP float ptr [ESP + 0x4c]         ; 004b034e
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 004b0352
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x68],EAX      ; 004b0357
    FLD float ptr [ESP + 0x68]          ; 004b035b
    ADD ESP,0x8                         ; 004b035f
    LEA EAX,[ESP + 0x44]                ; 004b0362
    PUSH EAX                            ; 004b0366
    LEA EAX,[ESP + 0x8]                 ; 004b0367
    FADD float ptr [ESP + 0x4c]         ; 004b036b
    PUSH EAX                            ; 004b036f
    FSTP float ptr [ESP + 0x50]         ; 004b0370
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 004b0374
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004b0379
    MOV EAX,dword ptr [ESP + 0xc]       ; 004b037c
    MOV dword ptr [ESP + 0x44],EAX      ; 004b0380
    MOV EAX,dword ptr [ESP + 0x18]      ; 004b0384
    PUSH 0x3f000000                     ; 004b0388
    MOV dword ptr [ESP + 0x4c],EAX      ; 004b038d
    MOV EAX,dword ptr [ESP + 0x28]      ; 004b0391
    PUSH 0xbf000000                     ; 004b0395
    MOV dword ptr [ESP + 0x54],EAX      ; 004b039a
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 004b039e
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    ADD ESP,0x8                         ; 004b03a3
    FLD float ptr [ESP + 0x5c]          ; 004b03a6
    FLD float ptr [ESP + 0x44]          ; 004b03aa
    FMUL ST1                            ; 004b03ae
    FLD float ptr [ESP + 0x48]          ; 004b03b0
    FMUL ST2                            ; 004b03b4
    FLD float ptr [ESP + 0x4c]          ; 004b03b6
    FMULP ST3                           ; 004b03ba
    LEA EAX,[ESP + 0x2c]                ; 004b03bc
    LEA EDX,[ESP + 0x44]                ; 004b03c0
    FXCH                                ; 004b03c4
    FSTP float ptr [ESP + 0x2c]         ; 004b03c6
    FSTP float ptr [ESP + 0x30]         ; 004b03ca
    FSTP float ptr [ESP + 0x34]         ; 004b03ce
    CMP EDX,EAX                         ; 004b03d2
    JZ 0x004b03ee                       ; 004b03d4
        ;   XREF to: 004b03ee (CONDITIONAL_JUMP)  ; LAB_004b03ee
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004b03d6
    MOV dword ptr [ESP + 0x44],EAX      ; 004b03da
    MOV EAX,dword ptr [ESP + 0x30]      ; 004b03de
    MOV dword ptr [ESP + 0x48],EAX      ; 004b03e2
    MOV EAX,dword ptr [ESP + 0x34]      ; 004b03e6
    MOV dword ptr [ESP + 0x4c],EAX      ; 004b03ea
    PUSH EDI                            ; 004b03ee
        ;   Label: LAB_004b03ee
    LEA EAX,[ESP + 0x48]                ; 004b03ef
    PUSH EAX                            ; 004b03f3
    MOV EDX,dword ptr [EBP + 0x18]      ; 004b03f4
    PUSH EDX                            ; 004b03f7
    MOV ECX,dword ptr [EBP + 0x14]      ; 004b03f8
    PUSH ECX                            ; 004b03fb
    INC EBX                             ; 004b03fc
    CALL core_gore.cpp_CGore_spawnBloodParticles_FUN_004b00f0 ; 004b03fd
        ;   XREF to: 004b00f0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodParticles_FUN_004b00f0(CGore * this_ptr, CVector3f * position, CVector3f * velocity, int blood_type)
    ADD ESP,0x10                        ; 004b0402
    CMP EBX,ESI                         ; 004b0405
    JGE 0x004b0240                      ; 004b0407
        ;   XREF to: 004b0240 (CONDITIONAL_JUMP)  ; LAB_004b0240
    JMP 0x004b030e                      ; 004b040d
        ;   XREF to: 004b030e (UNCONDITIONAL_JUMP)  ; LAB_004b030e
    XOR EDX,EDX                         ; 004b0412
        ;   Label: LAB_004b0412
    MOV dword ptr [ESP + 0x3c],EDX      ; 004b0414
    MOV dword ptr [ESP + 0x38],EDX      ; 004b0418
    MOV dword ptr [ESP + 0x40],EDX      ; 004b041c
    JMP 0x004b02cc                      ; 004b0420
        ;   XREF to: 004b02cc (UNCONDITIONAL_JUMP)  ; LAB_004b02cc

