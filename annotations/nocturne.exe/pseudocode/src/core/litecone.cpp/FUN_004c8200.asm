; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_litecone_cpp_FUN_004c8200(CDemonActor *param_1)
;
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
;   core_dlight.cpp_renderConeLightGeometry_FUN_00451b70
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c8200
        ;   Label: core_litecone.cpp_FUN_004c8200
    SUB ESP,0x18                        ; 004c8201
    MOV EBX,dword ptr [ESP + 0x20]      ; 004c8204
    CMP dword ptr [EBX + 0x158],0x0     ; 004c8208
    JNZ 0x004c8218                      ; 004c820f
        ;   XREF to: 004c8218 (CONDITIONAL_JUMP)  ; LAB_004c8218
    XOR EAX,EAX                         ; 004c8211
        ;   Label: LAB_004c8211
    ADD ESP,0x18                        ; 004c8213
    POP EBX                             ; 004c8216
    RET                                 ; 004c8217
    MOV ECX,dword ptr [0x005ae704]      ; 004c8218 | DAT_005ae704
        ;   Label: LAB_004c8218
    PUSH ECX                            ; 004c821e | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 004c821f
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004c8224
    TEST EAX,EAX                        ; 004c8227
    JNZ 0x004c8211                      ; 004c8229
        ;   XREF to: 004c8211 (CONDITIONAL_JUMP)  ; LAB_004c8211
    PUSH EDI                            ; 004c822b
    PUSH ESI                            ; 004c822c
    PUSH EBX                            ; 004c822d
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 004c822e
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor * actor)
    ADD ESP,0x4                         ; 004c8233
    PUSH 0x0                            ; 004c8236
    LEA EAX,[ESP + 0xc]                 ; 004c8238
    PUSH EAX                            ; 004c823c
    MOV ESI,dword ptr [EBX + 0x14c]     ; 004c823d
    PUSH EBX                            ; 004c8243
    CALL dword ptr [ESI + 0x14]         ; 004c8244
    ADD ESP,0x8                         ; 004c8247
    PUSH EAX                            ; 004c824a
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 004c824b
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 004c8250
    PUSH EBX                            ; 004c8253
    MOV ESI,EAX                         ; 004c8254
    MOV EDI,EAX                         ; 004c8256
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 004c8258
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004c825d
    TEST ESI,ESI                        ; 004c8260
    JZ 0x004c8280                       ; 004c8262
        ;   XREF to: 004c8280 (CONDITIONAL_JUMP)  ; LAB_004c8280
    PUSH dword ptr [EBX + 0x154]        ; 004c8264
    LEA EAX,[EBX + 0x30]                ; 004c826a
    PUSH dword ptr [EBX + 0x150]        ; 004c826d
    PUSH EAX                            ; 004c8273
    ADD EBX,0x20                        ; 004c8274
    PUSH EBX                            ; 004c8277
    CALL core_dlight.cpp_renderConeLightGeometry_FUN_00451b70 ; 004c8278
        ;   XREF to: 00451b70 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_renderConeLightGeometry_FUN_00451b70(CVector3f * position, CVector3f * rotation, float fov, float falloff)
    ADD ESP,0x10                        ; 004c827d
    MOV EAX,EDI                         ; 004c8280
        ;   Label: LAB_004c8280
    POP ESI                             ; 004c8282
    POP EDI                             ; 004c8283
    ADD ESP,0x18                        ; 004c8284
    POP EBX                             ; 004c8287
    RET                                 ; 004c8288

