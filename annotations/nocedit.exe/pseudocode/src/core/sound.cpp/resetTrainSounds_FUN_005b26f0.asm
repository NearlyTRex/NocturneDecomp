; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_resetTrainSounds_FUN_005b26f0(void)
;
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 g_CDemonSetInstance.active_fog.scroll.x
;   undefined4 g_CDemonSetInstance.active_fog.scroll.y
;   undefined4 g_CDemonSetInstance.active_fog.scroll.z
;   CVector3f g_TrainVelocityVector
;   undefined4 g_TrainVelocityVector.y
;   undefined4 g_TrainVelocityVector.z
;   int g_TrainLastCameraIndex
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 005b26f0
        ;   Label: core_sound.cpp_resetTrainSounds_FUN_005b26f0
    MOV EAX,[0x006810c8]                ; 005b26f3 | g_CDemonSetPtr
    FLD float ptr [EAX + 0x15ac60]      ; 005b26f8 | g_CDemonSetInstance.active_fog.scroll.x
    FCHS                                ; 005b26fe
    FSTP float ptr [ESP]                ; 005b2700
    FLD float ptr [EAX + 0x15ac64]      ; 005b2703 | g_CDemonSetInstance.active_fog.scroll.y
    FCHS                                ; 005b2709
    FSTP float ptr [ESP + 0x4]          ; 005b270b
    FLD float ptr [EAX + 0x15ac68]      ; 005b270f | g_CDemonSetInstance.active_fog.scroll.z
    FCHS                                ; 005b2715
    MOV EAX,ESP                         ; 005b2717
    FSTP float ptr [ESP + 0x8]          ; 005b2719
    CMP EAX,0x3f6b85c                   ; 005b271d | g_TrainVelocityVector
    JNZ 0x005b2732                      ; 005b2722
        ;   XREF to: 005b2732 (CONDITIONAL_JUMP)  ; LAB_005b2732
    MOV dword ptr [0x03f6b86c],0xffffffff ; 005b2724 | g_TrainLastCameraIndex
    ADD ESP,0xc                         ; 005b272e
    RET                                 ; 005b2731
    MOV EAX,dword ptr [ESP]             ; 005b2732
        ;   Label: LAB_005b2732
    MOV [0x03f6b85c],EAX                ; 005b2735 | g_TrainVelocityVector
    MOV EAX,dword ptr [ESP + 0x4]       ; 005b273a
    MOV [0x03f6b860],EAX                ; 005b273e | g_TrainVelocityVector.y
    MOV EAX,dword ptr [ESP + 0x8]       ; 005b2743
    MOV [0x03f6b864],EAX                ; 005b2747 | g_TrainVelocityVector.z
    MOV dword ptr [0x03f6b86c],0xffffffff ; 005b274c | g_TrainLastCameraIndex
    ADD ESP,0xc                         ; 005b2756
    RET                                 ; 005b2759

