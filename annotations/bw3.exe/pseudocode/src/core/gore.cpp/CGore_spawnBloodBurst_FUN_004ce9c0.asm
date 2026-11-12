; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CGore_spawnBloodBurst_FUN_004ce9c0(CGore *this_ptr,CVector3f *position,CVector3f *direction,int count,EBloodType blood_type)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   direction
; int              Stack[0x10]:4   count
; EBloodType       Stack[0x14]:4   blood_type
; Local Variables:
; undefined        Stack[-0x88]:1  local_88
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x68]:4  local_68
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
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[21]:
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_00409f60 at 0040a3d7
;   core_blundrbs.cpp_CBlunderbus_fire_FUN_00410490 at 004113bf
;   core_carved.cpp_CCarved_process_FUN_00425da0 at 0042684d
;   core_charactr.cpp_CCharacter_processDamage_FUN_00430d60 at 00430ec1
;   core_charactr.cpp_CCharacter_testDamageLine_FUN_00430a30 at 00430c1d
;   core_charactr.cpp_FUN_004300e0 at 00430227
;   core_demnfolk.cpp_FUN_00455080 at 00455b5b
;   core_emitter.cpp_CEmitter_process_FUN_00487eb0 at 0048822d
;   core_enemy.cpp_CEnemy_testAttackLine_FUN_00489490 at 00489514
;   core_enemy.cpp_CEnemy_testAttackRadius_FUN_004893f0 at 00489476
;   ... and 11 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
;   core_gore.cpp_CGore_spawnBloodParticles_FUN_004ce8a0
;   crt_math.c_atan2_FUN_005a5cc1
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ce9c0
        ;   Label: core_gore.cpp_CGore_spawnBloodBurst_FUN_004ce9c0
    PUSH ESI                            ; 004ce9c1
    PUSH EDI                            ; 004ce9c2
    PUSH EBP                            ; 004ce9c3
    MOV EBP,ESP                         ; 004ce9c4
    SUB ESP,0x74                        ; 004ce9c6
    AND ESP,0xfffffff8                  ; 004ce9c9
    MOV EBX,dword ptr [EBP + 0x1c]      ; 004ce9cc
    CMP dword ptr [EBP + 0x24],0x2      ; 004ce9cf
    JZ 0x004cea00                       ; 004ce9d3
        ;   XREF to: 004cea00 (CONDITIONAL_JUMP)  ; LAB_004cea00
    TEST EBX,EBX                        ; 004ce9d5
    JNZ 0x004cea07                      ; 004ce9d7
        ;   XREF to: 004cea07 (CONDITIONAL_JUMP)  ; LAB_004cea07
    MOV EDX,dword ptr [EBP + 0x20]      ; 004ce9d9
    XOR ESI,ESI                         ; 004ce9dc
    TEST EDX,EDX                        ; 004ce9de
    JLE 0x004cea00                      ; 004ce9e0
        ;   XREF to: 004cea00 (CONDITIONAL_JUMP)  ; LAB_004cea00
    MOV EBX,dword ptr [EBP + 0x14]      ; 004ce9e2
    MOV EDI,dword ptr [EBP + 0x20]      ; 004ce9e5
    MOV EDX,dword ptr [EBP + 0x24]      ; 004ce9e8
        ;   Label: LAB_004ce9e8
    PUSH EDX                            ; 004ce9eb
    PUSH 0x0                            ; 004ce9ec
    MOV ECX,dword ptr [EBP + 0x18]      ; 004ce9ee
    PUSH ECX                            ; 004ce9f1
    PUSH EBX                            ; 004ce9f2
    INC ESI                             ; 004ce9f3
    CALL core_gore.cpp_CGore_spawnBloodParticles_FUN_004ce8a0 ; 004ce9f4
        ;   XREF to: 004ce8a0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodParticles_FUN_004ce8a0(CGore * this_ptr, CVector3f * position, CVector3f * velocity, EBloodType blood_type)
    ADD ESP,0x10                        ; 004ce9f9
    CMP ESI,EDI                         ; 004ce9fc
    JL 0x004ce9e8                       ; 004ce9fe
        ;   XREF to: 004ce9e8 (CONDITIONAL_JUMP)  ; LAB_004ce9e8
    MOV ESP,EBP                         ; 004cea00
        ;   Label: LAB_004cea00
    POP EBP                             ; 004cea02
    POP EDI                             ; 004cea03
    POP ESI                             ; 004cea04
    POP EBX                             ; 004cea05
    RET                                 ; 004cea06
    FLD float ptr [EBX + 0x4]           ; 004cea07
        ;   Label: LAB_004cea07
    FMUL ST0                            ; 004cea0a
    FLD float ptr [EBX]                 ; 004cea0c
    FMUL ST0                            ; 004cea0e
    FADDP                               ; 004cea10
    FLD float ptr [EBX + 0x8]           ; 004cea12
    FMUL ST0                            ; 004cea15
    FADDP                               ; 004cea17
    FSQRT                               ; 004cea19
    LEA EAX,[ESP + 0x40]                ; 004cea1b
    FSTP float ptr [ESP + 0x68]         ; 004cea1f
    CMP EAX,EBX                         ; 004cea23
    JZ 0x004cea3b                       ; 004cea25
        ;   XREF to: 004cea3b (CONDITIONAL_JUMP)  ; LAB_004cea3b
    MOV EAX,dword ptr [EBX]             ; 004cea27
    MOV dword ptr [ESP + 0x40],EAX      ; 004cea29
    MOV EAX,dword ptr [EBX + 0x4]       ; 004cea2d
    MOV dword ptr [ESP + 0x44],EAX      ; 004cea30
    MOV EAX,dword ptr [EBX + 0x8]       ; 004cea34
    MOV dword ptr [ESP + 0x48],EAX      ; 004cea37
    FLD float ptr [ESP + 0x44]          ; 004cea3b
        ;   Label: LAB_004cea3b
    FMUL ST0                            ; 004cea3f
    FLD float ptr [ESP + 0x40]          ; 004cea41
    FMUL ST0                            ; 004cea45
    FADDP                               ; 004cea47
    FLD float ptr [ESP + 0x48]          ; 004cea49
    FMUL ST0                            ; 004cea4d
    FADDP                               ; 004cea4f
    FSQRT                               ; 004cea51
    FLDZ                                ; 004cea53
    FXCH                                ; 004cea55
    FSTP float ptr [ESP + 0x64]         ; 004cea57
    FCOMP float ptr [ESP + 0x64]        ; 004cea5b
    FNSTSW AX                           ; 004cea5f
    SAHF                                ; 004cea61
    JNC 0x004cebdd                      ; 004cea62
        ;   XREF to: 004cebdd (CONDITIONAL_JUMP)  ; LAB_004cebdd
    FLD1                                ; 004cea68
    FLD float ptr [ESP + 0x40]          ; 004cea6a
    FXCH                                ; 004cea6e
    FDIV float ptr [ESP + 0x64]         ; 004cea70
    FXCH                                ; 004cea74
    FMUL ST1                            ; 004cea76
    FLD float ptr [ESP + 0x44]          ; 004cea78
    FMUL ST2                            ; 004cea7c
    FLD float ptr [ESP + 0x48]          ; 004cea7e
    FMULP ST3                           ; 004cea82
    FXCH                                ; 004cea84
    FSTP float ptr [ESP + 0x40]         ; 004cea86
    FSTP float ptr [ESP + 0x44]         ; 004cea8a
    FSTP float ptr [ESP + 0x48]         ; 004cea8e
    FLD float ptr [ESP + 0x48]          ; 004cea92
        ;   Label: LAB_004cea92
    FLD float ptr [ESP + 0x40]          ; 004cea96
    CALL crt_math.c_atan2_FUN_005a5cc1  ; 004cea9a
        ;   XREF to: 005a5cc1 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005a5cc1()
    FLD float ptr [ESP + 0x48]          ; 004cea9f
    FMUL ST0                            ; 004ceaa3
    FLD float ptr [ESP + 0x40]          ; 004ceaa5
    FMUL ST0                            ; 004ceaa9
    FADDP                               ; 004ceaab
    FSQRT                               ; 004ceaad
    FLD float ptr [ESP + 0x44]          ; 004ceaaf
    CALL crt_math.c_atan2_FUN_005a5cc1  ; 004ceab3
        ;   XREF to: 005a5cc1 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005a5cc1()
    XOR EDI,EDI                         ; 004ceab8
    XOR EBX,EBX                         ; 004ceaba
    MOV dword ptr [ESP + 0x54],EDI      ; 004ceabc
    FXCH                                ; 004ceac0
    FSTP float ptr [ESP + 0x50]         ; 004ceac2
    FCHS                                ; 004ceac6
    MOV EAX,dword ptr [EBP + 0x20]      ; 004ceac8
    FSTP float ptr [ESP + 0x4c]         ; 004ceacb
    TEST EAX,EAX                        ; 004ceacf
    JLE 0x004cea00                      ; 004cead1
        ;   XREF to: 004cea00 (CONDITIONAL_JUMP)  ; LAB_004cea00
    PUSH 0x3f490fdb                     ; 004cead7
        ;   Label: LAB_004cead7
    LEA EDI,[ESP + 0x2c]                ; 004ceadc
    LEA ESI,[ESP + 0x50]                ; 004ceae0
    PUSH 0xbf490fdb                     ; 004ceae4
    MOVSD ES:EDI,ESI                    ; 004ceae9
    MOVSD ES:EDI,ESI                    ; 004ceaea
    MOVSD ES:EDI,ESI                    ; 004ceaeb
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004ceaec
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x78],EAX      ; 004ceaf1
    FLD float ptr [ESP + 0x78]          ; 004ceaf5
    ADD ESP,0x8                         ; 004ceaf9
    PUSH 0x3f490fdb                     ; 004ceafc
    FADD float ptr [ESP + 0x2c]         ; 004ceb01
    PUSH 0xbf490fdb                     ; 004ceb05
    FSTP float ptr [ESP + 0x30]         ; 004ceb0a
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004ceb0e
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x78],EAX      ; 004ceb13
    FLD float ptr [ESP + 0x78]          ; 004ceb17
    ADD ESP,0x8                         ; 004ceb1b
    LEA EAX,[ESP + 0x28]                ; 004ceb1e
    PUSH EAX                            ; 004ceb22
    LEA EAX,[ESP + 0x4]                 ; 004ceb23
    FADD float ptr [ESP + 0x30]         ; 004ceb27
    PUSH EAX                            ; 004ceb2b
    FSTP float ptr [ESP + 0x34]         ; 004ceb2c
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550 ; 004ceb30
        ;   XREF to: 0045b550 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004ceb35
    MOV EAX,dword ptr [ESP + 0x8]       ; 004ceb38
    MOV dword ptr [ESP + 0x28],EAX      ; 004ceb3c
    MOV EAX,dword ptr [ESP + 0x14]      ; 004ceb40
    PUSH 0x3f000000                     ; 004ceb44
    MOV dword ptr [ESP + 0x30],EAX      ; 004ceb49
    MOV EAX,dword ptr [ESP + 0x24]      ; 004ceb4d
    PUSH 0xbf000000                     ; 004ceb51
    MOV dword ptr [ESP + 0x38],EAX      ; 004ceb56
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004ceb5a
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    ADD ESP,0x8                         ; 004ceb5f
    FLD float ptr [ESP + 0x68]          ; 004ceb62
    FLD float ptr [ESP + 0x28]          ; 004ceb66
    FMUL ST1                            ; 004ceb6a
    FLD float ptr [ESP + 0x2c]          ; 004ceb6c
    FMUL ST2                            ; 004ceb70
    FLD float ptr [ESP + 0x30]          ; 004ceb72
    FMULP ST3                           ; 004ceb76
    LEA EDI,[ESP + 0x58]                ; 004ceb78
    LEA ESI,[ESP + 0x34]                ; 004ceb7c
    FXCH                                ; 004ceb80
    FSTP float ptr [ESP + 0x34]         ; 004ceb82
    FSTP float ptr [ESP + 0x38]         ; 004ceb86
    FSTP float ptr [ESP + 0x3c]         ; 004ceb8a
    MOVSD ES:EDI,ESI                    ; 004ceb8e
    MOVSD ES:EDI,ESI                    ; 004ceb8f
    MOVSD ES:EDI,ESI                    ; 004ceb90
    LEA EAX,[ESP + 0x28]                ; 004ceb91
    LEA ESI,[ESP + 0x58]                ; 004ceb95
    CMP EAX,ESI                         ; 004ceb99
    JZ 0x004cebb5                       ; 004ceb9b
        ;   XREF to: 004cebb5 (CONDITIONAL_JUMP)  ; LAB_004cebb5
    MOV EAX,dword ptr [ESP + 0x58]      ; 004ceb9d
    MOV dword ptr [ESP + 0x28],EAX      ; 004ceba1
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004ceba5
    MOV dword ptr [ESP + 0x2c],EAX      ; 004ceba9
    MOV EAX,dword ptr [ESP + 0x60]      ; 004cebad
    MOV dword ptr [ESP + 0x30],EAX      ; 004cebb1
    MOV ECX,dword ptr [EBP + 0x24]      ; 004cebb5
        ;   Label: LAB_004cebb5
    PUSH ECX                            ; 004cebb8
    LEA EAX,[ESP + 0x2c]                ; 004cebb9
    PUSH EAX                            ; 004cebbd
    MOV ESI,dword ptr [EBP + 0x18]      ; 004cebbe
    PUSH ESI                            ; 004cebc1
    MOV EDI,dword ptr [EBP + 0x14]      ; 004cebc2
    PUSH EDI                            ; 004cebc5
    CALL core_gore.cpp_CGore_spawnBloodParticles_FUN_004ce8a0 ; 004cebc6
        ;   XREF to: 004ce8a0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodParticles_FUN_004ce8a0(CGore * this_ptr, CVector3f * position, CVector3f * velocity, EBloodType blood_type)
    ADD ESP,0x10                        ; 004cebcb
    INC EBX                             ; 004cebce
    CMP EBX,dword ptr [EBP + 0x20]      ; 004cebcf
    JGE 0x004cea00                      ; 004cebd2
        ;   XREF to: 004cea00 (CONDITIONAL_JUMP)  ; LAB_004cea00
    JMP 0x004cead7                      ; 004cebd8
        ;   XREF to: 004cead7 (UNCONDITIONAL_JUMP)  ; LAB_004cead7
    XOR ECX,ECX                         ; 004cebdd
        ;   Label: LAB_004cebdd
    MOV dword ptr [ESP + 0x44],ECX      ; 004cebdf
    MOV dword ptr [ESP + 0x40],ECX      ; 004cebe3
    MOV dword ptr [ESP + 0x48],ECX      ; 004cebe7
    JMP 0x004cea92                      ; 004cebeb
        ;   XREF to: 004cea92 (UNCONDITIONAL_JUMP)  ; LAB_004cea92

