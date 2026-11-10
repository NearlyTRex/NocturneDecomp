; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool core_hero_cpp_FUN_004d3040(CDemonActor *param_1)
;
; Local Variables:
; undefined        Stack[-0x50]:1  local_50
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined        Stack[-0x38]:1  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_hero.cpp_FUN_004d4900 at 004d49d7
;
; Referenced Globals:
;   undefined4 DAT_005c4d15
;   undefined4 DAT_005c4d1d
;   undefined4 DAT_005c4d25
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 g_CDoorClassInfo.name_hash
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_FUN_00408bf0
;   core_door.cpp_CDoor_getMoveType_FUN_00465380
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d3040
        ;   Label: core_hero.cpp_FUN_004d3040
    PUSH ESI                            ; 004d3041
    PUSH EDI                            ; 004d3042
    PUSH EBP                            ; 004d3043
    MOV EBP,ESP                         ; 004d3044
    SUB ESP,0x40                        ; 004d3046
    AND ESP,0xfffffff8                  ; 004d3049
    MOV EDX,0x40800000                  ; 004d304c
    XOR ECX,ECX                         ; 004d3051
    MOV dword ptr [ESP + 0x30],EDX      ; 004d3053
    MOV dword ptr [ESP + 0x3c],ECX      ; 004d3057
    MOV dword ptr [ESP + 0x38],ECX      ; 004d305b
    MOV EAX,[0x00603b28]                ; 004d305f | g_CDemonSetPtr
        ;   Label: LAB_004d305f
    MOV EBX,dword ptr [ESP + 0x3c]      ; 004d3064
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 004d3068 | g_CDemonSetInstance.actor_count
    JL 0x004d3089                       ; 004d306e
        ;   XREF to: 004d3089 (CONDITIONAL_JUMP)  ; LAB_004d3089
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d3070
    CMP dword ptr [EAX + 0x20b68],0x3   ; 004d3073
    SETZ AL                             ; 004d307a
    AND EAX,0xff                        ; 004d307d
    MOV ESP,EBP                         ; 004d3082
    POP EBP                             ; 004d3084
    POP EDI                             ; 004d3085
    POP ESI                             ; 004d3086
    POP EBX                             ; 004d3087
    RET                                 ; 004d3088
    MOV EDX,dword ptr [ESP + 0x38]      ; 004d3089
        ;   Label: LAB_004d3089
    MOV EDI,dword ptr [0x01b85178]      ; 004d308d | g_CDoorClassInfo.name_hash
    ADD EAX,EDX                         ; 004d3093
    PUSH EDI                            ; 004d3095
    MOV ECX,dword ptr [EAX + 0x14d168]  ; 004d3096 | g_CDemonSetInstance.actors[0]
    PUSH ECX                            ; 004d309c
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004d309d
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV EBX,EAX                         ; 004d30a2
    ADD ESP,0x8                         ; 004d30a4
    TEST EAX,EAX                        ; 004d30a7
    JZ 0x004d31f5                       ; 004d30a9
        ;   XREF to: 004d31f5 (CONDITIONAL_JUMP)  ; LAB_004d31f5
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d30af
    FLD float ptr [EBX + 0x20]          ; 004d30b2
    FSUB float ptr [EAX + 0x20]         ; 004d30b5
    FABS                                ; 004d30b8
    FCOMP double ptr [0x005c4d15]       ; 004d30ba | DAT_005c4d15
    FNSTSW AX                           ; 004d30c0
    SAHF                                ; 004d30c2
    JA 0x004d31f5                       ; 004d30c3
        ;   XREF to: 004d31f5 (CONDITIONAL_JUMP)  ; LAB_004d31f5
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d30c9
    FLD float ptr [EBX + 0x24]          ; 004d30cc
    FSUB float ptr [EAX + 0x24]         ; 004d30cf
    FABS                                ; 004d30d2
    FCOMP double ptr [0x005c4d15]       ; 004d30d4 | DAT_005c4d15
    FNSTSW AX                           ; 004d30da
    SAHF                                ; 004d30dc
    JA 0x004d31f5                       ; 004d30dd
        ;   XREF to: 004d31f5 (CONDITIONAL_JUMP)  ; LAB_004d31f5
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d30e3
    FLD float ptr [EBX + 0x28]          ; 004d30e6
    FSUB float ptr [EAX + 0x28]         ; 004d30e9
    FABS                                ; 004d30ec
    FCOMP double ptr [0x005c4d15]       ; 004d30ee | DAT_005c4d15
    FNSTSW AX                           ; 004d30f4
    SAHF                                ; 004d30f6
    JA 0x004d31f5                       ; 004d30f7
        ;   XREF to: 004d31f5 (CONDITIONAL_JUMP)  ; LAB_004d31f5
    CMP dword ptr [EBX + 0x2e0],0x0     ; 004d30fd
    JNZ 0x004d31f5                      ; 004d3104
        ;   XREF to: 004d31f5 (CONDITIONAL_JUMP)  ; LAB_004d31f5
    LEA EAX,[EBX + 0x9bc]               ; 004d310a
    PUSH EAX                            ; 004d3110
    MOV EDI,dword ptr [EBP + 0x14]      ; 004d3111
    PUSH EDI                            ; 004d3114
    LEA ESI,[ESP + 0x8]                 ; 004d3115
    CALL core_actor.cpp_FUN_00408bf0    ; 004d3119
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA EDI,[ESP + 0x14]                ; 004d311e
    LEA ESI,[ESP + 0x8]                 ; 004d3122
    ADD ESP,0x8                         ; 004d3126
    MOVSD ES:EDI,ESI                    ; 004d3129
    MOVSD ES:EDI,ESI                    ; 004d312a
    MOVSD ES:EDI,ESI                    ; 004d312b
    FLD float ptr [ESP + 0x14]          ; 004d312c
    FLDZ                                ; 004d3130
    FCOMPP                              ; 004d3132
    FNSTSW AX                           ; 004d3134
    SAHF                                ; 004d3136
    JNC 0x004d31f5                      ; 004d3137
        ;   XREF to: 004d31f5 (CONDITIONAL_JUMP)  ; LAB_004d31f5
    LEA EAX,[ESP + 0xc]                 ; 004d313d
    PUSH EAX                            ; 004d3141
    LEA ESI,[ESP + 0x28]                ; 004d3142
    LEA EDI,[ESP + 0x1c]                ; 004d3146
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 004d314a
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    LEA ESI,[ESP + 0x28]                ; 004d314f
    ADD ESP,0x4                         ; 004d3153
    MOVSD ES:EDI,ESI                    ; 004d3156
    MOVSD ES:EDI,ESI                    ; 004d3157
    MOVSD ES:EDI,ESI                    ; 004d3158
    FLD float ptr [ESP + 0x1c]          ; 004d3159
    FABS                                ; 004d315d
    FCOMP float ptr [0x005c4d1d]        ; 004d315f | DAT_005c4d1d
    FNSTSW AX                           ; 004d3165
    SAHF                                ; 004d3167
    JA 0x004d31f5                       ; 004d3168
        ;   XREF to: 004d31f5 (CONDITIONAL_JUMP)  ; LAB_004d31f5
    FLD float ptr [ESP + 0x10]          ; 004d316e
    FABS                                ; 004d3172
    FCOMP double ptr [0x005c4d25]       ; 004d3174 | DAT_005c4d25
    FNSTSW AX                           ; 004d317a
    SAHF                                ; 004d317c
    JA 0x004d31f5                       ; 004d317d
        ;   XREF to: 004d31f5 (CONDITIONAL_JUMP)  ; LAB_004d31f5
    FLD float ptr [ESP + 0xc]           ; 004d3183
    FMUL ST0                            ; 004d3187
    FLD float ptr [ESP + 0x14]          ; 004d3189
    FMUL ST0                            ; 004d318d
    XOR EAX,EAX                         ; 004d318f
    FADDP                               ; 004d3191
    MOV dword ptr [ESP + 0x10],EAX      ; 004d3193
    FSQRT                               ; 004d3197
    FST float ptr [ESP + 0x34]          ; 004d3199
    FCOMP float ptr [ESP + 0x30]        ; 004d319d
    FNSTSW AX                           ; 004d31a1
    SAHF                                ; 004d31a3
    JNC 0x004d31f5                      ; 004d31a4
        ;   XREF to: 004d31f5 (CONDITIONAL_JUMP)  ; LAB_004d31f5
    MOV EDX,dword ptr [EBP + 0x18]      ; 004d31a6
    PUSH EDX                            ; 004d31a9
    MOV ECX,dword ptr [EBP + 0x14]      ; 004d31aa
    PUSH ECX                            ; 004d31ad
    PUSH EBX                            ; 004d31ae
    CALL core_door.cpp_CDoor_getMoveType_FUN_00465380 ; 004d31af
        ;   XREF to: 00465380 (UNCONDITIONAL_CALL)  ; int core_door.cpp_CDoor_getMoveType_FUN_00465380(CDoor * this_ptr, CDemonActor * opener)
    ADD ESP,0xc                         ; 004d31b4
    TEST EAX,EAX                        ; 004d31b7
    JZ 0x004d31f5                       ; 004d31b9
        ;   XREF to: 004d31f5 (CONDITIONAL_JUMP)  ; LAB_004d31f5
    CMP dword ptr [EBX + 0x9d8],0x0     ; 004d31bb
    JZ 0x004d31f5                       ; 004d31c2
        ;   XREF to: 004d31f5 (CONDITIONAL_JUMP)  ; LAB_004d31f5
    MOV ESI,dword ptr [ESP + 0x34]      ; 004d31c4
    MOV dword ptr [ESP + 0x30],ESI      ; 004d31c8
    MOV ESI,dword ptr [EBP + 0x14]      ; 004d31cc
    MOV dword ptr [ESI + 0x20b68],0x3   ; 004d31cf
    MOV dword ptr [ESI + 0x20b7c],0x0   ; 004d31d9
    MOV dword ptr [ESI + 0x20b6c],EBX   ; 004d31e3
    MOV dword ptr [ESI + 0x20b70],EBX   ; 004d31e9
    MOV dword ptr [ESI + 0x20b74],EAX   ; 004d31ef
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004d31f5
        ;   Label: LAB_004d31f5
    MOV EDI,dword ptr [ESP + 0x38]      ; 004d31f9
    INC EAX                             ; 004d31fd
    ADD EDI,0x4                         ; 004d31fe
    MOV dword ptr [ESP + 0x3c],EAX      ; 004d3201
    MOV dword ptr [ESP + 0x38],EDI      ; 004d3205
    JMP 0x004d305f                      ; 004d3209
        ;   XREF to: 004d305f (UNCONDITIONAL_JUMP)  ; LAB_004d305f

