; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CVector3f * core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0(CBoundingBox3D * this_ptr, CVector3f * out_point, uint corner_index)
;
; Parameters:
; CBoundingBox3D * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_point
; uint             Stack[0xc]:4   corner_index
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[14]:
;   core_actor.cpp_CDemonActor_FUN_0040dec0 at 0040df32
;   core_actor.cpp_CDemonActor_getWorldBoundingBox_FUN_00409270 at 004092b4
;   core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940 at 0040d9a3
;   core_actor.cpp_drawBoundingBox_FUN_0040d470 at 0040d49a
;   core_box.cpp_CBoundingBox3D_isVisibleWithCamera_FUN_00420680 at 004206a5
;   core_box.cpp_CBoundingBox3D_render_FUN_004210b0 at 004210d6
;   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 at 0056b234
;   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0 at 00571a45
;   core_setcolid.cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140 at 00573183
;   core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0 at 005752bb
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004202b0
        ;   Label: core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
    SUB ESP,0xc                         ; 004202b1
    MOV EAX,dword ptr [ESP + 0x14]      ; 004202b4
    MOV EDX,dword ptr [ESP + 0x18]      ; 004202b8
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004202bc
    TEST CL,0x1                         ; 004202c0
    JNZ 0x004202fc                      ; 004202c3
        ;   XREF to: 004202fc (CONDITIONAL_JUMP)  ; LAB_004202fc
    MOV EBX,dword ptr [EAX]             ; 004202c5
    MOV dword ptr [ESP + 0x8],EBX       ; 004202c7
        ;   Label: LAB_004202c7
    MOV EBX,dword ptr [ESP + 0x8]       ; 004202cb
    MOV dword ptr [EDX],EBX             ; 004202cf
    TEST CL,0x2                         ; 004202d1
    JZ 0x00420301                       ; 004202d4
        ;   XREF to: 00420301 (CONDITIONAL_JUMP)  ; LAB_00420301
    MOV EBX,dword ptr [EAX + 0x10]      ; 004202d6
    MOV dword ptr [ESP + 0x4],EBX       ; 004202d9
        ;   Label: LAB_004202d9
    MOV EBX,dword ptr [ESP + 0x4]       ; 004202dd
    MOV dword ptr [EDX + 0x4],EBX       ; 004202e1
    TEST CL,0x4                         ; 004202e4
    JZ 0x00420306                       ; 004202e7
        ;   XREF to: 00420306 (CONDITIONAL_JUMP)  ; LAB_00420306
    MOV EAX,dword ptr [EAX + 0x14]      ; 004202e9
    MOV dword ptr [ESP],EAX             ; 004202ec
    MOV EAX,dword ptr [ESP]             ; 004202ef
    MOV dword ptr [EDX + 0x8],EAX       ; 004202f2
    MOV EAX,EDX                         ; 004202f5
    ADD ESP,0xc                         ; 004202f7
    POP EBX                             ; 004202fa
    RET                                 ; 004202fb
    MOV EBX,dword ptr [EAX + 0xc]       ; 004202fc
        ;   Label: LAB_004202fc
    JMP 0x004202c7                      ; 004202ff
        ;   XREF to: 004202c7 (UNCONDITIONAL_JUMP)  ; LAB_004202c7
    MOV EBX,dword ptr [EAX + 0x4]       ; 00420301
        ;   Label: LAB_00420301
    JMP 0x004202d9                      ; 00420304
        ;   XREF to: 004202d9 (UNCONDITIONAL_JUMP)  ; LAB_004202d9
    MOV EAX,dword ptr [EAX + 0x8]       ; 00420306
        ;   Label: LAB_00420306
    MOV dword ptr [ESP],EAX             ; 00420309
    MOV EAX,dword ptr [ESP]             ; 0042030c
    MOV dword ptr [EDX + 0x8],EAX       ; 0042030f
    MOV EAX,EDX                         ; 00420312
    ADD ESP,0xc                         ; 00420314
    POP EBX                             ; 00420317
    RET                                 ; 00420318

