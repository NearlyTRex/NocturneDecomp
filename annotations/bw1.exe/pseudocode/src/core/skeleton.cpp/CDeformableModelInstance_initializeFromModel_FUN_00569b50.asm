; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_initializeFromModel_FUN_00569b50(CDeformableModelInstance *this_ptr,CDeformableModel *model_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; CDeformableModel * Stack[0x8]:4   model_ptr
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_00565830 at 005658be
;   core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_00566a20 at 00566add
;   core_skeleton.cpp_FUN_00569b20 at 00569b38
;
; Called Functions:
;   core_motion.cpp_FUN_00524970
;   core_skeleton.cpp_CDeformableModelInstance_allocPointList_FUN_00567450
;   core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromVertices_FUN_00569cc0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_FUN_00563c90
;   core_skeleton.cpp_FUN_00567580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00569b50
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_00569b50
    PUSH ESI                            ; 00569b51
    PUSH EDI                            ; 00569b52
    PUSH EBP                            ; 00569b53
    SUB ESP,0x20                        ; 00569b54
    MOV EAX,dword ptr [ESP + 0x34]      ; 00569b57
    MOV EBX,dword ptr [ESP + 0x38]      ; 00569b5b
    PUSH EAX                            ; 00569b5f
    MOV dword ptr [EAX + 0x23a0],EBX    ; 00569b60
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 00569b66
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00569b6b
    PUSH EAX                            ; 00569b6e
    MOV ECX,dword ptr [ESP + 0x38]      ; 00569b6f
    PUSH ECX                            ; 00569b73
    MOV EBX,EAX                         ; 00569b74
    MOV EBP,EAX                         ; 00569b76
    CALL core_motion.cpp_FUN_00524970   ; 00569b78
        ;   XREF to: 00524970 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524970()
    ADD ESP,0x8                         ; 00569b7d
    MOV EAX,dword ptr [EBX + 0x1de78]   ; 00569b80
    MOV dword ptr [ESP + 0x18],EAX      ; 00569b86
    MOV EAX,dword ptr [ESP + 0x34]      ; 00569b8a
    MOV EAX,dword ptr [EAX + 0x23a0]    ; 00569b8e
    MOV EBX,dword ptr [ESP + 0x34]      ; 00569b94
    FLD float ptr [EAX + 0x2284]        ; 00569b98
    FMUL float ptr [EBX + 0x54]         ; 00569b9e
    FLD float ptr [EAX + 0x2288]        ; 00569ba1
    FMUL float ptr [EBX + 0x54]         ; 00569ba7
    FLD float ptr [EAX + 0x228c]        ; 00569baa
    FMUL float ptr [EBX + 0x54]         ; 00569bb0
    LEA EDI,[ESP + 0xc]                 ; 00569bb3
    MOV ESI,ESP                         ; 00569bb7
    ADD EBX,0x508                       ; 00569bb9
    LEA EAX,[ESP + 0xc]                 ; 00569bbf
    FXCH ST2                            ; 00569bc3
    FSTP float ptr [ESP]                ; 00569bc5
    FSTP float ptr [ESP + 0x4]          ; 00569bc8
    FSTP float ptr [ESP + 0x8]          ; 00569bcc
    MOVSD ES:EDI,ESI                    ; 00569bd0
    MOVSD ES:EDI,ESI                    ; 00569bd1
    MOVSD ES:EDI,ESI                    ; 00569bd2
    CMP EBX,EAX                         ; 00569bd3
    JNZ 0x00569c8a                      ; 00569bd5
        ;   XREF to: 00569c8a (CONDITIONAL_JUMP)  ; LAB_00569c8a
    MOV EBX,dword ptr [ESP + 0x18]      ; 00569bdb
        ;   Label: LAB_00569bdb
    XOR ESI,ESI                         ; 00569bdf
    TEST EBX,EBX                        ; 00569be1
    JLE 0x00569c5b                      ; 00569be3
        ;   XREF to: 00569c5b (CONDITIONAL_JUMP)  ; LAB_00569c5b
    MOV EDI,dword ptr [ESP + 0x34]      ; 00569be9
    MOV EAX,dword ptr [ESP + 0x34]      ; 00569bed
    MOV EBX,dword ptr [ESP + 0x34]      ; 00569bf1
    ADD EDI,0x54                        ; 00569bf5
    MOV dword ptr [ESP + 0x1c],EAX      ; 00569bf8
    ADD EBX,0x58                        ; 00569bfc
    MOV EAX,dword ptr [ESP + 0x34]      ; 00569bff
        ;   Label: LAB_00569bff
    PUSH ESI                            ; 00569c03
    MOV ECX,dword ptr [EAX + 0x23a0]    ; 00569c04
    PUSH ECX                            ; 00569c0a
    CALL core_skeleton.cpp_FUN_00563c90 ; 00569c0b
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_FUN_00563c90(CDeformableModel * this_ptr, int index)
    ADD ESP,0x8                         ; 00569c10
    CMP EBX,EAX                         ; 00569c13
    JZ 0x00569c27                       ; 00569c15
        ;   XREF to: 00569c27 (CONDITIONAL_JUMP)  ; LAB_00569c27
    MOV EDX,dword ptr [EAX]             ; 00569c17
    MOV dword ptr [EBX],EDX             ; 00569c19
    MOV EDX,dword ptr [EAX + 0x4]       ; 00569c1b
    MOV dword ptr [EBX + 0x4],EDX       ; 00569c1e
    MOV EDX,dword ptr [EAX + 0x8]       ; 00569c21
    MOV dword ptr [EBX + 0x8],EDX       ; 00569c24
    MOV EAX,dword ptr [ESP + 0x34]      ; 00569c27
        ;   Label: LAB_00569c27
    FLD float ptr [EAX + 0x54]          ; 00569c2b
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00569c2e
    FSTP float ptr [EAX + 0x514]        ; 00569c32
    CMP dword ptr [EBP + 0x1de9c],0x0   ; 00569c38
    JL 0x00569ca3                       ; 00569c3f
        ;   XREF to: 00569ca3 (CONDITIONAL_JUMP)  ; LAB_00569ca3
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00569c41
        ;   Label: LAB_00569c41
    MOV EDX,dword ptr [ESP + 0x18]      ; 00569c45
    ADD EBP,0x24                        ; 00569c49
    ADD EBX,0xc                         ; 00569c4c
    ADD EAX,0x4                         ; 00569c4f
    INC ESI                             ; 00569c52
    MOV dword ptr [ESP + 0x1c],EAX      ; 00569c53
    CMP ESI,EDX                         ; 00569c57
    JL 0x00569bff                       ; 00569c59
        ;   XREF to: 00569bff (CONDITIONAL_JUMP)  ; LAB_00569bff
    MOV EDX,dword ptr [ESP + 0x34]      ; 00569c5b
        ;   Label: LAB_00569c5b
    PUSH EDX                            ; 00569c5f
    CALL core_skeleton.cpp_CDeformableModelInstance_allocPointList_FUN_00567450 ; 00569c60
        ;   XREF to: 00567450 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_allocPointList_FUN_00567450(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00569c65
    MOV ECX,dword ptr [ESP + 0x34]      ; 00569c68
    PUSH ECX                            ; 00569c6c
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromVertices_FUN_00569cc0 ; 00569c6d
        ;   XREF to: 00569cc0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromVertices_FUN_00569cc0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00569c72
    MOV EBX,dword ptr [ESP + 0x34]      ; 00569c75
    PUSH EBX                            ; 00569c79
    CALL core_skeleton.cpp_FUN_00567580 ; 00569c7a
        ;   XREF to: 00567580 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_00567580(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00569c7f
    ADD ESP,0x20                        ; 00569c82
    POP EBP                             ; 00569c85
    POP EDI                             ; 00569c86
    POP ESI                             ; 00569c87
    POP EBX                             ; 00569c88
    RET                                 ; 00569c89
    MOV EAX,dword ptr [ESP + 0xc]       ; 00569c8a
        ;   Label: LAB_00569c8a
    MOV dword ptr [EBX],EAX             ; 00569c8e
    MOV EAX,dword ptr [ESP + 0x10]      ; 00569c90
    MOV dword ptr [EBX + 0x4],EAX       ; 00569c94
    MOV EAX,dword ptr [ESP + 0x14]      ; 00569c97
    MOV dword ptr [EBX + 0x8],EAX       ; 00569c9b
    JMP 0x00569bdb                      ; 00569c9e
        ;   XREF to: 00569bdb (UNCONDITIONAL_JUMP)  ; LAB_00569bdb
    FLD float ptr [EDI]                 ; 00569ca3
        ;   Label: LAB_00569ca3
    FMUL float ptr [EBX]                ; 00569ca5
    FSTP float ptr [EBX]                ; 00569ca7
    FLD float ptr [EDI]                 ; 00569ca9
    FMUL float ptr [EBX + 0x4]          ; 00569cab
    FSTP float ptr [EBX + 0x4]          ; 00569cae
    FLD float ptr [EDI]                 ; 00569cb1
    FMUL float ptr [EBX + 0x8]          ; 00569cb3
    FSTP float ptr [EBX + 0x8]          ; 00569cb6
    JMP 0x00569c41                      ; 00569cb9
        ;   XREF to: 00569c41 (UNCONDITIONAL_JUMP)  ; LAB_00569c41

