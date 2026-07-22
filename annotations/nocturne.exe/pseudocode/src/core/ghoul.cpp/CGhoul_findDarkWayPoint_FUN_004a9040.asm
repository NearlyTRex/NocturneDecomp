; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ghoul_cpp_CGhoul_findDarkWayPoint_FUN_004a9040(int param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004a9270 at 004aa38d
;
; Referenced Globals:
;   string s_..\\core\\ghoul.cpp_00584be4
;   string s_CGhoul::findDarkWayPoint_-_Can't_00584bf6
;   TerminatedCString s_darkPoint_00584ead
;   void* PTR_s_darkPoint_00584ead_005b9654 = 00584ead
;   undefined4 DAT_005be368
;   undefined4 DAT_01c78c10
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_01e57284
;   undefined4 DAT_01fa3ff0
;   undefined4 DAT_01fa3ff4
;   undefined4 DAT_01fa7e78
;   undefined4 DAT_02ddf54c
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_004f1600
;   core_path.cpp_getPathMap_FUN_004f1e00
;   FUN_004c8440
;   shape_edittool.cpp_wildcardStringMatch_FUN_004775b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9040
        ;   Label: core_ghoul.cpp_CGhoul_findDarkWayPoint_FUN_004a9040
    PUSH ESI                            ; 004a9041
    PUSH EDI                            ; 004a9042
    PUSH EBP                            ; 004a9043
    SUB ESP,0x20                        ; 004a9044
    MOV EBP,dword ptr [ESP + 0x34]      ; 004a9047
    CMP dword ptr [EBP + 0xbd8c],0x0    ; 004a904b
    JNZ 0x004a906d                      ; 004a9052
        ;   XREF to: 004a906d (CONDITIONAL_JUMP)  ; LAB_004a906d
    FLD float ptr [EBP + 0xbd88]        ; 004a9054
    FSUB float ptr [ESP + 0x38]         ; 004a905a
    FST float ptr [EBP + 0xbd88]        ; 004a905e
    FLDZ                                ; 004a9064
    FCOMPP                              ; 004a9066
    FNSTSW AX                           ; 004a9068
    SAHF                                ; 004a906a
    JNC 0x004a9075                      ; 004a906b
        ;   XREF to: 004a9075 (CONDITIONAL_JUMP)  ; LAB_004a9075
    ADD ESP,0x20                        ; 004a906d
        ;   Label: LAB_004a906d
    POP EBP                             ; 004a9070
    POP EDI                             ; 004a9071
    POP ESI                             ; 004a9072
    POP EBX                             ; 004a9073
    RET                                 ; 004a9074
    PUSH 0x40000000                     ; 004a9075
        ;   Label: LAB_004a9075
    PUSH 0x3f800000                     ; 004a907a
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 004a907f
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x24],EAX      ; 004a9084
    XOR ECX,ECX                         ; 004a9088
    FLD float ptr [ESP + 0x24]          ; 004a908a
    LEA EAX,[EBP + 0x20]                ; 004a908e
    ADD ESP,0x8                         ; 004a9091
    FADD float ptr [EBP + 0xbd88]       ; 004a9094
    MOV dword ptr [ESP + 0x18],ECX      ; 004a909a
    MOV dword ptr [ESP + 0xc],EAX       ; 004a909e
    MOV dword ptr [ESP + 0x14],ECX      ; 004a90a2
    FSTP float ptr [EBP + 0xbd88]       ; 004a90a6
    MOV EAX,[0x005be368]                ; 004a90ac | DAT_005be368 | DAT_01e57284
        ;   Label: LAB_004a90ac
    MOV EBX,dword ptr [ESP + 0x18]      ; 004a90b1
    CMP EBX,dword ptr [EAX + 0x14cd6c]  ; 004a90b5 | DAT_01fa3ff0
    JGE 0x004a906d                      ; 004a90bb
        ;   XREF to: 004a906d (CONDITIONAL_JUMP)  ; LAB_004a906d
    MOV EDX,dword ptr [ESP + 0x14]      ; 004a90bd
    MOV EDI,dword ptr [0x02ddf54c]      ; 004a90c1 | DAT_02ddf54c
    ADD EAX,EDX                         ; 004a90c7
    PUSH EDI                            ; 004a90c9
    MOV ECX,dword ptr [EAX + 0x14cd70]  ; 004a90ca | DAT_01fa3ff4
    PUSH ECX                            ; 004a90d0
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004a90d1
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 004a90d6
    MOV EDI,EAX                         ; 004a90d9
    TEST EAX,EAX                        ; 004a90db
    JNZ 0x004a90f5                      ; 004a90dd
        ;   XREF to: 004a90f5 (CONDITIONAL_JUMP)  ; LAB_004a90f5
    MOV ESI,dword ptr [ESP + 0x18]      ; 004a90df
        ;   Label: LAB_004a90df
    MOV EBX,dword ptr [ESP + 0x14]      ; 004a90e3
    INC ESI                             ; 004a90e7
    ADD EBX,0x4                         ; 004a90e8
    MOV dword ptr [ESP + 0x18],ESI      ; 004a90eb
    MOV dword ptr [ESP + 0x14],EBX      ; 004a90ef
    JMP 0x004a90ac                      ; 004a90f3
        ;   XREF to: 004a90ac (UNCONDITIONAL_JUMP)  ; LAB_004a90ac
    PUSH 0x0                            ; 004a90f5
        ;   Label: LAB_004a90f5
    PUSH EAX                            ; 004a90f7
    MOV EBX,dword ptr [0x005b9654]      ; 004a90f8 | PTR_s_darkPoint_00584ead_005b9654
    PUSH EBX                            ; 004a90fe | = "darkPoint*"
    CALL shape_edittool.cpp_wildcardStringMatch_FUN_004775b0 ; 004a90ff
        ;   XREF to: 004775b0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_wildcardStringMatch_FUN_004775b0()
    ADD ESP,0xc                         ; 004a9104
    TEST EAX,EAX                        ; 004a9107
    JZ 0x004a90df                       ; 004a9109
        ;   XREF to: 004a90df (CONDITIONAL_JUMP)  ; LAB_004a90df
    MOV ESI,0x1                         ; 004a910b
    XOR EBX,EBX                         ; 004a9110
    MOV dword ptr [ESP + 0x10],ESI      ; 004a9112
    XOR ESI,ESI                         ; 004a9116
    MOV EAX,[0x005be368]                ; 004a9118 | DAT_005be368
        ;   Label: LAB_004a9118
    CMP ESI,dword ptr [EAX + 0x150bf4]  ; 004a911d | DAT_01fa7e78
    JL 0x004a91b0                       ; 004a9123
        ;   XREF to: 004a91b0 (CONDITIONAL_JUMP)  ; LAB_004a91b0
    CMP dword ptr [ESP + 0x10],0x0      ; 004a9129
    JZ 0x004a90df                       ; 004a912e
        ;   XREF to: 004a90df (CONDITIONAL_JUMP)  ; LAB_004a90df
    PUSH EDI                            ; 004a9130
    MOV EAX,dword ptr [EDI + 0x14c]     ; 004a9131
    CALL dword ptr [EAX + 0xbc]         ; 004a9137
    ADD ESP,0x4                         ; 004a913d
    MOV EBX,EAX                         ; 004a9140
    TEST EAX,EAX                        ; 004a9142
    JZ 0x004a91dc                       ; 004a9144
        ;   XREF to: 004a91dc (CONDITIONAL_JUMP)  ; LAB_004a91dc
    TEST EBX,EBX                        ; 004a914a
        ;   Label: LAB_004a914a
    JNZ 0x004a9170                      ; 004a914c
        ;   XREF to: 004a9170 (CONDITIONAL_JUMP)  ; LAB_004a9170
    MOV ESI,0x584be4                    ; 004a914e | = "..\\core\\ghoul.cpp"
    MOV EAX,0x12c                       ; 004a9153
    PUSH 0x584bf6                       ; 004a9158 | = "CGhoul::findDarkWayPoint - Can't get ..."
    MOV dword ptr [0x01cc4800],ESI      ; 004a915d | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004a9163 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004a9168
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004a916d
    XOR EDX,EDX                         ; 004a9170
        ;   Label: LAB_004a9170
    MOV dword ptr [ESP],EDX             ; 004a9172
    MOV dword ptr [ESP + 0x4],EDX       ; 004a9175
    MOV dword ptr [ESP + 0x8],EDX       ; 004a9179
    MOV EAX,dword ptr [EBP + 0x6c]      ; 004a917d
    PUSH EAX                            ; 004a9180
    LEA EAX,[ESP + 0x4]                 ; 004a9181
    PUSH EAX                            ; 004a9185
    MOV EDX,dword ptr [ESP + 0x14]      ; 004a9186
    PUSH EDX                            ; 004a918a
    PUSH EBX                            ; 004a918b
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_004f1600 ; 004a918c
        ;   XREF to: 004f1600 (UNCONDITIONAL_CALL)  ; undefined core_path.cpp_CPathMap_findPathWithRetry_FUN_004f1600()
    ADD ESP,0x10                        ; 004a9191
    TEST EAX,EAX                        ; 004a9194
    JLE 0x004a90df                      ; 004a9196
        ;   XREF to: 004a90df (CONDITIONAL_JUMP)  ; LAB_004a90df
    MOV dword ptr [EBP + 0xbd84],EDI    ; 004a919c
    JMP 0x004a90df                      ; 004a91a2
        ;   XREF to: 004a90df (UNCONDITIONAL_JUMP)  ; LAB_004a90df
    INC ESI                             ; 004a91a7
        ;   Label: LAB_004a91a7
    ADD EBX,0x4                         ; 004a91a8
    JMP 0x004a9118                      ; 004a91ab
        ;   XREF to: 004a9118 (UNCONDITIONAL_JUMP)  ; LAB_004a9118
    MOV ECX,dword ptr [0x01c78c10]      ; 004a91b0 | DAT_01c78c10
        ;   Label: LAB_004a91b0
    PUSH ECX                            ; 004a91b6
    MOV EDX,dword ptr [EBX + EAX*0x1 + 0x150bf8] ; 004a91b7
    PUSH EDX                            ; 004a91be
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004a91bf
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 004a91c4
    TEST EAX,EAX                        ; 004a91c7
    JZ 0x004a91a7                       ; 004a91c9
        ;   XREF to: 004a91a7 (CONDITIONAL_JUMP)  ; LAB_004a91a7
    CMP EAX,EBP                         ; 004a91cb
    JZ 0x004a91a7                       ; 004a91cd
        ;   XREF to: 004a91a7 (CONDITIONAL_JUMP)  ; LAB_004a91a7
    CMP EDI,dword ptr [EAX + 0xbd84]    ; 004a91cf
    JNZ 0x004a91a7                      ; 004a91d5
        ;   XREF to: 004a91a7 (CONDITIONAL_JUMP)  ; LAB_004a91a7
    JMP 0x004a90df                      ; 004a91d7
        ;   XREF to: 004a90df (UNCONDITIONAL_JUMP)  ; LAB_004a90df
    LEA EAX,[EDI + 0x20]                ; 004a91dc
        ;   Label: LAB_004a91dc
    PUSH EAX                            ; 004a91df
    CALL core_path.cpp_getPathMap_FUN_004f1e00 ; 004a91e0
        ;   XREF to: 004f1e00 (UNCONDITIONAL_CALL)  ; undefined core_path.cpp_getPathMap_FUN_004f1e00()
    ADD ESP,0x4                         ; 004a91e5
    MOV EBX,EAX                         ; 004a91e8
    JMP 0x004a914a                      ; 004a91ea
        ;   XREF to: 004a914a (UNCONDITIONAL_JUMP)  ; LAB_004a914a

