; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850(CCharacter *this_ptr,CVector3f *target)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   target
; Local Variables:
; undefined        Stack[-0x50]:1  local_50
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined        Stack[-0x38]:1  local_38
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[19]:
;   core_confedrt.cpp_FUN_005a1030 at 005a1090
;   core_confedrt.cpp_FUN_005a1180 at 005a11d2
;   core_confzomb.cpp_CConfederateZombie_processMeleeAttackState_FUN_005a2130 at 005a215c
;   core_confzomb.cpp_CConfederateZombie_processRangeAttackState_FUN_005a1f40 at 005a2026
;   core_dog1.cpp_CDog_processLeapAttackState_FUN_005ac200 at 005ac272
;   core_dog1.cpp_CDog_processMeleeAttackState_FUN_005abfa0 at 005abfd0
;   core_ghostchi.cpp_CGhostChild_processMeleeAttackState_FUN_005a9580 at 005a95d4
;   core_hag.cpp_CHag_processMeleeAttackState_FUN_005aab50 at 005aaba3
;   core_hand.cpp_CHand_processMeleeAttackState_FUN_005a9ed0 at 005a9f05
;   core_hand.cpp_CHand_processSleepingState_FUN_005a9ff0 at 005aa0fa
;   ... and 9 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408de0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00423850
        ;   Label: core_charactr.cpp_CCharacter_turnTowardPoint_FUN_00423850
    PUSH ESI                            ; 00423851
    PUSH EDI                            ; 00423852
    SUB ESP,0x44                        ; 00423853
    MOV EBX,dword ptr [ESP + 0x54]      ; 00423856
    MOV EDX,dword ptr [ESP + 0x58]      ; 0042385a
    PUSH EDX                            ; 0042385e
    PUSH EBX                            ; 0042385f
    LEA ESI,[ESP + 0x2c]                ; 00423860
    LEA EDI,[ESP + 0x20]                ; 00423864
    CALL core_actor.cpp_FUN_00408de0    ; 00423868
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x2c]                ; 0042386d
    ADD ESP,0x8                         ; 00423871
    MOVSD ES:EDI,ESI                    ; 00423874
    MOVSD ES:EDI,ESI                    ; 00423875
    MOVSD ES:EDI,ESI                    ; 00423876
    LEA ESI,[ESP + 0x18]                ; 00423877
    PUSH ESI                            ; 0042387b
    LEA ESI,[ESP + 0x4]                 ; 0042387c
    LEA EDI,[ESP + 0x10]                ; 00423880
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 00423884
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[ESP + 0x4]                 ; 00423889
    ADD ESP,0x4                         ; 0042388d
    MOVSD ES:EDI,ESI                    ; 00423890
    MOVSD ES:EDI,ESI                    ; 00423891
    MOVSD ES:EDI,ESI                    ; 00423892
    PUSH dword ptr [ESP + 0x10]         ; 00423893
    MOV ESI,dword ptr [EBX + 0x2598]    ; 00423897
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 0042389d
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0()
    MOV dword ptr [ESP + 0x44],EAX      ; 004238a2
    MOV dword ptr [ESP + 0x3c],ESI      ; 004238a6
    FLD float ptr [ESP + 0x44]          ; 004238aa
    ADD ESP,0x4                         ; 004238ae
    FLD float ptr [ESP + 0x38]          ; 004238b1
    FXCH                                ; 004238b5
    FST float ptr [ESP + 0x3c]          ; 004238b7
    FXCH                                ; 004238bb
    FCHS                                ; 004238bd
    FSTP float ptr [ESP + 0x30]         ; 004238bf
    FCOMP float ptr [ESP + 0x30]        ; 004238c3
    FNSTSW AX                           ; 004238c7
    SAHF                                ; 004238c9
    JC 0x004238ee                       ; 004238ca
        ;   XREF to: 004238ee (CONDITIONAL_JUMP)  ; LAB_004238ee
    FLD float ptr [ESP + 0x3c]          ; 004238cc
    FCOMP float ptr [ESP + 0x38]        ; 004238d0
    FNSTSW AX                           ; 004238d4
    SAHF                                ; 004238d6
    JBE 0x004238f4                      ; 004238d7
        ;   XREF to: 004238f4 (CONDITIONAL_JUMP)  ; LAB_004238f4
    MOV dword ptr [ESP + 0x34],ESI      ; 004238d9
        ;   Label: LAB_004238d9
    MOV ESI,dword ptr [ESP + 0x34]      ; 004238dd
    MOV dword ptr [EBX + 0x2578],ESI    ; 004238e1
    ADD ESP,0x44                        ; 004238e7
    POP EDI                             ; 004238ea
    POP ESI                             ; 004238eb
    POP EBX                             ; 004238ec
    RET                                 ; 004238ed
    MOV ESI,dword ptr [ESP + 0x30]      ; 004238ee
        ;   Label: LAB_004238ee
    JMP 0x004238d9                      ; 004238f2
        ;   XREF to: 004238d9 (UNCONDITIONAL_JUMP)  ; LAB_004238d9
    MOV ESI,dword ptr [ESP + 0x3c]      ; 004238f4
        ;   Label: LAB_004238f4
    JMP 0x004238d9                      ; 004238f8
        ;   XREF to: 004238d9 (UNCONDITIONAL_JUMP)  ; LAB_004238d9

