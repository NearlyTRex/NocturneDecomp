; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_inv_cpp_FUN_004f60c0(CDemonActor *param_1)
;
;
; XREF[3]:
;   core_inv.cpp_CInventory_renderItemModel_FUN_004f90d0 at 004f921e
;   core_inv.cpp_getItemDescription_FUN_004f6350 at 004f6361
;   core_inv.cpp_getItemDisplayName_FUN_004f62e0 at 004f62f1
;
; Referenced Globals:
;   TerminatedCString s_CWeapon_005e5f10
;   TerminatedCString s_CAmmo_005e5f18
;   TerminatedCString s_CKeyActor_005e5f1e
;   TerminatedCString s_CBoxActor_005e5f28
;   TerminatedCString s_CHealthItem_005e5f32
;   TerminatedCString s_CGasMask_005e5f3e
;   TerminatedCString s_CGoggles_005e5f47
;   TerminatedCString s_CFilmReel_005e5f50
;   TerminatedCString s_CTrap_005e5f5a
;   TerminatedCString s_CBattery_005e5f60
;   TerminatedCString s_core_inv_cpp_005e5f69
;   TerminatedCString s_getModel_Can_t_classify_005e5f79
;   undefined4 g_CAmmoClassInfo.name_hash
;   undefined4 g_CBatteryClassInfo.name_hash
;   undefined4 g_CBoxActorClassInfo.name_hash
;   ... and 9 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_isOfClass_FUN_0040c550
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f60c0
        ;   Label: core_inv.cpp_FUN_004f60c0
    PUSH ESI                            ; 004f60c1
    PUSH EDI                            ; 004f60c2
    PUSH EBP                            ; 004f60c3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004f60c4
    PUSH 0x5e5f10                       ; 004f60c8 | = "CWeapon"
    PUSH EBX                            ; 004f60cd
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 004f60ce
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004f60d3
    TEST EAX,EAX                        ; 004f60d6
    JNZ 0x004f61be                      ; 004f60d8
        ;   XREF to: 004f61be (CONDITIONAL_JUMP)  ; LAB_004f61be
    PUSH 0x5e5f18                       ; 004f60de | = "CAmmo"
    PUSH EBX                            ; 004f60e3
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 004f60e4
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004f60e9
    TEST EAX,EAX                        ; 004f60ec
    JNZ 0x004f61d7                      ; 004f60ee
        ;   XREF to: 004f61d7 (CONDITIONAL_JUMP)  ; LAB_004f61d7
    PUSH 0x5e5f1e                       ; 004f60f4 | = "CKeyActor"
    PUSH EBX                            ; 004f60f9
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 004f60fa
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004f60ff
    TEST EAX,EAX                        ; 004f6102
    JNZ 0x004f61f1                      ; 004f6104
        ;   XREF to: 004f61f1 (CONDITIONAL_JUMP)  ; LAB_004f61f1
    PUSH 0x5e5f28                       ; 004f610a | = "CBoxActor"
    PUSH EBX                            ; 004f610f
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 004f6110
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004f6115
    TEST EAX,EAX                        ; 004f6118
    JNZ 0x004f620b                      ; 004f611a
        ;   XREF to: 004f620b (CONDITIONAL_JUMP)  ; LAB_004f620b
    PUSH 0x5e5f32                       ; 004f6120 | = "CHealthItem"
    PUSH EBX                            ; 004f6125
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 004f6126
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004f612b
    TEST EAX,EAX                        ; 004f612e
    JNZ 0x004f6225                      ; 004f6130
        ;   XREF to: 004f6225 (CONDITIONAL_JUMP)  ; LAB_004f6225
    PUSH 0x5e5f3e                       ; 004f6136 | = "CGasMask"
    PUSH EBX                            ; 004f613b
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 004f613c
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004f6141
    TEST EAX,EAX                        ; 004f6144
    JNZ 0x004f623f                      ; 004f6146
        ;   XREF to: 004f623f (CONDITIONAL_JUMP)  ; LAB_004f623f
    PUSH 0x5e5f47                       ; 004f614c | = "CGoggles"
    PUSH EBX                            ; 004f6151
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 004f6152
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004f6157
    TEST EAX,EAX                        ; 004f615a
    JNZ 0x004f6259                      ; 004f615c
        ;   XREF to: 004f6259 (CONDITIONAL_JUMP)  ; LAB_004f6259
    PUSH 0x5e5f50                       ; 004f6162 | = "CFilmReel"
    PUSH EBX                            ; 004f6167
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 004f6168
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004f616d
    TEST EAX,EAX                        ; 004f6170
    JNZ 0x004f6272                      ; 004f6172
        ;   XREF to: 004f6272 (CONDITIONAL_JUMP)  ; LAB_004f6272
    PUSH 0x5e5f5a                       ; 004f6178 | = "CTrap"
    PUSH EBX                            ; 004f617d
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 004f617e
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004f6183
    TEST EAX,EAX                        ; 004f6186
    JNZ 0x004f628c                      ; 004f6188
        ;   XREF to: 004f628c (CONDITIONAL_JUMP)  ; LAB_004f628c
    PUSH 0x5e5f60                       ; 004f618e | = "CBattery"
    PUSH EBX                            ; 004f6193
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 004f6194
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004f6199
    TEST EAX,EAX                        ; 004f619c
    JZ 0x004f62a6                       ; 004f619e
        ;   XREF to: 004f62a6 (CONDITIONAL_JUMP)  ; LAB_004f62a6
    MOV ESI,dword ptr [0x007c385c]      ; 004f61a4 | g_CBatteryClassInfo.name_hash
    PUSH ESI                            ; 004f61aa
    PUSH EBX                            ; 004f61ab
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004f61ac
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 004f61b1
    ADD EAX,0x158                       ; 004f61b4
    POP EBP                             ; 004f61b9
    POP EDI                             ; 004f61ba
    POP ESI                             ; 004f61bb
    POP EBX                             ; 004f61bc
    RET                                 ; 004f61bd
    MOV EAX,[0x02c99770]                ; 004f61be | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_004f61be
    PUSH EAX                            ; 004f61c3
    PUSH EBX                            ; 004f61c4
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004f61c5
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 004f61ca
    ADD EAX,0x158                       ; 004f61cd
    POP EBP                             ; 004f61d2
    POP EDI                             ; 004f61d3
    POP ESI                             ; 004f61d4
    POP EBX                             ; 004f61d5
    RET                                 ; 004f61d6
    MOV EBP,dword ptr [0x007c33a4]      ; 004f61d7 | g_CAmmoClassInfo.name_hash
        ;   Label: LAB_004f61d7
    PUSH EBP                            ; 004f61dd
    PUSH EBX                            ; 004f61de
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004f61df
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 004f61e4
    ADD EAX,0x158                       ; 004f61e7
    POP EBP                             ; 004f61ec
    POP EDI                             ; 004f61ed
    POP ESI                             ; 004f61ee
    POP EBX                             ; 004f61ef
    RET                                 ; 004f61f0
    MOV EDI,dword ptr [0x01d1bc9c]      ; 004f61f1 | g_CKeyActorClassInfo.name_hash
        ;   Label: LAB_004f61f1
    PUSH EDI                            ; 004f61f7
    PUSH EBX                            ; 004f61f8
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004f61f9
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 004f61fe
    ADD EAX,0x158                       ; 004f6201
    POP EBP                             ; 004f6206
    POP EDI                             ; 004f6207
    POP ESI                             ; 004f6208
    POP EBX                             ; 004f6209
    RET                                 ; 004f620a
    MOV ESI,dword ptr [0x007c5094]      ; 004f620b | g_CBoxActorClassInfo.name_hash
        ;   Label: LAB_004f620b
    PUSH ESI                            ; 004f6211
    PUSH EBX                            ; 004f6212
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004f6213
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 004f6218
    ADD EAX,0x158                       ; 004f621b
    POP EBP                             ; 004f6220
    POP EDI                             ; 004f6221
    POP ESI                             ; 004f6222
    POP EBX                             ; 004f6223
    RET                                 ; 004f6224
    MOV ECX,dword ptr [0x01d06a90]      ; 004f6225 | g_CHealthItemClassInfo.name_hash
        ;   Label: LAB_004f6225
    PUSH ECX                            ; 004f622b
    PUSH EBX                            ; 004f622c
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004f622d
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 004f6232
    ADD EAX,0x158                       ; 004f6235
    POP EBP                             ; 004f623a
    POP EDI                             ; 004f623b
    POP ESI                             ; 004f623c
    POP EBX                             ; 004f623d
    RET                                 ; 004f623e
    MOV EDX,dword ptr [0x01cd0d40]      ; 004f623f | g_CGasMaskClassInfo.name_hash
        ;   Label: LAB_004f623f
    PUSH EDX                            ; 004f6245
    PUSH EBX                            ; 004f6246
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004f6247
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 004f624c
    ADD EAX,0x158                       ; 004f624f
    POP EBP                             ; 004f6254
    POP EDI                             ; 004f6255
    POP ESI                             ; 004f6256
    POP EBX                             ; 004f6257
    RET                                 ; 004f6258
    MOV EAX,[0x01cd0e38]                ; 004f6259 | g_CGogglesClassInfo.name_hash
        ;   Label: LAB_004f6259
    PUSH EAX                            ; 004f625e
    PUSH EBX                            ; 004f625f
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004f6260
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 004f6265
    ADD EAX,0x158                       ; 004f6268
    POP EBP                             ; 004f626d
    POP EDI                             ; 004f626e
    POP ESI                             ; 004f626f
    POP EBX                             ; 004f6270
    RET                                 ; 004f6271
    MOV EBP,dword ptr [0x01c57034]      ; 004f6272 | g_CFilmReelClassInfo.name_hash
        ;   Label: LAB_004f6272
    PUSH EBP                            ; 004f6278
    PUSH EBX                            ; 004f6279
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004f627a
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 004f627f
    ADD EAX,0x158                       ; 004f6282
    POP EBP                             ; 004f6287
    POP EDI                             ; 004f6288
    POP ESI                             ; 004f6289
    POP EBX                             ; 004f628a
    RET                                 ; 004f628b
    MOV EDI,dword ptr [0x02c8adcc]      ; 004f628c | g_CTrapClassInfo.name_hash
        ;   Label: LAB_004f628c
    PUSH EDI                            ; 004f6292
    PUSH EBX                            ; 004f6293
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004f6294
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 004f6299
    ADD EAX,0x158                       ; 004f629c
    POP EBP                             ; 004f62a1
    POP EDI                             ; 004f62a2
    POP ESI                             ; 004f62a3
    POP EBX                             ; 004f62a4
    RET                                 ; 004f62a5
    PUSH EBX                            ; 004f62a6
        ;   Label: LAB_004f62a6
    MOV EDX,0x5e5f69                    ; 004f62a7 | = "..\\core\\inv.cpp"
    MOV ECX,0xaf                        ; 004f62ac
    PUSH 0x5e5f79                       ; 004f62b1 | = "getModel - Can't classify : %s"
    MOV dword ptr [0x01d1d400],EDX      ; 004f62b6 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 004f62bc | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004f62c2
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 004f62c7
    XOR EAX,EAX                         ; 004f62ca
    POP EBP                             ; 004f62cc
    POP EDI                             ; 004f62cd
    POP ESI                             ; 004f62ce
    POP EBX                             ; 004f62cf
    RET                                 ; 004f62d0

