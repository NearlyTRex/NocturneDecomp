; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_initProcess_FUN_00487fd0(void)
;
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_process_FUN_0048a390 at 0048a57d
;
; Referenced Globals:
;   TerminatedCString s_core_fire_cpp_0058134a
;   TerminatedCString s_CGunFlame_initProcess_to_0058135b
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   undefined4 DAT_01c09e08
;   undefined4 DAT_01c09e0c
;   undefined4 DAT_01c09ed4
;   undefined4 DAT_01c09ed8
;   undefined4 g_CFlameCanActorType_01c70654.name_hash
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;   CDemonSet g_CDemonSet_01e57284
;   undefined4 g_CDemonSet_01e57284.actor_count
;   undefined4 g_CDemonSet_01e57284.actors[0]
;   undefined4 g_CDemonSet_01e57284.character_count
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_hero.cpp_isAnyHeroWithinRadius_FUN_004b45b0
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00487fd0
        ;   Label: core_fire.cpp_initProcess_FUN_00487fd0
    PUSH ESI                            ; 00487fd1
    PUSH EDI                            ; 00487fd2
    PUSH EBP                            ; 00487fd3
    XOR EDX,EDX                         ; 00487fd4
    XOR EDI,EDI                         ; 00487fd6
    XOR ESI,ESI                         ; 00487fd8
    MOV dword ptr [0x01c09e08],EDX      ; 00487fda | DAT_01c09e08
    MOV EBX,dword ptr [0x005be368]      ; 00487fe0 | g_CDemonSet_PTR_005be368
        ;   Label: LAB_00487fe0
    CMP EDI,dword ptr [EBX + 0x14ecb0]  ; 00487fe6 | g_CDemonSet_01e57284.character_count
    JL 0x0048800e                       ; 00487fec
        ;   XREF to: 0048800e (CONDITIONAL_JUMP)  ; LAB_0048800e
    XOR EBX,EBX                         ; 00487fee
    XOR ESI,ESI                         ; 00487ff0
    MOV dword ptr [0x01c09ed4],EBX      ; 00487ff2 | DAT_01c09ed4
    MOV EAX,[0x005be368]                ; 00487ff8 | g_CDemonSet_PTR_005be368 | g_CDemonSet_01e57284
        ;   Label: LAB_00487ff8
    CMP EBX,dword ptr [EAX + 0x14cd6c]  ; 00487ffd | g_CDemonSet_01e57284.actor_count
    JL 0x00488089                       ; 00488003
        ;   XREF to: 00488089 (CONDITIONAL_JUMP)  ; LAB_00488089
    POP EBP                             ; 00488009
    POP EDI                             ; 0048800a
    POP ESI                             ; 0048800b
    POP EBX                             ; 0048800c
    RET                                 ; 0048800d
    MOV EBX,dword ptr [ESI + EBX*0x1 + 0x14ecb4] ; 0048800e
        ;   Label: LAB_0048800e
    PUSH EBX                            ; 00488015
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00488016
    CALL dword ptr [EAX + 0x104]        ; 0048801c
    ADD ESP,0x4                         ; 00488022
    TEST EAX,EAX                        ; 00488025
    JNZ 0x0048805c                      ; 00488027
        ;   XREF to: 0048805c (CONDITIONAL_JUMP)  ; LAB_0048805c
    LEA EAX,[EBX + 0x20]                ; 00488029
    PUSH 0x42480000                     ; 0048802c
    PUSH EAX                            ; 00488031
    CALL core_hero.cpp_isAnyHeroWithinRadius_FUN_004b45b0 ; 00488032
        ;   XREF to: 004b45b0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_isAnyHeroWithinRadius_FUN_004b45b0(CVector3f * point, float radius)
    ADD ESP,0x8                         ; 00488037
    TEST EAX,EAX                        ; 0048803a
    JZ 0x0048805c                       ; 0048803c
        ;   XREF to: 0048805c (CONDITIONAL_JUMP)  ; LAB_0048805c
    CMP dword ptr [0x01c09e08],0x32     ; 0048803e | DAT_01c09e08
    JGE 0x00488065                      ; 00488045
        ;   XREF to: 00488065 (CONDITIONAL_JUMP)  ; LAB_00488065
    MOV EAX,[0x01c09e08]                ; 00488047 | DAT_01c09e08
        ;   Label: LAB_00488047
    LEA ECX,[EAX + 0x1]                 ; 0048804c
    MOV dword ptr [EAX*0x4 + 0x1c09e0c],EBX ; 0048804f | DAT_01c09e0c
    MOV dword ptr [0x01c09e08],ECX      ; 00488056 | DAT_01c09e08
    INC EDI                             ; 0048805c
        ;   Label: LAB_0048805c
    ADD ESI,0x4                         ; 0048805d
    JMP 0x00487fe0                      ; 00488060
        ;   XREF to: 00487fe0 (UNCONDITIONAL_JUMP)  ; LAB_00487fe0
    MOV EAX,0x58134a                    ; 00488065 | = "..\\core\\fire.cpp"
        ;   Label: LAB_00488065
    MOV EDX,0xd03                       ; 0048806a
    PUSH 0x58135b                       ; 0048806f | = "CGunFlame::initProcess - too many cha..."
    MOV [0x01cc4800],EAX                ; 00488074 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 00488079 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0048807f
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00488084
    JMP 0x00488047                      ; 00488087
        ;   XREF to: 00488047 (UNCONDITIONAL_JUMP)  ; LAB_00488047
    MOV EBP,dword ptr [0x01c7068c]      ; 00488089 | g_CFlameCanActorType_01c70654.name_hash
        ;   Label: LAB_00488089
    PUSH EBP                            ; 0048808f
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x14cd70] ; 00488090 | g_CDemonSet_01e57284.actors[0]
    PUSH EDX                            ; 00488097
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 00488098
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0048809d
    TEST EAX,EAX                        ; 004880a0
    JZ 0x004880c2                       ; 004880a2
        ;   XREF to: 004880c2 (CONDITIONAL_JUMP)  ; LAB_004880c2
    MOV ECX,dword ptr [0x01c09ed4]      ; 004880a4 | DAT_01c09ed4
    CMP ECX,0x96                        ; 004880aa
    JGE 0x004880c2                      ; 004880b0
        ;   XREF to: 004880c2 (CONDITIONAL_JUMP)  ; LAB_004880c2
    LEA EDI,[ECX + 0x1]                 ; 004880b2
    MOV dword ptr [ECX*0x4 + 0x1c09ed8],EAX ; 004880b5 | DAT_01c09ed8
    MOV dword ptr [0x01c09ed4],EDI      ; 004880bc | DAT_01c09ed4
    INC EBX                             ; 004880c2
        ;   Label: LAB_004880c2
    ADD ESI,0x4                         ; 004880c3
    JMP 0x00487ff8                      ; 004880c6
        ;   XREF to: 00487ff8 (UNCONDITIONAL_JUMP)  ; LAB_00487ff8

