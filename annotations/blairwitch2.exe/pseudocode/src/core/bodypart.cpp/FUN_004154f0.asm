; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBodyPart * __cdecl core_bodypart_cpp_FUN_004154f0(CVector3f *position,UOrientationVector *orientation,CVector3f *initial_velocity,CDemonActor *scale_source,int dont_use_normals,int is_transparent,EBloodType blood_type)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   position
; UOrientationVector * Stack[0x8]:4   orientation
; CVector3f *      Stack[0xc]:4   initial_velocity
; CDemonActor *    Stack[0x10]:4   scale_source
; int              Stack[0x14]:4   dont_use_normals
; int              Stack[0x18]:4   is_transparent
; EBloodType       Stack[0x1c]:4   blood_type
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[16]:
;   core_batcreat.cpp_FUN_00412500 at 00412655
;   core_batman.cpp_FUN_00413f40 at 00414012
;   core_boneguy.cpp_CBoneGuy_explode_FUN_0041a0c0 at 0041a1d2
;   core_bride.cpp_CBride_processDismemberment_FUN_0041e8a0 at 0041e962
;   core_charactr.cpp_FUN_00427770 at 004277ae
;   core_construc.cpp_FUN_00438060 at 0043816e
;   core_cow.cpp_CZombieCow_processDismemberment_FUN_004398b0 at 00439959
;   core_dracbrid.cpp_FUN_00464a00 at 00464a3d
;   core_gargoyle.cpp_FUN_004c0c00 at 004c0cc2
;   core_ghoul.cpp_CGhoul_processDismemberment_FUN_004c3e30 at 004c3efd
;   ... and 6 more
;
; Referenced Globals:
;   TerminatedCString s_core_bodypart_cpp_005cbd22
;   TerminatedCString s_Can_t_create_body_part_005cbd37
;   undefined4 DAT_005cbd52
;   undefined4 DAT_00618170
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0
;   core_actor.cpp_FUN_0040cf60
;   core_bodypart.cpp_CBodyPart_ctor_FUN_004156e0
;   core_main.c_FUN_004e4500
;   core_mission.cpp_CDemonMission_addActorToList_FUN_004fc200
;   core_mission.cpp_CDemonMission_generateActorName_FUN_004fcda0
;   crt_unknown.c_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004154f0
        ;   Label: core_bodypart.cpp_FUN_004154f0
    PUSH ESI                            ; 004154f1
    PUSH EDI                            ; 004154f2
    PUSH EBP                            ; 004154f3
    SUB ESP,0x28                        ; 004154f4
    MOV EBP,dword ptr [ESP + 0x40]      ; 004154f7
    MOV ESI,dword ptr [ESP + 0x44]      ; 004154fb
    MOV EDI,dword ptr [ESP + 0x48]      ; 004154ff
    PUSH 0x1344                         ; 00415503
    CALL crt_unknown.c_FUN_005b8be2     ; 00415508
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8be2()
    ADD ESP,0x4                         ; 0041550d
    TEST EAX,EAX                        ; 00415510
    JNZ 0x004155f1                      ; 00415512
        ;   XREF to: 004155f1 (CONDITIONAL_JUMP)  ; LAB_004155f1
    MOV EBX,EAX                         ; 00415518
        ;   Label: LAB_00415518
    TEST EAX,EAX                        ; 0041551a
    JNZ 0x00415541                      ; 0041551c
        ;   XREF to: 00415541 (CONDITIONAL_JUMP)  ; LAB_00415541
    MOV EDX,0x5cbd22                    ; 0041551e | = "..\\core\\bodypart.cpp"
    MOV ECX,0x32                        ; 00415523
    PUSH 0x5cbd37                       ; 00415528 | = "Can't create body part!"
    MOV dword ptr [0x01d046a0],EDX      ; 0041552d | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00415533 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00415539
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0041553e
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00415541
        ;   Label: LAB_00415541
    LEA EAX,[EBX + 0x20]                ; 00415545
    MOV ECX,dword ptr [EDX]             ; 00415548
    MOV dword ptr [EAX],ECX             ; 0041554a
    MOV ECX,dword ptr [EDX + 0x4]       ; 0041554c
    MOV dword ptr [EAX + 0x4],ECX       ; 0041554f
    MOV ECX,dword ptr [EDX + 0x8]       ; 00415552
    MOV dword ptr [EAX + 0x8],ECX       ; 00415555
    LEA EAX,[EBX + 0x30]                ; 00415558
    CMP EAX,EBP                         ; 0041555b
    JZ 0x00415570                       ; 0041555d
        ;   XREF to: 00415570 (CONDITIONAL_JUMP)  ; LAB_00415570
    MOV EDX,dword ptr [EBP]             ; 0041555f
    MOV dword ptr [EAX],EDX             ; 00415562
    MOV EDX,dword ptr [EBP + 0x4]       ; 00415564
    MOV dword ptr [EAX + 0x4],EDX       ; 00415567
    MOV EDX,dword ptr [EBP + 0x8]       ; 0041556a
    MOV dword ptr [EAX + 0x8],EDX       ; 0041556d
    PUSH EBX                            ; 00415570
        ;   Label: LAB_00415570
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0 ; 00415571
        ;   XREF to: 00408ae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00415576
    TEST ESI,ESI                        ; 00415579
    JZ 0x004155ff                       ; 0041557b
        ;   XREF to: 004155ff (CONDITIONAL_JUMP)  ; LAB_004155ff
    LEA EAX,[EBX + 0x3dc]               ; 00415581
    CMP EAX,ESI                         ; 00415587
    JZ 0x0041559b                       ; 00415589
        ;   XREF to: 0041559b (CONDITIONAL_JUMP)  ; LAB_0041559b
    MOV EDX,dword ptr [ESI]             ; 0041558b
    MOV dword ptr [EAX],EDX             ; 0041558d
    MOV EDX,dword ptr [ESI + 0x4]       ; 0041558f
    MOV dword ptr [EAX + 0x4],EDX       ; 00415592
    MOV EDX,dword ptr [ESI + 0x8]       ; 00415595
    MOV dword ptr [EAX + 0x8],EDX       ; 00415598
    PUSH EBX                            ; 0041559b
        ;   Label: LAB_0041559b
    MOV ESI,dword ptr [0x00618170]      ; 0041559c | DAT_00618170
    PUSH ESI                            ; 004155a2
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_004fcda0 ; 004155a3
        ;   XREF to: 004fcda0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_004fcda0(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004155a8
    PUSH EBX                            ; 004155ab
    MOV EBP,dword ptr [0x00618170]      ; 004155ac | DAT_00618170
    PUSH EBP                            ; 004155b2
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_004fc200 ; 004155b3
        ;   XREF to: 004fc200 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_004fc200(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004155b8
    TEST EDI,EDI                        ; 004155bb
    JNZ 0x0041567b                      ; 004155bd
        ;   XREF to: 0041567b (CONDITIONAL_JUMP)  ; LAB_0041567b
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004155c3
        ;   Label: LAB_004155c3
    MOV dword ptr [EBX + 0x10c4],EAX    ; 004155c7
    MOV EAX,dword ptr [ESP + 0x50]      ; 004155cd
    MOV dword ptr [EBX + 0xfc],EAX      ; 004155d1
    MOV dword ptr [EBX + 0x10c8],EAX    ; 004155d7
    MOV EAX,dword ptr [ESP + 0x54]      ; 004155dd
    MOV dword ptr [EBX + 0x10cc],EAX    ; 004155e1
    MOV EAX,EBX                         ; 004155e7
    ADD ESP,0x28                        ; 004155e9
    POP EBP                             ; 004155ec
    POP EDI                             ; 004155ed
    POP ESI                             ; 004155ee
    POP EBX                             ; 004155ef
    RET                                 ; 004155f0
    PUSH EAX                            ; 004155f1
        ;   Label: LAB_004155f1
    CALL core_bodypart.cpp_CBodyPart_ctor_FUN_004156e0 ; 004155f2
        ;   XREF to: 004156e0 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_CBodyPart_ctor_FUN_004156e0(CBodyPart * this_ptr)
    ADD ESP,0x4                         ; 004155f7
    JMP 0x00415518                      ; 004155fa
        ;   XREF to: 00415518 (UNCONDITIONAL_JUMP)  ; LAB_00415518
    PUSH 0x3fc90fdb                     ; 004155ff
        ;   Label: LAB_004155ff
    PUSH 0x3f490fdb                     ; 00415604
    CALL core_actor.cpp_FUN_0040cf60    ; 00415609
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [ESP + 0x2c],EAX      ; 0041560e
    FLD float ptr [ESP + 0x2c]          ; 00415612
    ADD ESP,0x8                         ; 00415616
    PUSH 0x40c90fdb                     ; 00415619
    PUSH 0x0                            ; 0041561e
    FSTP float ptr [ESP + 0x18]         ; 00415620
    CALL core_actor.cpp_FUN_0040cf60    ; 00415624
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [ESP + 0x2c],EAX      ; 00415629
    FLD float ptr [ESP + 0x2c]          ; 0041562d
    ADD ESP,0x8                         ; 00415631
    FLD ST0                             ; 00415634
    FCOS                                ; 00415636
    FLD float ptr [ESP + 0x10]          ; 00415638
    FLD ST0                             ; 0041563c
    FCOS                                ; 0041563e
    FXCH ST3                            ; 00415640
    FSIN                                ; 00415642
    FXCH                                ; 00415644
    FSIN                                ; 00415646
    FXCH ST2                            ; 00415648
    FLD float ptr [0x005cbd52]          ; 0041564a | DAT_005cbd52
    FXCH                                ; 00415650
    FMUL ST1                            ; 00415652
    FXCH ST2                            ; 00415654
    FMUL ST1                            ; 00415656
    FXCH ST3                            ; 00415658
    FMULP                               ; 0041565a
    FXCH                                ; 0041565c
    FMUL ST3                            ; 0041565e
    FXCH ST2                            ; 00415660
    FMULP ST3                           ; 00415662
    FSTP float ptr [EBX + 0x3e0]        ; 00415664
    FSTP float ptr [EBX + 0x3dc]        ; 0041566a
    FSTP float ptr [EBX + 0x3e4]        ; 00415670
    JMP 0x0041559b                      ; 00415676
        ;   XREF to: 0041559b (UNCONDITIONAL_JUMP)  ; LAB_0041559b
    MOV EAX,dword ptr [EDI + 0x108]     ; 0041567b
        ;   Label: LAB_0041567b
    MOV dword ptr [EBX + 0x108],EAX     ; 00415681
    MOV EAX,dword ptr [EDI + 0x10c]     ; 00415687
    MOV dword ptr [EBX + 0x10c],EAX     ; 0041568d
    MOV EAX,dword ptr [EDI + 0x110]     ; 00415693
    MOV dword ptr [EBX + 0x110],EAX     ; 00415699
    JMP 0x004155c3                      ; 0041569f
        ;   XREF to: 004155c3 (UNCONDITIONAL_JUMP)  ; LAB_004155c3

