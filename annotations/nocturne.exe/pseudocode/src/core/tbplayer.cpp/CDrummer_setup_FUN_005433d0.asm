; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_tbplayer_cpp_CDrummer_setup_FUN_005433d0(int param_1)
;
;
; Referenced Globals:
;   string s_Bip01_L_Hand_005964c6
;   string s_Bip01_R_Hand_005964d3
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0
;   FUN_004ee9e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005433d0
        ;   Label: core_tbplayer.cpp_CDrummer_setup_FUN_005433d0
    PUSH ESI                            ; 005433d1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005433d2
    PUSH EBX                            ; 005433d6
    CALL FUN_004ee9e0                   ; 005433d7
        ;   XREF to: 004ee9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ee9e0()
    ADD ESP,0x4                         ; 005433dc
    LEA EAX,[EBX + 0x150]               ; 005433df
    PUSH EAX                            ; 005433e5
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 005433e6
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0()
    ADD ESP,0x4                         ; 005433eb
    PUSH 0x1                            ; 005433ee
    PUSH 0x5964c6                       ; 005433f0 | = "Bip01 L Hand"
    PUSH EAX                            ; 005433f5
    MOV ESI,EAX                         ; 005433f6
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 005433f8
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 005433fd
    PUSH 0x1                            ; 00543400
    PUSH 0x5964d3                       ; 00543402 | = "Bip01 R Hand"
    PUSH ESI                            ; 00543407
    MOV dword ptr [EBX + 0x1f570],EAX   ; 00543408
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0054340e
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    MOV dword ptr [EBX + 0x24a8],0x0    ; 00543413
    MOV dword ptr [EBX + 0x24ec],0x0    ; 0054341d
    MOV dword ptr [EBX + 0x1f574],EAX   ; 00543427
    MOV EAX,dword ptr [EBX + 0x1f570]   ; 0054342d
    MOV dword ptr [EBX + 0x24a4],EAX    ; 00543433
    MOV EAX,dword ptr [EBX + 0x1f574]   ; 00543439
    ADD ESP,0xc                         ; 0054343f
    MOV dword ptr [EBX + 0x24e8],EAX    ; 00543442
    POP ESI                             ; 00543448
    POP EBX                             ; 00543449
    RET                                 ; 0054344a

