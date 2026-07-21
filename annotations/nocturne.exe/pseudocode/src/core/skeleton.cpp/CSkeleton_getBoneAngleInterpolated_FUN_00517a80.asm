; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * __stack5_esi core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,float param_5 ,undefined4 *param_6)
;
; Local Variables:
; undefined8       Stack[-0x38]:8  local_38
; undefined        Stack[-0x30]:1  local_30
; undefined        Stack[-0x20]:1  local_20
;
; XREF[3]:
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0 at 0051c4d0
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransformsForFrame_FUN_0051e350 at 0051e3bc
;   core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0051b920 at 0051ba40
;
; Called Functions:
;   core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00517a60
;   core_xform.cpp_slerpQuaternion_FUN_0055d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00517a80
        ;   Label: core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80
    PUSH EDI                            ; 00517a81
    PUSH EBP                            ; 00517a82
    MOV EBP,ESP                         ; 00517a83
    SUB ESP,0x28                        ; 00517a85
    AND ESP,0xfffffff8                  ; 00517a88
    MOV EDI,dword ptr [EBP + 0x14]      ; 00517a8b
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00517a8e
    MOV EBX,ESI                         ; 00517a91
    MOV ESI,dword ptr [EBP + 0x10]      ; 00517a93
    FLD float ptr [EBP + 0x20]          ; 00517a96
    FLDZ                                ; 00517a99
    FXCH                                ; 00517a9b
    FSTP double ptr [ESP]               ; 00517a9d
    FCOMP double ptr [ESP]              ; 00517aa0
    FNSTSW AX                           ; 00517aa3
    SAHF                                ; 00517aa5
    JNC 0x00517ad9                      ; 00517aa6
        ;   XREF to: 00517ad9 (CONDITIONAL_JUMP)  ; LAB_00517ad9
    FLD1                                ; 00517aa8
    FCOMP double ptr [ESP]              ; 00517aaa
    FNSTSW AX                           ; 00517aad
    SAHF                                ; 00517aaf
    JA 0x00517adf                       ; 00517ab0
        ;   XREF to: 00517adf (CONDITIONAL_JUMP)  ; LAB_00517adf
    PUSH EDX                            ; 00517ab2
    PUSH EDI                            ; 00517ab3
        ;   Label: LAB_00517ab3
    PUSH ESI                            ; 00517ab4
    LEA EDI,[ESP + 0x14]                ; 00517ab5
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00517a60 ; 00517ab9
        ;   XREF to: 00517a60 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00517a60()
    MOV ESI,EAX                         ; 00517abe
    ADD ESP,0xc                         ; 00517ac0
        ;   Label: LAB_00517ac0
    MOVSD ES:EDI,ESI                    ; 00517ac3
    MOVSD ES:EDI,ESI                    ; 00517ac4
    MOVSD ES:EDI,ESI                    ; 00517ac5
    MOVSD ES:EDI,ESI                    ; 00517ac6
    LEA ESI,[ESP + 0x8]                 ; 00517ac7
    MOV EDI,EBX                         ; 00517acb
    MOVSD ES:EDI,ESI                    ; 00517acd
    MOVSD ES:EDI,ESI                    ; 00517ace
    MOVSD ES:EDI,ESI                    ; 00517acf
    MOVSD ES:EDI,ESI                    ; 00517ad0
    MOV EAX,EBX                         ; 00517ad1
    MOV ESP,EBP                         ; 00517ad3
    POP EBP                             ; 00517ad5
    POP EDI                             ; 00517ad6
    POP EBX                             ; 00517ad7
    RET                                 ; 00517ad8
    MOV ECX,dword ptr [EBP + 0x18]      ; 00517ad9
        ;   Label: LAB_00517ad9
    PUSH ECX                            ; 00517adc
    JMP 0x00517ab3                      ; 00517add
        ;   XREF to: 00517ab3 (UNCONDITIONAL_JUMP)  ; LAB_00517ab3
    PUSH dword ptr [EBP + 0x20]         ; 00517adf
        ;   Label: LAB_00517adf
    PUSH EDX                            ; 00517ae2
    PUSH EDI                            ; 00517ae3
    PUSH ESI                            ; 00517ae4
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00517a60 ; 00517ae5
        ;   XREF to: 00517a60 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00517a60()
    ADD ESP,0xc                         ; 00517aea
    PUSH EAX                            ; 00517aed
    MOV EDX,dword ptr [EBP + 0x18]      ; 00517aee
    PUSH EDX                            ; 00517af1
    PUSH EDI                            ; 00517af2
    PUSH ESI                            ; 00517af3
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00517a60 ; 00517af4
        ;   XREF to: 00517a60 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00517a60()
    ADD ESP,0xc                         ; 00517af9
    PUSH EAX                            ; 00517afc
    LEA ESI,[ESP + 0x24]                ; 00517afd
    LEA EDI,[ESP + 0x14]                ; 00517b01
    CALL core_xform.cpp_slerpQuaternion_FUN_0055d2d0 ; 00517b05
        ;   XREF to: 0055d2d0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_0055d2d0()
    LEA ESI,[ESP + 0x24]                ; 00517b0a
    JMP 0x00517ac0                      ; 00517b0e
        ;   XREF to: 00517ac0 (UNCONDITIONAL_JUMP)  ; LAB_00517ac0

