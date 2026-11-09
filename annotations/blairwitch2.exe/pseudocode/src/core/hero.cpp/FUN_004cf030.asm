; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool core_hero_cpp_FUN_004cf030(CDemonActor *param_1)
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
; XREF[7]:
;   core_colonel.cpp_FUN_00435830 at 00435c8f
;   core_gabriela.cpp_FUN_004ad640 at 004ae900
;   core_haystack.cpp_FUN_004cc990 at 004cce1d
;   core_hero.cpp_FUN_004d0780 at 004d0831
;   core_icepick.cpp_FUN_004d4c50 at 004d5202
;   core_stranger.cpp_FUN_0056e4d0 at 0056e541
;   core_svetlana.cpp_FUN_00570510 at 00570a87
;
; Referenced Globals:
;   undefined4 DAT_005d9c7c
;   undefined4 DAT_005d9c84
;   undefined4 DAT_005d9c8c
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 g_CDoorClassInfo.name_hash
;   undefined4 g_CDemonSetInstance.field1364324_0x14d164
;   undefined4 g_CDemonSetInstance.field1364328_0x14d168
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_FUN_00408de0
;   core_door.cpp_CDoor_getMoveType_FUN_00460630
;   core_vecdir.cpp_FUN_005838f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cf030
        ;   Label: core_hero.cpp_FUN_004cf030
    PUSH ESI                            ; 004cf031
    PUSH EDI                            ; 004cf032
    PUSH EBP                            ; 004cf033
    MOV EBP,ESP                         ; 004cf034
    SUB ESP,0x40                        ; 004cf036
    AND ESP,0xfffffff8                  ; 004cf039
    MOV EDX,0x40800000                  ; 004cf03c
    XOR ECX,ECX                         ; 004cf041
    MOV dword ptr [ESP + 0x30],EDX      ; 004cf043
    MOV dword ptr [ESP + 0x3c],ECX      ; 004cf047
    MOV dword ptr [ESP + 0x38],ECX      ; 004cf04b
    MOV EAX,[0x0061b5a8]                ; 004cf04f | g_CDemonSetPtr
        ;   Label: LAB_004cf04f
    MOV EBX,dword ptr [ESP + 0x3c]      ; 004cf054
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 004cf058 | g_CDemonSetInstance.field1364324_0x14d164
    JL 0x004cf079                       ; 004cf05e
        ;   XREF to: 004cf079 (CONDITIONAL_JUMP)  ; LAB_004cf079
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cf060
    CMP dword ptr [EAX + 0x255f0],0x3   ; 004cf063
    SETZ AL                             ; 004cf06a
    AND EAX,0xff                        ; 004cf06d
    MOV ESP,EBP                         ; 004cf072
    POP EBP                             ; 004cf074
    POP EDI                             ; 004cf075
    POP ESI                             ; 004cf076
    POP EBX                             ; 004cf077
    RET                                 ; 004cf078
    MOV EDX,dword ptr [ESP + 0x38]      ; 004cf079
        ;   Label: LAB_004cf079
    MOV EDI,dword ptr [0x01b4d36c]      ; 004cf07d | g_CDoorClassInfo.name_hash
    ADD EAX,EDX                         ; 004cf083
    PUSH EDI                            ; 004cf085
    MOV ECX,dword ptr [EAX + 0x14d168]  ; 004cf086 | g_CDemonSetInstance.field1364328_0x14d168
    PUSH ECX                            ; 004cf08c
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004cf08d
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    MOV EBX,EAX                         ; 004cf092
    ADD ESP,0x8                         ; 004cf094
    TEST EAX,EAX                        ; 004cf097
    JZ 0x004cf1d8                       ; 004cf099
        ;   XREF to: 004cf1d8 (CONDITIONAL_JUMP)  ; LAB_004cf1d8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cf09f
    FLD float ptr [EBX + 0x20]          ; 004cf0a2
    FSUB float ptr [EAX + 0x20]         ; 004cf0a5
    FABS                                ; 004cf0a8
    FCOMP double ptr [0x005d9c7c]       ; 004cf0aa | DAT_005d9c7c
    FNSTSW AX                           ; 004cf0b0
    SAHF                                ; 004cf0b2
    JA 0x004cf1d8                       ; 004cf0b3
        ;   XREF to: 004cf1d8 (CONDITIONAL_JUMP)  ; LAB_004cf1d8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cf0b9
    FLD float ptr [EBX + 0x24]          ; 004cf0bc
    FSUB float ptr [EAX + 0x24]         ; 004cf0bf
    FABS                                ; 004cf0c2
    FCOMP double ptr [0x005d9c7c]       ; 004cf0c4 | DAT_005d9c7c
    FNSTSW AX                           ; 004cf0ca
    SAHF                                ; 004cf0cc
    JA 0x004cf1d8                       ; 004cf0cd
        ;   XREF to: 004cf1d8 (CONDITIONAL_JUMP)  ; LAB_004cf1d8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cf0d3
    FLD float ptr [EBX + 0x28]          ; 004cf0d6
    FSUB float ptr [EAX + 0x28]         ; 004cf0d9
    FABS                                ; 004cf0dc
    FCOMP double ptr [0x005d9c7c]       ; 004cf0de | DAT_005d9c7c
    FNSTSW AX                           ; 004cf0e4
    SAHF                                ; 004cf0e6
    JA 0x004cf1d8                       ; 004cf0e7
        ;   XREF to: 004cf1d8 (CONDITIONAL_JUMP)  ; LAB_004cf1d8
    CMP dword ptr [EBX + 0x43c],0x0     ; 004cf0ed
    JNZ 0x004cf1d8                      ; 004cf0f4
        ;   XREF to: 004cf1d8 (CONDITIONAL_JUMP)  ; LAB_004cf1d8
    LEA EAX,[EBX + 0xb18]               ; 004cf0fa
    PUSH EAX                            ; 004cf100
    MOV EDI,dword ptr [EBP + 0x14]      ; 004cf101
    PUSH EDI                            ; 004cf104
    LEA ESI,[ESP + 0x8]                 ; 004cf105
    CALL core_actor.cpp_FUN_00408de0    ; 004cf109
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA EDI,[ESP + 0x14]                ; 004cf10e
    LEA ESI,[ESP + 0x8]                 ; 004cf112
    ADD ESP,0x8                         ; 004cf116
    MOVSD ES:EDI,ESI                    ; 004cf119
    MOVSD ES:EDI,ESI                    ; 004cf11a
    MOVSD ES:EDI,ESI                    ; 004cf11b
    FLD float ptr [ESP + 0x14]          ; 004cf11c
    FLDZ                                ; 004cf120
    FCOMPP                              ; 004cf122
    FNSTSW AX                           ; 004cf124
    SAHF                                ; 004cf126
    JNC 0x004cf1d8                      ; 004cf127
        ;   XREF to: 004cf1d8 (CONDITIONAL_JUMP)  ; LAB_004cf1d8
    LEA EAX,[ESP + 0xc]                 ; 004cf12d
    PUSH EAX                            ; 004cf131
    LEA ESI,[ESP + 0x28]                ; 004cf132
    LEA EDI,[ESP + 0x1c]                ; 004cf136
    CALL core_vecdir.cpp_FUN_005838f0   ; 004cf13a
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005838f0()
    LEA ESI,[ESP + 0x28]                ; 004cf13f
    ADD ESP,0x4                         ; 004cf143
    MOVSD ES:EDI,ESI                    ; 004cf146
    MOVSD ES:EDI,ESI                    ; 004cf147
    MOVSD ES:EDI,ESI                    ; 004cf148
    FLD float ptr [ESP + 0x1c]          ; 004cf149
    FABS                                ; 004cf14d
    FCOMP float ptr [0x005d9c84]        ; 004cf14f | DAT_005d9c84
    FNSTSW AX                           ; 004cf155
    SAHF                                ; 004cf157
    JA 0x004cf1d8                       ; 004cf158
        ;   XREF to: 004cf1d8 (CONDITIONAL_JUMP)  ; LAB_004cf1d8
    FLD float ptr [ESP + 0x10]          ; 004cf15e
    FABS                                ; 004cf162
    FCOMP double ptr [0x005d9c8c]       ; 004cf164 | DAT_005d9c8c
    FNSTSW AX                           ; 004cf16a
    SAHF                                ; 004cf16c
    JA 0x004cf1d8                       ; 004cf16d
        ;   XREF to: 004cf1d8 (CONDITIONAL_JUMP)  ; LAB_004cf1d8
    FLD float ptr [ESP + 0xc]           ; 004cf16f
    FMUL ST0                            ; 004cf173
    FLD float ptr [ESP + 0x14]          ; 004cf175
    FMUL ST0                            ; 004cf179
    XOR EAX,EAX                         ; 004cf17b
    FADDP                               ; 004cf17d
    MOV dword ptr [ESP + 0x10],EAX      ; 004cf17f
    FSQRT                               ; 004cf183
    FST float ptr [ESP + 0x34]          ; 004cf185
    FCOMP float ptr [ESP + 0x30]        ; 004cf189
    FNSTSW AX                           ; 004cf18d
    SAHF                                ; 004cf18f
    JNC 0x004cf1d8                      ; 004cf190
        ;   XREF to: 004cf1d8 (CONDITIONAL_JUMP)  ; LAB_004cf1d8
    MOV EDX,dword ptr [EBP + 0x18]      ; 004cf192
    PUSH EDX                            ; 004cf195
    MOV ECX,dword ptr [EBP + 0x14]      ; 004cf196
    PUSH ECX                            ; 004cf199
    PUSH EBX                            ; 004cf19a
    CALL core_door.cpp_CDoor_getMoveType_FUN_00460630 ; 004cf19b
        ;   XREF to: 00460630 (UNCONDITIONAL_CALL)  ; int core_door.cpp_CDoor_getMoveType_FUN_00460630(CDoor * this_ptr, CDemonActor * opener)
    ADD ESP,0xc                         ; 004cf1a0
    TEST EAX,EAX                        ; 004cf1a3
    JZ 0x004cf1d8                       ; 004cf1a5
        ;   XREF to: 004cf1d8 (CONDITIONAL_JUMP)  ; LAB_004cf1d8
    MOV ESI,dword ptr [ESP + 0x34]      ; 004cf1a7
    MOV dword ptr [ESP + 0x30],ESI      ; 004cf1ab
    MOV ESI,dword ptr [EBP + 0x14]      ; 004cf1af
    MOV dword ptr [ESI + 0x255f0],0x3   ; 004cf1b2
    MOV dword ptr [ESI + 0x25600],0x0   ; 004cf1bc
    MOV dword ptr [ESI + 0x255f4],EBX   ; 004cf1c6
    MOV dword ptr [ESI + 0x255f8],EBX   ; 004cf1cc
    MOV dword ptr [ESI + 0x255fc],EAX   ; 004cf1d2
    MOV ESI,dword ptr [ESP + 0x3c]      ; 004cf1d8
        ;   Label: LAB_004cf1d8
    MOV EBX,dword ptr [ESP + 0x38]      ; 004cf1dc
    INC ESI                             ; 004cf1e0
    ADD EBX,0x4                         ; 004cf1e1
    MOV dword ptr [ESP + 0x3c],ESI      ; 004cf1e4
    MOV dword ptr [ESP + 0x38],EBX      ; 004cf1e8
    JMP 0x004cf04f                      ; 004cf1ec
        ;   XREF to: 004cf04f (UNCONDITIONAL_JUMP)  ; LAB_004cf04f

