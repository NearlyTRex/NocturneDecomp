; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004fcf70(int param_1,int param_2,int param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004fd0e0 at 004fd137
;
; Referenced Globals:
;   TerminatedCString s_core_mission_cpp_005de941
;   TerminatedCString s_CDemonMission_createOneH_005de955
;   TerminatedCString s_core_mission_cpp_005de984
;   TerminatedCString s_CDemonMission_createOneH_005de998
;   TerminatedCString s_Can_t_find_hero_placehol_005de9cd
;   undefined4 DAT_006138e0
;   undefined1* PTR_s_CGabriella_00617a68 = 005da083
;   undefined4 DAT_00618170
;   undefined4 DAT_01cedee0
;   undefined4 DAT_01cedf8c
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_0040c8f0
;   FUN_0047be40
;   FUN_004d0a40
;   FUN_004e4500
;   FUN_004fc200
;   FUN_00503980
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fcf70
        ;   Label: FUN_004fcf70
    PUSH ESI                            ; 004fcf71
    PUSH EDI                            ; 004fcf72
    PUSH EBP                            ; 004fcf73
    SUB ESP,0x4                         ; 004fcf74
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004fcf77
    MOV EBP,dword ptr [ESP + 0x24]      ; 004fcf7b
    CMP EDI,dword ptr [0x01cedee0]      ; 004fcf7f | DAT_01cedee0
    JGE 0x004fd009                      ; 004fcf85
        ;   XREF to: 004fd009 (CONDITIONAL_JUMP)  ; LAB_004fd009
    CMP dword ptr [EDI*0x4 + 0x1cedee4],0x0 ; 004fcf8b
        ;   Label: LAB_004fcf8b
    JZ 0x004fcfb7                       ; 004fcf93
        ;   XREF to: 004fcfb7 (CONDITIONAL_JUMP)  ; LAB_004fcfb7
    MOV EAX,0x5de984                    ; 004fcf95 | = "..\\core\\mission.cpp"
    MOV EDX,0x641                       ; 004fcf9a
    PUSH 0x5de998                       ; 004fcf9f | = "CDemonMission::createOneHero - hero a..."
    MOV [0x01d046a0],EAX                ; 004fcfa4 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 004fcfa9 | DAT_01d046a4
    CALL FUN_004e4500                   ; 004fcfaf
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004fcfb4
    MOV ESI,dword ptr [ESP + 0x18]      ; 004fcfb7
        ;   Label: LAB_004fcfb7
    XOR ECX,ECX                         ; 004fcfbb
    MOV ESI,dword ptr [ESI + 0x1114]    ; 004fcfbd
    MOV dword ptr [ESP],ECX             ; 004fcfc3
    TEST ESI,ESI                        ; 004fcfc6
    JZ 0x004fcfea                       ; 004fcfc8
        ;   XREF to: 004fcfea (CONDITIONAL_JUMP)  ; LAB_004fcfea
    MOV EBX,dword ptr [0x01cedf8c]      ; 004fcfca | DAT_01cedf8c
        ;   Label: LAB_004fcfca
    PUSH EBX                            ; 004fcfd0
    PUSH ESI                            ; 004fcfd1
    CALL FUN_0040c8f0                   ; 004fcfd2
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8f0()
    MOV EBX,EAX                         ; 004fcfd7
    ADD ESP,0x8                         ; 004fcfd9
    TEST EAX,EAX                        ; 004fcfdc
    JNZ 0x004fd031                      ; 004fcfde
        ;   XREF to: 004fd031 (CONDITIONAL_JUMP)  ; LAB_004fd031
    MOV ESI,dword ptr [ESI + 0x14c]     ; 004fcfe0
        ;   Label: LAB_004fcfe0
    TEST ESI,ESI                        ; 004fcfe6
    JNZ 0x004fcfca                      ; 004fcfe8
        ;   XREF to: 004fcfca (CONDITIONAL_JUMP)  ; LAB_004fcfca
    MOV ESI,dword ptr [ESP]             ; 004fcfea
        ;   Label: LAB_004fcfea
    TEST ESI,ESI                        ; 004fcfed
    JZ 0x004fd0b7                       ; 004fcfef
        ;   XREF to: 004fd0b7 (CONDITIONAL_JUMP)  ; LAB_004fd0b7
    MOV EAX,0x1                         ; 004fcff5
    MOV dword ptr [EDI*0x4 + 0x1cedee4],ESI ; 004fcffa
    ADD ESP,0x4                         ; 004fd001
    POP EBP                             ; 004fd004
    POP EDI                             ; 004fd005
    POP ESI                             ; 004fd006
    POP EBX                             ; 004fd007
    RET                                 ; 004fd008
    MOV ECX,0x5de941                    ; 004fd009 | = "..\\core\\mission.cpp"
        ;   Label: LAB_004fd009
    MOV EBX,0x640                       ; 004fd00e
    PUSH 0x5de955                       ; 004fd013 | = "CDemonMission::createOneHero - too ma..."
    MOV dword ptr [0x01d046a0],ECX      ; 004fd018 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 004fd01e | DAT_01d046a4
    CALL FUN_004e4500                   ; 004fd024
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004fd029
    JMP 0x004fcf8b                      ; 004fd02c
        ;   XREF to: 004fcf8b (UNCONDITIONAL_JUMP)  ; LAB_004fcf8b
    CMP EDI,dword ptr [EAX + 0x2b4]     ; 004fd031
        ;   Label: LAB_004fd031
    JNZ 0x004fcfe0                      ; 004fd037
        ;   XREF to: 004fcfe0 (CONDITIONAL_JUMP)  ; LAB_004fcfe0
    TEST EBP,EBP                        ; 004fd039
    JZ 0x004fd09d                       ; 004fd03b
        ;   XREF to: 004fd09d (CONDITIONAL_JUMP)  ; LAB_004fd09d
    LEA EAX,[EBX + 0x30]                ; 004fd03d
    PUSH EAX                            ; 004fd040
    LEA EAX,[EBX + 0x20]                ; 004fd041
    PUSH EAX                            ; 004fd044
    MOV ESI,dword ptr [EBP + 0x2b0]     ; 004fd045
    PUSH EBP                            ; 004fd04b
    MOV dword ptr [ESP + 0xc],EBP       ; 004fd04c
    CALL dword ptr [ESI + 0x70]         ; 004fd050
    ADD ESP,0xc                         ; 004fd053
    PUSH 0x0                            ; 004fd056
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004fd058
    PUSH 0x0                            ; 004fd05b
    MOV dword ptr [EBP + 0x2c],EAX      ; 004fd05d
    LEA EAX,[EBP + 0x2b4]               ; 004fd060
    PUSH EAX                            ; 004fd066
    CALL FUN_00503980                   ; 004fd067
        ;   XREF to: 00503980 (UNCONDITIONAL_CALL)  ; undefined FUN_00503980()
    ADD ESP,0xc                         ; 004fd06c
    PUSH 0x0                            ; 004fd06f
    PUSH 0x0                            ; 004fd071
    PUSH 0x0                            ; 004fd073
    MOV EAX,dword ptr [EBP + 0x2b0]     ; 004fd075
    PUSH EBP                            ; 004fd07b
    CALL dword ptr [EAX + 0x138]        ; 004fd07c
    ADD ESP,0x10                        ; 004fd082
    MOV ECX,dword ptr [ESP]             ; 004fd085
        ;   Label: LAB_004fd085
    PUSH ECX                            ; 004fd088
    MOV EBX,dword ptr [0x00618170]      ; 004fd089 | DAT_00618170
    PUSH EBX                            ; 004fd08f
    CALL FUN_004fc200                   ; 004fd090
        ;   XREF to: 004fc200 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc200()
    ADD ESP,0x8                         ; 004fd095
    JMP 0x004fcfea                      ; 004fd098
        ;   XREF to: 004fcfea (UNCONDITIONAL_JUMP)  ; LAB_004fcfea
    MOV EAX,dword ptr [ESP + 0x20]      ; 004fd09d
        ;   Label: LAB_004fd09d
    MOV EDX,dword ptr [EAX*0x4 + 0x617a68] ; 004fd0a1 | PTR_s_CGabriella_00617a68
    PUSH EDX                            ; 004fd0a8
    PUSH EBX                            ; 004fd0a9
    CALL FUN_004d0a40                   ; 004fd0aa
        ;   XREF to: 004d0a40 (UNCONDITIONAL_CALL)  ; undefined FUN_004d0a40()
    ADD ESP,0x8                         ; 004fd0af
    MOV dword ptr [ESP],EAX             ; 004fd0b2
    JMP 0x004fd085                      ; 004fd0b5
        ;   XREF to: 004fd085 (UNCONDITIONAL_JUMP)  ; LAB_004fd085
    PUSH EDI                            ; 004fd0b7
        ;   Label: LAB_004fd0b7
    PUSH 0x5de9cd                       ; 004fd0b8 | = "Can't find hero placeholder for hero %d"
    MOV EDI,dword ptr [0x006138e0]      ; 004fd0bd | DAT_006138e0
    PUSH EDI                            ; 004fd0c3
    CALL FUN_0047be40                   ; 004fd0c4
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; undefined FUN_0047be40()
    ADD ESP,0xc                         ; 004fd0c9
    XOR EAX,EAX                         ; 004fd0cc
    ADD ESP,0x4                         ; 004fd0ce
    POP EBP                             ; 004fd0d1
    POP EDI                             ; 004fd0d2
    POP ESI                             ; 004fd0d3
    POP EBX                             ; 004fd0d4
    RET                                 ; 004fd0d5

