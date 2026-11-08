; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0051bf30(int param_1,int param_2,int param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0051c0a0 at 0051c0f7
;
; Referenced Globals:
;   TerminatedCString s_core_mission_cpp_005e998e
;   TerminatedCString s_CDemonMission_createOneH_005e99a2
;   TerminatedCString s_core_mission_cpp_005e99d1
;   TerminatedCString s_CDemonMission_createOneH_005e99e5
;   TerminatedCString s_Can_t_find_hero_placehol_005e9a1a
;   undefined4 DAT_0061abc0
;   undefined1* PTR_s_CGabriella_0061ef2c = 005e4be4
;   undefined4 DAT_0061f650
;   undefined4 DAT_01d06aa0
;   undefined4 DAT_01d06b4c
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d2c900
;
; Called Functions:
;   FUN_0040c600
;   FUN_004943a0
;   FUN_004ecca0
;   FUN_005030e0
;   FUN_0051b160
;   FUN_00524b10
;   FUN_00569b20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051bf30
        ;   Label: FUN_0051bf30
    PUSH ESI                            ; 0051bf31
    PUSH EDI                            ; 0051bf32
    PUSH EBP                            ; 0051bf33
    SUB ESP,0x4                         ; 0051bf34
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0051bf37
    MOV EBP,dword ptr [ESP + 0x24]      ; 0051bf3b
    CMP EDI,dword ptr [0x01d06aa0]      ; 0051bf3f | DAT_01d06aa0
    JGE 0x0051bfc9                      ; 0051bf45
        ;   XREF to: 0051bfc9 (CONDITIONAL_JUMP)  ; LAB_0051bfc9
    CMP dword ptr [EDI*0x4 + 0x1d06aa4],0x0 ; 0051bf4b
        ;   Label: LAB_0051bf4b
    JZ 0x0051bf77                       ; 0051bf53
        ;   XREF to: 0051bf77 (CONDITIONAL_JUMP)  ; LAB_0051bf77
    MOV EAX,0x5e99d1                    ; 0051bf55 | = "..\\core\\mission.cpp"
    MOV EDX,0x650                       ; 0051bf5a
    PUSH 0x5e99e5                       ; 0051bf5f | = "CDemonMission::createOneHero - hero a..."
    MOV [0x01d1d400],EAX                ; 0051bf64 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0051bf69 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0051bf6f
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0051bf74
    MOV ESI,dword ptr [ESP + 0x18]      ; 0051bf77
        ;   Label: LAB_0051bf77
    XOR ECX,ECX                         ; 0051bf7b
    MOV ESI,dword ptr [ESI + 0x1118]    ; 0051bf7d
    MOV dword ptr [ESP],ECX             ; 0051bf83
    TEST ESI,ESI                        ; 0051bf86
    JZ 0x0051bfaa                       ; 0051bf88
        ;   XREF to: 0051bfaa (CONDITIONAL_JUMP)  ; LAB_0051bfaa
    MOV EBX,dword ptr [0x01d06b4c]      ; 0051bf8a | DAT_01d06b4c
        ;   Label: LAB_0051bf8a
    PUSH EBX                            ; 0051bf90
    PUSH ESI                            ; 0051bf91
    CALL FUN_0040c600                   ; 0051bf92
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c600()
    MOV EBX,EAX                         ; 0051bf97
    ADD ESP,0x8                         ; 0051bf99
    TEST EAX,EAX                        ; 0051bf9c
    JNZ 0x0051bff1                      ; 0051bf9e
        ;   XREF to: 0051bff1 (CONDITIONAL_JUMP)  ; LAB_0051bff1
    MOV ESI,dword ptr [ESI + 0x14c]     ; 0051bfa0
        ;   Label: LAB_0051bfa0
    TEST ESI,ESI                        ; 0051bfa6
    JNZ 0x0051bf8a                      ; 0051bfa8
        ;   XREF to: 0051bf8a (CONDITIONAL_JUMP)  ; LAB_0051bf8a
    MOV ESI,dword ptr [ESP]             ; 0051bfaa
        ;   Label: LAB_0051bfaa
    TEST ESI,ESI                        ; 0051bfad
    JZ 0x0051c080                       ; 0051bfaf
        ;   XREF to: 0051c080 (CONDITIONAL_JUMP)  ; LAB_0051c080
    MOV EAX,0x1                         ; 0051bfb5
    MOV dword ptr [EDI*0x4 + 0x1d06aa4],ESI ; 0051bfba
    ADD ESP,0x4                         ; 0051bfc1
    POP EBP                             ; 0051bfc4
    POP EDI                             ; 0051bfc5
    POP ESI                             ; 0051bfc6
    POP EBX                             ; 0051bfc7
    RET                                 ; 0051bfc8
    MOV ECX,0x5e998e                    ; 0051bfc9 | = "..\\core\\mission.cpp"
        ;   Label: LAB_0051bfc9
    MOV EBX,0x64f                       ; 0051bfce
    PUSH 0x5e99a2                       ; 0051bfd3 | = "CDemonMission::createOneHero - too ma..."
    MOV dword ptr [0x01d1d400],ECX      ; 0051bfd8 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 0051bfde | DAT_01d1d404
    CALL FUN_005030e0                   ; 0051bfe4
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0051bfe9
    JMP 0x0051bf4b                      ; 0051bfec
        ;   XREF to: 0051bf4b (UNCONDITIONAL_JUMP)  ; LAB_0051bf4b
    CMP EDI,dword ptr [EAX + 0x158]     ; 0051bff1
        ;   Label: LAB_0051bff1
    JNZ 0x0051bfa0                      ; 0051bff7
        ;   XREF to: 0051bfa0 (CONDITIONAL_JUMP)  ; LAB_0051bfa0
    TEST EBP,EBP                        ; 0051bff9
    JZ 0x0051c066                       ; 0051bffb
        ;   XREF to: 0051c066 (CONDITIONAL_JUMP)  ; LAB_0051c066
    LEA EAX,[EBX + 0x30]                ; 0051bffd
    PUSH EAX                            ; 0051c000
    LEA EAX,[EBX + 0x20]                ; 0051c001
    PUSH EAX                            ; 0051c004
    MOV ESI,dword ptr [EBP + 0x154]     ; 0051c005
    PUSH EBP                            ; 0051c00b
    MOV dword ptr [ESP + 0xc],EBP       ; 0051c00c
    CALL dword ptr [ESI + 0x68]         ; 0051c010
    ADD ESP,0xc                         ; 0051c013
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0051c016
    LEA EBX,[EBP + 0x158]               ; 0051c019
    PUSH EBX                            ; 0051c01f
    MOV dword ptr [EBP + 0x2c],EAX      ; 0051c020
    CALL FUN_00569b20                   ; 0051c023
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; undefined FUN_00569b20()
    ADD ESP,0x4                         ; 0051c028
    PUSH 0x0                            ; 0051c02b
    PUSH 0x0                            ; 0051c02d
    PUSH EBX                            ; 0051c02f
    CALL FUN_00524b10                   ; 0051c030
        ;   XREF to: 00524b10 (UNCONDITIONAL_CALL)  ; undefined FUN_00524b10()
    ADD ESP,0xc                         ; 0051c035
    PUSH 0x0                            ; 0051c038
    PUSH 0x0                            ; 0051c03a
    PUSH 0x0                            ; 0051c03c
    MOV EAX,dword ptr [EBP + 0x154]     ; 0051c03e
    PUSH EBP                            ; 0051c044
    CALL dword ptr [EAX + 0x130]        ; 0051c045
    ADD ESP,0x10                        ; 0051c04b
    MOV ECX,dword ptr [ESP]             ; 0051c04e
        ;   Label: LAB_0051c04e
    PUSH ECX                            ; 0051c051
    MOV EBX,dword ptr [0x0061f650]      ; 0051c052 | DAT_0061f650
    PUSH EBX                            ; 0051c058 | DAT_01d2c900
    CALL FUN_0051b160                   ; 0051c059
        ;   XREF to: 0051b160 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b160()
    ADD ESP,0x8                         ; 0051c05e
    JMP 0x0051bfaa                      ; 0051c061
        ;   XREF to: 0051bfaa (UNCONDITIONAL_JUMP)  ; LAB_0051bfaa
    MOV EAX,dword ptr [ESP + 0x20]      ; 0051c066
        ;   Label: LAB_0051c066
    MOV EDX,dword ptr [EAX*0x4 + 0x61ef2c] ; 0051c06a | PTR_s_CGabriella_0061ef2c
    PUSH EDX                            ; 0051c071
    PUSH EBX                            ; 0051c072
    CALL FUN_004ecca0                   ; 0051c073
        ;   XREF to: 004ecca0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ecca0()
    ADD ESP,0x8                         ; 0051c078
    MOV dword ptr [ESP],EAX             ; 0051c07b
    JMP 0x0051c04e                      ; 0051c07e
        ;   XREF to: 0051c04e (UNCONDITIONAL_JUMP)  ; LAB_0051c04e
    PUSH EDI                            ; 0051c080
        ;   Label: LAB_0051c080
    PUSH 0x5e9a1a                       ; 0051c081 | = "Can't find hero placeholder for hero %d"
    MOV EDI,dword ptr [0x0061abc0]      ; 0051c086 | DAT_0061abc0
    PUSH EDI                            ; 0051c08c
    CALL FUN_004943a0                   ; 0051c08d
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004943a0()
    ADD ESP,0xc                         ; 0051c092
    XOR EAX,EAX                         ; 0051c095
    ADD ESP,0x4                         ; 0051c097
    POP EBP                             ; 0051c09a
    POP EDI                             ; 0051c09b
    POP ESI                             ; 0051c09c
    POP EBX                             ; 0051c09d
    RET                                 ; 0051c09e

