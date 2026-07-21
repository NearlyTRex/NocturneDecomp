; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hero_cpp_CHeroPlaceholder_createHero_FUN_004b6080(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   core_mission.cpp_CDemonMission_createOneHero_FUN_004d9920 at 004d9a53
;
; Referenced Globals:
;   void* switchdataD_004b6050 = 004b609a
;   undefined4 s_CGabriella_005858f2+1
;   string s_CSvetlana_005858fe
;   string s_CStranger_00585908
;   string s_CScat_00585912
;   string s_CBaron_00585918
;   string s_CIcePick_0058591f
;   string s_CHaystack_00585928
;   string s_CColonel_00585932
;   string s_CMoloch_0058593b
;   string s_..\\core\\hero.cpp_00585943
;   string s_CHeroPlaceholder::createHero_-_i_00585954
;   string s_..\\core\\hero.cpp_00585986
;   string s_CHeroPlaceholder::createHero_-_f_00585997
;   undefined4 DAT_005baf90
;   ... and 3 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000
;   core_actor.cpp_createActorByName_FUN_0040d540
;   core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b6080
        ;   Label: core_hero.cpp_CHeroPlaceholder_createHero_FUN_004b6080
    PUSH ESI                            ; 004b6081
    PUSH EDI                            ; 004b6082
    PUSH EBP                            ; 004b6083
    MOV EAX,dword ptr [ESP + 0x18]      ; 004b6084
    XOR EBX,EBX                         ; 004b6088
    CMP EAX,0x8                         ; 004b608a
    JA 0x004b61c2                       ; 004b608d
        ;   XREF to: 004b61c2 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4b6050]  ; 004b6093 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV ESI,dword ptr [0x01cae124]      ; 004b609a | DAT_01cae124
        ;   Label: caseD_0
    PUSH ESI                            ; 004b60a0
    PUSH 0x5858f3                       ; 004b60a1 | s_CGabriella_005858f2+1
    CALL core_actor.cpp_createActorByName_FUN_0040d540 ; 004b60a6
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_createActorByName_FUN_0040d540()
        ;   Label: LAB_004b60a6
    ADD ESP,0x4                         ; 004b60ab
    PUSH EAX                            ; 004b60ae
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004b60af
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 004b60b4
    MOV EBX,EAX                         ; 004b60b7
    TEST EBX,EBX                        ; 004b60b9
        ;   Label: LAB_004b60b9
    JNZ 0x004b60e0                      ; 004b60bb
        ;   XREF to: 004b60e0 (CONDITIONAL_JUMP)  ; LAB_004b60e0
    MOV EDI,0x585986                    ; 004b60bd | = "..\\core\\hero.cpp"
    MOV EBP,0x57d                       ; 004b60c2
    PUSH 0x585997                       ; 004b60c7 | = "CHeroPlaceholder::createHero - failed."
    MOV dword ptr [0x01cc4800],EDI      ; 004b60cc | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 004b60d2 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004b60d8
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004b60dd
    PUSH EBX                            ; 004b60e0
        ;   Label: LAB_004b60e0
    MOV EAX,[0x005baf90]                ; 004b60e1 | DAT_005baf90
    PUSH EAX                            ; 004b60e6
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720 ; 004b60e7
        ;   XREF to: 004d9720 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720()
    ADD ESP,0x8                         ; 004b60ec
    MOV EAX,dword ptr [ESP + 0x14]      ; 004b60ef
    LEA EDX,[EBX + 0x20]                ; 004b60f3
    MOV ECX,dword ptr [EAX + 0x20]      ; 004b60f6
    MOV dword ptr [EDX],ECX             ; 004b60f9
    MOV ECX,dword ptr [EAX + 0x24]      ; 004b60fb
    MOV dword ptr [EDX + 0x4],ECX       ; 004b60fe
    MOV ECX,dword ptr [EAX + 0x28]      ; 004b6101
    MOV dword ptr [EDX + 0x8],ECX       ; 004b6104
    MOV EAX,dword ptr [EAX + 0x2c]      ; 004b6107
    MOV dword ptr [EDX + 0xc],EAX       ; 004b610a
    MOV EDX,dword ptr [ESP + 0x14]      ; 004b610d
    LEA EAX,[EBX + 0x30]                ; 004b6111
    ADD EDX,0x30                        ; 004b6114
    CMP EAX,EDX                         ; 004b6117
    JZ 0x004b612b                       ; 004b6119
        ;   XREF to: 004b612b (CONDITIONAL_JUMP)  ; LAB_004b612b
    MOV ECX,dword ptr [EDX]             ; 004b611b
    MOV dword ptr [EAX],ECX             ; 004b611d
    MOV ECX,dword ptr [EDX + 0x4]       ; 004b611f
    MOV dword ptr [EAX + 0x4],ECX       ; 004b6122
    MOV ECX,dword ptr [EDX + 0x8]       ; 004b6125
    MOV dword ptr [EAX + 0x8],ECX       ; 004b6128
    PUSH EBX                            ; 004b612b
        ;   Label: LAB_004b612b
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000 ; 004b612c
        ;   XREF to: 0040a000 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000()
    ADD ESP,0x4                         ; 004b6131
    MOV EAX,EBX                         ; 004b6134
    POP EBP                             ; 004b6136
    POP EDI                             ; 004b6137
    POP ESI                             ; 004b6138
    POP EBX                             ; 004b6139
    RET                                 ; 004b613a
    MOV EBX,dword ptr [0x01cae124]      ; 004b613b | DAT_01cae124
        ;   Label: caseD_1
    PUSH EBX                            ; 004b6141
    PUSH 0x5858fe                       ; 004b6142 | = "CSvetlana"
    JMP 0x004b60a6                      ; 004b6147
        ;   XREF to: 004b60a6 (UNCONDITIONAL_JUMP)  ; LAB_004b60a6
    MOV ECX,dword ptr [0x01cae124]      ; 004b614c | DAT_01cae124
        ;   Label: caseD_2
    PUSH ECX                            ; 004b6152
    PUSH 0x585908                       ; 004b6153 | = "CStranger"
    JMP 0x004b60a6                      ; 004b6158
        ;   XREF to: 004b60a6 (UNCONDITIONAL_JUMP)  ; LAB_004b60a6
    MOV EDX,dword ptr [0x01cae124]      ; 004b615d | DAT_01cae124
        ;   Label: caseD_3
    PUSH EDX                            ; 004b6163
    PUSH 0x585912                       ; 004b6164 | = "CScat"
    JMP 0x004b60a6                      ; 004b6169
        ;   XREF to: 004b60a6 (UNCONDITIONAL_JUMP)  ; LAB_004b60a6
    MOV EAX,[0x01cae124]                ; 004b616e | DAT_01cae124
        ;   Label: caseD_4
    PUSH EAX                            ; 004b6173
    PUSH 0x585918                       ; 004b6174 | = "CBaron"
    JMP 0x004b60a6                      ; 004b6179
        ;   XREF to: 004b60a6 (UNCONDITIONAL_JUMP)  ; LAB_004b60a6
    MOV EBP,dword ptr [0x01cae124]      ; 004b617e | DAT_01cae124
        ;   Label: caseD_5
    PUSH EBP                            ; 004b6184
    PUSH 0x58591f                       ; 004b6185 | = "CIcePick"
    JMP 0x004b60a6                      ; 004b618a
        ;   XREF to: 004b60a6 (UNCONDITIONAL_JUMP)  ; LAB_004b60a6
    MOV EDI,dword ptr [0x01cae124]      ; 004b618f | DAT_01cae124
        ;   Label: caseD_6
    PUSH EDI                            ; 004b6195
    PUSH 0x585928                       ; 004b6196 | = "CHaystack"
    JMP 0x004b60a6                      ; 004b619b
        ;   XREF to: 004b60a6 (UNCONDITIONAL_JUMP)  ; LAB_004b60a6
    MOV ESI,dword ptr [0x01cae124]      ; 004b61a0 | DAT_01cae124
        ;   Label: caseD_7
    PUSH ESI                            ; 004b61a6
    PUSH 0x585932                       ; 004b61a7 | = "CColonel"
    JMP 0x004b60a6                      ; 004b61ac
        ;   XREF to: 004b60a6 (UNCONDITIONAL_JUMP)  ; LAB_004b60a6
    MOV EBX,dword ptr [0x01cae124]      ; 004b61b1 | DAT_01cae124
        ;   Label: caseD_8
    PUSH EBX                            ; 004b61b7
    PUSH 0x58593b                       ; 004b61b8 | = "CMoloch"
    JMP 0x004b60a6                      ; 004b61bd
        ;   XREF to: 004b60a6 (UNCONDITIONAL_JUMP)  ; LAB_004b60a6
    MOV EDX,0x585943                    ; 004b61c2 | = "..\\core\\hero.cpp"
        ;   Label: default
    MOV ECX,0x578                       ; 004b61c7
    PUSH 0x585954                       ; 004b61cc | = "CHeroPlaceholder::createHero - invali..."
    MOV dword ptr [0x01cc4800],EDX      ; 004b61d1 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004b61d7 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004b61dd
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004b61e2
    JMP 0x004b60b9                      ; 004b61e5
        ;   XREF to: 004b60b9 (UNCONDITIONAL_JUMP)  ; LAB_004b60b9

