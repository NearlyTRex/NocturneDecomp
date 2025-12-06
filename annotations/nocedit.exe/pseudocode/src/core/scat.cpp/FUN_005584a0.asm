; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_scat.cpp_FUN_005584a0()
;
; Local Variables:
; undefined4       Stack[-0x160]:4  local_160
; undefined1       Stack[-0x15c]:1  local_15c
; undefined1       Stack[-0x14c]:1  local_14c
; undefined1       Stack[-0x13c]:1  local_13c
; undefined1       Stack[-0x12c]:1  local_12c
; undefined1       Stack[-0x11c]:1  local_11c
; undefined1       Stack[-0x10c]:1  local_10c
; undefined1       Stack[-0xfc]:1  local_fc
; undefined1       Stack[-0xec]:1  local_ec
; undefined1       Stack[-0xdc]:1  local_dc
; undefined1       Stack[-0xcc]:1  local_cc
; undefined1       Stack[-0xbc]:1  local_bc
; undefined1       Stack[-0xac]:1  local_ac
; undefined1       Stack[-0x9c]:1  local_9c
; undefined1       Stack[-0x8c]:1  local_8c
; undefined1       Stack[-0x7c]:1  local_7c
; undefined1       Stack[-0x6c]:1  local_6c
; undefined1       Stack[-0x5c]:1  local_5c
; undefined1       Stack[-0x4c]:1  local_4c
; undefined1       Stack[-0x3c]:1  local_3c
; undefined1       Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_scat.cpp_FUN_005582c0 at 00558486
;
; Referenced Globals:
;   undefined4 DAT_00665998
;   undefined4 DAT_03106168
;   undefined4 DAT_0310616c
;   undefined4 DAT_03106170
;   undefined4 DAT_03106174
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
        ;   Label: core_scat.cpp_FUN_005584a0
    PUSH ESI                            ; 005584a1
    PUSH EDI                            ; 005584a2
    PUSH EBP                            ; 005584a3
    MOV EBP,ESP                         ; 005584a4
    SUB ESP,0x14c                       ; 005584a6
    AND ESP,0xfffffff8                  ; 005584ac
    MOV EBX,dword ptr [EBP + 0x14]      ; 005584af
    CMP dword ptr [EBP + 0x18],0x0      ; 005584b2
    JZ 0x00558538                       ; 005584b6 | LAB_00558538
        ;   XREF to: 00558538 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [0x0310616c]      ; 005584bc | undefined4 DAT_0310616c
    MOV dword ptr [ESP + 0x144],ESI     ; 005584c2
    MOV ESI,dword ptr [0x03106174]      ; 005584c9 | undefined4 DAT_03106174
    PUSH 0xbfc90fdb                     ; 005584cf
    MOV dword ptr [ESP + 0x14c],ESI     ; 005584d4
    LEA ESI,[ESP + 0xb8]                ; 005584db
    LEA EDI,[ESP + 0x68]                ; 005584e2
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0 ; 005584e6 | void core_xform.cpp_quaternionFromAngleY_FUN_005f79f0(CQuaternion4f * quat_ptr, float angle_radians)
        ;   XREF to: 005f79f0 (UNCONDITIONAL_CALL)
    LEA ESI,[ESP + 0xb8]                ; 005584eb
    ADD ESP,0x4                         ; 005584f2
    MOVSD ES:EDI,ESI                    ; 005584f5
    MOVSD ES:EDI,ESI                    ; 005584f6
    MOVSD ES:EDI,ESI                    ; 005584f7
    MOVSD ES:EDI,ESI                    ; 005584f8
    PUSH 0xbfc90fdb                     ; 005584f9
    LEA ESI,[ESP + 0xc8]                ; 005584fe
    LEA EDI,[ESP + 0x28]                ; 00558505
    CALL core_xform.cpp_quaternionFromAngleZ_FUN_005f7a30 ; 00558509 | void core_xform.cpp_quaternionFromAngleZ_FUN_005f7a30(CQuaternion4f * quat_ptr, float angle_radians)
        ;   XREF to: 005f7a30 (UNCONDITIONAL_CALL)
    LEA ESI,[ESP + 0xc8]                ; 0055850e
    ADD ESP,0x4                         ; 00558515
        ;   Label: LAB_00558515
    MOVSD ES:EDI,ESI                    ; 00558518
    MOVSD ES:EDI,ESI                    ; 00558519
    MOVSD ES:EDI,ESI                    ; 0055851a
    MOVSD ES:EDI,ESI                    ; 0055851b
    MOV ESI,dword ptr [EBX + 0x2a90]    ; 0055851c
    MOV dword ptr [ESP],ESI             ; 00558522
    FLD float ptr [ESP]                 ; 00558525
    FLDZ                                ; 00558528
    FCOMPP                              ; 0055852a
    FNSTSW AX                           ; 0055852c
    SAHF                                ; 0055852e
    JC 0x00558593                       ; 0055852f | LAB_00558593
        ;   XREF to: 00558593 (CONDITIONAL_JUMP)
    MOV ESP,EBP                         ; 00558531
    POP EBP                             ; 00558533
    POP EDI                             ; 00558534
    POP ESI                             ; 00558535
    POP EBX                             ; 00558536
    RET                                 ; 00558537
    MOV ESI,dword ptr [0x03106168]      ; 00558538 | undefined4 DAT_03106168
        ;   Label: LAB_00558538
    MOV dword ptr [ESP + 0x144],ESI     ; 0055853e
    MOV ESI,dword ptr [0x03106170]      ; 00558545 | undefined4 DAT_03106170
    PUSH 0x3fc90fdb                     ; 0055854b
    MOV dword ptr [ESP + 0x14c],ESI     ; 00558550
    LEA ESI,[ESP + 0x98]                ; 00558557
    LEA EDI,[ESP + 0x68]                ; 0055855e
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0 ; 00558562 | void core_xform.cpp_quaternionFromAngleY_FUN_005f79f0(CQuaternion4f * quat_ptr, float angle_radians)
        ;   XREF to: 005f79f0 (UNCONDITIONAL_CALL)
    LEA ESI,[ESP + 0x98]                ; 00558567
    ADD ESP,0x4                         ; 0055856e
    MOVSD ES:EDI,ESI                    ; 00558571
    MOVSD ES:EDI,ESI                    ; 00558572
    MOVSD ES:EDI,ESI                    ; 00558573
    MOVSD ES:EDI,ESI                    ; 00558574
    PUSH 0x3fc90fdb                     ; 00558575
    LEA ESI,[ESP + 0xa8]                ; 0055857a
    LEA EDI,[ESP + 0x28]                ; 00558581
    CALL core_xform.cpp_quaternionFromAngleZ_FUN_005f7a30 ; 00558585 | void core_xform.cpp_quaternionFromAngleZ_FUN_005f7a30(CQuaternion4f * quat_ptr, float angle_radians)
        ;   XREF to: 005f7a30 (UNCONDITIONAL_CALL)
    LEA ESI,[ESP + 0xa8]                ; 0055858a
    JMP 0x00558515                      ; 00558591 | LAB_00558515
        ;   XREF to: 00558515 (UNCONDITIONAL_JUMP)
    PUSH dword ptr [EBX + 0x1fbf0]      ; 00558593
        ;   Label: LAB_00558593
    LEA ESI,[ESP + 0xe8]                ; 00558599
    LEA EDI,[ESP + 0x58]                ; 005585a0
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0 ; 005585a4 | void core_xform.cpp_quaternionFromAngleY_FUN_005f79f0(CQuaternion4f * quat_ptr, float angle_radians)
        ;   XREF to: 005f79f0 (UNCONDITIONAL_CALL)
    LEA ESI,[ESP + 0xe8]                ; 005585a9
    ADD ESP,0x4                         ; 005585b0
    MOVSD ES:EDI,ESI                    ; 005585b3
    MOVSD ES:EDI,ESI                    ; 005585b4
    MOVSD ES:EDI,ESI                    ; 005585b5
    MOVSD ES:EDI,ESI                    ; 005585b6
    LEA ESI,[ESP + 0x54]                ; 005585b7
    PUSH ESI                            ; 005585bb
    PUSH dword ptr [EBX + 0x1fbec]      ; 005585bc
    LEA ESI,[ESP + 0x1c]                ; 005585c2
    LEA EDI,[ESP + 0x4c]                ; 005585c6
    CALL core_xform.cpp_quaternionFromAngleX_FUN_005f79b0 ; 005585ca | void core_xform.cpp_quaternionFromAngleX_FUN_005f79b0(CQuaternion4f * quat_ptr, float angle_radians)
        ;   XREF to: 005f79b0 (UNCONDITIONAL_CALL)
    LEA ESI,[ESP + 0x1c]                ; 005585cf
    ADD ESP,0x4                         ; 005585d3
    MOVSD ES:EDI,ESI                    ; 005585d6
    MOVSD ES:EDI,ESI                    ; 005585d7
    MOVSD ES:EDI,ESI                    ; 005585d8
    MOVSD ES:EDI,ESI                    ; 005585d9
    LEA ESI,[ESP + 0x48]                ; 005585da
    PUSH ESI                            ; 005585de
    LEA ESI,[ESP + 0xc]                 ; 005585df
    LEA EDI,[ESP + 0x3c]                ; 005585e3
    CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640 ; 005585e7 | CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_005f7640(CQuaternion4f * result_out, CQuaternion4f * quat1_ptr, CQuaternion4f * quat2_ptr)
        ;   XREF to: 005f7640 (UNCONDITIONAL_CALL)
    LEA ESI,[ESP + 0xc]                 ; 005585ec
    ADD ESP,0x8                         ; 005585f0
    MOVSD ES:EDI,ESI                    ; 005585f3
    MOVSD ES:EDI,ESI                    ; 005585f4
    MOVSD ES:EDI,ESI                    ; 005585f5
    MOVSD ES:EDI,ESI                    ; 005585f6
    LEA ESI,[ESP + 0x34]                ; 005585f7
    PUSH ESI                            ; 005585fb
    LEA ESI,[ESP + 0x68]                ; 005585fc
    PUSH 0x3f733333                     ; 00558600
    PUSH ESI                            ; 00558605
    PUSH 0x665998                       ; 00558606 | DAT_00665998
    LEA ESI,[ESP + 0x124]               ; 0055860b
    LEA EDI,[ESP + 0x84]                ; 00558612
    CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0 ; 00558619 | CQuaternion4f * core_xform.cpp_slerpQuaternion_FUN_005f77e0(CQuaternion4f * result_out, CQuaternion4f * quat1_ptr, CQuaternion4f * quat2_ptr, float t)
        ;   XREF to: 005f77e0 (UNCONDITIONAL_CALL)
    LEA ESI,[ESP + 0x124]               ; 0055861e
    ADD ESP,0xc                         ; 00558625
    MOVSD ES:EDI,ESI                    ; 00558628
    MOVSD ES:EDI,ESI                    ; 00558629
    MOVSD ES:EDI,ESI                    ; 0055862a
    MOVSD ES:EDI,ESI                    ; 0055862b
    LEA ESI,[ESP + 0x78]                ; 0055862c
    PUSH ESI                            ; 00558630
    LEA ESI,[ESP + 0x12c]               ; 00558631
    LEA EDI,[ESP + 0x13c]               ; 00558638
    CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640 ; 0055863f | CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_005f7640(CQuaternion4f * result_out, CQuaternion4f * quat1_ptr, CQuaternion4f * quat2_ptr)
        ;   XREF to: 005f7640 (UNCONDITIONAL_CALL)
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
    CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0 ; 00558677 | CQuaternion4f * core_xform.cpp_slerpQuaternion_FUN_005f77e0(CQuaternion4f * result_out, CQuaternion4f * quat1_ptr, CQuaternion4f * quat2_ptr, float t)
        ;   XREF to: 005f77e0 (UNCONDITIONAL_CALL)
    LEA ESI,[ESP + 0xe0]                ; 0055867c
    LEA EDI,[EDI + EBX*0x1 + 0x808]     ; 00558683
    ADD ESP,0xc                         ; 0055868a
    MOVSD ES:EDI,ESI                    ; 0055868d
    MOVSD ES:EDI,ESI                    ; 0055868e
    MOVSD ES:EDI,ESI                    ; 0055868f
    MOVSD ES:EDI,ESI                    ; 00558690
    LEA ESI,[ESP + 0x34]                ; 00558691
    PUSH ESI                            ; 00558695
    LEA ESI,[ESP + 0x28]                ; 00558696
    PUSH ESI                            ; 0055869a
    LEA ESI,[ESP + 0x6c]                ; 0055869b
    PUSH ESI                            ; 0055869f
    LEA ESI,[ESP + 0x110]               ; 005586a0
    LEA EDI,[ESP + 0x90]                ; 005586a7
    CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640 ; 005586ae | CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_005f7640(CQuaternion4f * result_out, CQuaternion4f * quat1_ptr, CQuaternion4f * quat2_ptr)
        ;   XREF to: 005f7640 (UNCONDITIONAL_CALL)
    LEA ESI,[ESP + 0x110]               ; 005586b3
    ADD ESP,0x8                         ; 005586ba
    MOVSD ES:EDI,ESI                    ; 005586bd
    MOVSD ES:EDI,ESI                    ; 005586be
    MOVSD ES:EDI,ESI                    ; 005586bf
    MOVSD ES:EDI,ESI                    ; 005586c0
    LEA ESI,[ESP + 0x88]                ; 005586c1
    PUSH ESI                            ; 005586c8
    LEA ESI,[ESP + 0xfc]                ; 005586c9
    CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640 ; 005586d0 | CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_005f7640(CQuaternion4f * result_out, CQuaternion4f * quat1_ptr, CQuaternion4f * quat2_ptr)
        ;   XREF to: 005f7640 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005586d5
    LEA EDI,[ESP + 0x134]               ; 005586d8
    LEA ESI,[ESP + 0xf4]                ; 005586df
    PUSH 0x59ddb0                       ; 005586e6
    MOV ECX,dword ptr [ESP + 0x14c]     ; 005586eb
    MOVSD ES:EDI,ESI                    ; 005586f2
    MOVSD ES:EDI,ESI                    ; 005586f3
    MOVSD ES:EDI,ESI                    ; 005586f4
    MOVSD ES:EDI,ESI                    ; 005586f5
    PUSH ECX                            ; 005586f6
    LEA ESI,[ESP + 0x13c]               ; 005586f7
    PUSH dword ptr [ESP + 0x8]          ; 005586fe
    PUSH ESI                            ; 00558702
    ADD EBX,0x158                       ; 00558703
    PUSH EBX                            ; 00558709
    CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750 ; 0055870a | void core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, float blend_weight, int bone_index, ...)
        ;   XREF to: 0059f750 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0055870f
    MOV ESP,EBP                         ; 00558712
    POP EBP                             ; 00558714
    POP EDI                             ; 00558715
    POP ESI                             ; 00558716
    POP EBX                             ; 00558717
    RET                                 ; 00558718

