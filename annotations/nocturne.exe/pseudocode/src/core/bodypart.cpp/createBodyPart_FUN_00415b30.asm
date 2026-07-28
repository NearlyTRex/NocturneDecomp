; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBodyPart * __cdecl core_bodypart_cpp_createBodyPart_FUN_00415b30(CVector3f *position,UOrientationVector *orientation,CVector3f *initial_velocity,CDemonActor *scale_source,int dont_use_normals,int is_transparent,int blood_type)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   position
; UOrientationVector * Stack[0x8]:4   orientation
; CVector3f *      Stack[0xc]:4   initial_velocity
; CDemonActor *    Stack[0x10]:4   scale_source
; int              Stack[0x14]:4   dont_use_normals
; int              Stack[0x18]:4   is_transparent
; int              Stack[0x1c]:4   blood_type
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[15]:
;   core_batcreat.cpp_CBatCreature_processDismemberment_FUN_00412de0 at 00412f35
;   core_batman.cpp_CBatman_processDismemberment_FUN_004145f0 at 004146c2
;   core_boneguy.cpp_CBoneGuy_explode_FUN_0041a0f0 at 0041a202
;   core_bride.cpp_CBride_processDismemberment_FUN_00420a10 at 00420ad2
;   core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40 at 00427e7e
;   core_cow.cpp_CZombieCow_processDismemberment_FUN_0043c360 at 0043c409
;   core_dracbrid.cpp_CDraculaBride_dismemberPart_FUN_0045a1a0 at 0045a1dd
;   core_gargoyle.cpp_CGargoyle_processDismemberment_FUN_004a8330 at 004a83f2
;   core_ghoul.cpp_CGhoul_processDismemberment_FUN_004ab190 at 004ab25d
;   core_imp.cpp_CImp_processDismemberment_FUN_004bca20 at 004bcaf2
;   ... and 5 more
;
; Referenced Globals:
;   TerminatedCString s_core_bodypart_cpp_00578e7a
;   TerminatedCString s_Can_t_create_body_part_00578e8f
;   float FLOAT_00578eaa = 10
;   undefined4 DAT_005baf90
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_bodypart.cpp_CBodyPart_ctor_FUN_00415d20
;   core_main.c_FUN_004c8440
;   core_mission.cpp_CDemonMission_addActorToList_FUN_004d8c60
;   core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415b30
        ;   Label: core_bodypart.cpp_createBodyPart_FUN_00415b30
    PUSH ESI                            ; 00415b31
    PUSH EDI                            ; 00415b32
    PUSH EBP                            ; 00415b33
    SUB ESP,0x28                        ; 00415b34
    MOV EBP,dword ptr [ESP + 0x40]      ; 00415b37
    MOV ESI,dword ptr [ESP + 0x44]      ; 00415b3b
    MOV EDI,dword ptr [ESP + 0x48]      ; 00415b3f
    PUSH 0xf18                          ; 00415b43
    CALL crt_unknown.c_FUN_0056497c     ; 00415b48
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 00415b4d
    TEST EAX,EAX                        ; 00415b50
    JNZ 0x00415c31                      ; 00415b52
        ;   XREF to: 00415c31 (CONDITIONAL_JUMP)  ; LAB_00415c31
    MOV EBX,EAX                         ; 00415b58
        ;   Label: LAB_00415b58
    TEST EAX,EAX                        ; 00415b5a
    JNZ 0x00415b81                      ; 00415b5c
        ;   XREF to: 00415b81 (CONDITIONAL_JUMP)  ; LAB_00415b81
    MOV EDX,0x578e7a                    ; 00415b5e | = "..\\core\\bodypart.cpp"
    MOV ECX,0x32                        ; 00415b63
    PUSH 0x578e8f                       ; 00415b68 | = "Can't create body part!"
    MOV dword ptr [0x01cc4800],EDX      ; 00415b6d | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 00415b73 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00415b79
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00415b7e
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00415b81
        ;   Label: LAB_00415b81
    LEA EAX,[EBX + 0x20]                ; 00415b85
    MOV ECX,dword ptr [EDX]             ; 00415b88
    MOV dword ptr [EAX],ECX             ; 00415b8a
    MOV ECX,dword ptr [EDX + 0x4]       ; 00415b8c
    MOV dword ptr [EAX + 0x4],ECX       ; 00415b8f
    MOV ECX,dword ptr [EDX + 0x8]       ; 00415b92
    MOV dword ptr [EAX + 0x8],ECX       ; 00415b95
    LEA EAX,[EBX + 0x30]                ; 00415b98
    CMP EAX,EBP                         ; 00415b9b
    JZ 0x00415bb0                       ; 00415b9d
        ;   XREF to: 00415bb0 (CONDITIONAL_JUMP)  ; LAB_00415bb0
    MOV EDX,dword ptr [EBP]             ; 00415b9f
    MOV dword ptr [EAX],EDX             ; 00415ba2
    MOV EDX,dword ptr [EBP + 0x4]       ; 00415ba4
    MOV dword ptr [EAX + 0x4],EDX       ; 00415ba7
    MOV EDX,dword ptr [EBP + 0x8]       ; 00415baa
    MOV dword ptr [EAX + 0x8],EDX       ; 00415bad
    PUSH EBX                            ; 00415bb0
        ;   Label: LAB_00415bb0
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000 ; 00415bb1
        ;   XREF to: 0040a000 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00415bb6
    TEST ESI,ESI                        ; 00415bb9
    JZ 0x00415c3f                       ; 00415bbb
        ;   XREF to: 00415c3f (CONDITIONAL_JUMP)  ; LAB_00415c3f
    LEA EAX,[EBX + 0x278]               ; 00415bc1
    CMP EAX,ESI                         ; 00415bc7
    JZ 0x00415bdb                       ; 00415bc9
        ;   XREF to: 00415bdb (CONDITIONAL_JUMP)  ; LAB_00415bdb
    MOV EDX,dword ptr [ESI]             ; 00415bcb
    MOV dword ptr [EAX],EDX             ; 00415bcd
    MOV EDX,dword ptr [ESI + 0x4]       ; 00415bcf
    MOV dword ptr [EAX + 0x4],EDX       ; 00415bd2
    MOV EDX,dword ptr [ESI + 0x8]       ; 00415bd5
    MOV dword ptr [EAX + 0x8],EDX       ; 00415bd8
    PUSH EBX                            ; 00415bdb
        ;   Label: LAB_00415bdb
    MOV ESI,dword ptr [0x005baf90]      ; 00415bdc | DAT_005baf90
    PUSH ESI                            ; 00415be2
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720 ; 00415be3
        ;   XREF to: 004d9720 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00415be8
    PUSH EBX                            ; 00415beb
    MOV EBP,dword ptr [0x005baf90]      ; 00415bec | DAT_005baf90
    PUSH EBP                            ; 00415bf2
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_004d8c60 ; 00415bf3
        ;   XREF to: 004d8c60 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_004d8c60(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00415bf8
    TEST EDI,EDI                        ; 00415bfb
    JNZ 0x00415cbb                      ; 00415bfd
        ;   XREF to: 00415cbb (CONDITIONAL_JUMP)  ; LAB_00415cbb
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00415c03
        ;   Label: LAB_00415c03
    MOV dword ptr [EBX + 0xc98],EAX     ; 00415c07
    MOV EAX,dword ptr [ESP + 0x50]      ; 00415c0d
    MOV dword ptr [EBX + 0xfc],EAX      ; 00415c11
    MOV dword ptr [EBX + 0xc9c],EAX     ; 00415c17
    MOV EAX,dword ptr [ESP + 0x54]      ; 00415c1d
    MOV dword ptr [EBX + 0xca0],EAX     ; 00415c21
    MOV EAX,EBX                         ; 00415c27
    ADD ESP,0x28                        ; 00415c29
    POP EBP                             ; 00415c2c
    POP EDI                             ; 00415c2d
    POP ESI                             ; 00415c2e
    POP EBX                             ; 00415c2f
    RET                                 ; 00415c30
    PUSH EAX                            ; 00415c31
        ;   Label: LAB_00415c31
    CALL core_bodypart.cpp_CBodyPart_ctor_FUN_00415d20 ; 00415c32
        ;   XREF to: 00415d20 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_CBodyPart_ctor_FUN_00415d20(CBodyPart * this_ptr)
    ADD ESP,0x4                         ; 00415c37
    JMP 0x00415b58                      ; 00415c3a
        ;   XREF to: 00415b58 (UNCONDITIONAL_JUMP)  ; LAB_00415b58
    PUSH 0x3fc90fdb                     ; 00415c3f
        ;   Label: LAB_00415c3f
    PUSH 0x3f490fdb                     ; 00415c44
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00415c49
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x2c],EAX      ; 00415c4e
    FLD float ptr [ESP + 0x2c]          ; 00415c52
    ADD ESP,0x8                         ; 00415c56
    PUSH 0x40c90fdb                     ; 00415c59
    PUSH 0x0                            ; 00415c5e
    FSTP float ptr [ESP + 0x18]         ; 00415c60
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00415c64
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x2c],EAX      ; 00415c69
    FLD float ptr [ESP + 0x2c]          ; 00415c6d
    ADD ESP,0x8                         ; 00415c71
    FLD ST0                             ; 00415c74
    FCOS                                ; 00415c76
    FLD float ptr [ESP + 0x10]          ; 00415c78
    FLD ST0                             ; 00415c7c
    FCOS                                ; 00415c7e
    FXCH ST3                            ; 00415c80
    FSIN                                ; 00415c82
    FXCH                                ; 00415c84
    FSIN                                ; 00415c86
    FXCH ST2                            ; 00415c88
    FLD float ptr [0x00578eaa]          ; 00415c8a | FLOAT_00578eaa
    FXCH                                ; 00415c90
    FMUL ST1                            ; 00415c92
    FXCH ST2                            ; 00415c94
    FMUL ST1                            ; 00415c96
    FXCH ST3                            ; 00415c98
    FMULP                               ; 00415c9a
    FXCH                                ; 00415c9c
    FMUL ST3                            ; 00415c9e
    FXCH ST2                            ; 00415ca0
    FMULP ST3                           ; 00415ca2
    FSTP float ptr [EBX + 0x27c]        ; 00415ca4
    FSTP float ptr [EBX + 0x278]        ; 00415caa
    FSTP float ptr [EBX + 0x280]        ; 00415cb0
    JMP 0x00415bdb                      ; 00415cb6
        ;   XREF to: 00415bdb (UNCONDITIONAL_JUMP)  ; LAB_00415bdb
    MOV EAX,dword ptr [EDI + 0x108]     ; 00415cbb
        ;   Label: LAB_00415cbb
    MOV dword ptr [EBX + 0x108],EAX     ; 00415cc1
    MOV EAX,dword ptr [EDI + 0x10c]     ; 00415cc7
    MOV dword ptr [EBX + 0x10c],EAX     ; 00415ccd
    MOV EAX,dword ptr [EDI + 0x110]     ; 00415cd3
    MOV dword ptr [EBX + 0x110],EAX     ; 00415cd9
    JMP 0x00415c03                      ; 00415cdf
        ;   XREF to: 00415c03 (UNCONDITIONAL_JUMP)  ; LAB_00415c03

