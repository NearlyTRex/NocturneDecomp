; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_FUN_00568860(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,CVector3f *source_position,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; CQuaternion4f *  Stack[0x8]:4   source_quaternions
; CVector3f *      Stack[0xc]:4   source_position
; float            Stack[0x10]:4   blend_weight
; int              Stack[0x14]:4   bone_index
; CDeformableModel_MotionBlendWeightFunc * Stack[0x18]:4   blend_callback
; Local Variables:
; undefined        Stack[-0xf8]:1  local_f8
; undefined        Stack[-0xe8]:1  local_e8
; undefined        Stack[-0xd8]:1  local_d8
; undefined        Stack[-0xc8]:1  local_c8
; undefined        Stack[-0xb8]:1  local_b8
; undefined        Stack[-0xa8]:1  local_a8
; undefined        Stack[-0x98]:1  local_98
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_blendWithPoseData_FUN_00568830 at 0056884d
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005f24f9
;   TerminatedCString s_Write_me_005f250e
;   undefined4 DAT_005f2519
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_FUN_00563630
;   core_xform.cpp_FUN_005b7940
;   core_xform.cpp_multiplyQuaternion_FUN_005b77b0
;   core_xform.cpp_negateFirstComponent_FUN_005b7750
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00568860
        ;   Label: core_skeleton.cpp_FUN_00568860
    PUSH ESI                            ; 00568861
    PUSH EDI                            ; 00568862
    PUSH EBP                            ; 00568863
    SUB ESP,0xf8                        ; 00568864
    FLD float ptr [ESP + 0x118]         ; 0056886a
    FCOMP double ptr [0x005f2519]       ; 00568871 | DAT_005f2519
    FNSTSW AX                           ; 00568877
    SAHF                                ; 00568879
    JA 0x00568887                       ; 0056887a
        ;   XREF to: 00568887 (CONDITIONAL_JUMP)  ; LAB_00568887
    ADD ESP,0xf8                        ; 0056887c
        ;   Label: LAB_0056887c
    POP EBP                             ; 00568882
    POP EDI                             ; 00568883
    POP ESI                             ; 00568884
    POP EBX                             ; 00568885
    RET                                 ; 00568886
    MOV EDX,dword ptr [ESP + 0x10c]     ; 00568887
        ;   Label: LAB_00568887
    PUSH EDX                            ; 0056888e
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 0056888f
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00568894
    MOV EBX,dword ptr [ESP + 0x10c]     ; 00568897
    MOV ESI,dword ptr [ESP + 0x10c]     ; 0056889e
    MOV dword ptr [ESP + 0xf0],EAX      ; 005688a5
    MOV ECX,dword ptr [EBX + 0x2340]    ; 005688ac
    ADD ESI,0x6b0                       ; 005688b2
    TEST ECX,ECX                        ; 005688b8
    JNZ 0x00568b38                      ; 005688ba
        ;   XREF to: 00568b38 (CONDITIONAL_JUMP)  ; LAB_00568b38
    MOV ECX,dword ptr [EAX + 0x1de78]   ; 005688c0
    XOR EBX,EBX                         ; 005688c6
    TEST ECX,ECX                        ; 005688c8
    JLE 0x005689a3                      ; 005688ca
        ;   XREF to: 005689a3 (CONDITIONAL_JUMP)  ; LAB_005689a3
    MOV EAX,dword ptr [ESP + 0x10c]     ; 005688d0
    MOV EBP,dword ptr [ESP + 0x110]     ; 005688d7
    MOV dword ptr [ESP + 0xe4],ESI      ; 005688de
    MOV dword ptr [ESP + 0xdc],EAX      ; 005688e5
    MOV ECX,dword ptr [ESP + 0x11c]     ; 005688ec
        ;   Label: LAB_005688ec
    PUSH ECX                            ; 005688f3
    PUSH EBX                            ; 005688f4
    MOV ESI,dword ptr [ESP + 0xf8]      ; 005688f5
    PUSH ESI                            ; 005688fc
    CALL core_skeleton.cpp_FUN_00563630 ; 005688fd
        ;   XREF to: 00563630 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00563630(CSkeleton * this_ptr, int start_bone_index, int target_bone_index)
    ADD ESP,0xc                         ; 00568902
    TEST EAX,EAX                        ; 00568905
    JL 0x00568968                       ; 00568907
        ;   XREF to: 00568968 (CONDITIONAL_JUMP)  ; LAB_00568968
    MOV EDI,dword ptr [ESP + 0x10c]     ; 00568909
    PUSH EDI                            ; 00568910
    PUSH EAX                            ; 00568911
    MOV EAX,dword ptr [ESP + 0x124]     ; 00568912
    PUSH dword ptr [ESP + 0x120]        ; 00568919
    PUSH EAX                            ; 00568920
    PUSH EBX                            ; 00568921
    CALL dword ptr [ESP + 0x134]        ; 00568922
    MOV dword ptr [ESP + 0x108],EAX     ; 00568929
    FLD float ptr [ESP + 0x108]         ; 00568930
    ADD ESP,0x14                        ; 00568937
    SUB ESP,0x4                         ; 0056893a
    FSTP float ptr [ESP]                ; 0056893d
    PUSH EBP                            ; 00568940
    MOV EDX,dword ptr [ESP + 0xec]      ; 00568941
    PUSH EDX                            ; 00568948
    LEA ESI,[ESP + 0xc]                 ; 00568949
    CALL core_xform.cpp_FUN_005b7940    ; 0056894d
        ;   XREF to: 005b7940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b7940()
    ADD ESP,0xc                         ; 00568952
    MOV EDI,dword ptr [ESP + 0xdc]      ; 00568955
    MOV ESI,ESP                         ; 0056895c
    LEA EDI,[EDI + 0x6b0]               ; 0056895e
    MOVSD ES:EDI,ESI                    ; 00568964
    MOVSD ES:EDI,ESI                    ; 00568965
    MOVSD ES:EDI,ESI                    ; 00568966
    MOVSD ES:EDI,ESI                    ; 00568967
    MOV ESI,dword ptr [ESP + 0xdc]      ; 00568968
        ;   Label: LAB_00568968
    MOV EDI,dword ptr [ESP + 0xe4]      ; 0056896f
    MOV EAX,dword ptr [ESP + 0xf0]      ; 00568976
    ADD EBP,0x10                        ; 0056897d
    INC EBX                             ; 00568980
    ADD ESI,0x10                        ; 00568981
    ADD EDI,0x10                        ; 00568984
    MOV EDX,dword ptr [EAX + 0x1de78]   ; 00568987
    MOV dword ptr [ESP + 0xdc],ESI      ; 0056898d
    MOV dword ptr [ESP + 0xe4],EDI      ; 00568994
    CMP EBX,EDX                         ; 0056899b
    JL 0x005688ec                       ; 0056899d
        ;   XREF to: 005688ec (CONDITIONAL_JUMP)  ; LAB_005688ec
    CMP dword ptr [ESP + 0x11c],0x0     ; 005689a3
        ;   Label: LAB_005689a3
    JGE 0x0056887c                      ; 005689ab
        ;   XREF to: 0056887c (CONDITIONAL_JUMP)  ; LAB_0056887c
    MOV ESI,dword ptr [ESP + 0x10c]     ; 005689b1
    LEA EDI,[ESP + 0x98]                ; 005689b8
    LEA ESI,[ESI + 0x508]               ; 005689bf
    MOVSD ES:EDI,ESI                    ; 005689c5
    MOVSD ES:EDI,ESI                    ; 005689c6
    MOVSD ES:EDI,ESI                    ; 005689c7
    MOV EAX,dword ptr [ESP + 0x114]     ; 005689c8
    FLD float ptr [ESP + 0x98]          ; 005689cf
    FMUL float ptr [EAX]                ; 005689d6
    FLD float ptr [ESP + 0x9c]          ; 005689d8
    FMUL float ptr [EAX + 0x4]          ; 005689df
    FLD float ptr [ESP + 0xa0]          ; 005689e2
    FMUL float ptr [EAX + 0x8]          ; 005689e9
    FXCH ST2                            ; 005689ec
    FST float ptr [ESP + 0x98]          ; 005689ee
    FLD float ptr [ESP + 0x118]         ; 005689f5
    FXCH                                ; 005689fc
    FMUL ST1                            ; 005689fe
    FXCH ST2                            ; 00568a00
    FST float ptr [ESP + 0x9c]          ; 00568a02
    FMUL ST1                            ; 00568a09
    FXCH ST3                            ; 00568a0b
    FST float ptr [ESP + 0xa0]          ; 00568a0d
    FMUL ST1                            ; 00568a14
    FLD1                                ; 00568a16
    MOV EBX,dword ptr [ESP + 0x10c]     ; 00568a18
    FSUBRP ST2,ST0                      ; 00568a1f
    LEA EDI,[ESP + 0xbc]                ; 00568a21
    LEA ESI,[ESP + 0x80]                ; 00568a28
    FXCH ST2                            ; 00568a2f
    FSTP float ptr [ESP + 0x80]         ; 00568a31
    FXCH ST2                            ; 00568a38
    FSTP float ptr [ESP + 0x84]         ; 00568a3a
    FSTP float ptr [ESP + 0x88]         ; 00568a41
    MOVSD ES:EDI,ESI                    ; 00568a48
    MOVSD ES:EDI,ESI                    ; 00568a49
    MOVSD ES:EDI,ESI                    ; 00568a4a
    FSTP float ptr [ESP + 0xd4]         ; 00568a4b
    FLD float ptr [EBX + 0x6a4]         ; 00568a52
    FMUL float ptr [ESP + 0xd4]         ; 00568a58
    FLD float ptr [EBX + 0x6a8]         ; 00568a5f
    FMUL float ptr [ESP + 0xd4]         ; 00568a65
    FLD float ptr [EBX + 0x6ac]         ; 00568a6c
    FMUL float ptr [ESP + 0xd4]         ; 00568a72
    ADD EBX,0x6a4                       ; 00568a79
    LEA EDI,[ESP + 0xc8]                ; 00568a7f
    LEA ESI,[ESP + 0x8c]                ; 00568a86
    FXCH ST2                            ; 00568a8d
    FSTP float ptr [ESP + 0x8c]         ; 00568a8f
    FSTP float ptr [ESP + 0x90]         ; 00568a96
    FSTP float ptr [ESP + 0x94]         ; 00568a9d
    MOVSD ES:EDI,ESI                    ; 00568aa4
    MOVSD ES:EDI,ESI                    ; 00568aa5
    MOVSD ES:EDI,ESI                    ; 00568aa6
    LEA EAX,[ESP + 0xb0]                ; 00568aa7
    FLD float ptr [ESP + 0xc8]          ; 00568aae
    FLD float ptr [ESP + 0xcc]          ; 00568ab5
    FLD float ptr [ESP + 0xd0]          ; 00568abc
    LEA EDI,[ESP + 0xb0]                ; 00568ac3
    LEA ESI,[ESP + 0xa4]                ; 00568aca
    FXCH ST2                            ; 00568ad1
    FADD float ptr [ESP + 0xbc]         ; 00568ad3
    FXCH                                ; 00568ada
    FADD float ptr [ESP + 0xc0]         ; 00568adc
    FXCH ST2                            ; 00568ae3
    FADD float ptr [ESP + 0xc4]         ; 00568ae5
    FXCH                                ; 00568aec
    FSTP float ptr [ESP + 0xa4]         ; 00568aee
    FXCH                                ; 00568af5
    FSTP float ptr [ESP + 0xa8]         ; 00568af7
    FSTP float ptr [ESP + 0xac]         ; 00568afe
    MOVSD ES:EDI,ESI                    ; 00568b05
    MOVSD ES:EDI,ESI                    ; 00568b06
    MOVSD ES:EDI,ESI                    ; 00568b07
    CMP EBX,EAX                         ; 00568b08
    JZ 0x0056887c                       ; 00568b0a
        ;   XREF to: 0056887c (CONDITIONAL_JUMP)  ; LAB_0056887c
    MOV EAX,dword ptr [ESP + 0xb0]      ; 00568b10
    MOV dword ptr [EBX],EAX             ; 00568b17
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00568b19
    MOV dword ptr [EBX + 0x4],EAX       ; 00568b20
    MOV EAX,dword ptr [ESP + 0xb8]      ; 00568b23
    MOV dword ptr [EBX + 0x8],EAX       ; 00568b2a
    ADD ESP,0xf8                        ; 00568b2d
    POP EBP                             ; 00568b33
    POP EDI                             ; 00568b34
    POP ESI                             ; 00568b35
    POP EBX                             ; 00568b36
    RET                                 ; 00568b37
    CMP ECX,0x1                         ; 00568b38
        ;   Label: LAB_00568b38
    JNZ 0x00568cbb                      ; 00568b3b
        ;   XREF to: 00568cbb (CONDITIONAL_JUMP)  ; LAB_00568cbb
    MOV EDX,dword ptr [EAX + 0x1de78]   ; 00568b41
    XOR EBP,EBP                         ; 00568b47
    TEST EDX,EDX                        ; 00568b49
    JLE 0x005689a3                      ; 00568b4b
        ;   XREF to: 005689a3 (CONDITIONAL_JUMP)  ; LAB_005689a3
    MOV EBX,dword ptr [ESP + 0x110]     ; 00568b51
    MOV dword ptr [ESP + 0xe0],EAX      ; 00568b58
    MOV dword ptr [ESP + 0xe8],ESI      ; 00568b5f
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00568b66
    MOV dword ptr [ESP + 0xd8],ESI      ; 00568b6d
    MOV dword ptr [ESP + 0xec],EAX      ; 00568b74
    MOV ECX,dword ptr [ESP + 0x11c]     ; 00568b7b
        ;   Label: LAB_00568b7b
    PUSH ECX                            ; 00568b82
    PUSH EBP                            ; 00568b83
    MOV ESI,dword ptr [ESP + 0xf8]      ; 00568b84
    PUSH ESI                            ; 00568b8b
    CALL core_skeleton.cpp_FUN_00563630 ; 00568b8c
        ;   XREF to: 00563630 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00563630(CSkeleton * this_ptr, int start_bone_index, int target_bone_index)
    ADD ESP,0xc                         ; 00568b91
    TEST EAX,EAX                        ; 00568b94
    JL 0x00568bec                       ; 00568b96
        ;   XREF to: 00568bec (CONDITIONAL_JUMP)  ; LAB_00568bec
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00568b98
    MOV EAX,dword ptr [EAX + 0x1de9c]   ; 00568b9f
    TEST EAX,EAX                        ; 00568ba5
    JGE 0x00568c3d                      ; 00568ba7
        ;   XREF to: 00568c3d (CONDITIONAL_JUMP)  ; LAB_00568c3d
    LEA EDI,[ESP + 0x10]                ; 00568bad
    MOV ESI,EBX                         ; 00568bb1
    MOVSD ES:EDI,ESI                    ; 00568bb3
        ;   Label: LAB_00568bb3
    MOVSD ES:EDI,ESI                    ; 00568bb4
    MOVSD ES:EDI,ESI                    ; 00568bb5
    MOVSD ES:EDI,ESI                    ; 00568bb6
    LEA EAX,[ESP + 0x10]                ; 00568bb7
    PUSH dword ptr [ESP + 0x118]        ; 00568bbb
    PUSH EAX                            ; 00568bc2
    MOV ECX,dword ptr [ESP + 0xf0]      ; 00568bc3
    PUSH ECX                            ; 00568bca
    LEA ESI,[ESP + 0x6c]                ; 00568bcb
    CALL core_xform.cpp_FUN_005b7940    ; 00568bcf
        ;   XREF to: 005b7940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b7940()
    ADD ESP,0xc                         ; 00568bd4
    MOV EDI,dword ptr [ESP + 0xec]      ; 00568bd7
    LEA ESI,[ESP + 0x60]                ; 00568bde
    LEA EDI,[EDI + 0x6b0]               ; 00568be2
    MOVSD ES:EDI,ESI                    ; 00568be8
    MOVSD ES:EDI,ESI                    ; 00568be9
    MOVSD ES:EDI,ESI                    ; 00568bea
    MOVSD ES:EDI,ESI                    ; 00568beb
    MOV ESI,dword ptr [ESP + 0xe0]      ; 00568bec
        ;   Label: LAB_00568bec
    MOV EDI,dword ptr [ESP + 0xec]      ; 00568bf3
    MOV EAX,dword ptr [ESP + 0xe8]      ; 00568bfa
    ADD EBX,0x10                        ; 00568c01
    INC EBP                             ; 00568c04
    ADD EAX,0x10                        ; 00568c05
    ADD ESI,0x24                        ; 00568c08
    MOV dword ptr [ESP + 0xe8],EAX      ; 00568c0b
    MOV EAX,dword ptr [ESP + 0xf0]      ; 00568c12
    ADD EDI,0x10                        ; 00568c19
    MOV dword ptr [ESP + 0xe0],ESI      ; 00568c1c
    MOV EDX,dword ptr [EAX + 0x1de78]   ; 00568c23
    MOV dword ptr [ESP + 0xec],EDI      ; 00568c29
    CMP EBP,EDX                         ; 00568c30
    JGE 0x005689a3                      ; 00568c32
        ;   XREF to: 005689a3 (CONDITIONAL_JUMP)  ; LAB_005689a3
    JMP 0x00568b7b                      ; 00568c38
        ;   XREF to: 00568b7b (UNCONDITIONAL_JUMP)  ; LAB_00568b7b
    SHL EAX,0x4                         ; 00568c3d
        ;   Label: LAB_00568c3d
    MOV dword ptr [ESP + 0xf4],EAX      ; 00568c40
    MOV EAX,dword ptr [ESP + 0x110]     ; 00568c47
    ADD EAX,dword ptr [ESP + 0xf4]      ; 00568c4e
    PUSH EAX                            ; 00568c55
    LEA ESI,[ESP + 0x24]                ; 00568c56
    LEA EDI,[ESP + 0x44]                ; 00568c5a
    CALL core_xform.cpp_negateFirstComponent_FUN_005b7750 ; 00568c5e
        ;   XREF to: 005b7750 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_negateFirstComponent_FUN_005b7750()
    ADD ESP,0x4                         ; 00568c63
    LEA EAX,[ESP + 0x40]                ; 00568c66
    LEA ESI,[ESP + 0x20]                ; 00568c6a
    PUSH EAX                            ; 00568c6e
    MOVSD ES:EDI,ESI                    ; 00568c6f
    MOVSD ES:EDI,ESI                    ; 00568c70
    MOVSD ES:EDI,ESI                    ; 00568c71
    MOVSD ES:EDI,ESI                    ; 00568c72
    PUSH EBX                            ; 00568c73
    LEA ESI,[ESP + 0x78]                ; 00568c74
    CALL core_xform.cpp_multiplyQuaternion_FUN_005b77b0 ; 00568c78
        ;   XREF to: 005b77b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_005b77b0()
    ADD ESP,0x8                         ; 00568c7d
    MOV EAX,dword ptr [ESP + 0xd8]      ; 00568c80
    MOV EDX,dword ptr [ESP + 0xf4]      ; 00568c87
    LEA EDI,[ESP + 0x30]                ; 00568c8e
    ADD EAX,EDX                         ; 00568c92
    LEA ESI,[ESP + 0x70]                ; 00568c94
    PUSH EAX                            ; 00568c98
    LEA EAX,[ESP + 0x34]                ; 00568c99
    MOVSD ES:EDI,ESI                    ; 00568c9d
    MOVSD ES:EDI,ESI                    ; 00568c9e
    MOVSD ES:EDI,ESI                    ; 00568c9f
    MOVSD ES:EDI,ESI                    ; 00568ca0
    PUSH EAX                            ; 00568ca1
    LEA ESI,[ESP + 0x58]                ; 00568ca2
    LEA EDI,[ESP + 0x18]                ; 00568ca6
    CALL core_xform.cpp_multiplyQuaternion_FUN_005b77b0 ; 00568caa
        ;   XREF to: 005b77b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_005b77b0()
    LEA ESI,[ESP + 0x58]                ; 00568caf
    ADD ESP,0x8                         ; 00568cb3
    JMP 0x00568bb3                      ; 00568cb6
        ;   XREF to: 00568bb3 (UNCONDITIONAL_JUMP)  ; LAB_00568bb3
    MOV EBP,0x5f24f9                    ; 00568cbb | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_00568cbb
    MOV EAX,0xaf4                       ; 00568cc0
    PUSH 0x5f250e                       ; 00568cc5 | = "Write me!"
    MOV dword ptr [0x01d1d400],EBP      ; 00568cca | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 00568cd0 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00568cd5
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00568cda
    JMP 0x005689a3                      ; 00568cdd
        ;   XREF to: 005689a3 (UNCONDITIONAL_JUMP)  ; LAB_005689a3

