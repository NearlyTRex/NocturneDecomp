; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_hostage.cpp_FUN_004f4b40()
;
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f4b40
        ;   Label: core_hostage.cpp_FUN_004f4b40
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f4b41
    CMP dword ptr [EBX + 0x1fadc],0x0   ; 004f4b45
    JZ 0x004f4b85                       ; 004f4b4c
        ;   XREF to: 004f4b85 (CONDITIONAL_JUMP)  ; LAB_004f4b85
    MOV ECX,dword ptr [0x006703ec]      ; 004f4b4e | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH ECX                            ; 004f4b54 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 004f4b55
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004f4b5a
    TEST EAX,EAX                        ; 004f4b5d
    JZ 0x004f4b85                       ; 004f4b5f
        ;   XREF to: 004f4b85 (CONDITIONAL_JUMP)  ; LAB_004f4b85
    CMP dword ptr [EBX + 0x1fabc],0x4   ; 004f4b61
    JNZ 0x004f4b85                      ; 004f4b68
        ;   XREF to: 004f4b85 (CONDITIONAL_JUMP)  ; LAB_004f4b85
    LEA EAX,[EBX + 0x158]               ; 004f4b6a
    PUSH EAX                            ; 004f4b70
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004f4b71
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004f4b76
    ADD ESP,0x4                         ; 004f4b79
    CMP EAX,0xa                         ; 004f4b7c
    JNZ 0x004f4b85                      ; 004f4b7f
        ;   XREF to: 004f4b85 (CONDITIONAL_JUMP)  ; LAB_004f4b85
    XOR EAX,EAX                         ; 004f4b81
    POP EBX                             ; 004f4b83
    RET                                 ; 004f4b84
    PUSH EBX                            ; 004f4b85
        ;   Label: LAB_004f4b85
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0 ; 004f4b86
        ;   XREF to: 0042a2c0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004f4b8b
    POP EBX                             ; 004f4b8e
    RET                                 ; 004f4b8f

