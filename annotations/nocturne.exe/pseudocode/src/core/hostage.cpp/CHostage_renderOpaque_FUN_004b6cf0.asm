; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_hostage_cpp_CHostage_renderOpaque_FUN_004b6cf0(CCharacter *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_00426440
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b6cf0
        ;   Label: core_hostage.cpp_CHostage_renderOpaque_FUN_004b6cf0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b6cf1
    CMP dword ptr [EBX + 0x1f944],0x0   ; 004b6cf5
    JZ 0x004b6d35                       ; 004b6cfc
        ;   XREF to: 004b6d35 (CONDITIONAL_JUMP)  ; LAB_004b6d35
    MOV ECX,dword ptr [0x005ae704]      ; 004b6cfe | DAT_005ae704
    PUSH ECX                            ; 004b6d04 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 004b6d05
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004b6d0a
    TEST EAX,EAX                        ; 004b6d0d
    JZ 0x004b6d35                       ; 004b6d0f
        ;   XREF to: 004b6d35 (CONDITIONAL_JUMP)  ; LAB_004b6d35
    CMP dword ptr [EBX + 0x1f924],0x4   ; 004b6d11
    JNZ 0x004b6d35                      ; 004b6d18
        ;   XREF to: 004b6d35 (CONDITIONAL_JUMP)  ; LAB_004b6d35
    LEA EAX,[EBX + 0x150]               ; 004b6d1a
    PUSH EAX                            ; 004b6d20
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004b6d21
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004b6d26
    ADD ESP,0x4                         ; 004b6d29
    CMP EAX,0xa                         ; 004b6d2c
    JNZ 0x004b6d35                      ; 004b6d2f
        ;   XREF to: 004b6d35 (CONDITIONAL_JUMP)  ; LAB_004b6d35
    XOR EAX,EAX                         ; 004b6d31
    POP EBX                             ; 004b6d33
    RET                                 ; 004b6d34
    PUSH EBX                            ; 004b6d35
        ;   Label: LAB_004b6d35
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_00426440 ; 004b6d36
        ;   XREF to: 00426440 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_00426440(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004b6d3b
    POP EBX                             ; 004b6d3e
    RET                                 ; 004b6d3f

