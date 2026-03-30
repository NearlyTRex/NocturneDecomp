; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CGore_spawnBloodBurst_FUN_004edbb0(CGore *this_ptr,CVector3f *position,CVector3f *direction,int count,int blood_type)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   direction
; int              Stack[0x10]:4   count
; int              Stack[0x14]:4   blood_type
; Local Variables:
; CMatrix3x3f      Stack[-0x74]:36  local_74
; CVector3f        Stack[-0x4c]:12  local_4c
; CVector3f        Stack[-0x40]:12  local_40
; CVector3f        Stack[-0x34]:12  local_34
; float            Stack[-0x28]:4  local_28
; float            Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
;
; XREF[15]:
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210 at 0040a50c
;   core_charactr.cpp_CCharacter_dismember_FUN_0042b9e0 at 0042bc0a
;   core_charactr.cpp_CCharacter_processDamage_FUN_0042c3c0 at 0042c4a5
;   core_charactr.cpp_CCharacter_testDamageLine_FUN_0042c180 at 0042c2d5
;   core_dracbrid.cpp_CDraculaBride_explode_FUN_004858f0 at 00485b03
;   core_enemy.cpp_CEnemy_testAttackLine_FUN_004a9930 at 004a99b4
;   core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a9880 at 004a9915
;   core_gabriela.cpp_CGabriella_processMotionEvents_FUN_004d4890 at 004d4bc5
;   core_ghoul.cpp_CGhoul_process_FUN_004e6600 at 004e6d05
;   core_imp.cpp_CImp_process_FUN_004f9c30 at 004f9ed8
;   ... and 5 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;   core_gore.cpp_CGore_spawnBloodParticles_FUN_004edaa0
;   crt_math.c_atan2_FUN_006013b1
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004edbb0
        ;   Label: core_gore.cpp_CGore_spawnBloodBurst_FUN_004edbb0
    PUSH ESI                            ; 004edbb1
    PUSH EDI                            ; 004edbb2
    PUSH EBP                            ; 004edbb3
    MOV EBP,ESP                         ; 004edbb4
    SUB ESP,0x64                        ; 004edbb6
    AND ESP,0xfffffff8                  ; 004edbb9
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004edbbc
    MOV ESI,dword ptr [EBP + 0x20]      ; 004edbbf
    MOV EDI,dword ptr [EBP + 0x24]      ; 004edbc2
    CMP EDI,0x2                         ; 004edbc5
    JZ 0x004edbf0                       ; 004edbc8
        ;   XREF to: 004edbf0 (CONDITIONAL_JUMP)  ; LAB_004edbf0
    TEST EDX,EDX                        ; 004edbca
    JNZ 0x004edbf7                      ; 004edbcc
        ;   XREF to: 004edbf7 (CONDITIONAL_JUMP)  ; LAB_004edbf7
    XOR EBX,EBX                         ; 004edbce
    TEST ESI,ESI                        ; 004edbd0
    JLE 0x004edbf0                      ; 004edbd2
        ;   XREF to: 004edbf0 (CONDITIONAL_JUMP)  ; LAB_004edbf0
    PUSH EDI                            ; 004edbd4
        ;   Label: LAB_004edbd4
    PUSH 0x0                            ; 004edbd5
    MOV EAX,dword ptr [EBP + 0x18]      ; 004edbd7
    PUSH EAX                            ; 004edbda
    MOV EDX,dword ptr [EBP + 0x14]      ; 004edbdb
    PUSH EDX                            ; 004edbde
    INC EBX                             ; 004edbdf
    CALL core_gore.cpp_CGore_spawnBloodParticles_FUN_004edaa0 ; 004edbe0
        ;   XREF to: 004edaa0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodParticles_FUN_004edaa0(CGore * this_ptr, CVector3f * position, CVector3f * velocity, int blood_type)
    ADD ESP,0x10                        ; 004edbe5
    CMP EBX,ESI                         ; 004edbe8
    JL 0x004edbd4                       ; 004edbea
        ;   XREF to: 004edbd4 (CONDITIONAL_JUMP)  ; LAB_004edbd4
    LEA EAX,[EAX]                       ; 004edbec
    MOV ESP,EBP                         ; 004edbf0
        ;   Label: LAB_004edbf0
    POP EBP                             ; 004edbf2
    POP EDI                             ; 004edbf3
    POP ESI                             ; 004edbf4
    POP EBX                             ; 004edbf5
    RET                                 ; 004edbf6
    FLD float ptr [EDX + 0x4]           ; 004edbf7
        ;   Label: LAB_004edbf7
    FMUL ST0                            ; 004edbfa
    FLD float ptr [EDX]                 ; 004edbfc
    FMUL ST0                            ; 004edbfe
    FADDP                               ; 004edc00
    FLD float ptr [EDX + 0x8]           ; 004edc02
    FMUL ST0                            ; 004edc05
    FADDP                               ; 004edc07
    FSQRT                               ; 004edc09
    LEA EAX,[ESP + 0x38]                ; 004edc0b
    FSTP float ptr [ESP + 0x5c]         ; 004edc0f
    CMP EAX,EDX                         ; 004edc13
    JZ 0x004edc2b                       ; 004edc15
        ;   XREF to: 004edc2b (CONDITIONAL_JUMP)  ; LAB_004edc2b
    MOV EAX,dword ptr [EDX]             ; 004edc17
    MOV dword ptr [ESP + 0x38],EAX      ; 004edc19
    MOV EAX,dword ptr [EDX + 0x4]       ; 004edc1d
    MOV dword ptr [ESP + 0x3c],EAX      ; 004edc20
    MOV EAX,dword ptr [EDX + 0x8]       ; 004edc24
    MOV dword ptr [ESP + 0x40],EAX      ; 004edc27
    FLD float ptr [ESP + 0x3c]          ; 004edc2b
        ;   Label: LAB_004edc2b
    FMUL ST0                            ; 004edc2f
    FLD float ptr [ESP + 0x38]          ; 004edc31
    FMUL ST0                            ; 004edc35
    FADDP                               ; 004edc37
    FLD float ptr [ESP + 0x40]          ; 004edc39
    FMUL ST0                            ; 004edc3d
    FADDP                               ; 004edc3f
    FSQRT                               ; 004edc41
    FST float ptr [ESP]                 ; 004edc43
    FLDZ                                ; 004edc46
    FCOMPP                              ; 004edc48
    FNSTSW AX                           ; 004edc4a
    SAHF                                ; 004edc4c
    JNC 0x004eddc2                      ; 004edc4d
        ;   XREF to: 004eddc2 (CONDITIONAL_JUMP)  ; LAB_004eddc2
    FLD1                                ; 004edc53
    FLD float ptr [ESP + 0x38]          ; 004edc55
    FXCH                                ; 004edc59
    FDIV float ptr [ESP]                ; 004edc5b
    FXCH                                ; 004edc5e
    FMUL ST1                            ; 004edc60
    FLD float ptr [ESP + 0x3c]          ; 004edc62
    FMUL ST2                            ; 004edc66
    FLD float ptr [ESP + 0x40]          ; 004edc68
    FMULP ST3                           ; 004edc6c
    FXCH                                ; 004edc6e
    FSTP float ptr [ESP + 0x38]         ; 004edc70
    FSTP float ptr [ESP + 0x3c]         ; 004edc74
    FSTP float ptr [ESP + 0x40]         ; 004edc78
    FLD float ptr [ESP + 0x40]          ; 004edc7c
        ;   Label: LAB_004edc7c
    FMUL ST0                            ; 004edc80
    FLD float ptr [ESP + 0x38]          ; 004edc82
    FMUL ST0                            ; 004edc86
    FADDP                               ; 004edc88
    FSQRT                               ; 004edc8a
    FLD float ptr [ESP + 0x3c]          ; 004edc8c
    CALL crt_math.c_atan2_FUN_006013b1  ; 004edc90
        ;   XREF to: 006013b1 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_atan2_FUN_006013b1(float10 y, float10 x)
    FLD float ptr [ESP + 0x40]          ; 004edc95
    XOR EAX,EAX                         ; 004edc99
    FLD float ptr [ESP + 0x38]          ; 004edc9b
    MOV dword ptr [ESP + 0x58],EAX      ; 004edc9f
    FXCH                                ; 004edca3
    FPATAN                              ; 004edca5
    NOP                                 ; 004edca7
    XOR EBX,EBX                         ; 004edca8
    FXCH                                ; 004edcaa
    FCHS                                ; 004edcac
    FSTP float ptr [ESP + 0x50]         ; 004edcae
    FSTP float ptr [ESP + 0x54]         ; 004edcb2
    TEST ESI,ESI                        ; 004edcb6
    JLE 0x004edbf0                      ; 004edcb8
        ;   XREF to: 004edbf0 (CONDITIONAL_JUMP)  ; LAB_004edbf0
    MOV EAX,dword ptr [ESP + 0x50]      ; 004edcbe
        ;   Label: LAB_004edcbe
    MOV dword ptr [ESP + 0x44],EAX      ; 004edcc2
    MOV EAX,dword ptr [ESP + 0x54]      ; 004edcc6
    PUSH 0x3f490fdb                     ; 004edcca
    MOV dword ptr [ESP + 0x4c],EAX      ; 004edccf
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004edcd3
    PUSH 0xbf490fdb                     ; 004edcd7
    MOV dword ptr [ESP + 0x54],EAX      ; 004edcdc
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004edce0
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    XOR EDX,EDX                         ; 004eddc2
        ;   Label: LAB_004eddc2
    MOV dword ptr [ESP + 0x3c],EDX      ; 004eddc4
    MOV dword ptr [ESP + 0x38],EDX      ; 004eddc8
    MOV dword ptr [ESP + 0x40],EDX      ; 004eddcc
    JMP 0x004edc7c                      ; 004eddd0
        ;   XREF to: 004edc7c (UNCONDITIONAL_JUMP)  ; LAB_004edc7c

