; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_initProcess_FUN_0049de60(void)
;
;
; XREF[1]:
;   core_fire.cpp_FUN_004a1760 at 004a19be
;
; Referenced Globals:
;   TerminatedCString s_core_fire_cpp_005c0816
;   TerminatedCString s_CGunFlame_initProcess_to_005c0827
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_01c74b68
;   undefined4 DAT_01c74b6c
;   undefined4 DAT_01c74c34
;   undefined4 DAT_01c74c38
;   undefined4 g_CFlameCanClassInfo.name_hash
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;   undefined4 g_CDemonSetInstance.character_count
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_hero.cpp_isAnyHeroWithinRadius_FUN_004d2370
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049de60
        ;   Label: core_fire.cpp_initProcess_FUN_0049de60
    PUSH ESI                            ; 0049de61
    PUSH EDI                            ; 0049de62
    PUSH EBP                            ; 0049de63
    XOR EDX,EDX                         ; 0049de64
    XOR EDI,EDI                         ; 0049de66
    XOR ESI,ESI                         ; 0049de68
    MOV dword ptr [0x01c74b68],EDX      ; 0049de6a | DAT_01c74b68
    MOV EBX,dword ptr [0x00603b28]      ; 0049de70 | g_CDemonSetPtr
        ;   Label: LAB_0049de70
    CMP EDI,dword ptr [EBX + 0x14f0a8]  ; 0049de76 | g_CDemonSetInstance.character_count
    JL 0x0049de9e                       ; 0049de7c
        ;   XREF to: 0049de9e (CONDITIONAL_JUMP)  ; LAB_0049de9e
    XOR EBX,EBX                         ; 0049de7e
    XOR ESI,ESI                         ; 0049de80
    MOV dword ptr [0x01c74c34],EBX      ; 0049de82 | DAT_01c74c34
    MOV EAX,[0x00603b28]                ; 0049de88 | g_CDemonSetPtr | g_CDemonSetInstance
        ;   Label: LAB_0049de88
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 0049de8d | g_CDemonSetInstance.actor_count
    JL 0x0049df19                       ; 0049de93
        ;   XREF to: 0049df19 (CONDITIONAL_JUMP)  ; LAB_0049df19
    POP EBP                             ; 0049de99
    POP EDI                             ; 0049de9a
    POP ESI                             ; 0049de9b
    POP EBX                             ; 0049de9c
    RET                                 ; 0049de9d
    MOV EBX,dword ptr [ESI + EBX*0x1 + 0x14f0ac] ; 0049de9e
        ;   Label: LAB_0049de9e
    PUSH EBX                            ; 0049dea5
    MOV EAX,dword ptr [EBX + 0x154]     ; 0049dea6
    CALL dword ptr [EAX + 0x10c]        ; 0049deac
    ADD ESP,0x4                         ; 0049deb2
    TEST EAX,EAX                        ; 0049deb5
    JNZ 0x0049deec                      ; 0049deb7
        ;   XREF to: 0049deec (CONDITIONAL_JUMP)  ; LAB_0049deec
    LEA EAX,[EBX + 0x20]                ; 0049deb9
    PUSH 0x42480000                     ; 0049debc
    PUSH EAX                            ; 0049dec1
    CALL core_hero.cpp_isAnyHeroWithinRadius_FUN_004d2370 ; 0049dec2
        ;   XREF to: 004d2370 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_isAnyHeroWithinRadius_FUN_004d2370(CVector3f * point, float radius)
    ADD ESP,0x8                         ; 0049dec7
    TEST EAX,EAX                        ; 0049deca
    JZ 0x0049deec                       ; 0049decc
        ;   XREF to: 0049deec (CONDITIONAL_JUMP)  ; LAB_0049deec
    CMP dword ptr [0x01c74b68],0x32     ; 0049dece | DAT_01c74b68
    JGE 0x0049def5                      ; 0049ded5
        ;   XREF to: 0049def5 (CONDITIONAL_JUMP)  ; LAB_0049def5
    MOV EAX,[0x01c74b68]                ; 0049ded7 | DAT_01c74b68
        ;   Label: LAB_0049ded7
    LEA ECX,[EAX + 0x1]                 ; 0049dedc
    MOV dword ptr [EAX*0x4 + 0x1c74b6c],EBX ; 0049dedf | DAT_01c74b6c
    MOV dword ptr [0x01c74b68],ECX      ; 0049dee6 | DAT_01c74b68
    INC EDI                             ; 0049deec
        ;   Label: LAB_0049deec
    ADD ESI,0x4                         ; 0049deed
    JMP 0x0049de70                      ; 0049def0
        ;   XREF to: 0049de70 (UNCONDITIONAL_JUMP)  ; LAB_0049de70
    MOV EAX,0x5c0816                    ; 0049def5 | = "..\\core\\fire.cpp"
        ;   Label: LAB_0049def5
    MOV EDX,0x1043                      ; 0049defa
    PUSH 0x5c0827                       ; 0049deff | = "CGunFlame::initProcess - too many cha..."
    MOV [0x01d71de0],EAX                ; 0049df04 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 0049df09 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0049df0f
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0049df14
    JMP 0x0049ded7                      ; 0049df17
        ;   XREF to: 0049ded7 (UNCONDITIONAL_JUMP)  ; LAB_0049ded7
    MOV EBP,dword ptr [0x01d0cf60]      ; 0049df19 | g_CFlameCanClassInfo.name_hash
        ;   Label: LAB_0049df19
    PUSH EBP                            ; 0049df1f
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x14d168] ; 0049df20 | g_CDemonSetInstance.actors[0]
    PUSH EDX                            ; 0049df27
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0049df28
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0049df2d
    TEST EAX,EAX                        ; 0049df30
    JZ 0x0049df52                       ; 0049df32
        ;   XREF to: 0049df52 (CONDITIONAL_JUMP)  ; LAB_0049df52
    MOV ECX,dword ptr [0x01c74c34]      ; 0049df34 | DAT_01c74c34
    CMP ECX,0x96                        ; 0049df3a
    JGE 0x0049df52                      ; 0049df40
        ;   XREF to: 0049df52 (CONDITIONAL_JUMP)  ; LAB_0049df52
    LEA EDI,[ECX + 0x1]                 ; 0049df42
    MOV dword ptr [ECX*0x4 + 0x1c74c38],EAX ; 0049df45 | DAT_01c74c38
    MOV dword ptr [0x01c74c34],EDI      ; 0049df4c | DAT_01c74c34
    INC EBX                             ; 0049df52
        ;   Label: LAB_0049df52
    ADD ESI,0x4                         ; 0049df53
    JMP 0x0049de88                      ; 0049df56
        ;   XREF to: 0049de88 (UNCONDITIONAL_JUMP)  ; LAB_0049de88

