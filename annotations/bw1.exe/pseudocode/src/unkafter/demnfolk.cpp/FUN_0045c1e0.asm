; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_demnfolk_cpp_FUN_0045c1e0(CEnemy *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_speed_005d81c4
;   TerminatedCString s_modelName_005d81ca
;   TerminatedCString s_guardDistance_005d81d4
;   TerminatedCString s_motion_state_005d81e2
;   TerminatedCString s_partStatus_005d81ef
;   TerminatedCString s_carriedActor_005d81fa
;   TerminatedCString s_riseFromGraveCondition_005d8207
;   TerminatedCString s_graveActor_005d821e
;   TerminatedCString s_clothList_005d8229
;   TerminatedCString s_isMinerZombie_005d8233
;   TerminatedCString s_alwaysChaseFast_005d8241
;   TerminatedCString s_isIndoorDemon_005d8251
;   int g_CDemnfolkClassVersion = 0xc
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b6f0
;   core_actor.cpp_archiveClothList_FUN_0040bce0
;   core_actor.cpp_archiveFloat_FUN_0040b5f0
;   core_actor.cpp_archiveInteger_FUN_0040b670
;   core_actor.cpp_archiveString_FUN_0040b440
;   core_actor.cpp_FUN_0040b7f0
;   core_actor.cpp_FUN_0040b870
;   core_actor.cpp_FUN_0040b960
;   core_enemy.cpp_CEnemy_archive_FUN_004a0520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045c1e0
        ;   Label: unkafter_demnfolk.cpp_FUN_0045c1e0
    PUSH EDI                            ; 0045c1e1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0045c1e2
    PUSH EBX                            ; 0045c1e6
    CALL core_enemy.cpp_CEnemy_archive_FUN_004a0520 ; 0045c1e7
        ;   XREF to: 004a0520 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_004a0520(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0045c1ec
    PUSH 0x5d81c4                       ; 0045c1ef | = "speed"
    LEA EAX,[EBX + 0xc1d0]              ; 0045c1f4
    PUSH EAX                            ; 0045c1fa
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 0045c1fb
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 0045c200
    PUSH 0x5d81ca                       ; 0045c203 | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 0045c208
    PUSH EAX                            ; 0045c20e
    CALL core_actor.cpp_FUN_0040b7f0    ; 0045c20f
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040b7f0(CDeformableModelInstance * model_ptr, char * property_name)
    MOV EDX,dword ptr [0x006112b0]      ; 0045c214 | g_CDemnfolkClassVersion
    ADD ESP,0x8                         ; 0045c21a
    CMP EDX,0x2                         ; 0045c21d
    JL 0x0045c24f                       ; 0045c220
        ;   XREF to: 0045c24f (CONDITIONAL_JUMP)  ; LAB_0045c24f
    CMP EDX,0xb                         ; 0045c222
    JGE 0x0045c23b                      ; 0045c225
        ;   XREF to: 0045c23b (CONDITIONAL_JUMP)  ; LAB_0045c23b
    PUSH 0x5d81d4                       ; 0045c227 | = "guardDistance"
    LEA EAX,[EBX + 0xc1e0]              ; 0045c22c
    PUSH EAX                            ; 0045c232
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 0045c233
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 0045c238
    PUSH 0x5d81e2                       ; 0045c23b | = "motion state"
        ;   Label: LAB_0045c23b
    LEA EAX,[EBX + 0x158]               ; 0045c240
    PUSH EAX                            ; 0045c246
    CALL core_actor.cpp_FUN_0040b870    ; 0045c247
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040b870(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 0045c24c
    CMP dword ptr [0x006112b0],0x3      ; 0045c24f | g_CDemnfolkClassVersion
        ;   Label: LAB_0045c24f
    JL 0x0045c28b                       ; 0045c256
        ;   XREF to: 0045c28b (CONDITIONAL_JUMP)  ; LAB_0045c28b
    PUSH 0x5d81ef                       ; 0045c258 | = "partStatus"
    LEA EAX,[EBX + 0x158]               ; 0045c25d
    PUSH EAX                            ; 0045c263
    CALL core_actor.cpp_FUN_0040b960    ; 0045c264
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040b960(CDeformableModelInstance * model_ptr, char * property_name)
    MOV EDI,dword ptr [0x006112b0]      ; 0045c269 | g_CDemnfolkClassVersion
    ADD ESP,0x8                         ; 0045c26f
    CMP EDI,0x7                         ; 0045c272
    JGE 0x0045c28b                      ; 0045c275
        ;   XREF to: 0045c28b (CONDITIONAL_JUMP)  ; LAB_0045c28b
    PUSH 0x5d81fa                       ; 0045c277 | = "carriedActor"
    LEA EAX,[EBX + 0x2628]              ; 0045c27c
    PUSH EAX                            ; 0045c282
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 0045c283
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b6f0()
    ADD ESP,0x8                         ; 0045c288
    CMP dword ptr [0x006112b0],0x4      ; 0045c28b | g_CDemnfolkClassVersion
        ;   Label: LAB_0045c28b
    JL 0x0045c2a8                       ; 0045c292
        ;   XREF to: 0045c2a8 (CONDITIONAL_JUMP)  ; LAB_0045c2a8
    PUSH 0x5d8207                       ; 0045c294 | = "riseFromGraveCondition"
    LEA EAX,[EBX + 0xc288]              ; 0045c299
    PUSH EAX                            ; 0045c29f
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 0045c2a0
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0045c2a5
    CMP dword ptr [0x006112b0],0x5      ; 0045c2a8 | g_CDemnfolkClassVersion
        ;   Label: LAB_0045c2a8
    JL 0x0045c2c5                       ; 0045c2af
        ;   XREF to: 0045c2c5 (CONDITIONAL_JUMP)  ; LAB_0045c2c5
    PUSH 0x5d821e                       ; 0045c2b1 | = "graveActor"
    LEA EAX,[EBX + 0xc280]              ; 0045c2b6
    PUSH EAX                            ; 0045c2bc
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 0045c2bd
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b6f0()
    ADD ESP,0x8                         ; 0045c2c2
    MOV EDX,dword ptr [0x006112b0]      ; 0045c2c5 | g_CDemnfolkClassVersion
        ;   Label: LAB_0045c2c5
    CMP EDX,0x6                         ; 0045c2cb
    JL 0x0045c2e9                       ; 0045c2ce
        ;   XREF to: 0045c2e9 (CONDITIONAL_JUMP)  ; LAB_0045c2e9
    CMP EDX,0x9                         ; 0045c2d0
    JGE 0x0045c2e9                      ; 0045c2d3
        ;   XREF to: 0045c2e9 (CONDITIONAL_JUMP)  ; LAB_0045c2e9
    PUSH 0x5d8229                       ; 0045c2d5 | = "clothList"
    LEA EAX,[EBX + 0x2ca0]              ; 0045c2da
    PUSH EAX                            ; 0045c2e0
    CALL core_actor.cpp_archiveClothList_FUN_0040bce0 ; 0045c2e1
        ;   XREF to: 0040bce0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveClothList_FUN_0040bce0()
    ADD ESP,0x8                         ; 0045c2e6
    CMP dword ptr [0x006112b0],0x8      ; 0045c2e9 | g_CDemnfolkClassVersion
        ;   Label: LAB_0045c2e9
    JL 0x0045c306                       ; 0045c2f0
        ;   XREF to: 0045c306 (CONDITIONAL_JUMP)  ; LAB_0045c306
    PUSH 0x5d8233                       ; 0045c2f2 | = "isMinerZombie"
    LEA EAX,[EBX + 0xc2ec]              ; 0045c2f7
    PUSH EAX                            ; 0045c2fd
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0045c2fe
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0045c303
    CMP dword ptr [0x006112b0],0xa      ; 0045c306 | g_CDemnfolkClassVersion
        ;   Label: LAB_0045c306
    JL 0x0045c323                       ; 0045c30d
        ;   XREF to: 0045c323 (CONDITIONAL_JUMP)  ; LAB_0045c323
    PUSH 0x5d8241                       ; 0045c30f | = "alwaysChaseFast"
    LEA EAX,[EBX + 0xc2f4]              ; 0045c314
    PUSH EAX                            ; 0045c31a
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0045c31b
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0045c320
    CMP dword ptr [0x006112b0],0xc      ; 0045c323 | g_CDemnfolkClassVersion
        ;   Label: LAB_0045c323
    JGE 0x0045c32f                      ; 0045c32a
        ;   XREF to: 0045c32f (CONDITIONAL_JUMP)  ; LAB_0045c32f
    POP EDI                             ; 0045c32c
    POP EBX                             ; 0045c32d
    RET                                 ; 0045c32e
    PUSH 0x5d8251                       ; 0045c32f | = "isIndoorDemon"
        ;   Label: LAB_0045c32f
    ADD EBX,0xc2f0                      ; 0045c334
    PUSH EBX                            ; 0045c33a
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0045c33b
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0045c340
    POP EDI                             ; 0045c343
    POP EBX                             ; 0045c344
    RET                                 ; 0045c345

