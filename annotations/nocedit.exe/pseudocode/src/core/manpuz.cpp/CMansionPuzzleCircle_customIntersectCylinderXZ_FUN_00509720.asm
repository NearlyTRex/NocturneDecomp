; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_customIntersectCylinderXZ_FUN_00509720(CMansionPuzzleCircle *this_ptr,SIntersectXZCylinder *cylinder)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; SIntersectXZCylinder * Stack[0x8]:4   cylinder
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   core_setcolid.cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00509720
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_customIntersectCylinderXZ_FUN_00509720
    PUSH ESI                            ; 00509721
    PUSH EDI                            ; 00509722
    SUB ESP,0x18                        ; 00509723
    MOV ESI,dword ptr [ESP + 0x28]      ; 00509726
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0050972a
    LEA EAX,[ESI + 0x158]               ; 0050972e
    PUSH EAX                            ; 00509734
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 00509735
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    LEA EBX,[EAX + 0x5678]              ; 0050973a
    ADD ESP,0x4                         ; 00509740
    MOV EAX,dword ptr [EBX]             ; 00509743
    MOV dword ptr [ESP],EAX             ; 00509745
    LEA EAX,[EBX + 0x4]                 ; 00509748
    MOV EAX,dword ptr [EAX]             ; 0050974b
    MOV dword ptr [ESP + 0x4],EAX       ; 0050974d
    LEA EAX,[EBX + 0x8]                 ; 00509751
    MOV EAX,dword ptr [EAX]             ; 00509754
    MOV dword ptr [ESP + 0x8],EAX       ; 00509756
    MOV EAX,dword ptr [EBX + 0xc]       ; 0050975a
    ADD EBX,0xc                         ; 0050975d
    MOV dword ptr [ESP + 0xc],EAX       ; 00509760
    LEA EAX,[EBX + 0x4]                 ; 00509764
    MOV EAX,dword ptr [EAX]             ; 00509767
    MOV dword ptr [ESP + 0x10],EAX      ; 00509769
    LEA EAX,[EBX + 0x8]                 ; 0050976d
    ADD ESI,0x5f0                       ; 00509770
    MOV EAX,dword ptr [EAX]             ; 00509776
    MOV EBX,ESI                         ; 00509778
    MOV dword ptr [ESP + 0x14],EAX      ; 0050977a
    ADD ESI,0x4b0                       ; 0050977e
    CMP dword ptr [EBX],0x0             ; 00509784
        ;   Label: LAB_00509784
    JNZ 0x00509797                      ; 00509787
        ;   XREF to: 00509797 (CONDITIONAL_JUMP)  ; LAB_00509797
    ADD EBX,0x64                        ; 00509789
    CMP EBX,ESI                         ; 0050978c
    JNZ 0x00509784                      ; 0050978e
        ;   XREF to: 00509784 (CONDITIONAL_JUMP)  ; LAB_00509784
    ADD ESP,0x18                        ; 00509790
    POP EDI                             ; 00509793
    POP ESI                             ; 00509794
    POP EBX                             ; 00509795
    RET                                 ; 00509796
    LEA EAX,[EBX + 0x24]                ; 00509797
        ;   Label: LAB_00509797
    PUSH EAX                            ; 0050979a
    LEA EAX,[EBX + 0xc]                 ; 0050979b
    PUSH EAX                            ; 0050979e
    LEA EAX,[ESP + 0x8]                 ; 0050979f
    PUSH EAX                            ; 005097a3
    PUSH EDI                            ; 005097a4
    MOV ECX,dword ptr [0x006810c8]      ; 005097a5 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH ECX                            ; 005097ab | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140 ; 005097ac
        ;   XREF to: 00573140 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140(CDemonSet * this_ptr, CBoundingBox3D * bounding_box, CMatrix3x3f * orientation_matrix, SIntersectXZCylinder * cylinder1, ...)
    ADD ESP,0x14                        ; 005097b1
    ADD EBX,0x64                        ; 005097b4
    CMP EBX,ESI                         ; 005097b7
    JNZ 0x00509784                      ; 005097b9
        ;   XREF to: 00509784 (CONDITIONAL_JUMP)  ; LAB_00509784
    ADD ESP,0x18                        ; 005097bb
    POP EDI                             ; 005097be
    POP ESI                             ; 005097bf
    POP EBX                             ; 005097c0
    RET                                 ; 005097c1

