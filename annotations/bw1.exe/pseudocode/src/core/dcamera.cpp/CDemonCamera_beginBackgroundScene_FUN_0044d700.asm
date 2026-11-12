; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_0044d700(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0 at 0054f746
;   core_set.cpp_FUN_00550580 at 005509d9
;
; Referenced Globals:
;   TerminatedCString s_core_dcamera_cpp_005d7645
;   TerminatedCString s_CDemonCamera_beginBackgr_005d7659
;   undefined4 DAT_00612560
;   undefined4 DAT_0061b49c
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01482658
;   undefined4 DAT_0148265c
;   undefined4 DAT_01482660
;   undefined4 DAT_01482664
;   undefined4 DAT_01482668
;   undefined4 DAT_01483924
;   undefined4 DAT_01483928
;   undefined4 DAT_0148392c
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01c4354c
;   ... and 11 more
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   engine_drender.cpp_CDemonRenderer_getCameraAndViewportState_FUN_004851a0
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0
;   engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_00483560
;   engine_drender.cpp_FUN_004839b0
;   engine_drender.cpp_FUN_00483c10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044d700
        ;   Label: core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0044d700
    PUSH ESI                            ; 0044d701
    PUSH EDI                            ; 0044d702
    PUSH EBP                            ; 0044d703
    MOV EBX,dword ptr [ESP + 0x14]      ; 0044d704
    CMP dword ptr [EBX + 0x11e4],0x0    ; 0044d708
    JZ 0x0044d88f                       ; 0044d70f
        ;   XREF to: 0044d88f (CONDITIONAL_JUMP)  ; LAB_0044d88f
    MOV EDI,dword ptr [0x01482658]      ; 0044d715 | DAT_01482658
        ;   Label: LAB_0044d715
    INC EDI                             ; 0044d71b
    MOV dword ptr [0x01482658],EDI      ; 0044d71c | DAT_01482658
    CMP EDI,0x1                         ; 0044d722
    JNZ 0x0044d88a                      ; 0044d725
        ;   XREF to: 0044d88a (CONDITIONAL_JUMP)  ; LAB_0044d88a
    MOV ESI,0x1c4354c                   ; 0044d72b
    MOV EDI,0x1482664                   ; 0044d730
    MOV EDX,0x8                         ; 0044d735
    MOV EAX,[0x0061b4a0]                ; 0044d73a | DAT_0061b4a0
    MOV ECX,dword ptr [0x0061b49c]      ; 0044d73f | DAT_0061b49c
    MOV [0x0148265c],EAX                ; 0044d745 | DAT_0148265c
    MOV EAX,[0x01c50948]                ; 0044d74a | DAT_01c50948
    SHL ECX,0x2                         ; 0044d74f
    MOV [0x01482660],EAX                ; 0044d752 | DAT_01482660
    PUSH EDI                            ; 0044d757 | DAT_01482664
    MOV EAX,ECX                         ; 0044d758
    SHR ECX,0x2                         ; 0044d75a
    MOVSD.REP ES:EDI,ESI                ; 0044d75d | DAT_01c4354c | DAT_01482664 | DAT_01c43550
    MOV CL,AL                           ; 0044d75f
    AND CL,0x3                          ; 0044d761
    MOVSB.REP ES:EDI,ESI                ; 0044d764 | DAT_01c43550 | DAT_01482668
    POP EDI                             ; 0044d766
    MOV ESI,0x20                        ; 0044d767
    MOV EAX,[0x01c4e9d4]                ; 0044d76c | DAT_01c4e9d4
    MOV EBP,dword ptr [EBX + 0x148]     ; 0044d771
    XOR ECX,ECX                         ; 0044d777
    MOV [0x01483924],EAX                ; 0044d779 | DAT_01483924
    MOV dword ptr [0x0061b4a0],ESI      ; 0044d77e | DAT_0061b4a0
    MOV EAX,[0x01c4e9e0]                ; 0044d784 | DAT_01c4e9e0
    MOV dword ptr [0x01c50948],ECX      ; 0044d789 | DAT_01c50948
    MOV [0x01483928],EAX                ; 0044d78f | DAT_01483928
    MOV EAX,[0x01c4e9ec]                ; 0044d794 | DAT_01c4e9ec
    MOV dword ptr [0x01c4e9e0],EDX      ; 0044d799 | DAT_01c4e9e0
    MOV [0x0148392c],EAX                ; 0044d79f | DAT_0148392c
    MOV EAX,0x10                        ; 0044d7a4
    MOV dword ptr [0x01c4e9ec],ECX      ; 0044d7a9 | DAT_01c4e9ec
    MOV [0x01c4e9d4],EAX                ; 0044d7af | DAT_01c4e9d4
    XOR EAX,EAX                         ; 0044d7b4
    TEST EBP,EBP                        ; 0044d7b6
    JLE 0x0044d7f0                      ; 0044d7b8
        ;   XREF to: 0044d7f0 (CONDITIONAL_JUMP)  ; LAB_0044d7f0
    XOR EDX,EDX                         ; 0044d7ba
    MOV ECX,dword ptr [EBX + 0x144]     ; 0044d7bc
        ;   Label: LAB_0044d7bc
    IMUL ECX,EAX                        ; 0044d7c2
    LEA ESI,[ECX*0x4 + 0x0]             ; 0044d7c5
    MOV ECX,dword ptr [EBX + 0x158]     ; 0044d7cc
    ADD ECX,ESI                         ; 0044d7d2
    MOV dword ptr [EDX + 0x1c4354c],ECX ; 0044d7d4 | DAT_01c4354c | DAT_01c43550
    INC EAX                             ; 0044d7da
    MOV ECX,dword ptr [EBX + 0x148]     ; 0044d7db
    ADD EDX,0x4                         ; 0044d7e1
    CMP EAX,ECX                         ; 0044d7e4
    JL 0x0044d7bc                       ; 0044d7e6
        ;   XREF to: 0044d7bc (CONDITIONAL_JUMP)  ; LAB_0044d7bc
    LEA EAX,[EAX]                       ; 0044d7e8
    MOV EDX,EDX                         ; 0044d7ee
    MOV EAX,dword ptr [EBX + 0x148]     ; 0044d7f0
        ;   Label: LAB_0044d7f0
    DEC EAX                             ; 0044d7f6
    PUSH EAX                            ; 0044d7f7
    MOV EAX,dword ptr [EBX + 0x144]     ; 0044d7f8
    DEC EAX                             ; 0044d7fe
    PUSH EAX                            ; 0044d7ff
    PUSH 0x0                            ; 0044d800
    PUSH 0x0                            ; 0044d802
    MOV ESI,dword ptr [0x00612560]      ; 0044d804 | DAT_00612560
    PUSH ESI                            ; 0044d80a | DAT_01bc120c
    CALL engine_drender.cpp_FUN_00483c10 ; 0044d80b
        ;   XREF to: 00483c10 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_00483c10()
    MOV EAX,[0x01c4eff8]                ; 0044d810 | DAT_01c4eff8
    MOV EDI,dword ptr [0x00612560]      ; 0044d815 | DAT_00612560
    MOV dword ptr [EBX + 0x1c0],EAX     ; 0044d81b
    MOV EAX,[0x01c4effc]                ; 0044d821 | DAT_01c4effc
    ADD ESP,0x14                        ; 0044d826
    MOV dword ptr [EBX + 0x1c4],EAX     ; 0044d829
    MOV EAX,[0x01c4f000]                ; 0044d82f | DAT_01c4f000
    PUSH 0x1483940                      ; 0044d834
    MOV dword ptr [EBX + 0x1c8],EAX     ; 0044d839
    MOV EAX,[0x01c4f004]                ; 0044d83f | DAT_01c4f004
    PUSH EDI                            ; 0044d844 | DAT_01bc120c
    MOV dword ptr [EBX + 0x1cc],EAX     ; 0044d845
    CALL engine_drender.cpp_CDemonRenderer_getCameraAndViewportState_FUN_004851a0 ; 0044d84b
        ;   XREF to: 004851a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_getCameraAndViewportState_FUN_004851a0(CDemonRenderer * this_ptr, SCameraViewportState * output_state)
    ADD ESP,0x8                         ; 0044d850
    LEA EAX,[EBX + 0x4]                 ; 0044d853
    PUSH EAX                            ; 0044d856
    MOV EBP,dword ptr [0x00612560]      ; 0044d857 | DAT_00612560
    PUSH EBP                            ; 0044d85d | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0 ; 0044d85e
        ;   XREF to: 004834b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    ADD ESP,0x8                         ; 0044d863
    MOV EAX,[0x00612560]                ; 0044d866 | DAT_00612560
    PUSH dword ptr [EBX + 0x38]         ; 0044d86b
    PUSH EAX                            ; 0044d86e | DAT_01bc120c
    CALL engine_drender.cpp_FUN_004839b0 ; 0044d86f
        ;   XREF to: 004839b0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_004839b0()
    ADD ESP,0x8                         ; 0044d874
    ADD EBX,0x10                        ; 0044d877
    PUSH EBX                            ; 0044d87a
    MOV EDX,dword ptr [0x00612560]      ; 0044d87b | DAT_00612560
    PUSH EDX                            ; 0044d881 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_00483560 ; 0044d882
        ;   XREF to: 00483560 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_00483560(CDemonRenderer * this_ptr, CMatrix3x3f * transform_matrix)
    ADD ESP,0x8                         ; 0044d887
    POP EBP                             ; 0044d88a
        ;   Label: LAB_0044d88a
    POP EDI                             ; 0044d88b
    POP ESI                             ; 0044d88c
    POP EBX                             ; 0044d88d
    RET                                 ; 0044d88e
    MOV ECX,0x5d7645                    ; 0044d88f | = "..\\core\\dcamera.cpp"
        ;   Label: LAB_0044d88f
    MOV ESI,0x436                       ; 0044d894
    PUSH 0x5d7659                       ; 0044d899 | = "CDemonCamera::beginBackgroundScene - ..."
    MOV dword ptr [0x01d1d400],ECX      ; 0044d89e | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0044d8a4 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0044d8aa
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0044d8af
    JMP 0x0044d715                      ; 0044d8b2
        ;   XREF to: 0044d715 (UNCONDITIONAL_JUMP)  ; LAB_0044d715

