; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_scat_cpp_CScat_blendAimBones_FUN_005584a0(CScat *this_ptr,int hand_index)
;
; Parameters:
; CScat *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
; Local Variables:
; float[1521]      Stack[-0x1938]:6084  afStackY_1938
; float            Stack[-0x160]:4  local_160
; CQuaternion4f    Stack[-0x15c]:16  local_15c
; CQuaternion4f    Stack[-0x14c]:16  local_14c
; CQuaternion4f    Stack[-0x13c]:16  local_13c
; CQuaternion4f    Stack[-0x12c]:16  local_12c
; CQuaternion4f    Stack[-0x11c]:16  local_11c
; CQuaternion4f    Stack[-0x10c]:16  local_10c
; CQuaternion4f    Stack[-0xfc]:16  local_fc
; CQuaternion4f    Stack[-0xec]:16  local_ec
; CQuaternion4f    Stack[-0xdc]:16  local_dc
; CQuaternion4f    Stack[-0xcc]:16  local_cc
; CQuaternion4f    Stack[-0xbc]:16  local_bc
; CQuaternion4f    Stack[-0xac]:16  local_ac
; CQuaternion4f    Stack[-0x9c]:16  local_9c
; CQuaternion4f    Stack[-0x8c]:16  local_8c
; CQuaternion4f    Stack[-0x7c]:16  local_7c
; CQuaternion4f    Stack[-0x6c]:16  local_6c
; CQuaternion4f    Stack[-0x5c]:16  local_5c
; CQuaternion4f    Stack[-0x4c]:16  local_4c
; CQuaternion4f    Stack[-0x3c]:16  local_3c
; CQuaternion4f    Stack[-0x2c]:16  local_2c
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_scat.cpp_CScat_blendLayerAction_FUN_005582c0 at 00558486
;
; Referenced Globals:
;   CQuaternion4f CQuaternion4f_00665998
;   undefined4 g_ScatIndices[3]
;   undefined4 g_ScatIndices[4]
;   undefined4 g_ScatIndices[5]
;   undefined4 g_ScatIndices[6]
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
;   core_xform.cpp_multiplyQuaternion_FUN_005f7640
;   core_xform.cpp_quaternionFromAngleX_FUN_005f79b0
;   core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
;   core_xform.cpp_quaternionFromAngleZ_FUN_005f7a30
;   core_xform.cpp_slerpQuaternion_FUN_005f77e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005584a0
        ;   Label: core_scat.cpp_CScat_blendAimBones_FUN_005584a0
    PUSH ESI                            ; 005584a1
    PUSH EDI                            ; 005584a2
    PUSH EBP                            ; 005584a3
    MOV EBP,ESP                         ; 005584a4
    SUB ESP,0x14c                       ; 005584a6
    AND ESP,0xfffffff8                  ; 005584ac
    MOV EBX,dword ptr [EBP + 0x14]      ; 005584af
    CMP dword ptr [EBP + 0x18],0x0      ; 005584b2
    JZ 0x00558538                       ; 005584b6
        ;   XREF to: 00558538 (CONDITIONAL_JUMP)  ; LAB_00558538
    MOV ESI,dword ptr [0x0310616c]      ; 005584bc | g_ScatIndices[4]
    MOV dword ptr [ESP + 0x144],ESI     ; 005584c2
    MOV ESI,dword ptr [0x03106174]      ; 005584c9 | g_ScatIndices[6]
    PUSH 0xbfc90fdb                     ; 005584cf
    MOV dword ptr [ESP + 0x14c],ESI     ; 005584d4
    LEA ESI,[ESP + 0xb8]                ; 005584db
    LEA EDI,[ESP + 0x68]                ; 005584e2
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0 ; 005584e6
        ;   XREF to: 005f79f0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleY_FUN_005f79f0(float angle_radians, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0xb8]                ; 005584eb
    ADD ESP,0x4                         ; 005584f2
    MOVSD ES:EDI,ESI                    ; 005584f5
    MOVSD ES:EDI,ESI                    ; 005584f6
    MOVSD ES:EDI,ESI                    ; 005584f7
    MOVSD ES:EDI,ESI                    ; 005584f8
    PUSH 0xbfc90fdb                     ; 005584f9
    LEA ESI,[ESP + 0xc8]                ; 005584fe
    LEA EDI,[ESP + 0x28]                ; 00558505
    CALL core_xform.cpp_quaternionFromAngleZ_FUN_005f7a30 ; 00558509
        ;   XREF to: 005f7a30 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleZ_FUN_005f7a30(float angle_radians, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0xc8]                ; 0055850e
    ADD ESP,0x4                         ; 00558515
        ;   Label: LAB_00558515
    JMP 0x006057a9                      ; 00558518
        ;   XREF to: 006057a9 (UNCONDITIONAL_JUMP)  ; LAB_006057a9
    MOV dword ptr [ESP],ESI             ; 00558522
        ;   Label: LAB_00558522
    FLD float ptr [ESP]                 ; 00558525
    FLDZ                                ; 00558528
    FCOMPP                              ; 0055852a
    FNSTSW AX                           ; 0055852c
    SAHF                                ; 0055852e
    JC 0x00558593                       ; 0055852f
        ;   XREF to: 00558593 (CONDITIONAL_JUMP)  ; LAB_00558593
    MOV ESP,EBP                         ; 00558531
    POP EBP                             ; 00558533
    POP EDI                             ; 00558534
    POP ESI                             ; 00558535
    POP EBX                             ; 00558536
    RET                                 ; 00558537
    MOV ESI,dword ptr [0x03106168]      ; 00558538 | g_ScatIndices[3]
        ;   Label: LAB_00558538
    MOV dword ptr [ESP + 0x144],ESI     ; 0055853e
    MOV ESI,dword ptr [0x03106170]      ; 00558545 | g_ScatIndices[5]
    PUSH 0x3fc90fdb                     ; 0055854b
    MOV dword ptr [ESP + 0x14c],ESI     ; 00558550
    LEA ESI,[ESP + 0x98]                ; 00558557
    LEA EDI,[ESP + 0x68]                ; 0055855e
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0 ; 00558562
        ;   XREF to: 005f79f0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleY_FUN_005f79f0(float angle_radians, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x98]                ; 00558567
    ADD ESP,0x4                         ; 0055856e
    MOVSD ES:EDI,ESI                    ; 00558571
    MOVSD ES:EDI,ESI                    ; 00558572
    MOVSD ES:EDI,ESI                    ; 00558573
    MOVSD ES:EDI,ESI                    ; 00558574
    PUSH 0x3fc90fdb                     ; 00558575
    LEA ESI,[ESP + 0xa8]                ; 0055857a
    LEA EDI,[ESP + 0x28]                ; 00558581
    CALL core_xform.cpp_quaternionFromAngleZ_FUN_005f7a30 ; 00558585
        ;   XREF to: 005f7a30 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleZ_FUN_005f7a30(float angle_radians, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0xa8]                ; 0055858a
    JMP 0x00558515                      ; 00558591
        ;   XREF to: 00558515 (UNCONDITIONAL_JUMP)  ; LAB_00558515
    PUSH dword ptr [EBX + 0x1fbf0]      ; 00558593
        ;   Label: LAB_00558593
    LEA ESI,[ESP + 0xe8]                ; 00558599
    LEA EDI,[ESP + 0x58]                ; 005585a0
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0 ; 005585a4
        ;   XREF to: 005f79f0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleY_FUN_005f79f0(float angle_radians, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0xe8]                ; 005585a9
    ADD ESP,0x4                         ; 005585b0
    JMP 0x006057d0                      ; 005585b3
        ;   XREF to: 006057d0 (UNCONDITIONAL_JUMP)  ; LAB_006057d0
    PUSH ESI                            ; 005585bb
        ;   Label: LAB_005585bb
    PUSH dword ptr [EBX + 0x1fbec]      ; 005585bc
    LEA ESI,[ESP + 0x1c]                ; 005585c2
    LEA EDI,[ESP + 0x4c]                ; 005585c6
    CALL core_xform.cpp_quaternionFromAngleX_FUN_005f79b0 ; 005585ca
        ;   XREF to: 005f79b0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleX_FUN_005f79b0(float angle_radians, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x1c]                ; 005585cf
    ADD ESP,0x4                         ; 005585d3
    JMP 0x006057f5                      ; 005585d6
        ;   XREF to: 006057f5 (UNCONDITIONAL_JUMP)  ; LAB_006057f5
    PUSH ESI                            ; 005585de
        ;   Label: LAB_005585de
    LEA ESI,[ESP + 0xc]                 ; 005585df
    LEA EDI,[ESP + 0x3c]                ; 005585e3
    CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640 ; 005585e7
        ;   XREF to: 005f7640 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_005f7640(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0xc]                 ; 005585ec
    ADD ESP,0x8                         ; 005585f0
    JMP 0x0060581a                      ; 005585f3
        ;   XREF to: 0060581a (UNCONDITIONAL_JUMP)  ; LAB_0060581a
    PUSH ESI                            ; 005585fb
        ;   Label: LAB_005585fb
    LEA ESI,[ESP + 0x68]                ; 005585fc
    PUSH 0x3f733333                     ; 00558600
    PUSH ESI                            ; 00558605
    PUSH 0x665998                       ; 00558606 | CQuaternion4f_00665998
    LEA ESI,[ESP + 0x124]               ; 0055860b
    LEA EDI,[ESP + 0x84]                ; 00558612
    CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0 ; 00558619
        ;   XREF to: 005f77e0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_slerpQuaternion_FUN_005f77e0(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, float t, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x124]               ; 0055861e
    ADD ESP,0xc                         ; 00558625
    JMP 0x0060583f                      ; 00558628
        ;   XREF to: 0060583f (UNCONDITIONAL_JUMP)  ; LAB_0060583f
    PUSH ESI                            ; 00558630
        ;   Label: LAB_00558630
    LEA ESI,[ESP + 0x12c]               ; 00558631
    LEA EDI,[ESP + 0x13c]               ; 00558638
    CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640 ; 0055863f
        ;   XREF to: 005f7640 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_005f7640(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x12c]               ; 00558644
    ADD ESP,0x8                         ; 0055864b
    MOVSD ES:EDI,ESI                    ; 0055864e
    MOVSD ES:EDI,ESI                    ; 0055864f
    MOVSD ES:EDI,ESI                    ; 00558650
    MOVSD ES:EDI,ESI                    ; 00558651
    PUSH dword ptr [ESP]                ; 00558652
    LEA ESI,[ESP + 0x138]               ; 00558655
    MOV EDI,dword ptr [ESP + 0x148]     ; 0055865c
    PUSH ESI                            ; 00558663
    SHL EDI,0x4                         ; 00558664
    LEA ESI,[EBX + 0x808]               ; 00558667
    ADD ESI,EDI                         ; 0055866d
    PUSH ESI                            ; 0055866f
    LEA ESI,[ESP + 0xe0]                ; 00558670
    CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0 ; 00558677
        ;   XREF to: 005f77e0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_slerpQuaternion_FUN_005f77e0(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, float t, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0xe0]                ; 0055867c
    LEA EDI,[EDI + EBX*0x1 + 0x808]     ; 00558683
    ADD ESP,0xc                         ; 0055868a
    JMP 0x00605864                      ; 0055868d
        ;   XREF to: 00605864 (UNCONDITIONAL_JUMP)  ; LAB_00605864
    PUSH ESI                            ; 00558695
        ;   Label: LAB_00558695
    LEA ESI,[ESP + 0x28]                ; 00558696
    PUSH ESI                            ; 0055869a
    LEA ESI,[ESP + 0x6c]                ; 0055869b
    PUSH ESI                            ; 0055869f
    LEA ESI,[ESP + 0x110]               ; 005586a0
    LEA EDI,[ESP + 0x90]                ; 005586a7
    CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640 ; 005586ae
        ;   XREF to: 005f7640 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_005f7640(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x110]               ; 005586b3
    ADD ESP,0x8                         ; 005586ba
    JMP 0x00605889                      ; 005586bd
        ;   XREF to: 00605889 (UNCONDITIONAL_JUMP)  ; LAB_00605889
    PUSH ESI                            ; 005586c8
        ;   Label: LAB_005586c8
    LEA ESI,[ESP + 0xfc]                ; 005586c9
    CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640 ; 005586d0
        ;   XREF to: 005f7640 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_005f7640(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, CQuaternion4f * quat_out)
    ADD ESP,0x8                         ; 005586d5
    LEA EDI,[ESP + 0x134]               ; 005586d8
    LEA ESI,[ESP + 0xf4]                ; 005586df
    PUSH 0x59ddb0                       ; 005586e6
    JMP 0x006058b1                      ; 005586eb
        ;   XREF to: 006058b1 (UNCONDITIONAL_JUMP)  ; LAB_006058b1
    PUSH ECX                            ; 005586f6
        ;   Label: LAB_005586f6
    LEA ESI,[ESP + 0x13c]               ; 005586f7
    PUSH dword ptr [ESP + 0x8]          ; 005586fe
    PUSH ESI                            ; 00558702
    ADD EBX,0x158                       ; 00558703
    PUSH EBX                            ; 00558709
    CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750 ; 0055870a
        ;   XREF to: 0059f750 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 0055870f
    MOV ESP,EBP                         ; 00558712
    POP EBP                             ; 00558714
    POP EDI                             ; 00558715
    POP ESI                             ; 00558716
    POP EBX                             ; 00558717
    RET                                 ; 00558718
    MOV ECX,dword ptr [ESI]             ; 006057a9
        ;   Label: LAB_006057a9
    MOV dword ptr [EDI],ECX             ; 006057ab
    MOV ECX,dword ptr [ESI + 0x4]       ; 006057ad
    MOV dword ptr [EDI + 0x4],ECX       ; 006057b0
    MOV ECX,dword ptr [ESI + 0x8]       ; 006057b3
    MOV dword ptr [EDI + 0x8],ECX       ; 006057b6
    MOV ECX,dword ptr [ESI + 0xc]       ; 006057b9
    MOV dword ptr [EDI + 0xc],ECX       ; 006057bc
    ADD ESI,0x10                        ; 006057bf
    ADD EDI,0x10                        ; 006057c2
    MOV ESI,dword ptr [EBX + 0x2a90]    ; 006057c5
    JMP 0x00558522                      ; 006057cb
        ;   XREF to: 00558522 (UNCONDITIONAL_JUMP)  ; LAB_00558522
    MOV ECX,dword ptr [ESI]             ; 006057d0
        ;   Label: LAB_006057d0
    MOV dword ptr [EDI],ECX             ; 006057d2
    MOV ECX,dword ptr [ESI + 0x4]       ; 006057d4
    MOV dword ptr [EDI + 0x4],ECX       ; 006057d7
    MOV ECX,dword ptr [ESI + 0x8]       ; 006057da
    MOV dword ptr [EDI + 0x8],ECX       ; 006057dd
    MOV ECX,dword ptr [ESI + 0xc]       ; 006057e0
    MOV dword ptr [EDI + 0xc],ECX       ; 006057e3
    ADD ESI,0x10                        ; 006057e6
    ADD EDI,0x10                        ; 006057e9
    LEA ESI,[ESP + 0x54]                ; 006057ec
    JMP 0x005585bb                      ; 006057f0
        ;   XREF to: 005585bb (UNCONDITIONAL_JUMP)  ; LAB_005585bb
    MOV ECX,dword ptr [ESI]             ; 006057f5
        ;   Label: LAB_006057f5
    MOV dword ptr [EDI],ECX             ; 006057f7
    MOV ECX,dword ptr [ESI + 0x4]       ; 006057f9
    MOV dword ptr [EDI + 0x4],ECX       ; 006057fc
    MOV ECX,dword ptr [ESI + 0x8]       ; 006057ff
    MOV dword ptr [EDI + 0x8],ECX       ; 00605802
    MOV ECX,dword ptr [ESI + 0xc]       ; 00605805
    MOV dword ptr [EDI + 0xc],ECX       ; 00605808
    ADD ESI,0x10                        ; 0060580b
    ADD EDI,0x10                        ; 0060580e
    LEA ESI,[ESP + 0x48]                ; 00605811
    JMP 0x005585de                      ; 00605815
        ;   XREF to: 005585de (UNCONDITIONAL_JUMP)  ; LAB_005585de
    MOV ECX,dword ptr [ESI]             ; 0060581a
        ;   Label: LAB_0060581a
    MOV dword ptr [EDI],ECX             ; 0060581c
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060581e
    MOV dword ptr [EDI + 0x4],ECX       ; 00605821
    MOV ECX,dword ptr [ESI + 0x8]       ; 00605824
    MOV dword ptr [EDI + 0x8],ECX       ; 00605827
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060582a
    MOV dword ptr [EDI + 0xc],ECX       ; 0060582d
    ADD ESI,0x10                        ; 00605830
    ADD EDI,0x10                        ; 00605833
    LEA ESI,[ESP + 0x34]                ; 00605836
    JMP 0x005585fb                      ; 0060583a
        ;   XREF to: 005585fb (UNCONDITIONAL_JUMP)  ; LAB_005585fb
    MOV ECX,dword ptr [ESI]             ; 0060583f
        ;   Label: LAB_0060583f
    MOV dword ptr [EDI],ECX             ; 00605841
    MOV ECX,dword ptr [ESI + 0x4]       ; 00605843
    MOV dword ptr [EDI + 0x4],ECX       ; 00605846
    MOV ECX,dword ptr [ESI + 0x8]       ; 00605849
    MOV dword ptr [EDI + 0x8],ECX       ; 0060584c
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060584f
    MOV dword ptr [EDI + 0xc],ECX       ; 00605852
    ADD ESI,0x10                        ; 00605855
    ADD EDI,0x10                        ; 00605858
    LEA ESI,[ESP + 0x78]                ; 0060585b
    JMP 0x00558630                      ; 0060585f
        ;   XREF to: 00558630 (UNCONDITIONAL_JUMP)  ; LAB_00558630
    MOV ECX,dword ptr [ESI]             ; 00605864
        ;   Label: LAB_00605864
    MOV dword ptr [EDI],ECX             ; 00605866
    MOV ECX,dword ptr [ESI + 0x4]       ; 00605868
    MOV dword ptr [EDI + 0x4],ECX       ; 0060586b
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060586e
    MOV dword ptr [EDI + 0x8],ECX       ; 00605871
    MOV ECX,dword ptr [ESI + 0xc]       ; 00605874
    MOV dword ptr [EDI + 0xc],ECX       ; 00605877
    ADD ESI,0x10                        ; 0060587a
    ADD EDI,0x10                        ; 0060587d
    LEA ESI,[ESP + 0x34]                ; 00605880
    JMP 0x00558695                      ; 00605884
        ;   XREF to: 00558695 (UNCONDITIONAL_JUMP)  ; LAB_00558695
    MOV ECX,dword ptr [ESI]             ; 00605889
        ;   Label: LAB_00605889
    MOV dword ptr [EDI],ECX             ; 0060588b
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060588d
    MOV dword ptr [EDI + 0x4],ECX       ; 00605890
    MOV ECX,dword ptr [ESI + 0x8]       ; 00605893
    MOV dword ptr [EDI + 0x8],ECX       ; 00605896
    MOV ECX,dword ptr [ESI + 0xc]       ; 00605899
    MOV dword ptr [EDI + 0xc],ECX       ; 0060589c
    ADD ESI,0x10                        ; 0060589f
    ADD EDI,0x10                        ; 006058a2
    LEA ESI,[ESP + 0x88]                ; 006058a5
    JMP 0x005586c8                      ; 006058ac
        ;   XREF to: 005586c8 (UNCONDITIONAL_JUMP)  ; LAB_005586c8
    MOV ECX,dword ptr [ESP + 0x14c]     ; 006058b1
        ;   Label: LAB_006058b1
    MOV ECX,dword ptr [ESI]             ; 006058b8
    MOV dword ptr [EDI],ECX             ; 006058ba
    MOV ECX,dword ptr [ESI + 0x4]       ; 006058bc
    MOV dword ptr [EDI + 0x4],ECX       ; 006058bf
    MOV ECX,dword ptr [ESI + 0x8]       ; 006058c2
    MOV dword ptr [EDI + 0x8],ECX       ; 006058c5
    MOV ECX,dword ptr [ESI + 0xc]       ; 006058c8
    MOV dword ptr [EDI + 0xc],ECX       ; 006058cb
    ADD ESI,0x10                        ; 006058ce
    ADD EDI,0x10                        ; 006058d1
    JMP 0x005586f6                      ; 006058d4
        ;   XREF to: 005586f6 (UNCONDITIONAL_JUMP)  ; LAB_005586f6

