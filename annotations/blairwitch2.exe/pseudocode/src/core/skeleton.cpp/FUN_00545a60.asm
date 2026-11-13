; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_FUN_00545a60(CDeformableModelInstance *param_1,int param_2,float param_3,float param_4,int param_5,code *param_6)
;
; Local Variables:
; undefined4       Stack[-0x980]:4  local_980
; undefined        Stack[-0x97c]:1  local_97c
; undefined        Stack[-0x19c]:1  local_19c
; undefined        Stack[-0x18c]:1  local_18c
; undefined        Stack[-0x17c]:1  local_17c
; undefined        Stack[-0x16c]:1  local_16c
; undefined        Stack[-0x14c]:1  local_14c
; undefined        Stack[-0x12c]:1  local_12c
; undefined        Stack[-0x11c]:1  local_11c
; undefined        Stack[-0x10c]:1  local_10c
; undefined        Stack[-0xfc]:1  local_fc
; undefined        Stack[-0xec]:1  local_ec
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[18]:
;   core_basicene.cpp_FUN_0059f390 at 0059f400
;   core_charactr.cpp_CCharacter_applyGesture_FUN_004291f0 at 004292e3
;   core_charactr.cpp_FUN_0042a2d0 at 0042a318
;   core_doc.cpp_CDoc_makeDrawDecision_FUN_004555c0 at 004558e7
;   core_doc.cpp_FUN_00453d80 at 0045515a
;   core_doc.cpp_FUN_004562a0 at 00456450
;   core_gabriela.cpp_CGabriella_updateClavicleCollisionAvoidance_FUN_004b1e00 at 004b2091
;   core_gabriela.cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004afa20 at 004afda9
;   core_gabriela.cpp_FUN_004b20d0 at 004b21c0
;   core_ghoul.cpp_CGhoul_process_FUN_004c1bb0 at 004c1f06
;   ... and 8 more
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005e72d7
;   TerminatedCString s_Write_me_005e72ec
;   undefined4 DAT_005e72f7
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_motion.cpp_FUN_00504080
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_00540f30
;   core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00540fc0
;   core_xform.cpp_multiplyQuaternion_FUN_00593c60
;   core_xform.cpp_negateFirstComponent_FUN_00593c00
;   core_xform.cpp_slerpQuaternion_FUN_00593df0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00545a60
        ;   Label: core_skeleton.cpp_FUN_00545a60
    PUSH ESI                            ; 00545a61
    PUSH EDI                            ; 00545a62
    PUSH EBP                            ; 00545a63
    MOV EBP,ESP                         ; 00545a64
    SUB ESP,0x96c                       ; 00545a66
    AND ESP,0xfffffff8                  ; 00545a6c
    FLD float ptr [EBP + 0x20]          ; 00545a6f
    FCOMP double ptr [0x005e72f7]       ; 00545a72 | DAT_005e72f7
    FNSTSW AX                           ; 00545a78
    SAHF                                ; 00545a7a
    JA 0x00545a84                       ; 00545a7b
        ;   XREF to: 00545a84 (CONDITIONAL_JUMP)  ; LAB_00545a84
    MOV ESP,EBP                         ; 00545a7d
        ;   Label: LAB_00545a7d
    POP EBP                             ; 00545a7f
    POP EDI                             ; 00545a80
    POP ESI                             ; 00545a81
    POP EBX                             ; 00545a82
    RET                                 ; 00545a83
    MOV EAX,ESP                         ; 00545a84
        ;   Label: LAB_00545a84
    PUSH EAX                            ; 00545a86
    LEA EAX,[ESP + 0x930]               ; 00545a87
    PUSH EAX                            ; 00545a8e
    LEA EAX,[ESP + 0x92c]               ; 00545a8f
    PUSH EAX                            ; 00545a96
    MOV EDX,dword ptr [EBP + 0x18]      ; 00545a97
    PUSH dword ptr [EBP + 0x1c]         ; 00545a9a
    PUSH EDX                            ; 00545a9d
    MOV ECX,dword ptr [EBP + 0x14]      ; 00545a9e
    PUSH ECX                            ; 00545aa1
    CALL core_motion.cpp_FUN_00504080   ; 00545aa2
        ;   XREF to: 00504080 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_FUN_00504080(CMotionController * this_ptr, int motion_index, float frame_number, int * out_frame1, ...)
    ADD ESP,0x18                        ; 00545aa7
    MOV EBX,dword ptr [EBP + 0x14]      ; 00545aaa
    PUSH EBX                            ; 00545aad
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 00545aae
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00545ab3
    MOV ESI,dword ptr [EBP + 0x14]      ; 00545ab6
    MOV EDI,dword ptr [ESI + 0x2250]    ; 00545ab9
    MOV EBX,EAX                         ; 00545abf
    TEST EDI,EDI                        ; 00545ac1
    JNZ 0x00545e62                      ; 00545ac3
        ;   XREF to: 00545e62 (CONDITIONAL_JUMP)  ; LAB_00545e62
    MOV ESI,dword ptr [EAX + 0x1d1f8]   ; 00545ac9
    MOV dword ptr [ESP + 0x964],EDI     ; 00545acf
    TEST ESI,ESI                        ; 00545ad6
    JLE 0x00545be9                      ; 00545ad8
        ;   XREF to: 00545be9 (CONDITIONAL_JUMP)  ; LAB_00545be9
    MOV EAX,dword ptr [EBP + 0x14]      ; 00545ade
    MOV ESI,dword ptr [EBP + 0x14]      ; 00545ae1
    ADD EAX,0x6b0                       ; 00545ae4
    MOV dword ptr [ESP + 0x93c],ESI     ; 00545ae9
    MOV dword ptr [ESP + 0x944],EAX     ; 00545af0
    MOV ESI,dword ptr [EBP + 0x24]      ; 00545af7
        ;   Label: LAB_00545af7
    PUSH ESI                            ; 00545afa
    MOV EDI,dword ptr [ESP + 0x968]     ; 00545afb
    PUSH EDI                            ; 00545b02
    PUSH EBX                            ; 00545b03
    CALL core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00540fc0 ; 00545b04
        ;   XREF to: 00540fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00540fc0(CSkeleton * this_ptr, int start_bone_index, int target_bone_index)
    ADD ESP,0xc                         ; 00545b09
    TEST EAX,EAX                        ; 00545b0c
    JL 0x00545baa                       ; 00545b0e
        ;   XREF to: 00545baa (CONDITIONAL_JUMP)  ; LAB_00545baa
    MOV EDX,dword ptr [EBP + 0x14]      ; 00545b14
    PUSH EDX                            ; 00545b17
    PUSH EAX                            ; 00545b18
    PUSH dword ptr [EBP + 0x20]         ; 00545b19
    PUSH ESI                            ; 00545b1c
    PUSH EDI                            ; 00545b1d
    CALL dword ptr [EBP + 0x28]         ; 00545b1e
    MOV dword ptr [ESP + 0x97c],EAX     ; 00545b21
    FLD float ptr [ESP + 0x97c]         ; 00545b28
    ADD ESP,0x14                        ; 00545b2f
    SUB ESP,0x4                         ; 00545b32
    MOV ESI,EDI                         ; 00545b35
    FSTP float ptr [ESP]                ; 00545b37
    MOV EDI,dword ptr [ESP + 0x930]     ; 00545b3a
    PUSH dword ptr [ESP + 0x4]          ; 00545b41
    PUSH EDI                            ; 00545b45
    MOV EAX,dword ptr [ESP + 0x930]     ; 00545b46
    PUSH EAX                            ; 00545b4d
    MOV EDX,ESI                         ; 00545b4e
    PUSH EDX                            ; 00545b50
    PUSH EBX                            ; 00545b51
    LEA ESI,[ESP + 0x85c]               ; 00545b52
    LEA EDI,[ESP + 0x83c]               ; 00545b59
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_00540f30 ; 00545b60
        ;   XREF to: 00540f30 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_00540f30(CSkeleton * this_ptr, int bone_index, int frame_index_1, int frame_index_2, ...)
    LEA ESI,[ESP + 0x85c]               ; 00545b65
    ADD ESP,0x14                        ; 00545b6c
    LEA EAX,[ESP + 0x828]               ; 00545b6f
    MOV ECX,dword ptr [ESP + 0x948]     ; 00545b76
    PUSH EAX                            ; 00545b7d
    MOVSD ES:EDI,ESI                    ; 00545b7e
    MOVSD ES:EDI,ESI                    ; 00545b7f
    MOVSD ES:EDI,ESI                    ; 00545b80
    MOVSD ES:EDI,ESI                    ; 00545b81
    PUSH ECX                            ; 00545b82
    LEA ESI,[ESP + 0x7e0]               ; 00545b83
    CALL core_xform.cpp_slerpQuaternion_FUN_00593df0 ; 00545b8a
        ;   XREF to: 00593df0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_00593df0()
    ADD ESP,0xc                         ; 00545b8f
    MOV EDI,dword ptr [ESP + 0x93c]     ; 00545b92
    LEA ESI,[ESP + 0x7d4]               ; 00545b99
    LEA EDI,[EDI + 0x6b0]               ; 00545ba0
    MOVSD ES:EDI,ESI                    ; 00545ba6
    MOVSD ES:EDI,ESI                    ; 00545ba7
    MOVSD ES:EDI,ESI                    ; 00545ba8
    MOVSD ES:EDI,ESI                    ; 00545ba9
    MOV EDI,dword ptr [ESP + 0x93c]     ; 00545baa
        ;   Label: LAB_00545baa
    MOV EAX,dword ptr [ESP + 0x944]     ; 00545bb1
    MOV EDX,dword ptr [ESP + 0x964]     ; 00545bb8
    MOV ECX,dword ptr [EBX + 0x1d1f8]   ; 00545bbf
    ADD EDI,0x10                        ; 00545bc5
    ADD EAX,0x10                        ; 00545bc8
    INC EDX                             ; 00545bcb
    MOV dword ptr [ESP + 0x93c],EDI     ; 00545bcc
    MOV dword ptr [ESP + 0x944],EAX     ; 00545bd3
    MOV dword ptr [ESP + 0x964],EDX     ; 00545bda
    CMP EDX,ECX                         ; 00545be1
    JL 0x00545af7                       ; 00545be3
        ;   XREF to: 00545af7 (CONDITIONAL_JUMP)  ; LAB_00545af7
    CMP dword ptr [EBP + 0x24],0x0      ; 00545be9
        ;   Label: LAB_00545be9
    JGE 0x00545a7d                      ; 00545bed
        ;   XREF to: 00545a7d (CONDITIONAL_JUMP)  ; LAB_00545a7d
    MOV ESI,dword ptr [ESP + 0x92c]     ; 00545bf3
    LEA EAX,[ESI*0x4 + 0x0]             ; 00545bfa
    MOV EBX,dword ptr [EBX + 0x1e014]   ; 00545c01
    SUB EAX,ESI                         ; 00545c07
    FLD float ptr [EBX + EAX*0x4]       ; 00545c09
    FMUL float ptr [ESP]                ; 00545c0c
    FLD float ptr [EBX + EAX*0x4 + 0x4] ; 00545c0f
    FMUL float ptr [ESP]                ; 00545c13
    FLD float ptr [EBX + EAX*0x4 + 0x8] ; 00545c16
    FMUL float ptr [ESP]                ; 00545c1a
    LEA EDI,[ESP + 0x894]               ; 00545c1d
    LEA ESI,[ESP + 0x8c4]               ; 00545c24
    FXCH ST2                            ; 00545c2b
    FSTP float ptr [ESP + 0x8c4]        ; 00545c2d
    FSTP float ptr [ESP + 0x8c8]        ; 00545c34
    FSTP float ptr [ESP + 0x8cc]        ; 00545c3b
    MOVSD ES:EDI,ESI                    ; 00545c42
    MOVSD ES:EDI,ESI                    ; 00545c43
    MOVSD ES:EDI,ESI                    ; 00545c44
    FLD float ptr [ESP]                 ; 00545c45
    MOV ESI,dword ptr [ESP + 0x924]     ; 00545c48
    FLD1                                ; 00545c4f
    LEA EAX,[ESI*0x4 + 0x0]             ; 00545c51
    FSUBRP                              ; 00545c58
    SUB EAX,ESI                         ; 00545c5a
    FSTP float ptr [ESP + 0x928]        ; 00545c5c
    FLD float ptr [EBX + EAX*0x4]       ; 00545c63
    FMUL float ptr [ESP + 0x928]        ; 00545c66
    FLD float ptr [EBX + EAX*0x4 + 0x4] ; 00545c6d
    FMUL float ptr [ESP + 0x928]        ; 00545c71
    FLD float ptr [EBX + EAX*0x4 + 0x8] ; 00545c78
    FMUL float ptr [ESP + 0x928]        ; 00545c7c
    LEA EDI,[ESP + 0x8b8]               ; 00545c83
    LEA ESI,[ESP + 0x8dc]               ; 00545c8a
    FXCH ST2                            ; 00545c91
    FSTP float ptr [ESP + 0x8dc]        ; 00545c93
    FSTP float ptr [ESP + 0x8e0]        ; 00545c9a
    FSTP float ptr [ESP + 0x8e4]        ; 00545ca1
    MOVSD ES:EDI,ESI                    ; 00545ca8
    MOVSD ES:EDI,ESI                    ; 00545ca9
    MOVSD ES:EDI,ESI                    ; 00545caa
    FLD float ptr [ESP + 0x8b8]         ; 00545cab
    FLD float ptr [ESP + 0x8bc]         ; 00545cb2
    FLD float ptr [ESP + 0x8c0]         ; 00545cb9
    LEA EDI,[ESP + 0x8f4]               ; 00545cc0
    LEA ESI,[ESP + 0x900]               ; 00545cc7
    FXCH ST2                            ; 00545cce
    FADD float ptr [ESP + 0x894]        ; 00545cd0
    FXCH                                ; 00545cd7
    FADD float ptr [ESP + 0x898]        ; 00545cd9
    FXCH ST2                            ; 00545ce0
    FADD float ptr [ESP + 0x89c]        ; 00545ce2
    FXCH                                ; 00545ce9
    FSTP float ptr [ESP + 0x900]        ; 00545ceb
    FXCH                                ; 00545cf2
    FSTP float ptr [ESP + 0x904]        ; 00545cf4
    FSTP float ptr [ESP + 0x908]        ; 00545cfb
    MOVSD ES:EDI,ESI                    ; 00545d02
    MOVSD ES:EDI,ESI                    ; 00545d03
    MOVSD ES:EDI,ESI                    ; 00545d04
    MOV EAX,dword ptr [EBP + 0x14]      ; 00545d05
    FLD float ptr [ESP + 0x8f4]         ; 00545d08
    FMUL float ptr [EAX + 0x508]        ; 00545d0f
    FLD float ptr [ESP + 0x8f8]         ; 00545d15
    FMUL float ptr [EAX + 0x50c]        ; 00545d1c
    FLD float ptr [ESP + 0x8fc]         ; 00545d22
    FMUL float ptr [EAX + 0x510]        ; 00545d29
    FXCH ST2                            ; 00545d2f
    FST float ptr [ESP + 0x8f4]         ; 00545d31
    FLD float ptr [EBP + 0x20]          ; 00545d38
    FXCH                                ; 00545d3b
    FMUL ST1                            ; 00545d3d
    FXCH ST2                            ; 00545d3f
    FST float ptr [ESP + 0x8f8]         ; 00545d41
    FMUL ST1                            ; 00545d48
    FXCH ST3                            ; 00545d4a
    FST float ptr [ESP + 0x8fc]         ; 00545d4c
    FMUL ST1                            ; 00545d53
    FLD1                                ; 00545d55
    FSUBRP ST2,ST0                      ; 00545d57
    LEA EBX,[EAX + 0x6a4]               ; 00545d59
    LEA EDI,[ESP + 0x918]               ; 00545d5f
    LEA ESI,[ESP + 0x8a0]               ; 00545d66
    FXCH ST2                            ; 00545d6d
    FSTP float ptr [ESP + 0x8a0]        ; 00545d6f
    FXCH ST2                            ; 00545d76
    FSTP float ptr [ESP + 0x8a4]        ; 00545d78
    FSTP float ptr [ESP + 0x8a8]        ; 00545d7f
    MOVSD ES:EDI,ESI                    ; 00545d86
    MOVSD ES:EDI,ESI                    ; 00545d87
    MOVSD ES:EDI,ESI                    ; 00545d88
    FSTP float ptr [ESP + 0x930]        ; 00545d89
    FLD float ptr [EBX]                 ; 00545d90
    FMUL float ptr [ESP + 0x930]        ; 00545d92
    FLD float ptr [EBX + 0x4]           ; 00545d99
    FMUL float ptr [ESP + 0x930]        ; 00545d9c
    FLD float ptr [EBX + 0x8]           ; 00545da3
    FMUL float ptr [ESP + 0x930]        ; 00545da6
    LEA EDI,[ESP + 0x8d0]               ; 00545dad
    LEA ESI,[ESP + 0x8ac]               ; 00545db4
    FXCH ST2                            ; 00545dbb
    FSTP float ptr [ESP + 0x8ac]        ; 00545dbd
    FSTP float ptr [ESP + 0x8b0]        ; 00545dc4
    FSTP float ptr [ESP + 0x8b4]        ; 00545dcb
    MOVSD ES:EDI,ESI                    ; 00545dd2
    MOVSD ES:EDI,ESI                    ; 00545dd3
    MOVSD ES:EDI,ESI                    ; 00545dd4
    LEA EAX,[ESP + 0x90c]               ; 00545dd5
    FLD float ptr [ESP + 0x8d0]         ; 00545ddc
    FLD float ptr [ESP + 0x8d4]         ; 00545de3
    FLD float ptr [ESP + 0x8d8]         ; 00545dea
    LEA EDI,[ESP + 0x90c]               ; 00545df1
    LEA ESI,[ESP + 0x8e8]               ; 00545df8
    FXCH ST2                            ; 00545dff
    FADD float ptr [ESP + 0x918]        ; 00545e01
    FXCH                                ; 00545e08
    FADD float ptr [ESP + 0x91c]        ; 00545e0a
    FXCH ST2                            ; 00545e11
    FADD float ptr [ESP + 0x920]        ; 00545e13
    FXCH                                ; 00545e1a
    FSTP float ptr [ESP + 0x8e8]        ; 00545e1c
    FXCH                                ; 00545e23
    FSTP float ptr [ESP + 0x8ec]        ; 00545e25
    FSTP float ptr [ESP + 0x8f0]        ; 00545e2c
    MOVSD ES:EDI,ESI                    ; 00545e33
    MOVSD ES:EDI,ESI                    ; 00545e34
    MOVSD ES:EDI,ESI                    ; 00545e35
    CMP EBX,EAX                         ; 00545e36
    JZ 0x00545a7d                       ; 00545e38
        ;   XREF to: 00545a7d (CONDITIONAL_JUMP)  ; LAB_00545a7d
    MOV EAX,dword ptr [ESP + 0x90c]     ; 00545e3e
    MOV dword ptr [EBX],EAX             ; 00545e45
    MOV EAX,dword ptr [ESP + 0x910]     ; 00545e47
    MOV dword ptr [EBX + 0x4],EAX       ; 00545e4e
    MOV EAX,dword ptr [ESP + 0x914]     ; 00545e51
    MOV dword ptr [EBX + 0x8],EAX       ; 00545e58
    MOV ESP,EBP                         ; 00545e5b
    POP EBP                             ; 00545e5d
    POP EDI                             ; 00545e5e
    POP ESI                             ; 00545e5f
    POP EBX                             ; 00545e60
    RET                                 ; 00545e61
    CMP EDI,0x1                         ; 00545e62
        ;   Label: LAB_00545e62
    JNZ 0x00546160                      ; 00545e65
        ;   XREF to: 00546160 (CONDITIONAL_JUMP)  ; LAB_00546160
    XOR EDI,EDI                         ; 00545e6b
    MOV EDX,dword ptr [EAX + 0x1d1f8]   ; 00545e6d
    MOV dword ptr [ESP + 0x960],EDI     ; 00545e73
    TEST EDX,EDX                        ; 00545e7a
    JLE 0x00545ef2                      ; 00545e7c
        ;   XREF to: 00545ef2 (CONDITIONAL_JUMP)  ; LAB_00545ef2
    MOV dword ptr [ESP + 0x940],EDI     ; 00545e7e
    MOV dword ptr [ESP + 0x958],EDI     ; 00545e85
    MOV EAX,dword ptr [EBP + 0x24]      ; 00545e8c
        ;   Label: LAB_00545e8c
    PUSH EAX                            ; 00545e8f
    MOV EDX,dword ptr [ESP + 0x964]     ; 00545e90
    PUSH EDX                            ; 00545e97
    PUSH EBX                            ; 00545e98
    CALL core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00540fc0 ; 00545e99
        ;   XREF to: 00540fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00540fc0(CSkeleton * this_ptr, int start_bone_index, int target_bone_index)
    ADD ESP,0xc                         ; 00545e9e
    MOV ESI,dword ptr [ESP + 0x958]     ; 00545ea1
    MOV dword ptr [ESP + ESI*0x1 + 0x644],EAX ; 00545ea8
    TEST EAX,EAX                        ; 00545eaf
    JGE 0x00546071                      ; 00545eb1
        ;   XREF to: 00546071 (CONDITIONAL_JUMP)  ; LAB_00546071
    MOV EDI,dword ptr [ESP + 0x958]     ; 00545eb7
        ;   Label: LAB_00545eb7
    MOV EAX,dword ptr [ESP + 0x940]     ; 00545ebe
    MOV EDX,dword ptr [ESP + 0x960]     ; 00545ec5
    MOV ECX,dword ptr [EBX + 0x1d1f8]   ; 00545ecc
    ADD EDI,0x4                         ; 00545ed2
    ADD EAX,0x10                        ; 00545ed5
    INC EDX                             ; 00545ed8
    MOV dword ptr [ESP + 0x958],EDI     ; 00545ed9
    MOV dword ptr [ESP + 0x940],EAX     ; 00545ee0
    MOV dword ptr [ESP + 0x960],EDX     ; 00545ee7
    CMP EDX,ECX                         ; 00545eee
    JL 0x00545e8c                       ; 00545ef0
        ;   XREF to: 00545e8c (CONDITIONAL_JUMP)  ; LAB_00545e8c
    MOV ESI,dword ptr [EBP + 0x24]      ; 00545ef2
        ;   Label: LAB_00545ef2
    LEA EAX,[ESI*0x8 + 0x0]             ; 00545ef5
    ADD EAX,ESI                         ; 00545efc
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x1d21c] ; 00545efe
    TEST EDI,EDI                        ; 00545f05
    JL 0x00545f3f                       ; 00545f07
        ;   XREF to: 00545f3f (CONDITIONAL_JUMP)  ; LAB_00545f3f
    MOV ESI,dword ptr [ESP + 0x92c]     ; 00545f09
    PUSH dword ptr [ESP]                ; 00545f10
    PUSH ESI                            ; 00545f13
    MOV EAX,dword ptr [ESP + 0x92c]     ; 00545f14
    PUSH EAX                            ; 00545f1b
    PUSH EDI                            ; 00545f1c
    PUSH EBX                            ; 00545f1d
    LEA ESI,[ESP + 0x828]               ; 00545f1e
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_00540f30 ; 00545f25
        ;   XREF to: 00540f30 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_00540f30(CSkeleton * this_ptr, int bone_index, int frame_index_1, int frame_index_2, ...)
    SHL EDI,0x4                         ; 00545f2a
    ADD ESP,0x14                        ; 00545f2d
    LEA ESI,[ESP + 0x814]               ; 00545f30
    LEA EDI,[ESP + EDI*0x1 + 0x4]       ; 00545f37
    MOVSD ES:EDI,ESI                    ; 00545f3b
    MOVSD ES:EDI,ESI                    ; 00545f3c
    MOVSD ES:EDI,ESI                    ; 00545f3d
    MOVSD ES:EDI,ESI                    ; 00545f3e
    XOR EDX,EDX                         ; 00545f3f
        ;   Label: LAB_00545f3f
    MOV ECX,dword ptr [EBX + 0x1d1f8]   ; 00545f41
    MOV dword ptr [ESP + 0x95c],EDX     ; 00545f47
    TEST ECX,ECX                        ; 00545f4e
    JLE 0x00545be9                      ; 00545f50
        ;   XREF to: 00545be9 (CONDITIONAL_JUMP)  ; LAB_00545be9
    MOV EAX,dword ptr [EBP + 0x14]      ; 00545f56
    ADD EAX,0x6b0                       ; 00545f59
    MOV dword ptr [ESP + 0x934],EAX     ; 00545f5e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00545f65
    MOV dword ptr [ESP + 0x950],EDX     ; 00545f68
    MOV dword ptr [ESP + 0x948],EAX     ; 00545f6f
    MOV EAX,dword ptr [ESP + 0x934]     ; 00545f76
    MOV dword ptr [ESP + 0x954],EBX     ; 00545f7d
    MOV dword ptr [ESP + 0x94c],EAX     ; 00545f84
    MOV EAX,dword ptr [ESP + 0x950]     ; 00545f8b
        ;   Label: LAB_00545f8b
    CMP dword ptr [ESP + EAX*0x1 + 0x644],0x0 ; 00545f92
    JL 0x0054600b                       ; 00545f9a
        ;   XREF to: 0054600b (CONDITIONAL_JUMP)  ; LAB_0054600b
    MOV ESI,dword ptr [ESP + 0x95c]     ; 00545f9c
    MOV EAX,dword ptr [ESP + 0x954]     ; 00545fa3
    SHL ESI,0x4                         ; 00545faa
    MOV EAX,dword ptr [EAX + 0x1d21c]   ; 00545fad
    MOV dword ptr [ESP + 0x938],ESI     ; 00545fb3
    TEST EAX,EAX                        ; 00545fba
    JGE 0x005460b7                      ; 00545fbc
        ;   XREF to: 005460b7 (CONDITIONAL_JUMP)  ; LAB_005460b7
    LEA EDI,[ESP + 0x834]               ; 00545fc2
    LEA ESI,[ESP + ESI*0x1 + 0x4]       ; 00545fc9
    MOVSD ES:EDI,ESI                    ; 00545fcd
        ;   Label: LAB_00545fcd
    MOVSD ES:EDI,ESI                    ; 00545fce
    MOVSD ES:EDI,ESI                    ; 00545fcf
    MOVSD ES:EDI,ESI                    ; 00545fd0
    LEA EAX,[ESP + 0x834]               ; 00545fd1
    PUSH dword ptr [EBP + 0x20]         ; 00545fd8
    PUSH EAX                            ; 00545fdb
    MOV ESI,dword ptr [ESP + 0x954]     ; 00545fdc
    PUSH ESI                            ; 00545fe3
    LEA ESI,[ESP + 0x890]               ; 00545fe4
    CALL core_xform.cpp_slerpQuaternion_FUN_00593df0 ; 00545feb
        ;   XREF to: 00593df0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_00593df0()
    ADD ESP,0xc                         ; 00545ff0
    MOV EDI,dword ptr [ESP + 0x948]     ; 00545ff3
    LEA ESI,[ESP + 0x884]               ; 00545ffa
    LEA EDI,[EDI + 0x6b0]               ; 00546001
    MOVSD ES:EDI,ESI                    ; 00546007
    MOVSD ES:EDI,ESI                    ; 00546008
    MOVSD ES:EDI,ESI                    ; 00546009
    MOVSD ES:EDI,ESI                    ; 0054600a
    MOV EDX,dword ptr [ESP + 0x950]     ; 0054600b
        ;   Label: LAB_0054600b
    MOV ECX,dword ptr [ESP + 0x954]     ; 00546012
    MOV ESI,dword ptr [ESP + 0x948]     ; 00546019
    MOV EDI,dword ptr [ESP + 0x94c]     ; 00546020
    MOV EAX,dword ptr [ESP + 0x95c]     ; 00546027
    ADD EDX,0x4                         ; 0054602e
    ADD ECX,0x24                        ; 00546031
    ADD ESI,0x10                        ; 00546034
    ADD EDI,0x10                        ; 00546037
    INC EAX                             ; 0054603a
    MOV dword ptr [ESP + 0x950],EDX     ; 0054603b
    MOV dword ptr [ESP + 0x954],ECX     ; 00546042
    MOV dword ptr [ESP + 0x948],ESI     ; 00546049
    MOV dword ptr [ESP + 0x94c],EDI     ; 00546050
    MOV EDX,dword ptr [EBX + 0x1d1f8]   ; 00546057
    MOV dword ptr [ESP + 0x95c],EAX     ; 0054605d
    CMP EAX,EDX                         ; 00546064
    JGE 0x00545be9                      ; 00546066
        ;   XREF to: 00545be9 (CONDITIONAL_JUMP)  ; LAB_00545be9
    JMP 0x00545f8b                      ; 0054606c
        ;   XREF to: 00545f8b (UNCONDITIONAL_JUMP)  ; LAB_00545f8b
    MOV ESI,dword ptr [ESP + 0x92c]     ; 00546071
        ;   Label: LAB_00546071
    PUSH dword ptr [ESP]                ; 00546078
    PUSH ESI                            ; 0054607b
    MOV EDI,dword ptr [ESP + 0x92c]     ; 0054607c
    PUSH EDI                            ; 00546083
    MOV EAX,dword ptr [ESP + 0x96c]     ; 00546084
    PUSH EAX                            ; 0054608b
    PUSH EBX                            ; 0054608c
    LEA ESI,[ESP + 0x7f8]               ; 0054608d
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_00540f30 ; 00546094
        ;   XREF to: 00540f30 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_00540f30(CSkeleton * this_ptr, int bone_index, int frame_index_1, int frame_index_2, ...)
    ADD ESP,0x14                        ; 00546099
    MOV EDI,dword ptr [ESP + 0x940]     ; 0054609c
    LEA ESI,[ESP + 0x7e4]               ; 005460a3
    LEA EDI,[ESP + EDI*0x1 + 0x4]       ; 005460aa
    MOVSD ES:EDI,ESI                    ; 005460ae
    MOVSD ES:EDI,ESI                    ; 005460af
    MOVSD ES:EDI,ESI                    ; 005460b0
    MOVSD ES:EDI,ESI                    ; 005460b1
    JMP 0x00545eb7                      ; 005460b2
        ;   XREF to: 00545eb7 (UNCONDITIONAL_JUMP)  ; LAB_00545eb7
    SHL EAX,0x4                         ; 005460b7
        ;   Label: LAB_005460b7
    MOV dword ptr [ESP + 0x968],EAX     ; 005460ba
    LEA EAX,[ESP + 0x4]                 ; 005460c1
    ADD EAX,dword ptr [ESP + 0x968]     ; 005460c5
    PUSH EAX                            ; 005460cc
    LEA ESI,[ESP + 0x878]               ; 005460cd
    LEA EDI,[ESP + 0x858]               ; 005460d4
    CALL core_xform.cpp_negateFirstComponent_FUN_00593c00 ; 005460db
        ;   XREF to: 00593c00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_negateFirstComponent_FUN_00593c00()
    ADD ESP,0x4                         ; 005460e0
    LEA EAX,[ESP + 0x854]               ; 005460e3
    MOV EDX,dword ptr [ESP + 0x938]     ; 005460ea
    PUSH EAX                            ; 005460f1
    LEA EAX,[ESP + 0x8]                 ; 005460f2
    LEA ESI,[ESP + 0x878]               ; 005460f6
    ADD EAX,EDX                         ; 005460fd
    MOVSD ES:EDI,ESI                    ; 005460ff
    MOVSD ES:EDI,ESI                    ; 00546100
    MOVSD ES:EDI,ESI                    ; 00546101
    MOVSD ES:EDI,ESI                    ; 00546102
    PUSH EAX                            ; 00546103
    LEA ESI,[ESP + 0x7fc]               ; 00546104
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 0054610b
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    ADD ESP,0x8                         ; 00546110
    MOV EAX,dword ptr [ESP + 0x934]     ; 00546113
    MOV ECX,dword ptr [ESP + 0x968]     ; 0054611a
    LEA EDI,[ESP + 0x804]               ; 00546121
    ADD EAX,ECX                         ; 00546128
    LEA ESI,[ESP + 0x7f4]               ; 0054612a
    PUSH EAX                            ; 00546131
    LEA EAX,[ESP + 0x808]               ; 00546132
    MOVSD ES:EDI,ESI                    ; 00546139
    MOVSD ES:EDI,ESI                    ; 0054613a
    MOVSD ES:EDI,ESI                    ; 0054613b
    MOVSD ES:EDI,ESI                    ; 0054613c
    PUSH EAX                            ; 0054613d
    LEA ESI,[ESP + 0x86c]               ; 0054613e
    LEA EDI,[ESP + 0x83c]               ; 00546145
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 0054614c
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    LEA ESI,[ESP + 0x86c]               ; 00546151
    ADD ESP,0x8                         ; 00546158
    JMP 0x00545fcd                      ; 0054615b
        ;   XREF to: 00545fcd (UNCONDITIONAL_JUMP)  ; LAB_00545fcd
    MOV ECX,0x5e72d7                    ; 00546160 | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_00546160
    MOV ESI,0xa91                       ; 00546165
    PUSH 0x5e72ec                       ; 0054616a | = "Write me!"
    MOV dword ptr [0x01d046a0],ECX      ; 0054616f | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00546175 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0054617b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00546180
    JMP 0x00545be9                      ; 00546183
        ;   XREF to: 00545be9 (UNCONDITIONAL_JUMP)  ; LAB_00545be9

