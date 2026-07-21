; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_tbplayer_cpp_CBassPlayer_setup_FUN_00543180(int param_1)
;
;
; Referenced Globals:
;   string s_Bip01_L_Hand_005964a0
;   string s_Bip01_R_Hand_005964ad
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0
;   FUN_004ee9e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00543180
        ;   Label: core_tbplayer.cpp_CBassPlayer_setup_FUN_00543180
    PUSH ESI                            ; 00543181
    MOV EBX,dword ptr [ESP + 0xc]       ; 00543182
    PUSH EBX                            ; 00543186
    CALL FUN_004ee9e0                   ; 00543187
        ;   XREF to: 004ee9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ee9e0()
    ADD ESP,0x4                         ; 0054318c
    LEA EAX,[EBX + 0x150]               ; 0054318f
    PUSH EAX                            ; 00543195
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 00543196
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0()
    ADD ESP,0x4                         ; 0054319b
    PUSH 0x1                            ; 0054319e
    PUSH 0x5964a0                       ; 005431a0 | = "Bip01 L Hand"
    PUSH EAX                            ; 005431a5
    MOV ESI,EAX                         ; 005431a6
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 005431a8
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 005431ad
    PUSH 0x1                            ; 005431b0
    PUSH 0x5964ad                       ; 005431b2 | = "Bip01 R Hand"
    PUSH ESI                            ; 005431b7
    MOV dword ptr [EBX + 0x1f570],EAX   ; 005431b8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 005431be
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    MOV dword ptr [EBX + 0x24a8],0x0    ; 005431c3
    MOV dword ptr [EBX + 0x1f574],EAX   ; 005431cd
    MOV EAX,dword ptr [EBX + 0x1f570]   ; 005431d3
    ADD ESP,0xc                         ; 005431d9
    MOV dword ptr [EBX + 0x24a4],EAX    ; 005431dc
    POP ESI                             ; 005431e2
    POP EBX                             ; 005431e3
    RET                                 ; 005431e4

