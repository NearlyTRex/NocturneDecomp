; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __stack3_esi core_skeleton_cpp_CDeformableModelInstance_skinSingleVertex_FUN_0054e460(CDeformableModelInstance *this_ptr,int lod_index,int vertex_index,CVector3f *output_pos)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
; int              Stack[0xc]:4   vertex_index
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_skinSingleVertex_FUN_00548a30
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054e460
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_skinSingleVertex_FUN_0054e460
    PUSH EDI                            ; 0054e461
    SUB ESP,0xc                         ; 0054e462
    MOV EBX,ESI                         ; 0054e465
    MOV ESI,dword ptr [ESP + 0x18]      ; 0054e467
    LEA EAX,[ESI + 0xe80]               ; 0054e46b
    PUSH EAX                            ; 0054e471
    MOV EDX,dword ptr [ESP + 0x24]      ; 0054e472
    PUSH EDX                            ; 0054e476
    MOV ECX,dword ptr [ESP + 0x24]      ; 0054e477
    PUSH ECX                            ; 0054e47b
    PUSH ESI                            ; 0054e47c
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40 ; 0054e47d
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054e482
    PUSH EAX                            ; 0054e485
    LEA ESI,[ESP + 0x10]                ; 0054e486
    MOV EDI,EBX                         ; 0054e48a
    CALL core_skeleton.cpp_CDeformableModel_skinSingleVertex_FUN_00548a30 ; 0054e48c
        ;   XREF to: 00548a30 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModel_skinSingleVertex_FUN_00548a30(CDeformableModel * this_ptr, int lod_index, int vertex_index, CMatrix3x4f * bone_matrices, ...)
    LEA ESI,[ESP + 0x10]                ; 0054e491
    ADD ESP,0x10                        ; 0054e495
    MOVSD ES:EDI,ESI                    ; 0054e498
    MOVSD ES:EDI,ESI                    ; 0054e499
    MOVSD ES:EDI,ESI                    ; 0054e49a
    MOV EAX,EBX                         ; 0054e49b
    ADD ESP,0xc                         ; 0054e49d
    POP EDI                             ; 0054e4a0
    POP EBX                             ; 0054e4a1
    RET                                 ; 0054e4a2

