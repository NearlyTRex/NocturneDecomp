; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CGunFlame_burnNearby_FUN_0049df60(CGunFlame *this_ptr)
;
; Parameters:
; CGunFlame *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined        Stack[-0x48]:1  local_48
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_fire.cpp_CGunFlame_process_FUN_0049e390 at 0049e4e7
;
; Referenced Globals:
;   undefined4 DAT_005c0858
;   undefined4 DAT_005c0860
;   undefined4 DAT_005df900
;   undefined4 DAT_01c74b68
;   undefined4 DAT_01c74b6c
;   undefined4 DAT_01c74c34
;   undefined4 DAT_01c74c38
;   undefined4 g_CHeroClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_FUN_00408bf0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_charactr.cpp_FUN_0042fbd0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0
;   core_flamecan.cpp_CFlameCan_ignite_FUN_004a7110
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049df60
        ;   Label: core_fire.cpp_CGunFlame_burnNearby_FUN_0049df60
    PUSH ESI                            ; 0049df61
    PUSH EDI                            ; 0049df62
    PUSH EBP                            ; 0049df63
    MOV EBP,ESP                         ; 0049df64
    SUB ESP,0x7c                        ; 0049df66
    AND ESP,0xfffffff8                  ; 0049df69
    MOV EBX,dword ptr [EBP + 0x14]      ; 0049df6c
    XOR EDX,EDX                         ; 0049df6f
    MOV ECX,dword ptr [0x01c74b68]      ; 0049df71 | DAT_01c74b68
    MOV dword ptr [ESP + 0x68],EDX      ; 0049df77
    TEST ECX,ECX                        ; 0049df7b
    JLE 0x0049dfdb                      ; 0049df7d
        ;   XREF to: 0049dfdb (CONDITIONAL_JUMP)  ; LAB_0049dfdb
    MOV dword ptr [ESP + 0x64],EDX      ; 0049df7f
    MOV EAX,dword ptr [ESP + 0x64]      ; 0049df83
        ;   Label: LAB_0049df83
    MOV EAX,dword ptr [EAX + 0x1c74b6c] ; 0049df87 | DAT_01c74b6c
    FLD float ptr [EAX + 0x20]          ; 0049df8d
    FSUB float ptr [EBX]                ; 0049df90
    FMUL ST0                            ; 0049df92
    FLD float ptr [EAX + 0x24]          ; 0049df94
    FSUB float ptr [EBX + 0x4]          ; 0049df97
    FMUL ST0                            ; 0049df9a
    FLD float ptr [EAX + 0x28]          ; 0049df9c
    FXCH                                ; 0049df9f
    FADDP ST2,ST0                       ; 0049dfa1
    FSUB float ptr [EBX + 0x8]          ; 0049dfa3
    FMUL ST0                            ; 0049dfa6
    FADDP                               ; 0049dfa8
    MOV dword ptr [ESP + 0x6c],EAX      ; 0049dfaa
    FCOMP float ptr [0x005c0858]        ; 0049dfae | DAT_005c0858
    FNSTSW AX                           ; 0049dfb4
    SAHF                                ; 0049dfb6
    JBE 0x0049e031                      ; 0049dfb7
        ;   XREF to: 0049e031 (CONDITIONAL_JUMP)  ; LAB_0049e031
    MOV ESI,dword ptr [ESP + 0x64]      ; 0049dfbd
        ;   Label: LAB_0049dfbd
    MOV EDI,dword ptr [ESP + 0x68]      ; 0049dfc1
    MOV EDX,dword ptr [0x01c74b68]      ; 0049dfc5 | DAT_01c74b68
    ADD ESI,0x4                         ; 0049dfcb
    INC EDI                             ; 0049dfce
    MOV dword ptr [ESP + 0x64],ESI      ; 0049dfcf
    MOV dword ptr [ESP + 0x68],EDI      ; 0049dfd3
    CMP EDI,EDX                         ; 0049dfd7
    JL 0x0049df83                       ; 0049dfd9
        ;   XREF to: 0049df83 (CONDITIONAL_JUMP)  ; LAB_0049df83
    MOV ECX,dword ptr [0x01c74c34]      ; 0049dfdb | DAT_01c74c34
        ;   Label: LAB_0049dfdb
    XOR EDI,EDI                         ; 0049dfe1
    TEST ECX,ECX                        ; 0049dfe3
    JLE 0x0049e02a                      ; 0049dfe5
        ;   XREF to: 0049e02a (CONDITIONAL_JUMP)  ; LAB_0049e02a
    XOR ESI,ESI                         ; 0049dfe7
    MOV EDX,dword ptr [ESI + 0x1c74c38] ; 0049dfe9 | DAT_01c74c38
        ;   Label: LAB_0049dfe9
    LEA EAX,[EDX + 0x20]                ; 0049dfef
    FLD float ptr [EAX]                 ; 0049dff2
    FSUB float ptr [EBX]                ; 0049dff4
    FMUL ST0                            ; 0049dff6
    FLD float ptr [EAX + 0x4]           ; 0049dff8
    FSUB float ptr [EBX + 0x4]          ; 0049dffb
    FMUL ST0                            ; 0049dffe
    FLD float ptr [EAX + 0x8]           ; 0049e000
    FXCH                                ; 0049e003
    FADDP ST2,ST0                       ; 0049e005
    FSUB float ptr [EBX + 0x8]          ; 0049e007
    FMUL ST0                            ; 0049e00a
    FADDP                               ; 0049e00c
    FCOMP double ptr [0x005c0860]       ; 0049e00e | DAT_005c0860
    FNSTSW AX                           ; 0049e014
    SAHF                                ; 0049e016
    JBE 0x0049e15c                      ; 0049e017
        ;   XREF to: 0049e15c (CONDITIONAL_JUMP)  ; LAB_0049e15c
    MOV EAX,[0x01c74c34]                ; 0049e01d | DAT_01c74c34
        ;   Label: LAB_0049e01d
    INC EDI                             ; 0049e022
    ADD ESI,0x4                         ; 0049e023
    CMP EDI,EAX                         ; 0049e026
    JL 0x0049dfe9                       ; 0049e028
        ;   XREF to: 0049dfe9 (CONDITIONAL_JUMP)  ; LAB_0049dfe9
    MOV ESP,EBP                         ; 0049e02a
        ;   Label: LAB_0049e02a
    POP EBP                             ; 0049e02c
    POP EDI                             ; 0049e02d
    POP ESI                             ; 0049e02e
    POP EBX                             ; 0049e02f
    RET                                 ; 0049e030
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0049e031
        ;   Label: LAB_0049e031
    ADD EAX,0x158                       ; 0049e035
    PUSH EAX                            ; 0049e03a
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40 ; 0049e03b
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0049e040
    PUSH EBX                            ; 0049e043
    MOV EDI,dword ptr [ESP + 0x70]      ; 0049e044
    PUSH EDI                            ; 0049e048
    LEA ESI,[ESP + 0x50]                ; 0049e049
    CALL core_actor.cpp_FUN_00408bf0    ; 0049e04d
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    ADD ESP,0x8                         ; 0049e052
    MOV EAX,[0x01d5ba70]                ; 0049e055 | g_CHeroClassInfo.name_hash
    LEA EDI,[ESP + 0x3c]                ; 0049e05a
    PUSH EAX                            ; 0049e05e
    MOV EDX,dword ptr [ESP + 0x70]      ; 0049e05f
    LEA ESI,[ESP + 0x4c]                ; 0049e063
    PUSH EDX                            ; 0049e067
    MOVSD ES:EDI,ESI                    ; 0049e068
    MOVSD ES:EDI,ESI                    ; 0049e069
    MOVSD ES:EDI,ESI                    ; 0049e06a
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0049e06b
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 0049e070
    TEST EAX,EAX                        ; 0049e073
    JZ 0x0049e131                       ; 0049e075
        ;   XREF to: 0049e131 (CONDITIONAL_JUMP)  ; LAB_0049e131
    CMP dword ptr [EBX + 0x20],0x2      ; 0049e07b
    JNZ 0x0049e131                      ; 0049e07f
        ;   XREF to: 0049e131 (CONDITIONAL_JUMP)  ; LAB_0049e131
    MOV EAX,ESP                         ; 0049e085
        ;   Label: LAB_0049e085
    PUSH EAX                            ; 0049e087
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 0049e088
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0049e08d
    PUSH 0x41a00000                     ; 0049e090
    PUSH 0x41200000                     ; 0049e095
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0049e09a
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x80],EAX      ; 0049e09f
    FLD float ptr [ESP + 0x80]          ; 0049e0a6
    FMUL float ptr [EBX + 0xc]          ; 0049e0ad
    FDIV float ptr [0x005df900]         ; 0049e0b0 | DAT_005df900
    LEA EDX,[ESP + 0x24]                ; 0049e0b6
    ADD ESP,0x8                         ; 0049e0ba
    LEA EAX,[ESP + 0x3c]                ; 0049e0bd
    FSTP float ptr [ESP + 0x4]          ; 0049e0c1
    CMP EDX,EAX                         ; 0049e0c5
    JZ 0x0049e0e1                       ; 0049e0c7
        ;   XREF to: 0049e0e1 (CONDITIONAL_JUMP)  ; LAB_0049e0e1
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0049e0c9
    MOV dword ptr [ESP + 0x1c],EAX      ; 0049e0cd
    MOV EAX,dword ptr [ESP + 0x40]      ; 0049e0d1
    MOV dword ptr [ESP + 0x20],EAX      ; 0049e0d5
    MOV EAX,dword ptr [ESP + 0x44]      ; 0049e0d9
    MOV dword ptr [ESP + 0x24],EAX      ; 0049e0dd
    MOV EDX,0xa                         ; 0049e0e1
        ;   Label: LAB_0049e0e1
    MOV ECX,0x6e                        ; 0049e0e6
    MOV EAX,ESP                         ; 0049e0eb
    MOV ESI,dword ptr [ESP + 0x6c]      ; 0049e0ed
    MOV dword ptr [ESP + 0x28],EDX      ; 0049e0f1
    PUSH EAX                            ; 0049e0f5
    MOV EDX,dword ptr [ESP + 0x70]      ; 0049e0f6
    MOV dword ptr [ESP + 0x34],ECX      ; 0049e0fa
    PUSH ESI                            ; 0049e0fe
    MOV EDX,dword ptr [EDX + 0x154]     ; 0049e0ff
    CALL dword ptr [EDX + 0x108]        ; 0049e105
    ADD ESP,0x8                         ; 0049e10b
    PUSH 0x40a00000                     ; 0049e10e
    PUSH 0x1                            ; 0049e113
    PUSH 0x3f800000                     ; 0049e115
    PUSH 0x0                            ; 0049e11a
    PUSH 0x0                            ; 0049e11c
    LEA EAX,[ESP + 0x50]                ; 0049e11e
    PUSH EAX                            ; 0049e122
    PUSH ESI                            ; 0049e123
    CALL core_charactr.cpp_FUN_0042fbd0 ; 0049e124
        ;   XREF to: 0042fbd0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042fbd0()
    ADD ESP,0x1c                        ; 0049e129
    JMP 0x0049dfbd                      ; 0049e12c
        ;   XREF to: 0049dfbd (UNCONDITIONAL_JUMP)  ; LAB_0049dfbd
    MOV ESI,dword ptr [0x01d5ba70]      ; 0049e131 | g_CHeroClassInfo.name_hash
        ;   Label: LAB_0049e131
    PUSH ESI                            ; 0049e137
    MOV EDI,dword ptr [ESP + 0x70]      ; 0049e138
    PUSH EDI                            ; 0049e13c
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0049e13d
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 0049e142
    TEST EAX,EAX                        ; 0049e145
    JNZ 0x0049dfbd                      ; 0049e147
        ;   XREF to: 0049dfbd (CONDITIONAL_JUMP)  ; LAB_0049dfbd
    CMP dword ptr [EBX + 0x20],0x1      ; 0049e14d
    JZ 0x0049e085                       ; 0049e151
        ;   XREF to: 0049e085 (CONDITIONAL_JUMP)  ; LAB_0049e085
    JMP 0x0049dfbd                      ; 0049e157
        ;   XREF to: 0049dfbd (UNCONDITIONAL_JUMP)  ; LAB_0049dfbd
    PUSH EDX                            ; 0049e15c
        ;   Label: LAB_0049e15c
    CALL core_flamecan.cpp_CFlameCan_ignite_FUN_004a7110 ; 0049e15d
        ;   XREF to: 004a7110 (UNCONDITIONAL_CALL)  ; void core_flamecan.cpp_CFlameCan_ignite_FUN_004a7110(CFlameCan * this_ptr)
    ADD ESP,0x4                         ; 0049e162
    JMP 0x0049e01d                      ; 0049e165
        ;   XREF to: 0049e01d (UNCONDITIONAL_JUMP)  ; LAB_0049e01d

