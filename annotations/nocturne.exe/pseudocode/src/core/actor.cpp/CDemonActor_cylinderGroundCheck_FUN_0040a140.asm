; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_0040a140(CDemonActor *this_ptr,float radius,CVector3f *out_normal)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   radius
; CVector3f *      Stack[0xc]:4   out_normal
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   undefined4 g_CPlatformActorType_01e42894.name_hash
;   CDemonSet g_CDemonSet_01e57284
;   undefined4 g_CDemonSet_01e57284.collision_normal.x
;   undefined4 g_CDemonSet_01e57284.collision_normal.y
;   undefined4 g_CDemonSet_01e57284.collision_normal.z
;   undefined4 g_CDemonSet_01e57284.collision_actor
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_setcolid.cpp_CDemonSet_FUN_005117f0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00511780
;   core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00511590
;   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_0050ec80
;   core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_005113e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040a140
        ;   Label: core_actor.cpp_CDemonActor_cylinderGroundCheck_FUN_0040a140
    PUSH ESI                            ; 0040a141
    PUSH EDI                            ; 0040a142
    PUSH EBP                            ; 0040a143
    SUB ESP,0x8                         ; 0040a144
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0040a147
    MOV EBX,dword ptr [ESP + 0x24]      ; 0040a14b
    MOV EDX,dword ptr [0x005be368]      ; 0040a14f | g_CDemonSet_PTR_005be368
    PUSH EDX                            ; 0040a155 | g_CDemonSet_01e57284
    CALL core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_005113e0 ; 0040a156
        ;   XREF to: 005113e0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_005113e0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0040a15b
    PUSH ESI                            ; 0040a15e
    MOV ECX,dword ptr [0x005be368]      ; 0040a15f | g_CDemonSet_PTR_005be368
    PUSH ECX                            ; 0040a165 | g_CDemonSet_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 0040a166
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00511780(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0040a16b
    MOV EDI,dword ptr [0x005be368]      ; 0040a16e | g_CDemonSet_PTR_005be368
    PUSH EDI                            ; 0040a174 | g_CDemonSet_01e57284
    CALL core_setcolid.cpp_CDemonSet_FUN_005117f0 ; 0040a175
        ;   XREF to: 005117f0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_FUN_005117f0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0040a17a
    LEA EAX,[ESI + 0x20]                ; 0040a17d
    PUSH dword ptr [ESP + 0x20]         ; 0040a180
    PUSH EAX                            ; 0040a184
    MOV EBP,dword ptr [0x005be368]      ; 0040a185 | g_CDemonSet_PTR_005be368
    PUSH EBP                            ; 0040a18b | g_CDemonSet_01e57284
    CALL core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_0050ec80 ; 0040a18c
        ;   XREF to: 0050ec80 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_0050ec80(CDemonSet * this_ptr, CVector3f * position, float radius)
    MOV dword ptr [ESP + 0x10],EAX      ; 0040a191
    FLD float ptr [ESP + 0x10]          ; 0040a195
    ADD ESP,0xc                         ; 0040a199
    MOV EAX,[0x01e428cc]                ; 0040a19c | g_CPlatformActorType_01e42894.name_hash
    PUSH EAX                            ; 0040a1a1
    MOV EAX,[0x005be368]                ; 0040a1a2 | g_CDemonSet_PTR_005be368
    MOV EDX,dword ptr [EAX + 0x14cd5c]  ; 0040a1a7 | g_CDemonSet_01e57284.collision_actor
    PUSH EDX                            ; 0040a1ad
    FSTP float ptr [ESP + 0x8]          ; 0040a1ae
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0040a1b2
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0040a1b7
    MOV dword ptr [ESI + 0xdc],EAX      ; 0040a1ba
    TEST EBX,EBX                        ; 0040a1c0
    JZ 0x0040a1e2                       ; 0040a1c2
        ;   XREF to: 0040a1e2 (CONDITIONAL_JUMP)  ; LAB_0040a1e2
    MOV EAX,[0x005be368]                ; 0040a1c4 | g_CDemonSet_PTR_005be368
    ADD EAX,0x14cd40                    ; 0040a1c9
    CMP EBX,EAX                         ; 0040a1ce
    JZ 0x0040a1e2                       ; 0040a1d0
        ;   XREF to: 0040a1e2 (CONDITIONAL_JUMP)  ; LAB_0040a1e2
    MOV EDX,dword ptr [EAX]             ; 0040a1d2 | g_CDemonSet_01e57284.collision_normal.x
    MOV dword ptr [EBX],EDX             ; 0040a1d4
    MOV EDX,dword ptr [EAX + 0x4]       ; 0040a1d6 | g_CDemonSet_01e57284.collision_normal.y
    MOV dword ptr [EBX + 0x4],EDX       ; 0040a1d9
    MOV EDX,dword ptr [EAX + 0x8]       ; 0040a1dc | g_CDemonSet_01e57284.collision_normal.z
    MOV dword ptr [EBX + 0x8],EDX       ; 0040a1df
    MOV ECX,dword ptr [0x005be368]      ; 0040a1e2 | g_CDemonSet_PTR_005be368
        ;   Label: LAB_0040a1e2
    PUSH ECX                            ; 0040a1e8 | g_CDemonSet_01e57284
    CALL core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00511590 ; 0040a1e9
        ;   XREF to: 00511590 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00511590(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0040a1ee
    MOV EAX,dword ptr [ESP]             ; 0040a1f1
    ADD ESP,0x8                         ; 0040a1f4
    POP EBP                             ; 0040a1f7
    POP EDI                             ; 0040a1f8
    POP ESI                             ; 0040a1f9
    POP EBX                             ; 0040a1fa
    RET                                 ; 0040a1fb

