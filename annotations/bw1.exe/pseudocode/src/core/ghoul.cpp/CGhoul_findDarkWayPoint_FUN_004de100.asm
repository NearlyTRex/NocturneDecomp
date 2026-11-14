; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ghoul_cpp_CGhoul_findDarkWayPoint_FUN_004de100(CGhoul *this_ptr,float delta_time)
;
; Parameters:
; CGhoul *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_ghoul.cpp_CGhoul_process_FUN_004de330 at 004df60e
;
; Referenced Globals:
;   TerminatedCString s_core_ghoul_cpp_005e3b68
;   TerminatedCString s_CGhoul_findDarkWayPoint_005e3b7a
;   TerminatedCString s_darkPoint_005e3e21
;   void* PTR_s_darkPoint_005e3e21_0061dc30 = 005e3e21
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 g_CGhoulClassInfo.name_hash
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;   undefined4 g_CDemonSetInstance.enemy_count
;   undefined4 g_CWayPointClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_main.c_FUN_005030e0
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_005349a0
;   core_path.cpp_getPathMap_FUN_005351f0
;   shape_edittool.cpp_wildcardStringMatch_FUN_0049dea0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004de100
        ;   Label: core_ghoul.cpp_CGhoul_findDarkWayPoint_FUN_004de100
    PUSH ESI                            ; 004de101
    PUSH EDI                            ; 004de102
    PUSH EBP                            ; 004de103
    SUB ESP,0x20                        ; 004de104
    MOV EBP,dword ptr [ESP + 0x34]      ; 004de107
    CMP dword ptr [EBP + 0xc2d0],0x0    ; 004de10b
    JNZ 0x004de12d                      ; 004de112
        ;   XREF to: 004de12d (CONDITIONAL_JUMP)  ; LAB_004de12d
    FLD float ptr [EBP + 0xc2cc]        ; 004de114
    FSUB float ptr [ESP + 0x38]         ; 004de11a
    FST float ptr [EBP + 0xc2cc]        ; 004de11e
    FLDZ                                ; 004de124
    FCOMPP                              ; 004de126
    FNSTSW AX                           ; 004de128
    SAHF                                ; 004de12a
    JNC 0x004de135                      ; 004de12b
        ;   XREF to: 004de135 (CONDITIONAL_JUMP)  ; LAB_004de135
    ADD ESP,0x20                        ; 004de12d
        ;   Label: LAB_004de12d
    POP EBP                             ; 004de130
    POP EDI                             ; 004de131
    POP ESI                             ; 004de132
    POP EBX                             ; 004de133
    RET                                 ; 004de134
    PUSH 0x40000000                     ; 004de135
        ;   Label: LAB_004de135
    PUSH 0x3f800000                     ; 004de13a
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004de13f
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x24],EAX      ; 004de144
    XOR ECX,ECX                         ; 004de148
    FLD float ptr [ESP + 0x24]          ; 004de14a
    LEA EAX,[EBP + 0x20]                ; 004de14e
    ADD ESP,0x8                         ; 004de151
    FADD float ptr [EBP + 0xc2cc]       ; 004de154
    MOV dword ptr [ESP + 0x18],ECX      ; 004de15a
    MOV dword ptr [ESP + 0xc],EAX       ; 004de15e
    MOV dword ptr [ESP + 0x14],ECX      ; 004de162
    FSTP float ptr [EBP + 0xc2cc]       ; 004de166
    MOV EAX,[0x00622c18]                ; 004de16c | g_CDemonSetPtr | g_CDemonSetInstance
        ;   Label: LAB_004de16c
    MOV EBX,dword ptr [ESP + 0x18]      ; 004de171
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 004de175 | g_CDemonSetInstance.actor_count
    JGE 0x004de12d                      ; 004de17b
        ;   XREF to: 004de12d (CONDITIONAL_JUMP)  ; LAB_004de12d
    MOV EDX,dword ptr [ESP + 0x14]      ; 004de17d
    MOV EDI,dword ptr [0x02c992fc]      ; 004de181 | g_CWayPointClassInfo.name_hash
    ADD EAX,EDX                         ; 004de187
    PUSH EDI                            ; 004de189
    MOV ECX,dword ptr [EAX + 0x14d168]  ; 004de18a | g_CDemonSetInstance.actors[0]
    PUSH ECX                            ; 004de190
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004de191
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004de196
    MOV EDI,EAX                         ; 004de199
    TEST EAX,EAX                        ; 004de19b
    JNZ 0x004de1b5                      ; 004de19d
        ;   XREF to: 004de1b5 (CONDITIONAL_JUMP)  ; LAB_004de1b5
    MOV ESI,dword ptr [ESP + 0x18]      ; 004de19f
        ;   Label: LAB_004de19f
    MOV EBX,dword ptr [ESP + 0x14]      ; 004de1a3
    INC ESI                             ; 004de1a7
    ADD EBX,0x4                         ; 004de1a8
    MOV dword ptr [ESP + 0x18],ESI      ; 004de1ab
    MOV dword ptr [ESP + 0x14],EBX      ; 004de1af
    JMP 0x004de16c                      ; 004de1b3
        ;   XREF to: 004de16c (UNCONDITIONAL_JUMP)  ; LAB_004de16c
    PUSH 0x0                            ; 004de1b5
        ;   Label: LAB_004de1b5
    PUSH EAX                            ; 004de1b7
    MOV EBX,dword ptr [0x0061dc30]      ; 004de1b8 | PTR_s_darkPoint_005e3e21_0061dc30
    PUSH EBX                            ; 004de1be | = "darkPoint*"
    CALL shape_edittool.cpp_wildcardStringMatch_FUN_0049dea0 ; 004de1bf
        ;   XREF to: 0049dea0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_wildcardStringMatch_FUN_0049dea0(char * pattern, char * target_string, int case_sensitive)
    ADD ESP,0xc                         ; 004de1c4
    TEST EAX,EAX                        ; 004de1c7
    JZ 0x004de19f                       ; 004de1c9
        ;   XREF to: 004de19f (CONDITIONAL_JUMP)  ; LAB_004de19f
    MOV ESI,0x1                         ; 004de1cb
    XOR EBX,EBX                         ; 004de1d0
    MOV dword ptr [ESP + 0x10],ESI      ; 004de1d2
    XOR ESI,ESI                         ; 004de1d6
    MOV EAX,[0x00622c18]                ; 004de1d8 | g_CDemonSetPtr
        ;   Label: LAB_004de1d8
    CMP ESI,dword ptr [EAX + 0x150fec]  ; 004de1dd | g_CDemonSetInstance.enemy_count
    JL 0x004de270                       ; 004de1e3
        ;   XREF to: 004de270 (CONDITIONAL_JUMP)  ; LAB_004de270
    CMP dword ptr [ESP + 0x10],0x0      ; 004de1e9
    JZ 0x004de19f                       ; 004de1ee
        ;   XREF to: 004de19f (CONDITIONAL_JUMP)  ; LAB_004de19f
    PUSH EDI                            ; 004de1f0
    MOV EAX,dword ptr [EDI + 0x154]     ; 004de1f1
    CALL dword ptr [EAX + 0xc4]         ; 004de1f7
    ADD ESP,0x4                         ; 004de1fd
    MOV EBX,EAX                         ; 004de200
    TEST EAX,EAX                        ; 004de202
    JZ 0x004de29c                       ; 004de204
        ;   XREF to: 004de29c (CONDITIONAL_JUMP)  ; LAB_004de29c
    TEST EBX,EBX                        ; 004de20a
        ;   Label: LAB_004de20a
    JNZ 0x004de230                      ; 004de20c
        ;   XREF to: 004de230 (CONDITIONAL_JUMP)  ; LAB_004de230
    MOV ESI,0x5e3b68                    ; 004de20e | = "..\\core\\ghoul.cpp"
    MOV EAX,0x12d                       ; 004de213
    PUSH 0x5e3b7a                       ; 004de218 | = "CGhoul::findDarkWayPoint - Can't get ..."
    MOV dword ptr [0x01d1d400],ESI      ; 004de21d | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 004de223 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004de228
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004de22d
    XOR EDX,EDX                         ; 004de230
        ;   Label: LAB_004de230
    MOV dword ptr [ESP],EDX             ; 004de232
    MOV dword ptr [ESP + 0x4],EDX       ; 004de235
    MOV dword ptr [ESP + 0x8],EDX       ; 004de239
    MOV EAX,dword ptr [EBP + 0x6c]      ; 004de23d
    PUSH EAX                            ; 004de240
    LEA EAX,[ESP + 0x4]                 ; 004de241
    PUSH EAX                            ; 004de245
    MOV EDX,dword ptr [ESP + 0x14]      ; 004de246
    PUSH EDX                            ; 004de24a
    PUSH EBX                            ; 004de24b
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_005349a0 ; 004de24c
        ;   XREF to: 005349a0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathWithRetry_FUN_005349a0(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 004de251
    TEST EAX,EAX                        ; 004de254
    JLE 0x004de19f                      ; 004de256
        ;   XREF to: 004de19f (CONDITIONAL_JUMP)  ; LAB_004de19f
    MOV dword ptr [EBP + 0xc2c8],EDI    ; 004de25c
    JMP 0x004de19f                      ; 004de262
        ;   XREF to: 004de19f (UNCONDITIONAL_JUMP)  ; LAB_004de19f
    INC ESI                             ; 004de267
        ;   Label: LAB_004de267
    ADD EBX,0x4                         ; 004de268
    JMP 0x004de1d8                      ; 004de26b
        ;   XREF to: 004de1d8 (UNCONDITIONAL_JUMP)  ; LAB_004de1d8
    MOV ECX,dword ptr [0x01cd0d94]      ; 004de270 | g_CGhoulClassInfo.name_hash
        ;   Label: LAB_004de270
    PUSH ECX                            ; 004de276
    MOV EDX,dword ptr [EBX + EAX*0x1 + 0x150ff0] ; 004de277
    PUSH EDX                            ; 004de27e
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004de27f
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004de284
    TEST EAX,EAX                        ; 004de287
    JZ 0x004de267                       ; 004de289
        ;   XREF to: 004de267 (CONDITIONAL_JUMP)  ; LAB_004de267
    CMP EAX,EBP                         ; 004de28b
    JZ 0x004de267                       ; 004de28d
        ;   XREF to: 004de267 (CONDITIONAL_JUMP)  ; LAB_004de267
    CMP EDI,dword ptr [EAX + 0xc2c8]    ; 004de28f
    JNZ 0x004de267                      ; 004de295
        ;   XREF to: 004de267 (CONDITIONAL_JUMP)  ; LAB_004de267
    JMP 0x004de19f                      ; 004de297
        ;   XREF to: 004de19f (UNCONDITIONAL_JUMP)  ; LAB_004de19f
    LEA EAX,[EDI + 0x20]                ; 004de29c
        ;   Label: LAB_004de29c
    PUSH EAX                            ; 004de29f
    CALL core_path.cpp_getPathMap_FUN_005351f0 ; 004de2a0
        ;   XREF to: 005351f0 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_getPathMap_FUN_005351f0(CLocation * location)
    ADD ESP,0x4                         ; 004de2a5
    MOV EBX,EAX                         ; 004de2a8
    JMP 0x004de20a                      ; 004de2aa
        ;   XREF to: 004de20a (UNCONDITIONAL_JUMP)  ; LAB_004de20a

