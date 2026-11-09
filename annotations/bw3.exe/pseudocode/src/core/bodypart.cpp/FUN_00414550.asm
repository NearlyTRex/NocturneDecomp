; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBodyPart * __cdecl core_bodypart_cpp_FUN_00414550(CVector3f *position,UOrientationVector *orientation,CVector3f *initial_velocity,CDemonActor *scale_source,int dont_use_normals,int is_transparent,EBloodType blood_type)
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
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[13]:
;   core_boneguy.cpp_FUN_00419550 at 004196a2
;   core_carved.cpp_FUN_00428810 at 00428960
;   core_charactr.cpp_FUN_00430520 at 0043055e
;   core_construc.cpp_FUN_00444110 at 0044421e
;   core_cow.cpp_FUN_00445730 at 004457d9
;   core_gargoyle.cpp_FUN_004c5f10 at 004c5fd2
;   core_ghoul.cpp_CGhoul_processDismemberment_FUN_004c9140 at 004c920d
;   core_imp.cpp_FUN_004d7bd0 at 004d7ca2
;   core_moocow.cpp_FUN_004f9050 at 004f90cb
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052c25f
;   ... and 3 more
;
; Referenced Globals:
;   TerminatedCString s_core_bodypart_cpp_005b6a2a
;   TerminatedCString s_Can_t_create_body_part_005b6a3f
;   undefined4 DAT_005b6a5a
;   undefined4 DAT_00600530
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01d81080
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0
;   core_actor.cpp_FUN_0040ce40
;   core_bodypart.cpp_CBodyPart_ctor_FUN_00414750
;   core_main.c_FUN_004e4330
;   core_mission.cpp_CDemonMission_generateActorName_FUN_004f7530
;   core_mission.cpp_FUN_004f6930
;   crt_unknown.c_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414550
        ;   Label: core_bodypart.cpp_FUN_00414550
    PUSH ESI                            ; 00414551
    PUSH EDI                            ; 00414552
    PUSH EBP                            ; 00414553
    SUB ESP,0x28                        ; 00414554
    MOV EBP,dword ptr [ESP + 0x40]      ; 00414557
    MOV EDI,dword ptr [ESP + 0x44]      ; 0041455b
    MOV ESI,dword ptr [ESP + 0x48]      ; 0041455f
    PUSH 0xf34                          ; 00414563
    CALL crt_unknown.c_FUN_005a3cb2     ; 00414568
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0041456d
    TEST EAX,EAX                        ; 00414570
    JNZ 0x0041465f                      ; 00414572
        ;   XREF to: 0041465f (CONDITIONAL_JUMP)  ; LAB_0041465f
    MOV EBX,EAX                         ; 00414578
        ;   Label: LAB_00414578
    TEST EAX,EAX                        ; 0041457a
    JNZ 0x004145a1                      ; 0041457c
        ;   XREF to: 004145a1 (CONDITIONAL_JUMP)  ; LAB_004145a1
    MOV EDX,0x5b6a2a                    ; 0041457e | = "..\\core\\bodypart.cpp"
    MOV ECX,0x32                        ; 00414583
    PUSH 0x5b6a3f                       ; 00414588 | = "Can't create body part!"
    MOV dword ptr [0x01d71de0],EDX      ; 0041458d | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00414593 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00414599
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0041459e
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004145a1
        ;   Label: LAB_004145a1
    LEA EAX,[EBX + 0x20]                ; 004145a5
    MOV ECX,dword ptr [EDX]             ; 004145a8
    MOV dword ptr [EAX],ECX             ; 004145aa
    MOV ECX,dword ptr [EDX + 0x4]       ; 004145ac
    MOV dword ptr [EAX + 0x4],ECX       ; 004145af
    MOV ECX,dword ptr [EDX + 0x8]       ; 004145b2
    MOV dword ptr [EAX + 0x8],ECX       ; 004145b5
    LEA EAX,[EBX + 0x30]                ; 004145b8
    CMP EAX,EBP                         ; 004145bb
    JZ 0x004145d0                       ; 004145bd
        ;   XREF to: 004145d0 (CONDITIONAL_JUMP)  ; LAB_004145d0
    MOV EDX,dword ptr [EBP]             ; 004145bf
    MOV dword ptr [EAX],EDX             ; 004145c2
    MOV EDX,dword ptr [EBP + 0x4]       ; 004145c4
    MOV dword ptr [EAX + 0x4],EDX       ; 004145c7
    MOV EDX,dword ptr [EBP + 0x8]       ; 004145ca
    MOV dword ptr [EAX + 0x8],EDX       ; 004145cd
    PUSH EBX                            ; 004145d0
        ;   Label: LAB_004145d0
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0 ; 004145d1
        ;   XREF to: 004088f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004145d6
    TEST ESI,ESI                        ; 004145d9
    JZ 0x0041466d                       ; 004145db
        ;   XREF to: 0041466d (CONDITIONAL_JUMP)  ; LAB_0041466d
    MOV EAX,dword ptr [ESI + 0x2c]      ; 004145e1
    MOV dword ptr [EBX + 0x2c],EAX      ; 004145e4
        ;   Label: LAB_004145e4
    TEST EDI,EDI                        ; 004145e7
    JZ 0x00414679                       ; 004145e9
        ;   XREF to: 00414679 (CONDITIONAL_JUMP)  ; LAB_00414679
    LEA EAX,[EBX + 0x280]               ; 004145ef
    CMP EAX,EDI                         ; 004145f5
    JZ 0x00414609                       ; 004145f7
        ;   XREF to: 00414609 (CONDITIONAL_JUMP)  ; LAB_00414609
    MOV EDX,dword ptr [EDI]             ; 004145f9
    MOV dword ptr [EAX],EDX             ; 004145fb
    MOV EDX,dword ptr [EDI + 0x4]       ; 004145fd
    MOV dword ptr [EAX + 0x4],EDX       ; 00414600
    MOV EDX,dword ptr [EDI + 0x8]       ; 00414603
    MOV dword ptr [EAX + 0x8],EDX       ; 00414606
    PUSH EBX                            ; 00414609
        ;   Label: LAB_00414609
    MOV EDI,dword ptr [0x00600530]      ; 0041460a | DAT_00600530
    PUSH EDI                            ; 00414610 | DAT_01d81080
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_004f7530 ; 00414611
        ;   XREF to: 004f7530 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_004f7530(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00414616
    PUSH EBX                            ; 00414619
    MOV EBP,dword ptr [0x00600530]      ; 0041461a | DAT_00600530
    PUSH EBP                            ; 00414620 | DAT_01d81080
    CALL core_mission.cpp_FUN_004f6930  ; 00414621
        ;   XREF to: 004f6930 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_FUN_004f6930(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00414626
    TEST ESI,ESI                        ; 00414629
    JNZ 0x004146f5                      ; 0041462b
        ;   XREF to: 004146f5 (CONDITIONAL_JUMP)  ; LAB_004146f5
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00414631
        ;   Label: LAB_00414631
    MOV dword ptr [EBX + 0xcb0],EAX     ; 00414635
    MOV EAX,dword ptr [ESP + 0x50]      ; 0041463b
    MOV dword ptr [EBX + 0xfc],EAX      ; 0041463f
    MOV dword ptr [EBX + 0xcb4],EAX     ; 00414645
    MOV EAX,dword ptr [ESP + 0x54]      ; 0041464b
    MOV dword ptr [EBX + 0xcb8],EAX     ; 0041464f
    MOV EAX,EBX                         ; 00414655
    ADD ESP,0x28                        ; 00414657
    POP EBP                             ; 0041465a
    POP EDI                             ; 0041465b
    POP ESI                             ; 0041465c
    POP EBX                             ; 0041465d
    RET                                 ; 0041465e
    PUSH EAX                            ; 0041465f
        ;   Label: LAB_0041465f
    CALL core_bodypart.cpp_CBodyPart_ctor_FUN_00414750 ; 00414660
        ;   XREF to: 00414750 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_CBodyPart_ctor_FUN_00414750(CBodyPart * this_ptr)
    ADD ESP,0x4                         ; 00414665
    JMP 0x00414578                      ; 00414668
        ;   XREF to: 00414578 (UNCONDITIONAL_JUMP)  ; LAB_00414578
    MOV EAX,[0x00600530]                ; 0041466d | DAT_00600530
        ;   Label: LAB_0041466d
    MOV EAX,dword ptr [EAX]             ; 00414672 | DAT_01d81080
    JMP 0x004145e4                      ; 00414674
        ;   XREF to: 004145e4 (UNCONDITIONAL_JUMP)  ; LAB_004145e4
    PUSH 0x3fc90fdb                     ; 00414679
        ;   Label: LAB_00414679
    PUSH 0x3f490fdb                     ; 0041467e
    CALL core_actor.cpp_FUN_0040ce40    ; 00414683
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0x2c],EAX      ; 00414688
    FLD float ptr [ESP + 0x2c]          ; 0041468c
    ADD ESP,0x8                         ; 00414690
    PUSH 0x40c90fdb                     ; 00414693
    PUSH 0x0                            ; 00414698
    FSTP float ptr [ESP + 0x1c]         ; 0041469a
    CALL core_actor.cpp_FUN_0040ce40    ; 0041469e
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0x2c],EAX      ; 004146a3
    FLD float ptr [ESP + 0x2c]          ; 004146a7
    ADD ESP,0x8                         ; 004146ab
    FLD ST0                             ; 004146ae
    FCOS                                ; 004146b0
    FLD float ptr [ESP + 0x14]          ; 004146b2
    FLD ST0                             ; 004146b6
    FCOS                                ; 004146b8
    FXCH ST3                            ; 004146ba
    FSIN                                ; 004146bc
    FXCH                                ; 004146be
    FSIN                                ; 004146c0
    FXCH ST2                            ; 004146c2
    FLD float ptr [0x005b6a5a]          ; 004146c4 | DAT_005b6a5a
    FXCH                                ; 004146ca
    FMUL ST1                            ; 004146cc
    FXCH ST2                            ; 004146ce
    FMUL ST1                            ; 004146d0
    FXCH ST3                            ; 004146d2
    FMULP                               ; 004146d4
    FXCH                                ; 004146d6
    FMUL ST3                            ; 004146d8
    FXCH ST2                            ; 004146da
    FMULP ST3                           ; 004146dc
    FSTP float ptr [EBX + 0x284]        ; 004146de
    FSTP float ptr [EBX + 0x280]        ; 004146e4
    FSTP float ptr [EBX + 0x288]        ; 004146ea
    JMP 0x00414609                      ; 004146f0
        ;   XREF to: 00414609 (UNCONDITIONAL_JUMP)  ; LAB_00414609
    MOV EAX,dword ptr [ESI + 0x108]     ; 004146f5
        ;   Label: LAB_004146f5
    MOV dword ptr [EBX + 0x108],EAX     ; 004146fb
    MOV EAX,dword ptr [ESI + 0x10c]     ; 00414701
    MOV dword ptr [EBX + 0x10c],EAX     ; 00414707
    MOV EAX,dword ptr [ESI + 0x110]     ; 0041470d
    MOV dword ptr [EBX + 0x110],EAX     ; 00414713
    JMP 0x00414631                      ; 00414719
        ;   XREF to: 00414631 (UNCONDITIONAL_JUMP)  ; LAB_00414631

