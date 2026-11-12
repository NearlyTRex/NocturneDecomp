; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBodyPart * __cdecl core_bodypart_cpp_createBodyPart_FUN_00418940(CVector3f *position,UOrientationVector *orientation,CVector3f *initial_velocity,CDemonActor *scale_source,int dont_use_normals,int is_transparent,EBloodType blood_type)
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
; XREF[21]:
;   core_batcreat.cpp_CBatCreature_processDismemberment_FUN_00412170 at 004122c5
;   core_batman.cpp_CBatman_processDismemberment_FUN_00413c40 at 00413d12
;   core_boneguy.cpp_CBoneGuy_explode_FUN_0041d540 at 0041d652
;   core_bride.cpp_CBride_processDismemberment_FUN_004248e0 at 004249a2
;   core_carved.cpp_FUN_0042b580 at 0042b64d
;   core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 at 004311de
;   core_construc.cpp_FUN_004472a0 at 004473ae
;   core_cow.cpp_CZombieCow_processDismemberment_FUN_00448b70 at 00448c19
;   core_demnfolk.cpp_FUN_0045c4a0 at 0045c56d
;   core_djien.cpp_CDjien_damageSack_FUN_00460f90 at 00461013
;   ... and 11 more
;
; Referenced Globals:
;   TerminatedCString s_core_bodypart_cpp_005d4281
;   TerminatedCString s_Can_t_create_body_part_005d4296
;   undefined4 DAT_005d42b1
;   undefined4 DAT_0061f650
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d2c900
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_bodypart.cpp_CBodyPart_ctor_FUN_00418b40
;   core_main.c_FUN_005030e0
;   core_mission.cpp_CDemonMission_addActorToList_FUN_0051b160
;   core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00418940
        ;   Label: core_bodypart.cpp_createBodyPart_FUN_00418940
    PUSH ESI                            ; 00418941
    PUSH EDI                            ; 00418942
    PUSH EBP                            ; 00418943
    SUB ESP,0x28                        ; 00418944
    MOV EBP,dword ptr [ESP + 0x40]      ; 00418947
    MOV EDI,dword ptr [ESP + 0x44]      ; 0041894b
    MOV ESI,dword ptr [ESP + 0x48]      ; 0041894f
    PUSH 0xf34                          ; 00418953
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 00418958
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 0041895d
    TEST EAX,EAX                        ; 00418960
    JNZ 0x00418a4f                      ; 00418962
        ;   XREF to: 00418a4f (CONDITIONAL_JUMP)  ; LAB_00418a4f
    MOV EBX,EAX                         ; 00418968
        ;   Label: LAB_00418968
    TEST EAX,EAX                        ; 0041896a
    JNZ 0x00418991                      ; 0041896c
        ;   XREF to: 00418991 (CONDITIONAL_JUMP)  ; LAB_00418991
    MOV EDX,0x5d4281                    ; 0041896e | = "..\\core\\bodypart.cpp"
    MOV ECX,0x32                        ; 00418973
    PUSH 0x5d4296                       ; 00418978 | = "Can't create body part!"
    MOV dword ptr [0x01d1d400],EDX      ; 0041897d | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00418983 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00418989
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0041898e
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00418991
        ;   Label: LAB_00418991
    LEA EAX,[EBX + 0x20]                ; 00418995
    MOV ECX,dword ptr [EDX]             ; 00418998
    MOV dword ptr [EAX],ECX             ; 0041899a
    MOV ECX,dword ptr [EDX + 0x4]       ; 0041899c
    MOV dword ptr [EAX + 0x4],ECX       ; 0041899f
    MOV ECX,dword ptr [EDX + 0x8]       ; 004189a2
    MOV dword ptr [EAX + 0x8],ECX       ; 004189a5
    LEA EAX,[EBX + 0x30]                ; 004189a8
    CMP EAX,EBP                         ; 004189ab
    JZ 0x004189c0                       ; 004189ad
        ;   XREF to: 004189c0 (CONDITIONAL_JUMP)  ; LAB_004189c0
    MOV EDX,dword ptr [EBP]             ; 004189af
    MOV dword ptr [EAX],EDX             ; 004189b2
    MOV EDX,dword ptr [EBP + 0x4]       ; 004189b4
    MOV dword ptr [EAX + 0x4],EDX       ; 004189b7
    MOV EDX,dword ptr [EBP + 0x8]       ; 004189ba
    MOV dword ptr [EAX + 0x8],EDX       ; 004189bd
    PUSH EBX                            ; 004189c0
        ;   Label: LAB_004189c0
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0 ; 004189c1
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004189c6
    TEST ESI,ESI                        ; 004189c9
    JZ 0x00418a5d                       ; 004189cb
        ;   XREF to: 00418a5d (CONDITIONAL_JUMP)  ; LAB_00418a5d
    MOV EAX,dword ptr [ESI + 0x2c]      ; 004189d1
    MOV dword ptr [EBX + 0x2c],EAX      ; 004189d4
        ;   Label: LAB_004189d4
    TEST EDI,EDI                        ; 004189d7
    JZ 0x00418a69                       ; 004189d9
        ;   XREF to: 00418a69 (CONDITIONAL_JUMP)  ; LAB_00418a69
    LEA EAX,[EBX + 0x280]               ; 004189df
    CMP EAX,EDI                         ; 004189e5
    JZ 0x004189f9                       ; 004189e7
        ;   XREF to: 004189f9 (CONDITIONAL_JUMP)  ; LAB_004189f9
    MOV EDX,dword ptr [EDI]             ; 004189e9
    MOV dword ptr [EAX],EDX             ; 004189eb
    MOV EDX,dword ptr [EDI + 0x4]       ; 004189ed
    MOV dword ptr [EAX + 0x4],EDX       ; 004189f0
    MOV EDX,dword ptr [EDI + 0x8]       ; 004189f3
    MOV dword ptr [EAX + 0x8],EDX       ; 004189f6
    PUSH EBX                            ; 004189f9
        ;   Label: LAB_004189f9
    MOV EDI,dword ptr [0x0061f650]      ; 004189fa | DAT_0061f650
    PUSH EDI                            ; 00418a00 | DAT_01d2c900
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60 ; 00418a01
        ;   XREF to: 0051bd60 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00418a06
    PUSH EBX                            ; 00418a09
    MOV EBP,dword ptr [0x0061f650]      ; 00418a0a | DAT_0061f650
    PUSH EBP                            ; 00418a10
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_0051b160 ; 00418a11
        ;   XREF to: 0051b160 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_0051b160(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00418a16
    TEST ESI,ESI                        ; 00418a19
    JNZ 0x00418ae5                      ; 00418a1b
        ;   XREF to: 00418ae5 (CONDITIONAL_JUMP)  ; LAB_00418ae5
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00418a21
        ;   Label: LAB_00418a21
    MOV dword ptr [EBX + 0xcb0],EAX     ; 00418a25
    MOV EAX,dword ptr [ESP + 0x50]      ; 00418a2b
    MOV dword ptr [EBX + 0xfc],EAX      ; 00418a2f
    MOV dword ptr [EBX + 0xcb4],EAX     ; 00418a35
    MOV EAX,dword ptr [ESP + 0x54]      ; 00418a3b
    MOV dword ptr [EBX + 0xcb8],EAX     ; 00418a3f
    MOV EAX,EBX                         ; 00418a45
    ADD ESP,0x28                        ; 00418a47
    POP EBP                             ; 00418a4a
    POP EDI                             ; 00418a4b
    POP ESI                             ; 00418a4c
    POP EBX                             ; 00418a4d
    RET                                 ; 00418a4e
    PUSH EAX                            ; 00418a4f
        ;   Label: LAB_00418a4f
    CALL core_bodypart.cpp_CBodyPart_ctor_FUN_00418b40 ; 00418a50
        ;   XREF to: 00418b40 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_CBodyPart_ctor_FUN_00418b40(CBodyPart * this_ptr)
    ADD ESP,0x4                         ; 00418a55
    JMP 0x00418968                      ; 00418a58
        ;   XREF to: 00418968 (UNCONDITIONAL_JUMP)  ; LAB_00418968
    MOV EAX,[0x0061f650]                ; 00418a5d | DAT_0061f650
        ;   Label: LAB_00418a5d
    MOV EAX,dword ptr [EAX]             ; 00418a62 | DAT_01d2c900
    JMP 0x004189d4                      ; 00418a64
        ;   XREF to: 004189d4 (UNCONDITIONAL_JUMP)  ; LAB_004189d4
    PUSH 0x3fc90fdb                     ; 00418a69
        ;   Label: LAB_00418a69
    PUSH 0x3f490fdb                     ; 00418a6e
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 00418a73
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x2c],EAX      ; 00418a78
    FLD float ptr [ESP + 0x2c]          ; 00418a7c
    ADD ESP,0x8                         ; 00418a80
    PUSH 0x40c90fdb                     ; 00418a83
    PUSH 0x0                            ; 00418a88
    FSTP float ptr [ESP + 0x1c]         ; 00418a8a
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 00418a8e
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x2c],EAX      ; 00418a93
    FLD float ptr [ESP + 0x2c]          ; 00418a97
    ADD ESP,0x8                         ; 00418a9b
    FLD ST0                             ; 00418a9e
    FCOS                                ; 00418aa0
    FLD float ptr [ESP + 0x14]          ; 00418aa2
    FLD ST0                             ; 00418aa6
    FCOS                                ; 00418aa8
    FXCH ST3                            ; 00418aaa
    FSIN                                ; 00418aac
    FXCH                                ; 00418aae
    FSIN                                ; 00418ab0
    FXCH ST2                            ; 00418ab2
    FLD float ptr [0x005d42b1]          ; 00418ab4 | DAT_005d42b1
    FXCH                                ; 00418aba
    FMUL ST1                            ; 00418abc
    FXCH ST2                            ; 00418abe
    FMUL ST1                            ; 00418ac0
    FXCH ST3                            ; 00418ac2
    FMULP                               ; 00418ac4
    FXCH                                ; 00418ac6
    FMUL ST3                            ; 00418ac8
    FXCH ST2                            ; 00418aca
    FMULP ST3                           ; 00418acc
    FSTP float ptr [EBX + 0x284]        ; 00418ace
    FSTP float ptr [EBX + 0x280]        ; 00418ad4
    FSTP float ptr [EBX + 0x288]        ; 00418ada
    JMP 0x004189f9                      ; 00418ae0
        ;   XREF to: 004189f9 (UNCONDITIONAL_JUMP)  ; LAB_004189f9
    MOV EAX,dword ptr [ESI + 0x108]     ; 00418ae5
        ;   Label: LAB_00418ae5
    MOV dword ptr [EBX + 0x108],EAX     ; 00418aeb
    MOV EAX,dword ptr [ESI + 0x10c]     ; 00418af1
    MOV dword ptr [EBX + 0x10c],EAX     ; 00418af7
    MOV EAX,dword ptr [ESI + 0x110]     ; 00418afd
    MOV dword ptr [EBX + 0x110],EAX     ; 00418b03
    JMP 0x00418a21                      ; 00418b09
        ;   XREF to: 00418a21 (UNCONDITIONAL_JUMP)  ; LAB_00418a21

