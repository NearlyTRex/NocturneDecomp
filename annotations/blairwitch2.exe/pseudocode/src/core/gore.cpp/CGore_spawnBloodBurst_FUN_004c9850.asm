; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850(CGore *this_ptr,CVector3f *position,CVector3f *direction,int count,EBloodType blood_type)
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
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a050 at 0040a4d9
;   core_basicene.cpp_CBasicEnemy_processBurnState_FUN_005a0380 at 005a070e
;   core_charactr.cpp_CCharacter_dismember_FUN_00427360 at 0042765b
;   core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0 at 004280de
;   core_charactr.cpp_CCharacter_testDamageLine_FUN_00427c80 at 00427e6d
;   core_doc.cpp_FUN_00453250 at 00453a30
;   core_dracbrid.cpp_CDraculaBride_explode_FUN_00464700 at 004649eb
;   core_emitter.cpp_CEmitter_process_FUN_00486cb0 at 0048702d
;   core_enemy.cpp_CEnemy_testAttackLine_FUN_004881b0 at 00488234
;   core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110 at 00488196
;   ... and 11 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
;   core_gore.cpp_CGore_spawnBloodParticles_FUN_004c9730
;   crt_math.c_atan2_FUN_005b9989
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c9850
        ;   Label: core_gore.cpp_CGore_spawnBloodBurst_FUN_004c9850
    PUSH ESI                            ; 004c9851
    PUSH EDI                            ; 004c9852
    PUSH EBP                            ; 004c9853
    MOV EBP,ESP                         ; 004c9854
    SUB ESP,0x74                        ; 004c9856
    AND ESP,0xfffffff8                  ; 004c9859
    MOV EBX,dword ptr [EBP + 0x1c]      ; 004c985c
    CMP dword ptr [EBP + 0x24],0x2      ; 004c985f
    JZ 0x004c9890                       ; 004c9863
        ;   XREF to: 004c9890 (CONDITIONAL_JUMP)  ; LAB_004c9890
    TEST EBX,EBX                        ; 004c9865
    JNZ 0x004c9897                      ; 004c9867
        ;   XREF to: 004c9897 (CONDITIONAL_JUMP)  ; LAB_004c9897
    MOV EDX,dword ptr [EBP + 0x20]      ; 004c9869
    XOR ESI,ESI                         ; 004c986c
    TEST EDX,EDX                        ; 004c986e
    JLE 0x004c9890                      ; 004c9870
        ;   XREF to: 004c9890 (CONDITIONAL_JUMP)  ; LAB_004c9890
    MOV EBX,dword ptr [EBP + 0x14]      ; 004c9872
    MOV EDI,dword ptr [EBP + 0x20]      ; 004c9875
    MOV EDX,dword ptr [EBP + 0x24]      ; 004c9878
        ;   Label: LAB_004c9878
    PUSH EDX                            ; 004c987b
    PUSH 0x0                            ; 004c987c
    MOV ECX,dword ptr [EBP + 0x18]      ; 004c987e
    PUSH ECX                            ; 004c9881
    PUSH EBX                            ; 004c9882
    INC ESI                             ; 004c9883
    CALL core_gore.cpp_CGore_spawnBloodParticles_FUN_004c9730 ; 004c9884
        ;   XREF to: 004c9730 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodParticles_FUN_004c9730(CGore * this_ptr, CVector3f * position, CVector3f * velocity, EBloodType blood_type)
    ADD ESP,0x10                        ; 004c9889
    CMP ESI,EDI                         ; 004c988c
    JL 0x004c9878                       ; 004c988e
        ;   XREF to: 004c9878 (CONDITIONAL_JUMP)  ; LAB_004c9878
    MOV ESP,EBP                         ; 004c9890
        ;   Label: LAB_004c9890
    POP EBP                             ; 004c9892
    POP EDI                             ; 004c9893
    POP ESI                             ; 004c9894
    POP EBX                             ; 004c9895
    RET                                 ; 004c9896
    FLD float ptr [EBX + 0x4]           ; 004c9897
        ;   Label: LAB_004c9897
    FMUL ST0                            ; 004c989a
    FLD float ptr [EBX]                 ; 004c989c
    FMUL ST0                            ; 004c989e
    FADDP                               ; 004c98a0
    FLD float ptr [EBX + 0x8]           ; 004c98a2
    FMUL ST0                            ; 004c98a5
    FADDP                               ; 004c98a7
    FSQRT                               ; 004c98a9
    LEA EAX,[ESP + 0x40]                ; 004c98ab
    FSTP float ptr [ESP + 0x68]         ; 004c98af
    CMP EAX,EBX                         ; 004c98b3
    JZ 0x004c98cb                       ; 004c98b5
        ;   XREF to: 004c98cb (CONDITIONAL_JUMP)  ; LAB_004c98cb
    MOV EAX,dword ptr [EBX]             ; 004c98b7
    MOV dword ptr [ESP + 0x40],EAX      ; 004c98b9
    MOV EAX,dword ptr [EBX + 0x4]       ; 004c98bd
    MOV dword ptr [ESP + 0x44],EAX      ; 004c98c0
    MOV EAX,dword ptr [EBX + 0x8]       ; 004c98c4
    MOV dword ptr [ESP + 0x48],EAX      ; 004c98c7
    FLD float ptr [ESP + 0x44]          ; 004c98cb
        ;   Label: LAB_004c98cb
    FMUL ST0                            ; 004c98cf
    FLD float ptr [ESP + 0x40]          ; 004c98d1
    FMUL ST0                            ; 004c98d5
    FADDP                               ; 004c98d7
    FLD float ptr [ESP + 0x48]          ; 004c98d9
    FMUL ST0                            ; 004c98dd
    FADDP                               ; 004c98df
    FSQRT                               ; 004c98e1
    FLDZ                                ; 004c98e3
    FXCH                                ; 004c98e5
    FSTP float ptr [ESP + 0x64]         ; 004c98e7
    FCOMP float ptr [ESP + 0x64]        ; 004c98eb
    FNSTSW AX                           ; 004c98ef
    SAHF                                ; 004c98f1
    JNC 0x004c9a6d                      ; 004c98f2
        ;   XREF to: 004c9a6d (CONDITIONAL_JUMP)  ; LAB_004c9a6d
    FLD1                                ; 004c98f8
    FLD float ptr [ESP + 0x40]          ; 004c98fa
    FXCH                                ; 004c98fe
    FDIV float ptr [ESP + 0x64]         ; 004c9900
    FXCH                                ; 004c9904
    FMUL ST1                            ; 004c9906
    FLD float ptr [ESP + 0x44]          ; 004c9908
    FMUL ST2                            ; 004c990c
    FLD float ptr [ESP + 0x48]          ; 004c990e
    FMULP ST3                           ; 004c9912
    FXCH                                ; 004c9914
    FSTP float ptr [ESP + 0x40]         ; 004c9916
    FSTP float ptr [ESP + 0x44]         ; 004c991a
    FSTP float ptr [ESP + 0x48]         ; 004c991e
    FLD float ptr [ESP + 0x48]          ; 004c9922
        ;   Label: LAB_004c9922
    FLD float ptr [ESP + 0x40]          ; 004c9926
    CALL crt_math.c_atan2_FUN_005b9989  ; 004c992a
        ;   XREF to: 005b9989 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005b9989()
    FLD float ptr [ESP + 0x48]          ; 004c992f
    FMUL ST0                            ; 004c9933
    FLD float ptr [ESP + 0x40]          ; 004c9935
    FMUL ST0                            ; 004c9939
    FADDP                               ; 004c993b
    FSQRT                               ; 004c993d
    FLD float ptr [ESP + 0x44]          ; 004c993f
    CALL crt_math.c_atan2_FUN_005b9989  ; 004c9943
        ;   XREF to: 005b9989 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005b9989()
    XOR EDI,EDI                         ; 004c9948
    XOR EBX,EBX                         ; 004c994a
    MOV dword ptr [ESP + 0x54],EDI      ; 004c994c
    FXCH                                ; 004c9950
    FSTP float ptr [ESP + 0x50]         ; 004c9952
    FCHS                                ; 004c9956
    MOV EAX,dword ptr [EBP + 0x20]      ; 004c9958
    FSTP float ptr [ESP + 0x4c]         ; 004c995b
    TEST EAX,EAX                        ; 004c995f
    JLE 0x004c9890                      ; 004c9961
        ;   XREF to: 004c9890 (CONDITIONAL_JUMP)  ; LAB_004c9890
    PUSH 0x3f490fdb                     ; 004c9967
        ;   Label: LAB_004c9967
    LEA EDI,[ESP + 0x2c]                ; 004c996c
    LEA ESI,[ESP + 0x50]                ; 004c9970
    PUSH 0xbf490fdb                     ; 004c9974
    MOVSD ES:EDI,ESI                    ; 004c9979
    MOVSD ES:EDI,ESI                    ; 004c997a
    MOVSD ES:EDI,ESI                    ; 004c997b
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004c997c
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x78],EAX      ; 004c9981
    FLD float ptr [ESP + 0x78]          ; 004c9985
    ADD ESP,0x8                         ; 004c9989
    PUSH 0x3f490fdb                     ; 004c998c
    FADD float ptr [ESP + 0x2c]         ; 004c9991
    PUSH 0xbf490fdb                     ; 004c9995
    FSTP float ptr [ESP + 0x30]         ; 004c999a
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004c999e
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x78],EAX      ; 004c99a3
    FLD float ptr [ESP + 0x78]          ; 004c99a7
    ADD ESP,0x8                         ; 004c99ab
    LEA EAX,[ESP + 0x28]                ; 004c99ae
    PUSH EAX                            ; 004c99b2
    LEA EAX,[ESP + 0x4]                 ; 004c99b3
    FADD float ptr [ESP + 0x30]         ; 004c99b7
    PUSH EAX                            ; 004c99bb
    FSTP float ptr [ESP + 0x34]         ; 004c99bc
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280 ; 004c99c0
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004c99c5
    MOV EAX,dword ptr [ESP + 0x8]       ; 004c99c8
    MOV dword ptr [ESP + 0x28],EAX      ; 004c99cc
    MOV EAX,dword ptr [ESP + 0x14]      ; 004c99d0
    PUSH 0x3f000000                     ; 004c99d4
    MOV dword ptr [ESP + 0x30],EAX      ; 004c99d9
    MOV EAX,dword ptr [ESP + 0x24]      ; 004c99dd
    PUSH 0xbf000000                     ; 004c99e1
    MOV dword ptr [ESP + 0x38],EAX      ; 004c99e6
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004c99ea
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    ADD ESP,0x8                         ; 004c99ef
    FLD float ptr [ESP + 0x68]          ; 004c99f2
    FLD float ptr [ESP + 0x28]          ; 004c99f6
    FMUL ST1                            ; 004c99fa
    FLD float ptr [ESP + 0x2c]          ; 004c99fc
    FMUL ST2                            ; 004c9a00
    FLD float ptr [ESP + 0x30]          ; 004c9a02
    FMULP ST3                           ; 004c9a06
    LEA EDI,[ESP + 0x58]                ; 004c9a08
    LEA ESI,[ESP + 0x34]                ; 004c9a0c
    FXCH                                ; 004c9a10
    FSTP float ptr [ESP + 0x34]         ; 004c9a12
    FSTP float ptr [ESP + 0x38]         ; 004c9a16
    FSTP float ptr [ESP + 0x3c]         ; 004c9a1a
    MOVSD ES:EDI,ESI                    ; 004c9a1e
    MOVSD ES:EDI,ESI                    ; 004c9a1f
    MOVSD ES:EDI,ESI                    ; 004c9a20
    LEA EAX,[ESP + 0x28]                ; 004c9a21
    LEA ESI,[ESP + 0x58]                ; 004c9a25
    CMP EAX,ESI                         ; 004c9a29
    JZ 0x004c9a45                       ; 004c9a2b
        ;   XREF to: 004c9a45 (CONDITIONAL_JUMP)  ; LAB_004c9a45
    MOV EAX,dword ptr [ESP + 0x58]      ; 004c9a2d
    MOV dword ptr [ESP + 0x28],EAX      ; 004c9a31
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004c9a35
    MOV dword ptr [ESP + 0x2c],EAX      ; 004c9a39
    MOV EAX,dword ptr [ESP + 0x60]      ; 004c9a3d
    MOV dword ptr [ESP + 0x30],EAX      ; 004c9a41
    MOV ECX,dword ptr [EBP + 0x24]      ; 004c9a45
        ;   Label: LAB_004c9a45
    PUSH ECX                            ; 004c9a48
    LEA EAX,[ESP + 0x2c]                ; 004c9a49
    PUSH EAX                            ; 004c9a4d
    MOV ESI,dword ptr [EBP + 0x18]      ; 004c9a4e
    PUSH ESI                            ; 004c9a51
    MOV EDI,dword ptr [EBP + 0x14]      ; 004c9a52
    PUSH EDI                            ; 004c9a55
    CALL core_gore.cpp_CGore_spawnBloodParticles_FUN_004c9730 ; 004c9a56
        ;   XREF to: 004c9730 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodParticles_FUN_004c9730(CGore * this_ptr, CVector3f * position, CVector3f * velocity, EBloodType blood_type)
    ADD ESP,0x10                        ; 004c9a5b
    INC EBX                             ; 004c9a5e
    CMP EBX,dword ptr [EBP + 0x20]      ; 004c9a5f
    JGE 0x004c9890                      ; 004c9a62
        ;   XREF to: 004c9890 (CONDITIONAL_JUMP)  ; LAB_004c9890
    JMP 0x004c9967                      ; 004c9a68
        ;   XREF to: 004c9967 (UNCONDITIONAL_JUMP)  ; LAB_004c9967
    XOR ECX,ECX                         ; 004c9a6d
        ;   Label: LAB_004c9a6d
    MOV dword ptr [ESP + 0x44],ECX      ; 004c9a6f
    MOV dword ptr [ESP + 0x40],ECX      ; 004c9a73
    MOV dword ptr [ESP + 0x48],ECX      ; 004c9a77
    JMP 0x004c9922                      ; 004c9a7b
        ;   XREF to: 004c9922 (UNCONDITIONAL_JUMP)  ; LAB_004c9922

