; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(CDemonActor *this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
;
; XREF[26]:
;   core_barrier.cpp_CBarrier_processInEditor_FUN_00414460 at 004145fd
;   core_bodypart.cpp_CBodyPart_processInEditor_FUN_0041b260 at 0041b265
;   core_boxactor.cpp_CBoxActor_processInEditor_FUN_004228e0 at 004228e5
;   core_charactr.cpp_CCharacter_processInEditor_FUN_0042f800 at 0042f809
;   core_curtain.cpp_CCurtain_processInEditor_FUN_0044b7a0 at 0044b8ab
;   core_door.cpp_CDoor_processInEditor_FUN_00481590 at 00481596
;   core_drip.cpp_CDrip_processInEditor_FUN_0048ea30 at 0048ea54
;   core_emitter.cpp_CEmitter_processInEditor_FUN_004a8fe0 at 004a9340
;   core_flame.cpp_CFlame_processInEditor_FUN_004caf60 at 004cb081
;   core_flies.cpp_CFlies_processInEditor_FUN_004ccaf0 at 004ccc61
;   ... and 16 more
;
; Referenced Globals:
;   CKeys* g_CKeysPtr = 02dcd7d4
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   _BIT_INTEGER g_MouseButtonFlags
;   CKeys g_CKeysInstance
;   CDemonMission g_CDemonMissionInstance
;
; Called Functions:
;   core_msnedit.cpp_CDemonMission_FUN_0053c8d0
;   core_msnedit.cpp_CDemonMission_FUN_0053ca00
;   core_slew.cpp_CSlew_processInput_FUN_005a20b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d040
        ;   Label: core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
    SUB ESP,0x1c                        ; 0040d041
    MOV EBX,dword ptr [ESP + 0x24]      ; 0040d044
    PUSH EBX                            ; 0040d048
    MOV EAX,dword ptr [EBX + 0x154]     ; 0040d049
    MOV dword ptr [EBX + 0x70],0x0      ; 0040d04f
    CALL dword ptr [EAX + 0x8c]         ; 0040d056
    ADD ESP,0x4                         ; 0040d05c
    TEST EAX,EAX                        ; 0040d05f
    JZ 0x0040d068                       ; 0040d061
        ;   XREF to: 0040d068 (CONDITIONAL_JUMP)  ; LAB_0040d068
    ADD ESP,0x1c                        ; 0040d063
        ;   Label: LAB_0040d063
    POP EBX                             ; 0040d066
    RET                                 ; 0040d067
    PUSH 0x29                           ; 0040d068
        ;   Label: LAB_0040d068
    MOV EAX,[0x0067cf44]                ; 0040d06a | g_CKeysPtr
    PUSH EAX                            ; 0040d06f | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0040d070 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 0040d072
    ADD ESP,0x8                         ; 0040d074
    TEST EAX,EAX                        ; 0040d077
    JZ 0x0040d0bd                       ; 0040d079
        ;   XREF to: 0040d0bd (CONDITIONAL_JUMP)  ; LAB_0040d0bd
    PUSH 0x22                           ; 0040d07b
        ;   Label: LAB_0040d07b
    MOV EAX,[0x0067cf44]                ; 0040d07d | g_CKeysPtr
    PUSH EAX                            ; 0040d082 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0040d083 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0040d085
    ADD ESP,0x8                         ; 0040d088
    TEST EAX,EAX                        ; 0040d08b
    JZ 0x0040d09f                       ; 0040d08d
        ;   XREF to: 0040d09f (CONDITIONAL_JUMP)  ; LAB_0040d09f
    PUSH EBX                            ; 0040d08f
    MOV EDX,dword ptr [0x0067d550]      ; 0040d090 | g_CDemonMissionInstance | g_CDemonMissionPtr
    PUSH EDX                            ; 0040d096 | g_CDemonMissionInstance
    CALL core_msnedit.cpp_CDemonMission_FUN_0053c8d0 ; 0040d097
        ;   XREF to: 0053c8d0 (UNCONDITIONAL_CALL)  ; void core_msnedit.cpp_CDemonMission_FUN_0053c8d0(CDemonMission * this_ptr)
    ADD ESP,0x8                         ; 0040d09c
    TEST byte ptr [0x02cf6a94],0x2      ; 0040d09f | g_MouseButtonFlags
        ;   Label: LAB_0040d09f
    JZ 0x0040d063                       ; 0040d0a6
        ;   XREF to: 0040d063 (CONDITIONAL_JUMP)  ; LAB_0040d063
    PUSH EBX                            ; 0040d0a8
    MOV ECX,dword ptr [0x0067d550]      ; 0040d0a9 | g_CDemonMissionInstance | g_CDemonMissionPtr
    PUSH ECX                            ; 0040d0af | g_CDemonMissionInstance
    CALL core_msnedit.cpp_CDemonMission_FUN_0053ca00 ; 0040d0b0
        ;   XREF to: 0053ca00 (UNCONDITIONAL_CALL)  ; void core_msnedit.cpp_CDemonMission_FUN_0053ca00(CDemonMission * this_ptr)
    ADD ESP,0x8                         ; 0040d0b5
    ADD ESP,0x1c                        ; 0040d0b8
    POP EBX                             ; 0040d0bb
    RET                                 ; 0040d0bc
    MOV EAX,ESP                         ; 0040d0bd
        ;   Label: LAB_0040d0bd
    LEA EDX,[EBX + 0x20]                ; 0040d0bf
    CMP EAX,EDX                         ; 0040d0c2
    JZ 0x0040d0d9                       ; 0040d0c4
        ;   XREF to: 0040d0d9 (CONDITIONAL_JUMP)  ; LAB_0040d0d9
    MOV EAX,dword ptr [EDX]             ; 0040d0c6
    MOV dword ptr [ESP],EAX             ; 0040d0c8
    MOV EAX,dword ptr [EDX + 0x4]       ; 0040d0cb
    MOV dword ptr [ESP + 0x4],EAX       ; 0040d0ce
    MOV EAX,dword ptr [EDX + 0x8]       ; 0040d0d2
    MOV dword ptr [ESP + 0x8],EAX       ; 0040d0d5
    LEA EAX,[ESP + 0xc]                 ; 0040d0d9
        ;   Label: LAB_0040d0d9
    LEA EDX,[EBX + 0x30]                ; 0040d0dd
    CMP EAX,EDX                         ; 0040d0e0
    JZ 0x0040d0f8                       ; 0040d0e2
        ;   XREF to: 0040d0f8 (CONDITIONAL_JUMP)  ; LAB_0040d0f8
    MOV EAX,dword ptr [EDX]             ; 0040d0e4
    MOV dword ptr [ESP + 0xc],EAX       ; 0040d0e6
    MOV EAX,dword ptr [EDX + 0x4]       ; 0040d0ea
    MOV dword ptr [ESP + 0x10],EAX      ; 0040d0ed
    MOV EAX,dword ptr [EDX + 0x8]       ; 0040d0f1
    MOV dword ptr [ESP + 0x14],EAX      ; 0040d0f4
    MOV EAX,ESP                         ; 0040d0f8
        ;   Label: LAB_0040d0f8
    PUSH EAX                            ; 0040d0fa
    CALL core_slew.cpp_CSlew_processInput_FUN_005a20b0 ; 0040d0fb
        ;   XREF to: 005a20b0 (UNCONDITIONAL_CALL)  ; void core_slew.cpp_CSlew_processInput_FUN_005a20b0(CSlew * this_ptr)
    ADD ESP,0x4                         ; 0040d100
    LEA EDX,[EBX + 0x20]                ; 0040d103
    MOV EAX,dword ptr [ESP]             ; 0040d106
    MOV dword ptr [EDX],EAX             ; 0040d109
    MOV EAX,dword ptr [ESP + 0x4]       ; 0040d10b
    MOV dword ptr [EDX + 0x4],EAX       ; 0040d10f
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040d112
    MOV dword ptr [EDX + 0x8],EAX       ; 0040d116
    LEA EAX,[ESP + 0xc]                 ; 0040d119
    LEA EDX,[EBX + 0x30]                ; 0040d11d
    CMP EDX,EAX                         ; 0040d120
    JZ 0x0040d07b                       ; 0040d122
        ;   XREF to: 0040d07b (CONDITIONAL_JUMP)  ; LAB_0040d07b
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040d128
    MOV dword ptr [EDX],EAX             ; 0040d12c
    MOV EAX,dword ptr [ESP + 0x10]      ; 0040d12e
    MOV dword ptr [EDX + 0x4],EAX       ; 0040d132
    MOV EAX,dword ptr [ESP + 0x14]      ; 0040d135
    MOV dword ptr [EDX + 0x8],EAX       ; 0040d139
    JMP 0x0040d07b                      ; 0040d13c
        ;   XREF to: 0040d07b (UNCONDITIONAL_JUMP)  ; LAB_0040d07b

