; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_dismember_FUN_00427360(CCharacter *this_ptr,CVector3f *impact_point,float impact_force,int render_in_background)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   impact_point
; float            Stack[0xc]:4   impact_force
; int              Stack[0x10]:4   render_in_background
; Local Variables:
; undefined4       Stack[-0x108]:4  local_108
; undefined        Stack[-0x104]:1  local_104
; undefined        Stack[-0xdc]:1  local_dc
; undefined        Stack[-0xc4]:1  local_c4
; undefined        Stack[-0xa0]:1  local_a0
; undefined        Stack[-0x88]:1  local_88
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[9]:
;   core_armour.cpp_CArmour_processDamage_FUN_0040f0a0 at 0040f0ba
;   core_armour.cpp_CArmour_process_FUN_0040ef00 at 0040f031
;   core_batman.cpp_CBatman_processDismemberment_FUN_00413f40 at 00414272
;   core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0 at 00428168
;   core_charactr.cpp_CCharacter_processFire_FUN_00425fb0 at 0042636a
;   core_charactr.cpp_FUN_00427260 at 0042734a
;   core_gargoyle.cpp_CGargoyle_processDamage_FUN_004c0ea0 at 004c0f96
;   core_hpriest.cpp_CHighPriestOfGardath_process_FUN_004d4810 at 004d4848
;   core_vampboss.cpp_CVampireBoss_process_FUN_00581910 at 005827c2
;
; Referenced Globals:
;   undefined4 DAT_005ccdc6
;   CGore* g_CGorePtr = 01cb8284
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
;   core_dirmat.cpp_FUN_00449530
;   core_gore.cpp_CGore_spawnBloodBurst_FUN_004c9850
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
;   sound_sndmain.cpp_killSfx_FUN_00551050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00427360
        ;   Label: core_charactr.cpp_CCharacter_dismember_FUN_00427360
    PUSH ESI                            ; 00427361
    PUSH EDI                            ; 00427362
    PUSH EBP                            ; 00427363
    MOV EBP,ESP                         ; 00427364
    SUB ESP,0xf4                        ; 00427366
    AND ESP,0xfffffff8                  ; 0042736c
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0042736f
    MOV EBX,dword ptr [EBP + 0x18]      ; 00427372
    MOV dword ptr [ESP],EAX             ; 00427375
    MOV EAX,dword ptr [EBP + 0x14]      ; 00427378
    MOV EDX,dword ptr [EAX + 0x10220]   ; 0042737b
    PUSH EDX                            ; 00427381
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 00427382
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 00427387
    MOV ESI,dword ptr [EBP + 0x14]      ; 0042738a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042738d
    MOV DL,byte ptr [ESI + 0x2514]      ; 00427390
    ADD EAX,0x2b4                       ; 00427396
    TEST DL,DL                          ; 0042739b
    JZ 0x00427420                       ; 0042739d
        ;   XREF to: 00427420 (CONDITIONAL_JUMP)  ; LAB_00427420
    PUSH EAX                            ; 004273a3
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810 ; 004273a4
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004273a9
    MOV EAX,dword ptr [EAX + 0xc00]     ; 004273ac
    MOV dword ptr [ESP + 0xe8],EAX      ; 004273b2
    CMP EAX,0x1                         ; 004273b9
    JLE 0x00427420                      ; 004273bc
        ;   XREF to: 00427420 (CONDITIONAL_JUMP)  ; LAB_00427420
    FLD float ptr [ESP]                 ; 004273be
    FLDZ                                ; 004273c1
    FCOMPP                              ; 004273c3
    FNSTSW AX                           ; 004273c5
    SAHF                                ; 004273c7
    JBE 0x004273d1                      ; 004273c8
        ;   XREF to: 004273d1 (CONDITIONAL_JUMP)  ; LAB_004273d1
    MOV dword ptr [ESP],0x41a00000      ; 004273ca
    XOR ESI,ESI                         ; 004273d1
        ;   Label: LAB_004273d1
    MOV EDI,dword ptr [ESP + 0xe8]      ; 004273d3
    MOV dword ptr [ESP + 0xec],ESI      ; 004273da
    TEST EDI,EDI                        ; 004273e1
    JLE 0x00427420                      ; 004273e3
        ;   XREF to: 00427420 (CONDITIONAL_JUMP)  ; LAB_00427420
    TEST EBX,EBX                        ; 004273e5
        ;   Label: LAB_004273e5
    JNZ 0x00427517                      ; 004273e7
        ;   XREF to: 00427517 (CONDITIONAL_JUMP)  ; LAB_00427517
    MOV ECX,dword ptr [EBP + 0x20]      ; 004273ed
        ;   Label: LAB_004273ed
    PUSH ECX                            ; 004273f0
    PUSH EBX                            ; 004273f1
    MOV ESI,dword ptr [ESP + 0xf4]      ; 004273f2
    PUSH ESI                            ; 004273f9
    MOV EDI,dword ptr [EBP + 0x14]      ; 004273fa
    PUSH EDI                            ; 004273fd
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770 ; 004273fe
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
        ;   Label: LAB_004273fe
    ADD ESP,0x10                        ; 00427403
    MOV EAX,dword ptr [ESP + 0xec]      ; 00427406
    INC EAX                             ; 0042740d
    MOV EDX,dword ptr [ESP + 0xe8]      ; 0042740e
    MOV dword ptr [ESP + 0xec],EAX      ; 00427415
    CMP EAX,EDX                         ; 0042741c
    JL 0x004273e5                       ; 0042741e
        ;   XREF to: 004273e5 (CONDITIONAL_JUMP)  ; LAB_004273e5
    MOV EDX,dword ptr [EBP + 0x14]      ; 00427420
        ;   Label: LAB_00427420
    MOV EAX,dword ptr [EBP + 0x14]      ; 00427423
    PUSH EDX                            ; 00427426
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 00427427
    LEA ESI,[ESP + 0x48]                ; 0042742d
    LEA EDI,[ESP + 0x30]                ; 00427431
    CALL dword ptr [EAX + 0x24]         ; 00427435
    MOV ECX,0x6                         ; 00427438
    LEA ESI,[ESP + 0x48]                ; 0042743d
    ADD ESP,0x4                         ; 00427441
    MOVSD.REP ES:EDI,ESI                ; 00427444
    FLD float ptr [ESP + 0x2c]          ; 00427446
    FLD float ptr [ESP + 0x30]          ; 0042744a
    LEA ESI,[ESP + 0x2c]                ; 0042744e
    FLD float ptr [ESP + 0x34]          ; 00427452
    LEA EDI,[ESP + 0x74]                ; 00427456
    FXCH ST2                            ; 0042745a
    FADD float ptr [ESI + 0xc]          ; 0042745c
    FXCH                                ; 0042745f
    FADD float ptr [ESI + 0x10]         ; 00427461
    FXCH ST2                            ; 00427464
    FADD float ptr [ESI + 0x14]         ; 00427466
    FXCH                                ; 00427469
    FSTP float ptr [ESP + 0x5c]         ; 0042746b
    FXCH                                ; 0042746f
    FSTP float ptr [ESP + 0x60]         ; 00427471
    LEA ESI,[ESP + 0x5c]                ; 00427475
    FSTP float ptr [ESP + 0x64]         ; 00427479
    MOVSD ES:EDI,ESI                    ; 0042747d
    MOVSD ES:EDI,ESI                    ; 0042747e
    MOVSD ES:EDI,ESI                    ; 0042747f
    FLD float ptr [0x005ccdc6]          ; 00427480 | DAT_005ccdc6
    FLD float ptr [ESP + 0x74]          ; 00427486
    FMUL ST1                            ; 0042748a
    FLD float ptr [ESP + 0x78]          ; 0042748c
    FMUL ST2                            ; 00427490
    LEA EAX,[ESP + 0x8c]                ; 00427492
    FLD float ptr [ESP + 0x7c]          ; 00427499
    FMULP ST3                           ; 0042749d
    PUSH EAX                            ; 0042749f
    MOV ECX,dword ptr [EBP + 0x14]      ; 004274a0
    LEA EDI,[ESP + 0x90]                ; 004274a3
    LEA ESI,[ESP + 0xc0]                ; 004274aa
    FXCH                                ; 004274b1
    FSTP float ptr [ESP + 0xc0]         ; 004274b3
    FSTP float ptr [ESP + 0xc4]         ; 004274ba
    FSTP float ptr [ESP + 0xc8]         ; 004274c1
    MOVSD ES:EDI,ESI                    ; 004274c8
    MOVSD ES:EDI,ESI                    ; 004274c9
    MOVSD ES:EDI,ESI                    ; 004274ca
    PUSH ECX                            ; 004274cb
    LEA ESI,[ESP + 0xac]                ; 004274cc
    LEA EDI,[ESP + 0xa0]                ; 004274d3
    CALL core_actor.cpp_FUN_00408d70    ; 004274da
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 004274df
    LEA ESI,[ESP + 0xa4]                ; 004274e2
    MOV EAX,dword ptr [EBP + 0x14]      ; 004274e9
    MOVSD ES:EDI,ESI                    ; 004274ec
    MOVSD ES:EDI,ESI                    ; 004274ed
    MOVSD ES:EDI,ESI                    ; 004274ee
    CMP dword ptr [EAX + 0x10224],0x0   ; 004274ef
    JZ 0x00427643                       ; 004274f6
        ;   XREF to: 00427643 (CONDITIONAL_JUMP)  ; LAB_00427643
    MOV dword ptr [EAX + 0x3564],0x0    ; 004274fc
    MOV EAX,dword ptr [EBP + 0x14]      ; 00427506
    MOV dword ptr [EAX + 0x70],0x2      ; 00427509
    MOV ESP,EBP                         ; 00427510
    POP EBP                             ; 00427512
    POP EDI                             ; 00427513
    POP ESI                             ; 00427514
    POP EBX                             ; 00427515
    RET                                 ; 00427516
    FLD float ptr [ESP]                 ; 00427517
        ;   Label: LAB_00427517
    FLDZ                                ; 0042751a
    FCOMPP                              ; 0042751c
    FNSTSW AX                           ; 0042751e
    SAHF                                ; 00427520
    JNC 0x004273ed                      ; 00427521
        ;   XREF to: 004273ed (CONDITIONAL_JUMP)  ; LAB_004273ed
    PUSH EBX                            ; 00427527
    LEA ESI,[ESP + 0x6c]                ; 00427528
    LEA EDI,[ESP + 0xb4]                ; 0042752c
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 00427533
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    ADD ESP,0x4                         ; 00427538
    LEA ESI,[ESP + 0x68]                ; 0042753b
    PUSH dword ptr [ESP]                ; 0042753f
    FLD float ptr [ESP + 0x4]           ; 00427542
    FCHS                                ; 00427546
    FSTP float ptr [ESP + 0xe8]         ; 00427548
    PUSH dword ptr [ESP + 0xe8]         ; 0042754f
    MOVSD ES:EDI,ESI                    ; 00427556
    MOVSD ES:EDI,ESI                    ; 00427557
    MOVSD ES:EDI,ESI                    ; 00427558
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00427559
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0xf8],EAX      ; 0042755e
    FLD float ptr [ESP + 0xf8]          ; 00427565
    ADD ESP,0x8                         ; 0042756c
    PUSH dword ptr [ESP]                ; 0042756f
    FADD float ptr [ESP + 0xb8]         ; 00427572
    PUSH dword ptr [ESP + 0xe8]         ; 00427579
    FSTP float ptr [ESP + 0xbc]         ; 00427580
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00427587
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0xf8],EAX      ; 0042758c
    FLD float ptr [ESP + 0xf8]          ; 00427593
    ADD ESP,0x8                         ; 0042759a
    LEA ESI,[ESP + 0xb0]                ; 0042759d
    PUSH ESI                            ; 004275a4
    LEA ESI,[ESP + 0x8]                 ; 004275a5
    FADD float ptr [ESP + 0xb4]         ; 004275a9
    PUSH ESI                            ; 004275b0
    FSTP float ptr [ESP + 0xb8]         ; 004275b1
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280 ; 004275b8
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    FLD float ptr [EBX + 0x4]           ; 004275bd
    FMUL ST0                            ; 004275c0
    FLD float ptr [EBX]                 ; 004275c2
    FMUL ST0                            ; 004275c4
    FADDP                               ; 004275c6
    FLD float ptr [EBX + 0x8]           ; 004275c8
    FMUL ST0                            ; 004275cb
    FADDP                               ; 004275cd
    ADD ESP,0x8                         ; 004275cf
    FSQRT                               ; 004275d2
    LEA ESI,[ESP + 0xc8]                ; 004275d4
    LEA EDI,[ESP + 0x80]                ; 004275db
    PUSH ESI                            ; 004275e2
    LEA ESI,[ESP + 0x8]                 ; 004275e3
    XOR ECX,ECX                         ; 004275e7
    PUSH ESI                            ; 004275e9
    LEA ESI,[ESP + 0xdc]                ; 004275ea
    MOV dword ptr [ESP + 0xd0],ECX      ; 004275f1
    FSTP float ptr [ESP + 0xe8]         ; 004275f8
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004275ff
    MOV dword ptr [ESP + 0xd4],ECX      ; 00427606
    MOV dword ptr [ESP + 0xd8],EAX      ; 0042760d
    CALL core_dirmat.cpp_FUN_00449530   ; 00427614
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    LEA ESI,[ESP + 0xdc]                ; 00427619
    ADD ESP,0x8                         ; 00427620
    MOVSD ES:EDI,ESI                    ; 00427623
    MOVSD ES:EDI,ESI                    ; 00427624
    MOVSD ES:EDI,ESI                    ; 00427625
    MOV EDI,dword ptr [EBP + 0x20]      ; 00427626
    PUSH EDI                            ; 00427629
    LEA ESI,[ESP + 0x84]                ; 0042762a
    PUSH ESI                            ; 00427631
    MOV EAX,dword ptr [ESP + 0xf4]      ; 00427632
    PUSH EAX                            ; 00427639
    MOV EDX,dword ptr [EBP + 0x14]      ; 0042763a
    PUSH EDX                            ; 0042763d
    JMP 0x004273fe                      ; 0042763e
        ;   XREF to: 004273fe (UNCONDITIONAL_JUMP)  ; LAB_004273fe
    MOV EDI,dword ptr [EAX + 0x280c]    ; 00427643
        ;   Label: LAB_00427643
    PUSH EDI                            ; 00427649
    PUSH 0x64                           ; 0042764a
    PUSH EBX                            ; 0042764c
    LEA EAX,[ESP + 0xa4]                ; 0042764d
    PUSH EAX                            ; 00427654
    MOV EAX,[0x006167e0]                ; 00427655 | g_CGorePtr
    PUSH EAX                            ; 0042765a
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004c9850 ; 0042765b
        ;   XREF to: 004c9850 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004c9850(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 00427660
    MOV EAX,dword ptr [EBP + 0x14]      ; 00427663
    MOV dword ptr [EAX + 0x70],0x2      ; 00427666
    MOV ESP,EBP                         ; 0042766d
    POP EBP                             ; 0042766f
    POP EDI                             ; 00427670
    POP ESI                             ; 00427671
    POP EBX                             ; 00427672
    RET                                 ; 00427673

