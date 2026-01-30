; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float __cdecl core_marquee_cpp_FUN_0050be50(void)
;
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050be50
        ;   Label: core_marquee.cpp_FUN_0050be50
    SUB ESP,0x18                        ; 0050be51
    MOV EBX,dword ptr [ESP + 0x20]      ; 0050be54
    MOV EDX,dword ptr [0x006703ec]      ; 0050be58 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 0050be5e | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 0050be5f
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0050be64
    TEST EAX,EAX                        ; 0050be67
    JZ 0x0050be72                       ; 0050be69
        ;   XREF to: 0050be72 (CONDITIONAL_JUMP)  ; LAB_0050be72
    XOR EAX,EAX                         ; 0050be6b
    ADD ESP,0x18                        ; 0050be6d
    POP EBX                             ; 0050be70
    RET                                 ; 0050be71
    PUSH EBX                            ; 0050be72
        ;   Label: LAB_0050be72
    MOV dword ptr [EBX + 0x19c],EAX     ; 0050be73
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 0050be79
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 0050be7e
    MOV EDX,ESP                         ; 0050be81
    PUSH EDX                            ; 0050be83
    MOV EAX,dword ptr [EBX + 0x154]     ; 0050be84
    PUSH EBX                            ; 0050be8a
    CALL dword ptr [EAX + 0x14]         ; 0050be8b
    ADD ESP,0x8                         ; 0050be8e
    PUSH EAX                            ; 0050be91
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 0050be92
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 0050be97
    PUSH EBX                            ; 0050be9a
    MOV dword ptr [EBX + 0x19c],EAX     ; 0050be9b
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 0050bea1
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0050bea6
    MOV EAX,dword ptr [EBX + 0x19c]     ; 0050bea9
    ADD ESP,0x18                        ; 0050beaf
    POP EBX                             ; 0050beb2
    RET                                 ; 0050beb3

