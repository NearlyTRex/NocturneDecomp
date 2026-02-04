; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_boneguy_cpp_CBoneGuy_renderTransparent_FUN_0041d1b0(CBoneGuy *this_ptr)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x20]:1  local_20
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonRenderer g_CDemonRendererInstance
;   CDemonSet g_CDemonSetInstance
;   undefined4 DAT_0326ef00
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_charactr.cpp_CCharacter_FUN_00429aa0
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
;   engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041d1b0
        ;   Label: core_boneguy.cpp_CBoneGuy_renderTransparent_FUN_0041d1b0
    PUSH EBP                            ; 0041d1b1
    SUB ESP,0x18                        ; 0041d1b2
    MOV EBX,dword ptr [ESP + 0x24]      ; 0041d1b5
    CMP dword ptr [EBX + 0x240c],0x0    ; 0041d1b9
    JZ 0x0041d1ca                       ; 0041d1c0
        ;   XREF to: 0041d1ca (CONDITIONAL_JUMP)  ; LAB_0041d1ca
    XOR EAX,EAX                         ; 0041d1c2
    ADD ESP,0x18                        ; 0041d1c4
    POP EBP                             ; 0041d1c7
    POP EBX                             ; 0041d1c8
    RET                                 ; 0041d1c9
    PUSH ESI                            ; 0041d1ca
        ;   Label: LAB_0041d1ca
    PUSH EBX                            ; 0041d1cb
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 0041d1cc
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 0041d1d1
    LEA EAX,[ESP + 0x4]                 ; 0041d1d4
    PUSH EAX                            ; 0041d1d8
    MOV EDX,dword ptr [EBX + 0x154]     ; 0041d1d9
    PUSH EBX                            ; 0041d1df
    CALL dword ptr [EDX + 0x14]         ; 0041d1e0
    ADD ESP,0x8                         ; 0041d1e3
    PUSH EAX                            ; 0041d1e6
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 0041d1e7
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 0041d1ec
    MOV ESI,EAX                         ; 0041d1ef
    TEST EAX,EAX                        ; 0041d1f1
    JZ 0x0041d252                       ; 0041d1f3
        ;   XREF to: 0041d252 (CONDITIONAL_JUMP)  ; LAB_0041d252
    PUSH EDI                            ; 0041d1f5
    PUSH 0x0                            ; 0041d1f6
    MOV ECX,dword ptr [0x006703ec]      ; 0041d1f8 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH ECX                            ; 0041d1fe | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0 ; 0041d1ff
        ;   XREF to: 0048d6c0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0(CDemonRenderer * this_ptr, int enable_advanced_mode)
    ADD ESP,0x8                         ; 0041d204
    PUSH 0xffff                         ; 0041d207
    MOV EDI,dword ptr [0x006703ec]      ; 0041d20c | g_CDemonRendererPtr2
    MOV EAX,[0x006810c8]                ; 0041d212 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EDI                            ; 0041d217 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x15ac88],0x1  ; 0041d218 | DAT_0326ef00
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 0041d222
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0041d227
    PUSH EBX                            ; 0041d22a
    CALL core_charactr.cpp_CCharacter_FUN_00429aa0 ; 0041d22b
        ;   XREF to: 00429aa0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_00429aa0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0041d230
    MOV EBP,dword ptr [0x006703ec]      ; 0041d233 | g_CDemonRendererPtr2
    MOV EAX,[0x006810c8]                ; 0041d239 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EBP                            ; 0041d23e | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x15ac88],0x0  ; 0041d23f | DAT_0326ef00
    CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80 ; 0041d249
        ;   XREF to: 0048da80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0041d24e
    POP EDI                             ; 0041d251
    PUSH EBX                            ; 0041d252
        ;   Label: LAB_0041d252
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 0041d253
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0041d258
    MOV EAX,ESI                         ; 0041d25b
    POP ESI                             ; 0041d25d
    ADD ESP,0x18                        ; 0041d25e
    POP EBP                             ; 0041d261
    POP EBX                             ; 0041d262
    RET                                 ; 0041d263

