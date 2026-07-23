; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_svetlana_cpp_CSvetlana_performBladeAttack_FUN_00542b70(int param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x84]:1  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined        Stack[-0x48]:1  local_48
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x30]:1  local_30
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_svetlana.cpp_CSvetlana_advanceMotion_FUN_00542ad0 at 00542b00
;
; Referenced Globals:
;   TerminatedCString s_core_svetlana_cpp_00596401
;   TerminatedCString s_Can_t_find_svetlana_s_pa_00596416
;   TerminatedCString s_svetlana_attack_wav_00596438
;   TerminatedCString s_svetlana_miss_wav_0059644d
;   undefined4 DAT_005be368
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_01fa5f34
;   undefined4 DAT_01fa5f38
;   undefined4 DAT_01fa5f3c
;   undefined4 DAT_01fa5f40
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00542b70
        ;   Label: core_svetlana.cpp_CSvetlana_performBladeAttack_FUN_00542b70
    PUSH ESI                            ; 00542b71
    PUSH EDI                            ; 00542b72
    PUSH EBP                            ; 00542b73
    SUB ESP,0x74                        ; 00542b74
    MOV EBP,dword ptr [ESP + 0x88]      ; 00542b77
    MOV EDI,dword ptr [ESP + 0x8c]      ; 00542b7e
    LEA EAX,[EBP + 0x150]               ; 00542b85
    PUSH EAX                            ; 00542b8b
    XOR EBX,EBX                         ; 00542b8c
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 00542b8e
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0()
    MOV EDX,0xffffffff                  ; 00542b93
    MOV ESI,EAX                         ; 00542b98
    ADD ESP,0x4                         ; 00542b9a
    MOV ECX,dword ptr [EAX + 0x28558]   ; 00542b9d
    MOV dword ptr [ESP + 0x6c],EDX      ; 00542ba3
    TEST ECX,ECX                        ; 00542ba7
    JLE 0x00542bc5                      ; 00542ba9
        ;   XREF to: 00542bc5 (CONDITIONAL_JUMP)  ; LAB_00542bc5
    CMP EDI,dword ptr [ESI + 0x2857c]   ; 00542bab
        ;   Label: LAB_00542bab
    JZ 0x00542c42                       ; 00542bb1
        ;   XREF to: 00542c42 (CONDITIONAL_JUMP)  ; LAB_00542c42
    INC EBX                             ; 00542bb7
    MOV EDX,dword ptr [EAX + 0x28558]   ; 00542bb8
    ADD ESI,0x24                        ; 00542bbe
    CMP EBX,EDX                         ; 00542bc1
    JL 0x00542bab                       ; 00542bc3
        ;   XREF to: 00542bab (CONDITIONAL_JUMP)  ; LAB_00542bab
    CMP dword ptr [ESP + 0x6c],-0x1     ; 00542bc5
        ;   Label: LAB_00542bc5
    JZ 0x00542c4b                       ; 00542bca
        ;   XREF to: 00542c4b (CONDITIONAL_JUMP)  ; LAB_00542c4b
    PUSH EDI                            ; 00542bd0
        ;   Label: LAB_00542bd0
    LEA EAX,[ESP + 0x58]                ; 00542bd1
    PUSH EAX                            ; 00542bd5
    LEA EBX,[EBP + 0x150]               ; 00542bd6
    PUSH EBX                            ; 00542bdc
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 00542bdd
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380()
    ADD ESP,0xc                         ; 00542be2
    PUSH EAX                            ; 00542be5
    LEA EAX,[ESP + 0x64]                ; 00542be6
    PUSH EAX                            ; 00542bea
    PUSH EBP                            ; 00542beb
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00542bec
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 00542bf1
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00542bf4
    PUSH EDX                            ; 00542bf8
    LEA EAX,[ESP + 0x40]                ; 00542bf9
    PUSH EAX                            ; 00542bfd
    PUSH EBX                            ; 00542bfe
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 00542bff
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380()
    ADD ESP,0xc                         ; 00542c04
    PUSH EAX                            ; 00542c07
    LEA EAX,[ESP + 0x4c]                ; 00542c08
    PUSH EAX                            ; 00542c0c
    PUSH EBP                            ; 00542c0d
    XOR ESI,ESI                         ; 00542c0e
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00542c10
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 00542c15
    XOR ECX,ECX                         ; 00542c18
    XOR EDI,EDI                         ; 00542c1a
    MOV dword ptr [ESP + 0x70],ECX      ; 00542c1c
    MOV EAX,[0x005be368]                ; 00542c20 | DAT_005be368
        ;   Label: LAB_00542c20
    CMP EDI,dword ptr [EAX + 0x14ecb0]  ; 00542c25 | DAT_01fa5f34
    JGE 0x00542cdb                      ; 00542c2b
        ;   XREF to: 00542cdb (CONDITIONAL_JUMP)  ; LAB_00542cdb
    MOV EBX,dword ptr [ESI + EAX*0x1 + 0x14ecb4] ; 00542c31 | DAT_01fa5f38 | DAT_01fa5f3c | DAT_01fa5f40
    CMP EBX,EBP                         ; 00542c38
    JNZ 0x00542c72                      ; 00542c3a
        ;   XREF to: 00542c72 (CONDITIONAL_JUMP)  ; LAB_00542c72
    INC EDI                             ; 00542c3c
        ;   Label: LAB_00542c3c
    ADD ESI,0x4                         ; 00542c3d
    JMP 0x00542c20                      ; 00542c40
        ;   XREF to: 00542c20 (UNCONDITIONAL_JUMP)  ; LAB_00542c20
    MOV dword ptr [ESP + 0x6c],EBX      ; 00542c42
        ;   Label: LAB_00542c42
    JMP 0x00542bc5                      ; 00542c46
        ;   XREF to: 00542bc5 (UNCONDITIONAL_JUMP)  ; LAB_00542bc5
    MOV ESI,0x596401                    ; 00542c4b | = "..\\core\\svetlana.cpp"
        ;   Label: LAB_00542c4b
    MOV EAX,0x2f0                       ; 00542c50
    PUSH 0x596416                       ; 00542c55 | = "Can't find svetlana's parent bone"
    MOV dword ptr [0x01cc4800],ESI      ; 00542c5a | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 00542c60 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00542c65
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00542c6a
    JMP 0x00542bd0                      ; 00542c6d
        ;   XREF to: 00542bd0 (UNCONDITIONAL_JUMP)  ; LAB_00542bd0
    MOV EAX,ESP                         ; 00542c72
        ;   Label: LAB_00542c72
    PUSH EAX                            ; 00542c74
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 00542c75
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0()
    MOV EAX,0x41700000                  ; 00542c7a
    ADD ESP,0x4                         ; 00542c7f
    MOV EDX,0x3f333333                  ; 00542c82
    MOV dword ptr [ESP + 0x4],EAX       ; 00542c87
    MOV EAX,0x3                         ; 00542c8b
    PUSH 0x0                            ; 00542c90
    MOV dword ptr [ESP + 0x2c],EAX      ; 00542c92
    LEA EAX,[ESP + 0x4]                 ; 00542c96
    MOV ECX,0x67                        ; 00542c9a
    PUSH EAX                            ; 00542c9f
    LEA EAX,[ESP + 0x50]                ; 00542ca0
    MOV dword ptr [ESP + 0x34],EDX      ; 00542ca4
    PUSH EAX                            ; 00542ca8
    LEA EAX,[ESP + 0x6c]                ; 00542ca9
    MOV dword ptr [ESP + 0x3c],ECX      ; 00542cad
    PUSH EAX                            ; 00542cb1
    MOV EDX,dword ptr [EBX + 0x14c]     ; 00542cb2
    PUSH EBX                            ; 00542cb8
    CALL dword ptr [EDX + 0xfc]         ; 00542cb9
    ADD ESP,0x14                        ; 00542cbf
    TEST EAX,EAX                        ; 00542cc2
    JZ 0x00542c3c                       ; 00542cc4
        ;   XREF to: 00542c3c (CONDITIONAL_JUMP)  ; LAB_00542c3c
    MOV dword ptr [ESP + 0x70],0x1      ; 00542cca
    INC EDI                             ; 00542cd2
    ADD ESI,0x4                         ; 00542cd3
    JMP 0x00542c20                      ; 00542cd6
        ;   XREF to: 00542c20 (UNCONDITIONAL_JUMP)  ; LAB_00542c20
    CMP dword ptr [ESP + 0x70],0x0      ; 00542cdb
        ;   Label: LAB_00542cdb
    JZ 0x00542cfc                       ; 00542ce0
        ;   XREF to: 00542cfc (CONDITIONAL_JUMP)  ; LAB_00542cfc
    PUSH 0x596438                       ; 00542ce2 | = "svetlana-attack?.wav"
    MOV EAX,dword ptr [EBP + 0x14c]     ; 00542ce7
        ;   Label: LAB_00542ce7
    PUSH EBP                            ; 00542ced
    CALL dword ptr [EAX + 0x24]         ; 00542cee
    ADD ESP,0x8                         ; 00542cf1
    ADD ESP,0x74                        ; 00542cf4
    POP EBP                             ; 00542cf7
    POP EDI                             ; 00542cf8
    POP ESI                             ; 00542cf9
    POP EBX                             ; 00542cfa
    RET                                 ; 00542cfb
    PUSH 0x59644d                       ; 00542cfc | = "svetlana-miss?.wav"
        ;   Label: LAB_00542cfc
    JMP 0x00542ce7                      ; 00542d01
        ;   XREF to: 00542ce7 (UNCONDITIONAL_JUMP)  ; LAB_00542ce7

