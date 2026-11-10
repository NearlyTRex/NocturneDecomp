; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_initProcess_FUN_00499ee0(void)
;
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_process_FUN_0049c430 at 0049c6ad
;
; Referenced Globals:
;   TerminatedCString s_core_fire_cpp_005d5650
;   TerminatedCString s_CGunFlame_initProcess_to_005d5661
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_01c3f5a8
;   undefined4 DAT_01c3f5ac
;   undefined4 DAT_01c3f674
;   undefined4 DAT_01c3f678
;   undefined4 g_CFlameCanClassInfo.name_hash
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;   undefined4 g_CDemonSetInstance.character_count
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_hero.cpp_isAnyHeroWithinRadius_FUN_004ce100
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00499ee0
        ;   Label: core_fire.cpp_initProcess_FUN_00499ee0
    PUSH ESI                            ; 00499ee1
    PUSH EDI                            ; 00499ee2
    PUSH EBP                            ; 00499ee3
    XOR EDX,EDX                         ; 00499ee4
    XOR EDI,EDI                         ; 00499ee6
    XOR ESI,ESI                         ; 00499ee8
    MOV dword ptr [0x01c3f5a8],EDX      ; 00499eea | DAT_01c3f5a8
    MOV EBX,dword ptr [0x0061b5a8]      ; 00499ef0 | g_CDemonSetPtr
        ;   Label: LAB_00499ef0
    CMP EDI,dword ptr [EBX + 0x14f0a8]  ; 00499ef6 | g_CDemonSetInstance.character_count
    JL 0x00499f1e                       ; 00499efc
        ;   XREF to: 00499f1e (CONDITIONAL_JUMP)  ; LAB_00499f1e
    XOR EBX,EBX                         ; 00499efe
    XOR ESI,ESI                         ; 00499f00
    MOV dword ptr [0x01c3f674],EBX      ; 00499f02 | DAT_01c3f674
    MOV EAX,[0x0061b5a8]                ; 00499f08 | g_CDemonSetPtr
        ;   Label: LAB_00499f08
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 00499f0d | g_CDemonSetInstance.actor_count
    JL 0x00499f99                       ; 00499f13
        ;   XREF to: 00499f99 (CONDITIONAL_JUMP)  ; LAB_00499f99
    POP EBP                             ; 00499f19
    POP EDI                             ; 00499f1a
    POP ESI                             ; 00499f1b
    POP EBX                             ; 00499f1c
    RET                                 ; 00499f1d
    MOV EBX,dword ptr [ESI + EBX*0x1 + 0x14f0ac] ; 00499f1e
        ;   Label: LAB_00499f1e
    PUSH EBX                            ; 00499f25
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00499f26
    CALL dword ptr [EAX + 0x114]        ; 00499f2c
    ADD ESP,0x4                         ; 00499f32
    TEST EAX,EAX                        ; 00499f35
    JNZ 0x00499f6c                      ; 00499f37
        ;   XREF to: 00499f6c (CONDITIONAL_JUMP)  ; LAB_00499f6c
    LEA EAX,[EBX + 0x20]                ; 00499f39
    PUSH 0x42480000                     ; 00499f3c
    PUSH EAX                            ; 00499f41
    CALL core_hero.cpp_isAnyHeroWithinRadius_FUN_004ce100 ; 00499f42
        ;   XREF to: 004ce100 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_isAnyHeroWithinRadius_FUN_004ce100()
    ADD ESP,0x8                         ; 00499f47
    TEST EAX,EAX                        ; 00499f4a
    JZ 0x00499f6c                       ; 00499f4c
        ;   XREF to: 00499f6c (CONDITIONAL_JUMP)  ; LAB_00499f6c
    CMP dword ptr [0x01c3f5a8],0x32     ; 00499f4e | DAT_01c3f5a8
    JGE 0x00499f75                      ; 00499f55
        ;   XREF to: 00499f75 (CONDITIONAL_JUMP)  ; LAB_00499f75
    MOV EAX,[0x01c3f5a8]                ; 00499f57 | DAT_01c3f5a8
        ;   Label: LAB_00499f57
    LEA ECX,[EAX + 0x1]                 ; 00499f5c
    MOV dword ptr [EAX*0x4 + 0x1c3f5ac],EBX ; 00499f5f | DAT_01c3f5ac
    MOV dword ptr [0x01c3f5a8],ECX      ; 00499f66 | DAT_01c3f5a8
    INC EDI                             ; 00499f6c
        ;   Label: LAB_00499f6c
    ADD ESI,0x4                         ; 00499f6d
    JMP 0x00499ef0                      ; 00499f70
        ;   XREF to: 00499ef0 (UNCONDITIONAL_JUMP)  ; LAB_00499ef0
    MOV EAX,0x5d5650                    ; 00499f75 | = "..\\core\\fire.cpp"
        ;   Label: LAB_00499f75
    MOV EDX,0xee3                       ; 00499f7a
    PUSH 0x5d5661                       ; 00499f7f | = "CGunFlame::initProcess - too many cha..."
    MOV [0x01d046a0],EAX                ; 00499f84 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 00499f89 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00499f8f
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00499f94
    JMP 0x00499f57                      ; 00499f97
        ;   XREF to: 00499f57 (UNCONDITIONAL_JUMP)  ; LAB_00499f57
    MOV EBP,dword ptr [0x01cab6f8]      ; 00499f99 | g_CFlameCanClassInfo.name_hash
        ;   Label: LAB_00499f99
    PUSH EBP                            ; 00499f9f
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x14d168] ; 00499fa0 | g_CDemonSetInstance.actors[0]
    PUSH EDX                            ; 00499fa7
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 00499fa8
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 00499fad
    TEST EAX,EAX                        ; 00499fb0
    JZ 0x00499fd2                       ; 00499fb2
        ;   XREF to: 00499fd2 (CONDITIONAL_JUMP)  ; LAB_00499fd2
    MOV ECX,dword ptr [0x01c3f674]      ; 00499fb4 | DAT_01c3f674
    CMP ECX,0x96                        ; 00499fba
    JGE 0x00499fd2                      ; 00499fc0
        ;   XREF to: 00499fd2 (CONDITIONAL_JUMP)  ; LAB_00499fd2
    LEA EDI,[ECX + 0x1]                 ; 00499fc2
    MOV dword ptr [ECX*0x4 + 0x1c3f678],EAX ; 00499fc5 | DAT_01c3f678
    MOV dword ptr [0x01c3f674],EDI      ; 00499fcc | DAT_01c3f674
    INC EBX                             ; 00499fd2
        ;   Label: LAB_00499fd2
    ADD ESI,0x4                         ; 00499fd3
    JMP 0x00499f08                      ; 00499fd6
        ;   XREF to: 00499f08 (UNCONDITIONAL_JUMP)  ; LAB_00499f08

