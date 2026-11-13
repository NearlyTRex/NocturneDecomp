; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CQuaternion4f * __stack5_esi core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_005635a0(CSkeleton *this_ptr,int bone_index,int frame_index_1,int frame_index_2,float interpolation,CQuaternion4f *result_out)
;
; Parameters:
; CSkeleton *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bone_index
; int              Stack[0xc]:4   frame_index_1
; int              Stack[0x10]:4   frame_index_2
; float            Stack[0x14]:4   interpolation
; Local Variables:
; undefined8       Stack[-0x38]:8  local_38
; undefined        Stack[-0x30]:1  local_30
; undefined        Stack[-0x20]:1  local_20
;
; XREF[3]:
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_00568100 at 00568200
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransformsForFrame_FUN_0056a220 at 0056a28c
;   core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_00567620 at 00567740
;
; Called Functions:
;   core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00563580
;   core_xform.cpp_slerpQuaternion_FUN_005b7940
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005635a0
        ;   Label: core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_005635a0
    PUSH EDI                            ; 005635a1
    PUSH EBP                            ; 005635a2
    MOV EBP,ESP                         ; 005635a3
    SUB ESP,0x28                        ; 005635a5
    AND ESP,0xfffffff8                  ; 005635a8
    MOV EDI,dword ptr [EBP + 0x14]      ; 005635ab
    MOV EDX,dword ptr [EBP + 0x1c]      ; 005635ae
    MOV EBX,ESI                         ; 005635b1
    MOV ESI,dword ptr [EBP + 0x10]      ; 005635b3
    FLD float ptr [EBP + 0x20]          ; 005635b6
    FLDZ                                ; 005635b9
    FXCH                                ; 005635bb
    FSTP double ptr [ESP]               ; 005635bd
    FCOMP double ptr [ESP]              ; 005635c0
    FNSTSW AX                           ; 005635c3
    SAHF                                ; 005635c5
    JNC 0x005635f9                      ; 005635c6
        ;   XREF to: 005635f9 (CONDITIONAL_JUMP)  ; LAB_005635f9
    FLD1                                ; 005635c8
    FCOMP double ptr [ESP]              ; 005635ca
    FNSTSW AX                           ; 005635cd
    SAHF                                ; 005635cf
    JA 0x005635ff                       ; 005635d0
        ;   XREF to: 005635ff (CONDITIONAL_JUMP)  ; LAB_005635ff
    PUSH EDX                            ; 005635d2
    PUSH EDI                            ; 005635d3
        ;   Label: LAB_005635d3
    PUSH ESI                            ; 005635d4
    LEA EDI,[ESP + 0x14]                ; 005635d5
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00563580 ; 005635d9
        ;   XREF to: 00563580 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00563580(CSkeleton * this_ptr, int bone_index, int frame_index)
    MOV ESI,EAX                         ; 005635de
    ADD ESP,0xc                         ; 005635e0
        ;   Label: LAB_005635e0
    MOVSD ES:EDI,ESI                    ; 005635e3
    MOVSD ES:EDI,ESI                    ; 005635e4
    MOVSD ES:EDI,ESI                    ; 005635e5
    MOVSD ES:EDI,ESI                    ; 005635e6
    LEA ESI,[ESP + 0x8]                 ; 005635e7
    MOV EDI,EBX                         ; 005635eb
    MOVSD ES:EDI,ESI                    ; 005635ed
    MOVSD ES:EDI,ESI                    ; 005635ee
    MOVSD ES:EDI,ESI                    ; 005635ef
    MOVSD ES:EDI,ESI                    ; 005635f0
    MOV EAX,EBX                         ; 005635f1
    MOV ESP,EBP                         ; 005635f3
    POP EBP                             ; 005635f5
    POP EDI                             ; 005635f6
    POP EBX                             ; 005635f7
    RET                                 ; 005635f8
    MOV ECX,dword ptr [EBP + 0x18]      ; 005635f9
        ;   Label: LAB_005635f9
    PUSH ECX                            ; 005635fc
    JMP 0x005635d3                      ; 005635fd
        ;   XREF to: 005635d3 (UNCONDITIONAL_JUMP)  ; LAB_005635d3
    PUSH dword ptr [EBP + 0x20]         ; 005635ff
        ;   Label: LAB_005635ff
    PUSH EDX                            ; 00563602
    PUSH EDI                            ; 00563603
    PUSH ESI                            ; 00563604
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00563580 ; 00563605
        ;   XREF to: 00563580 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00563580(CSkeleton * this_ptr, int bone_index, int frame_index)
    ADD ESP,0xc                         ; 0056360a
    PUSH EAX                            ; 0056360d
    MOV EDX,dword ptr [EBP + 0x18]      ; 0056360e
    PUSH EDX                            ; 00563611
    PUSH EDI                            ; 00563612
    PUSH ESI                            ; 00563613
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00563580 ; 00563614
        ;   XREF to: 00563580 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00563580(CSkeleton * this_ptr, int bone_index, int frame_index)
    ADD ESP,0xc                         ; 00563619
    PUSH EAX                            ; 0056361c
    LEA ESI,[ESP + 0x24]                ; 0056361d
    LEA EDI,[ESP + 0x14]                ; 00563621
    CALL core_xform.cpp_slerpQuaternion_FUN_005b7940 ; 00563625
        ;   XREF to: 005b7940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_005b7940()
    LEA ESI,[ESP + 0x24]                ; 0056362a
    JMP 0x005635e0                      ; 0056362e
        ;   XREF to: 005635e0 (UNCONDITIONAL_JUMP)  ; LAB_005635e0

