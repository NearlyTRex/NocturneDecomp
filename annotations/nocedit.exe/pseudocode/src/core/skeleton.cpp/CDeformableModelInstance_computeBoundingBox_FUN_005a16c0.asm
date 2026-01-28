; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBoundingBox3D * __cdecl core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0 (CDeformableModelInstance *this_ptr,CBoundingBox3D *output_bbox)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   output_bbox
; Local Variables:
; undefined1       Stack[-0x3c]:1  local_3c
; undefined1       Stack[-0x30]:1  local_30
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_charactr.cpp_CCharacter_FUN_0042d530 at 0042d552
;   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 at 005e620b
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_expand_FUN_00420240
;   core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
;   core_box.cpp_CBoundingBox3D_reset_FUN_00420fb0
;   core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;   core_xform.cpp_transformVector3x4_FUN_005f4dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a16c0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0
    PUSH ESI                            ; 005a16c1
    PUSH EDI                            ; 005a16c2
    PUSH EBP                            ; 005a16c3
    SUB ESP,0x2c                        ; 005a16c4
    MOV ESI,dword ptr [ESP + 0x40]      ; 005a16c7
    MOV EBP,dword ptr [ESP + 0x44]      ; 005a16cb
    PUSH ESI                            ; 005a16cf
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 005a16d0
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a16d5
    PUSH EAX                            ; 005a16d8
    MOV EBX,EAX                         ; 005a16d9
    CALL core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810 ; 005a16db
        ;   XREF to: 0059a810 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 005a16e0
    MOV EAX,dword ptr [EAX + 0x28558]   ; 005a16e3
    PUSH EBP                            ; 005a16e9
    MOV dword ptr [ESP + 0x1c],EAX      ; 005a16ea
    CALL core_box.cpp_CBoundingBox3D_reset_FUN_00420fb0 ; 005a16ee
        ;   XREF to: 00420fb0 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_reset_FUN_00420fb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 005a16f3
    XOR EDX,EDX                         ; 005a16f6
    MOV ECX,dword ptr [ESP + 0x18]      ; 005a16f8
    MOV dword ptr [ESP + 0x20],EDX      ; 005a16fc
    TEST ECX,ECX                        ; 005a1700
    JLE 0x005a1797                      ; 005a1702
        ;   XREF to: 005a1797 (CONDITIONAL_JUMP)  ; LAB_005a1797
    LEA EAX,[EBX + 0x814c]              ; 005a1708
    ADD ESI,0xe80                       ; 005a170e
    MOV dword ptr [ESP + 0x24],EBX      ; 005a1714
    MOV dword ptr [ESP + 0x1c],EAX      ; 005a1718
    MOV dword ptr [ESP + 0x28],ESI      ; 005a171c
    MOV EAX,dword ptr [ESP + 0x24]      ; 005a1720
        ;   Label: LAB_005a1720
    CMP dword ptr [EAX + 0x8aac],0x2    ; 005a1724
    JNZ 0x005a1765                      ; 005a172b
        ;   XREF to: 005a1765 (CONDITIONAL_JUMP)  ; LAB_005a1765
    MOV EDI,dword ptr [ESP + 0x28]      ; 005a172d
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005a1731
    XOR EBX,EBX                         ; 005a1735
    PUSH EDI                            ; 005a1737
        ;   Label: LAB_005a1737
    PUSH EBX                            ; 005a1738
    LEA EAX,[ESP + 0x8]                 ; 005a1739
    PUSH EAX                            ; 005a173d
    PUSH ESI                            ; 005a173e
    CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0 ; 005a173f
        ;   XREF to: 004202b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0(CBoundingBox3D * this_ptr, CVector3f * out_point, uint corner_index)
    ADD ESP,0xc                         ; 005a1744
    PUSH EAX                            ; 005a1747
    LEA EAX,[ESP + 0x14]                ; 005a1748
    PUSH EAX                            ; 005a174c
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 005a174d
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 005a1752
    PUSH EAX                            ; 005a1755
    PUSH EBP                            ; 005a1756
    INC EBX                             ; 005a1757
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240 ; 005a1758
        ;   XREF to: 00420240 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_00420240(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 005a175d
    CMP EBX,0x8                         ; 005a1760
    JL 0x005a1737                       ; 005a1763
        ;   XREF to: 005a1737 (CONDITIONAL_JUMP)  ; LAB_005a1737
    MOV EBX,dword ptr [ESP + 0x24]      ; 005a1765
        ;   Label: LAB_005a1765
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005a1769
    MOV EDI,dword ptr [ESP + 0x28]      ; 005a176d
    MOV EAX,dword ptr [ESP + 0x20]      ; 005a1771
    MOV EDX,dword ptr [ESP + 0x18]      ; 005a1775
    ADD EBX,0x4                         ; 005a1779
    ADD ESI,0x18                        ; 005a177c
    ADD EDI,0x30                        ; 005a177f
    INC EAX                             ; 005a1782
    MOV dword ptr [ESP + 0x24],EBX      ; 005a1783
    MOV dword ptr [ESP + 0x1c],ESI      ; 005a1787
    MOV dword ptr [ESP + 0x28],EDI      ; 005a178b
    MOV dword ptr [ESP + 0x20],EAX      ; 005a178f
    CMP EAX,EDX                         ; 005a1793
    JL 0x005a1720                       ; 005a1795
        ;   XREF to: 005a1720 (CONDITIONAL_JUMP)  ; LAB_005a1720
    MOV EAX,EBP                         ; 005a1797
        ;   Label: LAB_005a1797
    ADD ESP,0x2c                        ; 005a1799
    POP EBP                             ; 005a179c
    POP EDI                             ; 005a179d
    POP ESI                             ; 005a179e
    POP EBX                             ; 005a179f
    RET                                 ; 005a17a0

