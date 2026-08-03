; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_marquee_cpp_CMarquee_renderOpaque_FUN_004cc3d0(CMarquee *this_ptr)
;
; Parameters:
; CMarquee *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x1c]:1  local_1c
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cc3d0
        ;   Label: core_marquee.cpp_CMarquee_renderOpaque_FUN_004cc3d0
    SUB ESP,0x18                        ; 004cc3d1
    MOV EBX,dword ptr [ESP + 0x20]      ; 004cc3d4
    MOV EDX,dword ptr [0x005ae704]      ; 004cc3d8 | DAT_005ae704
    PUSH EDX                            ; 004cc3de | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 004cc3df
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004cc3e4
    TEST EAX,EAX                        ; 004cc3e7
    JZ 0x004cc3f2                       ; 004cc3e9
        ;   XREF to: 004cc3f2 (CONDITIONAL_JUMP)  ; LAB_004cc3f2
    XOR EAX,EAX                         ; 004cc3eb
    ADD ESP,0x18                        ; 004cc3ed
    POP EBX                             ; 004cc3f0
    RET                                 ; 004cc3f1
    PUSH EBX                            ; 004cc3f2
        ;   Label: LAB_004cc3f2
    MOV dword ptr [EBX + 0x194],EAX     ; 004cc3f3
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 004cc3f9
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor * actor)
    ADD ESP,0x4                         ; 004cc3fe
    PUSH 0x0                            ; 004cc401
    LEA EDX,[ESP + 0x4]                 ; 004cc403
    PUSH EDX                            ; 004cc407
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004cc408
    PUSH EBX                            ; 004cc40e
    CALL dword ptr [EAX + 0x14]         ; 004cc40f
    ADD ESP,0x8                         ; 004cc412
    PUSH EAX                            ; 004cc415
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 004cc416
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 004cc41b
    PUSH EBX                            ; 004cc41e
    MOV dword ptr [EBX + 0x194],EAX     ; 004cc41f
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 004cc425
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004cc42a
    MOV EAX,dword ptr [EBX + 0x194]     ; 004cc42d
    ADD ESP,0x18                        ; 004cc433
    POP EBX                             ; 004cc436
    RET                                 ; 004cc437

