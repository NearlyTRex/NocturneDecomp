; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_hostage_cpp_FUN_004ed800(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_npc.cpp_FUN_00531b10
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ed800
        ;   Label: core_hostage.cpp_FUN_004ed800
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ed801
    CMP dword ptr [EBX + 0x1fe8c],0x0   ; 004ed805
    JZ 0x004ed845                       ; 004ed80c
        ;   XREF to: 004ed845 (CONDITIONAL_JUMP)  ; LAB_004ed845
    MOV ECX,dword ptr [0x00612560]      ; 004ed80e | DAT_00612560
    PUSH ECX                            ; 004ed814 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 004ed815
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004ed81a
    TEST EAX,EAX                        ; 004ed81d
    JZ 0x004ed845                       ; 004ed81f
        ;   XREF to: 004ed845 (CONDITIONAL_JUMP)  ; LAB_004ed845
    CMP dword ptr [EBX + 0x1fe6c],0x4   ; 004ed821
    JNZ 0x004ed845                      ; 004ed828
        ;   XREF to: 004ed845 (CONDITIONAL_JUMP)  ; LAB_004ed845
    LEA EAX,[EBX + 0x158]               ; 004ed82a
    PUSH EAX                            ; 004ed830
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 004ed831
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004ed836
    ADD ESP,0x4                         ; 004ed839
    CMP EAX,0xa                         ; 004ed83c
    JNZ 0x004ed845                      ; 004ed83f
        ;   XREF to: 004ed845 (CONDITIONAL_JUMP)  ; LAB_004ed845
    XOR EAX,EAX                         ; 004ed841
    POP EBX                             ; 004ed843
    RET                                 ; 004ed844
    PUSH EBX                            ; 004ed845
        ;   Label: LAB_004ed845
    CALL core_npc.cpp_FUN_00531b10      ; 004ed846
        ;   XREF to: 00531b10 (UNCONDITIONAL_CALL)  ; undefined core_npc.cpp_FUN_00531b10()
    ADD ESP,0x4                         ; 004ed84b
    POP EBX                             ; 004ed84e
    RET                                 ; 004ed84f

