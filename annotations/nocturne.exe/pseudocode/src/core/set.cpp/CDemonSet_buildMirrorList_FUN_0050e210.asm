; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_buildMirrorList_FUN_0050e210(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00507c80 at 00507d71
;
; Referenced Globals:
;   TerminatedCString s_core_set_cpp_00590832
;   TerminatedCString s_CDemonSet_buildMirrorLis_00590842
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   undefined4 DAT_01b4d738
;   undefined4 g_CGlassActorType_01c78c40.name_hash
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050e210
        ;   Label: core_set.cpp_CDemonSet_buildMirrorList_FUN_0050e210
    PUSH ESI                            ; 0050e211
    PUSH EDI                            ; 0050e212
    PUSH EBP                            ; 0050e213
    SUB ESP,0x18                        ; 0050e214
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0050e217
    MOV EDX,dword ptr [ESI + 0x14cd6c]  ; 0050e21b
    MOV dword ptr [ESI + 0x15a8cc],0x0  ; 0050e221
    XOR EBP,EBP                         ; 0050e22b
    TEST EDX,EDX                        ; 0050e22d
    JLE 0x0050e2f0                      ; 0050e22f
        ;   XREF to: 0050e2f0 (CONDITIONAL_JUMP)  ; LAB_0050e2f0
    MOV EDI,ESI                         ; 0050e235
    MOV EBX,dword ptr [0x01c78c78]      ; 0050e237 | g_CGlassActorType_01c78c40.name_hash
        ;   Label: LAB_0050e237
    PUSH EBX                            ; 0050e23d
    MOV EAX,dword ptr [EDI + 0x14cd70]  ; 0050e23e
    PUSH EAX                            ; 0050e244
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0050e245
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 0050e24a
    ADD ESP,0x8                         ; 0050e24c
    TEST EAX,EAX                        ; 0050e24f
    JZ 0x0050e2de                       ; 0050e251
        ;   XREF to: 0050e2de (CONDITIONAL_JUMP)  ; LAB_0050e2de
    CMP dword ptr [EAX + 0x1e0],0x0     ; 0050e257
    JZ 0x0050e2de                       ; 0050e25e
        ;   XREF to: 0050e2de (CONDITIONAL_JUMP)  ; LAB_0050e2de
    PUSH EBX                            ; 0050e264
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 0050e265
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor * actor)
    ADD ESP,0x4                         ; 0050e26a
    PUSH 0x0                            ; 0050e26d
    LEA EAX,[ESP + 0x4]                 ; 0050e26f
    PUSH EAX                            ; 0050e273
    MOV EDX,dword ptr [EBX + 0x14c]     ; 0050e274
    PUSH EBX                            ; 0050e27a
    CALL dword ptr [EDX + 0x14]         ; 0050e27b
    ADD ESP,0x8                         ; 0050e27e
    PUSH EAX                            ; 0050e281
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 0050e282
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 0050e287
    TEST EAX,EAX                        ; 0050e28a
    JZ 0x0050e2cf                       ; 0050e28c
        ;   XREF to: 0050e2cf (CONDITIONAL_JUMP)  ; LAB_0050e2cf
    MOV EAX,dword ptr [ESI + 0x15a8cc]  ; 0050e28e
    MOV dword ptr [ESI + EAX*0x4 + 0x15a8d0],EBX ; 0050e294
    MOV EDX,dword ptr [ESI + 0x15a8cc]  ; 0050e29b
    INC EDX                             ; 0050e2a1
    MOV dword ptr [ESI + 0x15a8cc],EDX  ; 0050e2a2
    CMP EDX,0x64                        ; 0050e2a8
    JL 0x0050e2cf                       ; 0050e2ab
        ;   XREF to: 0050e2cf (CONDITIONAL_JUMP)  ; LAB_0050e2cf
    MOV EBX,0x590832                    ; 0050e2ad | = "..\\core\\set.cpp"
    MOV EAX,0x1118                      ; 0050e2b2
    PUSH 0x590842                       ; 0050e2b7 | = "CDemonSet::buildMirrorList - Too many..."
    MOV dword ptr [0x01cc4800],EBX      ; 0050e2bc | g_CurrentFilename
    MOV [0x01cc4804],EAX                ; 0050e2c2 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0050e2c7
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 0050e2cc
    MOV EDX,dword ptr [0x005ae704]      ; 0050e2cf | g_CDemonRenderer_PTR_005ae704
        ;   Label: LAB_0050e2cf
    PUSH EDX                            ; 0050e2d5 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 0050e2d6
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0050e2db
    INC EBP                             ; 0050e2de
        ;   Label: LAB_0050e2de
    MOV ECX,dword ptr [ESI + 0x14cd6c]  ; 0050e2df
    ADD EDI,0x4                         ; 0050e2e5
    CMP EBP,ECX                         ; 0050e2e8
    JL 0x0050e237                       ; 0050e2ea
        ;   XREF to: 0050e237 (CONDITIONAL_JUMP)  ; LAB_0050e237
    ADD ESP,0x18                        ; 0050e2f0
        ;   Label: LAB_0050e2f0
    POP EBP                             ; 0050e2f3
    POP EDI                             ; 0050e2f4
    POP ESI                             ; 0050e2f5
    POP EBX                             ; 0050e2f6
    RET                                 ; 0050e2f7

