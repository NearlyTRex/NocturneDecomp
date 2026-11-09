; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_FUN_00555ad0(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_mission.cpp_CDemonMission_buildSetActorList_FUN_0051b420 at 0051b472
;   core_mission.cpp_FUN_0051b7b0 at 0051b7f6
;
; Referenced Globals:
;   undefined4 g_CCharacterClassInfo.name_hash
;   undefined4 g_CEnemyClassInfo.name_hash
;   undefined4 g_CTriggerClassInfo.name_hash
;   undefined4 g_CWayPointClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00555ad0
        ;   Label: core_set.cpp_FUN_00555ad0
    PUSH ESI                            ; 00555ad1
    PUSH EDI                            ; 00555ad2
    PUSH EBP                            ; 00555ad3
    MOV EBX,dword ptr [ESP + 0x14]      ; 00555ad4
    MOV dword ptr [EBX + 0x150fec],0x0  ; 00555ad8
    MOV dword ptr [EBX + 0x152f30],0x0  ; 00555ae2
    MOV dword ptr [EBX + 0x154e74],0x0  ; 00555aec
    MOV dword ptr [EBX + 0x158cfc],0x0  ; 00555af6
    MOV EDX,dword ptr [EBX + 0x14d164]  ; 00555b00
    MOV dword ptr [EBX + 0x14f0a8],0x0  ; 00555b06
    XOR EBP,EBP                         ; 00555b10
    TEST EDX,EDX                        ; 00555b12
    JLE 0x00555c00                      ; 00555b14
        ;   XREF to: 00555c00 (CONDITIONAL_JUMP)  ; LAB_00555c00
    MOV EDI,EBX                         ; 00555b1a
    MOV ESI,dword ptr [EDI + 0x14d168]  ; 00555b1c
        ;   Label: LAB_00555b1c
    CMP dword ptr [ESI + 0xfc],0x0      ; 00555b22
    JNZ 0x00555b34                      ; 00555b29
        ;   XREF to: 00555b34 (CONDITIONAL_JUMP)  ; LAB_00555b34
    CMP dword ptr [ESI + 0xf8],0x0      ; 00555b2b
    JZ 0x00555b47                       ; 00555b32
        ;   XREF to: 00555b47 (CONDITIONAL_JUMP)  ; LAB_00555b47
    MOV EAX,dword ptr [EBX + 0x158cfc]  ; 00555b34
        ;   Label: LAB_00555b34
    MOV dword ptr [EBX + EAX*0x4 + 0x158d00],ESI ; 00555b3a
    INC dword ptr [EBX + 0x158cfc]      ; 00555b41
    MOV EAX,[0x007c637c]                ; 00555b47 | g_CCharacterClassInfo.name_hash
        ;   Label: LAB_00555b47
    PUSH EAX                            ; 00555b4c
    PUSH ESI                            ; 00555b4d
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00555b4e
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    MOV EDX,dword ptr [EBX + 0x14f0a8]  ; 00555b53
    MOV dword ptr [EBX + EDX*0x4 + 0x14f0ac],EAX ; 00555b59
    MOV EAX,dword ptr [EBX + 0x14f0a8]  ; 00555b60
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x14f0ac] ; 00555b66
    ADD ESP,0x8                         ; 00555b6d
    TEST EDX,EDX                        ; 00555b70
    JZ 0x00555c1a                       ; 00555b72
        ;   XREF to: 00555c1a (CONDITIONAL_JUMP)  ; LAB_00555c1a
    MOV EAX,[0x01c3f6a0]                ; 00555b78 | g_CEnemyClassInfo.name_hash
    MOV EDX,dword ptr [EBX + 0x14f0a8]  ; 00555b7d
    PUSH EAX                            ; 00555b83
    INC EDX                             ; 00555b84
    PUSH ESI                            ; 00555b85
    MOV dword ptr [EBX + 0x14f0a8],EDX  ; 00555b86
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00555b8c
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    MOV EDX,dword ptr [EBX + 0x150fec]  ; 00555b91
    MOV dword ptr [EBX + EDX*0x4 + 0x150ff0],EAX ; 00555b97
    MOV EAX,dword ptr [EBX + 0x150fec]  ; 00555b9e
    SHL EAX,0x2                         ; 00555ba4
    ADD EAX,EBX                         ; 00555ba7
    MOV ECX,dword ptr [EAX + 0x150ff0]  ; 00555ba9
    ADD ESP,0x8                         ; 00555baf
    TEST ECX,ECX                        ; 00555bb2
    JZ 0x00555bee                       ; 00555bb4
        ;   XREF to: 00555bee (CONDITIONAL_JUMP)  ; LAB_00555bee
    PUSH ECX                            ; 00555bb6
    MOV EDX,dword ptr [ECX + 0x154]     ; 00555bb7
    CALL dword ptr [EDX + 0x10c]        ; 00555bbd
    ADD ESP,0x4                         ; 00555bc3
    TEST EAX,EAX                        ; 00555bc6
    JNZ 0x00555be8                      ; 00555bc8
        ;   XREF to: 00555be8 (CONDITIONAL_JUMP)  ; LAB_00555be8
    MOV EAX,dword ptr [EBX + 0x150fec]  ; 00555bca
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x150ff0] ; 00555bd0
    PUSH EAX                            ; 00555bd7
    MOV EDX,dword ptr [EAX + 0x154]     ; 00555bd8
    CALL dword ptr [EDX + 0x70]         ; 00555bde
    ADD ESP,0x4                         ; 00555be1
    TEST EAX,EAX                        ; 00555be4
    JZ 0x00555c05                       ; 00555be6
        ;   XREF to: 00555c05 (CONDITIONAL_JUMP)  ; LAB_00555c05
    INC dword ptr [EBX + 0x150fec]      ; 00555be8
        ;   Label: LAB_00555be8
    INC EBP                             ; 00555bee
        ;   Label: LAB_00555bee
    MOV ECX,dword ptr [EBX + 0x14d164]  ; 00555bef
    ADD EDI,0x4                         ; 00555bf5
    CMP EBP,ECX                         ; 00555bf8
    JL 0x00555b1c                       ; 00555bfa
        ;   XREF to: 00555b1c (CONDITIONAL_JUMP)  ; LAB_00555b1c
    POP EBP                             ; 00555c00
        ;   Label: LAB_00555c00
    POP EDI                             ; 00555c01
    POP ESI                             ; 00555c02
    POP EBX                             ; 00555c03
    RET                                 ; 00555c04
    MOV EAX,dword ptr [EBX + 0x152f30]  ; 00555c05
        ;   Label: LAB_00555c05
    MOV dword ptr [EBX + EAX*0x4 + 0x152f34],ESI ; 00555c0b
    INC dword ptr [EBX + 0x152f30]      ; 00555c12
    JMP 0x00555be8                      ; 00555c18
        ;   XREF to: 00555be8 (UNCONDITIONAL_JUMP)  ; LAB_00555be8
    MOV ECX,dword ptr [0x02c992fc]      ; 00555c1a | g_CWayPointClassInfo.name_hash
        ;   Label: LAB_00555c1a
    PUSH ECX                            ; 00555c20
    PUSH ESI                            ; 00555c21
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00555c22
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    MOV EDX,dword ptr [EBX + 0x154e74]  ; 00555c27
    MOV dword ptr [EBX + EDX*0x4 + 0x154e78],EAX ; 00555c2d
    MOV EAX,dword ptr [EBX + 0x154e74]  ; 00555c34
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x154e78] ; 00555c3a
    ADD ESP,0x8                         ; 00555c41
    TEST EDX,EDX                        ; 00555c44
    JZ 0x00555c51                       ; 00555c46
        ;   XREF to: 00555c51 (CONDITIONAL_JUMP)  ; LAB_00555c51
    LEA ECX,[EAX + 0x1]                 ; 00555c48
    MOV dword ptr [EBX + 0x154e74],ECX  ; 00555c4b
    MOV EAX,[0x02c8ae44]                ; 00555c51 | g_CTriggerClassInfo.name_hash
        ;   Label: LAB_00555c51
    PUSH EAX                            ; 00555c56
    PUSH ESI                            ; 00555c57
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00555c58
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 00555c5d
    TEST EAX,EAX                        ; 00555c60
    JZ 0x00555bee                       ; 00555c62
        ;   XREF to: 00555bee (CONDITIONAL_JUMP)  ; LAB_00555bee
    CMP dword ptr [EAX + 0x174],0x4     ; 00555c64
    JNZ 0x00555bee                      ; 00555c6b
        ;   XREF to: 00555bee (CONDITIONAL_JUMP)  ; LAB_00555bee
    CMP dword ptr [EAX + 0x304],0x0     ; 00555c6d
    JZ 0x00555bee                       ; 00555c74
        ;   XREF to: 00555bee (CONDITIONAL_JUMP)  ; LAB_00555bee
    MOV EAX,dword ptr [EBX + 0x152f30]  ; 00555c7a
    MOV dword ptr [EBX + EAX*0x4 + 0x152f34],ESI ; 00555c80
    INC dword ptr [EBX + 0x152f30]      ; 00555c87
    JMP 0x00555bee                      ; 00555c8d
        ;   XREF to: 00555bee (UNCONDITIONAL_JUMP)  ; LAB_00555bee

