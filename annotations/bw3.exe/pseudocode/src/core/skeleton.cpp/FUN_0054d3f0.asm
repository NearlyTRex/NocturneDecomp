; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_FUN_0054d3f0(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,CVector3f *source_position,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)
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
;   core_skeleton.cpp_CDeformableModelInstance_blendWithPoseData_FUN_0054d3c0 at 0054d3dd
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005d1ffc
;   TerminatedCString s_Write_me_005d2011
;   undefined4 DAT_005d201c
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;   core_skeleton.cpp_FUN_005481d0
;   core_xform.cpp_FUN_00585b20
;   core_xform.cpp_multiplyQuaternion_FUN_00585990
;   core_xform.cpp_negateFirstComponent_FUN_00585930
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054d3f0
        ;   Label: core_skeleton.cpp_FUN_0054d3f0
    PUSH ESI                            ; 0054d3f1
    PUSH EDI                            ; 0054d3f2
    PUSH EBP                            ; 0054d3f3
    SUB ESP,0xf8                        ; 0054d3f4
    FLD float ptr [ESP + 0x118]         ; 0054d3fa
    FCOMP double ptr [0x005d201c]       ; 0054d401 | DAT_005d201c
    FNSTSW AX                           ; 0054d407
    SAHF                                ; 0054d409
    JA 0x0054d417                       ; 0054d40a
        ;   XREF to: 0054d417 (CONDITIONAL_JUMP)  ; LAB_0054d417
    ADD ESP,0xf8                        ; 0054d40c
        ;   Label: LAB_0054d40c
    POP EBP                             ; 0054d412
    POP EDI                             ; 0054d413
    POP ESI                             ; 0054d414
    POP EBX                             ; 0054d415
    RET                                 ; 0054d416
    MOV EDX,dword ptr [ESP + 0x10c]     ; 0054d417
        ;   Label: LAB_0054d417
    PUSH EDX                            ; 0054d41e
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 0054d41f
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054d424
    MOV EBX,dword ptr [ESP + 0x10c]     ; 0054d427
    MOV ESI,dword ptr [ESP + 0x10c]     ; 0054d42e
    MOV dword ptr [ESP + 0xf0],EAX      ; 0054d435
    MOV ECX,dword ptr [EBX + 0x2340]    ; 0054d43c
    ADD ESI,0x6b0                       ; 0054d442
    TEST ECX,ECX                        ; 0054d448
    JNZ 0x0054d6c8                      ; 0054d44a
        ;   XREF to: 0054d6c8 (CONDITIONAL_JUMP)  ; LAB_0054d6c8
    MOV ECX,dword ptr [EAX + 0x1de78]   ; 0054d450
    XOR EBX,EBX                         ; 0054d456
    TEST ECX,ECX                        ; 0054d458
    JLE 0x0054d533                      ; 0054d45a
        ;   XREF to: 0054d533 (CONDITIONAL_JUMP)  ; LAB_0054d533
    MOV EAX,dword ptr [ESP + 0x10c]     ; 0054d460
    MOV EBP,dword ptr [ESP + 0x110]     ; 0054d467
    MOV dword ptr [ESP + 0xe4],ESI      ; 0054d46e
    MOV dword ptr [ESP + 0xdc],EAX      ; 0054d475
    MOV ECX,dword ptr [ESP + 0x11c]     ; 0054d47c
        ;   Label: LAB_0054d47c
    PUSH ECX                            ; 0054d483
    PUSH EBX                            ; 0054d484
    MOV ESI,dword ptr [ESP + 0xf8]      ; 0054d485
    PUSH ESI                            ; 0054d48c
    CALL core_skeleton.cpp_FUN_005481d0 ; 0054d48d
        ;   XREF to: 005481d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_005481d0(CSkeleton * this_ptr, int start_bone_index, int target_bone_index)
    ADD ESP,0xc                         ; 0054d492
    TEST EAX,EAX                        ; 0054d495
    JL 0x0054d4f8                       ; 0054d497
        ;   XREF to: 0054d4f8 (CONDITIONAL_JUMP)  ; LAB_0054d4f8
    MOV EDI,dword ptr [ESP + 0x10c]     ; 0054d499
    PUSH EDI                            ; 0054d4a0
    PUSH EAX                            ; 0054d4a1
    MOV EAX,dword ptr [ESP + 0x124]     ; 0054d4a2
    PUSH dword ptr [ESP + 0x120]        ; 0054d4a9
    PUSH EAX                            ; 0054d4b0
    PUSH EBX                            ; 0054d4b1
    CALL dword ptr [ESP + 0x134]        ; 0054d4b2
    MOV dword ptr [ESP + 0x108],EAX     ; 0054d4b9
    FLD float ptr [ESP + 0x108]         ; 0054d4c0
    ADD ESP,0x14                        ; 0054d4c7
    SUB ESP,0x4                         ; 0054d4ca
    FSTP float ptr [ESP]                ; 0054d4cd
    PUSH EBP                            ; 0054d4d0
    MOV EDX,dword ptr [ESP + 0xec]      ; 0054d4d1
    PUSH EDX                            ; 0054d4d8
    LEA ESI,[ESP + 0xc]                 ; 0054d4d9
    CALL core_xform.cpp_FUN_00585b20    ; 0054d4dd
        ;   XREF to: 00585b20 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00585b20()
    ADD ESP,0xc                         ; 0054d4e2
    MOV EDI,dword ptr [ESP + 0xdc]      ; 0054d4e5
    MOV ESI,ESP                         ; 0054d4ec
    LEA EDI,[EDI + 0x6b0]               ; 0054d4ee
    MOVSD ES:EDI,ESI                    ; 0054d4f4
    MOVSD ES:EDI,ESI                    ; 0054d4f5
    MOVSD ES:EDI,ESI                    ; 0054d4f6
    MOVSD ES:EDI,ESI                    ; 0054d4f7
    MOV ESI,dword ptr [ESP + 0xdc]      ; 0054d4f8
        ;   Label: LAB_0054d4f8
    MOV EDI,dword ptr [ESP + 0xe4]      ; 0054d4ff
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0054d506
    ADD EBP,0x10                        ; 0054d50d
    INC EBX                             ; 0054d510
    ADD ESI,0x10                        ; 0054d511
    ADD EDI,0x10                        ; 0054d514
    MOV EDX,dword ptr [EAX + 0x1de78]   ; 0054d517
    MOV dword ptr [ESP + 0xdc],ESI      ; 0054d51d
    MOV dword ptr [ESP + 0xe4],EDI      ; 0054d524
    CMP EBX,EDX                         ; 0054d52b
    JL 0x0054d47c                       ; 0054d52d
        ;   XREF to: 0054d47c (CONDITIONAL_JUMP)  ; LAB_0054d47c
    CMP dword ptr [ESP + 0x11c],0x0     ; 0054d533
        ;   Label: LAB_0054d533
    JGE 0x0054d40c                      ; 0054d53b
        ;   XREF to: 0054d40c (CONDITIONAL_JUMP)  ; LAB_0054d40c
    MOV ESI,dword ptr [ESP + 0x10c]     ; 0054d541
    LEA EDI,[ESP + 0x98]                ; 0054d548
    LEA ESI,[ESI + 0x508]               ; 0054d54f
    MOVSD ES:EDI,ESI                    ; 0054d555
    MOVSD ES:EDI,ESI                    ; 0054d556
    MOVSD ES:EDI,ESI                    ; 0054d557
    MOV EAX,dword ptr [ESP + 0x114]     ; 0054d558
    FLD float ptr [ESP + 0x98]          ; 0054d55f
    FMUL float ptr [EAX]                ; 0054d566
    FLD float ptr [ESP + 0x9c]          ; 0054d568
    FMUL float ptr [EAX + 0x4]          ; 0054d56f
    FLD float ptr [ESP + 0xa0]          ; 0054d572
    FMUL float ptr [EAX + 0x8]          ; 0054d579
    FXCH ST2                            ; 0054d57c
    FST float ptr [ESP + 0x98]          ; 0054d57e
    FLD float ptr [ESP + 0x118]         ; 0054d585
    FXCH                                ; 0054d58c
    FMUL ST1                            ; 0054d58e
    FXCH ST2                            ; 0054d590
    FST float ptr [ESP + 0x9c]          ; 0054d592
    FMUL ST1                            ; 0054d599
    FXCH ST3                            ; 0054d59b
    FST float ptr [ESP + 0xa0]          ; 0054d59d
    FMUL ST1                            ; 0054d5a4
    FLD1                                ; 0054d5a6
    MOV EBX,dword ptr [ESP + 0x10c]     ; 0054d5a8
    FSUBRP ST2,ST0                      ; 0054d5af
    LEA EDI,[ESP + 0xbc]                ; 0054d5b1
    LEA ESI,[ESP + 0x80]                ; 0054d5b8
    FXCH ST2                            ; 0054d5bf
    FSTP float ptr [ESP + 0x80]         ; 0054d5c1
    FXCH ST2                            ; 0054d5c8
    FSTP float ptr [ESP + 0x84]         ; 0054d5ca
    FSTP float ptr [ESP + 0x88]         ; 0054d5d1
    MOVSD ES:EDI,ESI                    ; 0054d5d8
    MOVSD ES:EDI,ESI                    ; 0054d5d9
    MOVSD ES:EDI,ESI                    ; 0054d5da
    FSTP float ptr [ESP + 0xd4]         ; 0054d5db
    FLD float ptr [EBX + 0x6a4]         ; 0054d5e2
    FMUL float ptr [ESP + 0xd4]         ; 0054d5e8
    FLD float ptr [EBX + 0x6a8]         ; 0054d5ef
    FMUL float ptr [ESP + 0xd4]         ; 0054d5f5
    FLD float ptr [EBX + 0x6ac]         ; 0054d5fc
    FMUL float ptr [ESP + 0xd4]         ; 0054d602
    ADD EBX,0x6a4                       ; 0054d609
    LEA EDI,[ESP + 0xc8]                ; 0054d60f
    LEA ESI,[ESP + 0x8c]                ; 0054d616
    FXCH ST2                            ; 0054d61d
    FSTP float ptr [ESP + 0x8c]         ; 0054d61f
    FSTP float ptr [ESP + 0x90]         ; 0054d626
    FSTP float ptr [ESP + 0x94]         ; 0054d62d
    MOVSD ES:EDI,ESI                    ; 0054d634
    MOVSD ES:EDI,ESI                    ; 0054d635
    MOVSD ES:EDI,ESI                    ; 0054d636
    LEA EAX,[ESP + 0xb0]                ; 0054d637
    FLD float ptr [ESP + 0xc8]          ; 0054d63e
    FLD float ptr [ESP + 0xcc]          ; 0054d645
    FLD float ptr [ESP + 0xd0]          ; 0054d64c
    LEA EDI,[ESP + 0xb0]                ; 0054d653
    LEA ESI,[ESP + 0xa4]                ; 0054d65a
    FXCH ST2                            ; 0054d661
    FADD float ptr [ESP + 0xbc]         ; 0054d663
    FXCH                                ; 0054d66a
    FADD float ptr [ESP + 0xc0]         ; 0054d66c
    FXCH ST2                            ; 0054d673
    FADD float ptr [ESP + 0xc4]         ; 0054d675
    FXCH                                ; 0054d67c
    FSTP float ptr [ESP + 0xa4]         ; 0054d67e
    FXCH                                ; 0054d685
    FSTP float ptr [ESP + 0xa8]         ; 0054d687
    FSTP float ptr [ESP + 0xac]         ; 0054d68e
    MOVSD ES:EDI,ESI                    ; 0054d695
    MOVSD ES:EDI,ESI                    ; 0054d696
    MOVSD ES:EDI,ESI                    ; 0054d697
    CMP EBX,EAX                         ; 0054d698
    JZ 0x0054d40c                       ; 0054d69a
        ;   XREF to: 0054d40c (CONDITIONAL_JUMP)  ; LAB_0054d40c
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0054d6a0
    MOV dword ptr [EBX],EAX             ; 0054d6a7
    MOV EAX,dword ptr [ESP + 0xb4]      ; 0054d6a9
    MOV dword ptr [EBX + 0x4],EAX       ; 0054d6b0
    MOV EAX,dword ptr [ESP + 0xb8]      ; 0054d6b3
    MOV dword ptr [EBX + 0x8],EAX       ; 0054d6ba
    ADD ESP,0xf8                        ; 0054d6bd
    POP EBP                             ; 0054d6c3
    POP EDI                             ; 0054d6c4
    POP ESI                             ; 0054d6c5
    POP EBX                             ; 0054d6c6
    RET                                 ; 0054d6c7
    CMP ECX,0x1                         ; 0054d6c8
        ;   Label: LAB_0054d6c8
    JNZ 0x0054d84b                      ; 0054d6cb
        ;   XREF to: 0054d84b (CONDITIONAL_JUMP)  ; LAB_0054d84b
    MOV EDX,dword ptr [EAX + 0x1de78]   ; 0054d6d1
    XOR EBP,EBP                         ; 0054d6d7
    TEST EDX,EDX                        ; 0054d6d9
    JLE 0x0054d533                      ; 0054d6db
        ;   XREF to: 0054d533 (CONDITIONAL_JUMP)  ; LAB_0054d533
    MOV EBX,dword ptr [ESP + 0x110]     ; 0054d6e1
    MOV dword ptr [ESP + 0xe0],EAX      ; 0054d6e8
    MOV dword ptr [ESP + 0xe8],ESI      ; 0054d6ef
    MOV EAX,dword ptr [ESP + 0x10c]     ; 0054d6f6
    MOV dword ptr [ESP + 0xd8],ESI      ; 0054d6fd
    MOV dword ptr [ESP + 0xec],EAX      ; 0054d704
    MOV ECX,dword ptr [ESP + 0x11c]     ; 0054d70b
        ;   Label: LAB_0054d70b
    PUSH ECX                            ; 0054d712
    PUSH EBP                            ; 0054d713
    MOV ESI,dword ptr [ESP + 0xf8]      ; 0054d714
    PUSH ESI                            ; 0054d71b
    CALL core_skeleton.cpp_FUN_005481d0 ; 0054d71c
        ;   XREF to: 005481d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_005481d0(CSkeleton * this_ptr, int start_bone_index, int target_bone_index)
    ADD ESP,0xc                         ; 0054d721
    TEST EAX,EAX                        ; 0054d724
    JL 0x0054d77c                       ; 0054d726
        ;   XREF to: 0054d77c (CONDITIONAL_JUMP)  ; LAB_0054d77c
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0054d728
    MOV EAX,dword ptr [EAX + 0x1de9c]   ; 0054d72f
    TEST EAX,EAX                        ; 0054d735
    JGE 0x0054d7cd                      ; 0054d737
        ;   XREF to: 0054d7cd (CONDITIONAL_JUMP)  ; LAB_0054d7cd
    LEA EDI,[ESP + 0x10]                ; 0054d73d
    MOV ESI,EBX                         ; 0054d741
    MOVSD ES:EDI,ESI                    ; 0054d743
        ;   Label: LAB_0054d743
    MOVSD ES:EDI,ESI                    ; 0054d744
    MOVSD ES:EDI,ESI                    ; 0054d745
    MOVSD ES:EDI,ESI                    ; 0054d746
    LEA EAX,[ESP + 0x10]                ; 0054d747
    PUSH dword ptr [ESP + 0x118]        ; 0054d74b
    PUSH EAX                            ; 0054d752
    MOV ECX,dword ptr [ESP + 0xf0]      ; 0054d753
    PUSH ECX                            ; 0054d75a
    LEA ESI,[ESP + 0x6c]                ; 0054d75b
    CALL core_xform.cpp_FUN_00585b20    ; 0054d75f
        ;   XREF to: 00585b20 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00585b20()
    ADD ESP,0xc                         ; 0054d764
    MOV EDI,dword ptr [ESP + 0xec]      ; 0054d767
    LEA ESI,[ESP + 0x60]                ; 0054d76e
    LEA EDI,[EDI + 0x6b0]               ; 0054d772
    MOVSD ES:EDI,ESI                    ; 0054d778
    MOVSD ES:EDI,ESI                    ; 0054d779
    MOVSD ES:EDI,ESI                    ; 0054d77a
    MOVSD ES:EDI,ESI                    ; 0054d77b
    MOV ESI,dword ptr [ESP + 0xe0]      ; 0054d77c
        ;   Label: LAB_0054d77c
    MOV EDI,dword ptr [ESP + 0xec]      ; 0054d783
    MOV EAX,dword ptr [ESP + 0xe8]      ; 0054d78a
    ADD EBX,0x10                        ; 0054d791
    INC EBP                             ; 0054d794
    ADD EAX,0x10                        ; 0054d795
    ADD ESI,0x24                        ; 0054d798
    MOV dword ptr [ESP + 0xe8],EAX      ; 0054d79b
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0054d7a2
    ADD EDI,0x10                        ; 0054d7a9
    MOV dword ptr [ESP + 0xe0],ESI      ; 0054d7ac
    MOV EDX,dword ptr [EAX + 0x1de78]   ; 0054d7b3
    MOV dword ptr [ESP + 0xec],EDI      ; 0054d7b9
    CMP EBP,EDX                         ; 0054d7c0
    JGE 0x0054d533                      ; 0054d7c2
        ;   XREF to: 0054d533 (CONDITIONAL_JUMP)  ; LAB_0054d533
    JMP 0x0054d70b                      ; 0054d7c8
        ;   XREF to: 0054d70b (UNCONDITIONAL_JUMP)  ; LAB_0054d70b
    SHL EAX,0x4                         ; 0054d7cd
        ;   Label: LAB_0054d7cd
    MOV dword ptr [ESP + 0xf4],EAX      ; 0054d7d0
    MOV EAX,dword ptr [ESP + 0x110]     ; 0054d7d7
    ADD EAX,dword ptr [ESP + 0xf4]      ; 0054d7de
    PUSH EAX                            ; 0054d7e5
    LEA ESI,[ESP + 0x24]                ; 0054d7e6
    LEA EDI,[ESP + 0x44]                ; 0054d7ea
    CALL core_xform.cpp_negateFirstComponent_FUN_00585930 ; 0054d7ee
        ;   XREF to: 00585930 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_negateFirstComponent_FUN_00585930()
    ADD ESP,0x4                         ; 0054d7f3
    LEA EAX,[ESP + 0x40]                ; 0054d7f6
    LEA ESI,[ESP + 0x20]                ; 0054d7fa
    PUSH EAX                            ; 0054d7fe
    MOVSD ES:EDI,ESI                    ; 0054d7ff
    MOVSD ES:EDI,ESI                    ; 0054d800
    MOVSD ES:EDI,ESI                    ; 0054d801
    MOVSD ES:EDI,ESI                    ; 0054d802
    PUSH EBX                            ; 0054d803
    LEA ESI,[ESP + 0x78]                ; 0054d804
    CALL core_xform.cpp_multiplyQuaternion_FUN_00585990 ; 0054d808
        ;   XREF to: 00585990 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00585990()
    ADD ESP,0x8                         ; 0054d80d
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0054d810
    MOV EDX,dword ptr [ESP + 0xf4]      ; 0054d817
    LEA EDI,[ESP + 0x30]                ; 0054d81e
    ADD EAX,EDX                         ; 0054d822
    LEA ESI,[ESP + 0x70]                ; 0054d824
    PUSH EAX                            ; 0054d828
    LEA EAX,[ESP + 0x34]                ; 0054d829
    MOVSD ES:EDI,ESI                    ; 0054d82d
    MOVSD ES:EDI,ESI                    ; 0054d82e
    MOVSD ES:EDI,ESI                    ; 0054d82f
    MOVSD ES:EDI,ESI                    ; 0054d830
    PUSH EAX                            ; 0054d831
    LEA ESI,[ESP + 0x58]                ; 0054d832
    LEA EDI,[ESP + 0x18]                ; 0054d836
    CALL core_xform.cpp_multiplyQuaternion_FUN_00585990 ; 0054d83a
        ;   XREF to: 00585990 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00585990()
    LEA ESI,[ESP + 0x58]                ; 0054d83f
    ADD ESP,0x8                         ; 0054d843
    JMP 0x0054d743                      ; 0054d846
        ;   XREF to: 0054d743 (UNCONDITIONAL_JUMP)  ; LAB_0054d743
    MOV EBP,0x5d1ffc                    ; 0054d84b | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_0054d84b
    MOV EAX,0xaeb                       ; 0054d850
    PUSH 0x5d2011                       ; 0054d855 | = "Write me!"
    MOV dword ptr [0x01d71de0],EBP      ; 0054d85a | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 0054d860 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0054d865
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0054d86a
    JMP 0x0054d533                      ; 0054d86d
        ;   XREF to: 0054d533 (UNCONDITIONAL_JUMP)  ; LAB_0054d533

