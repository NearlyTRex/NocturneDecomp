; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_FUN_00522650(CMorphModel *this_ptr,int part_index,CDeformableModelInstance *model_ptr)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   part_index
; CDeformableModelInstance * Stack[0xc]:4   model_ptr
;
; XREF[1]:
;   core_morph.cpp_FUN_00523290 at 005232b7
;
; Called Functions:
;   core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_00522540
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
;   core_skeleton.cpp_FUN_00567580
;   core_skeleton.cpp_FUN_00569890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00522650
        ;   Label: core_morph.cpp_FUN_00522650
    PUSH ESI                            ; 00522651
    MOV EBX,dword ptr [ESP + 0x14]      ; 00522652
    PUSH EBX                            ; 00522656
    CALL core_skeleton.cpp_FUN_00567580 ; 00522657
        ;   XREF to: 00567580 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_00567580(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0052265c
    PUSH 0x0                            ; 0052265f
    PUSH EBX                            ; 00522661
    CALL core_skeleton.cpp_FUN_00569890 ; 00522662
        ;   XREF to: 00569890 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_00569890(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 00522667
    PUSH EBX                            ; 0052266a
    MOV ESI,dword ptr [EBX + 0x2320]    ; 0052266b
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0 ; 00522671
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00522676
    MOV EDX,dword ptr [EAX + ESI*0x4 + 0x2c] ; 00522679
    PUSH EDX                            ; 0052267d
    PUSH 0x0                            ; 0052267e
    MOV ECX,dword ptr [EBX + 0x2324]    ; 00522680
    PUSH ECX                            ; 00522686
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00522687
    PUSH EBX                            ; 0052268b
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0052268c
    PUSH ESI                            ; 00522690
    CALL core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_00522540 ; 00522691
        ;   XREF to: 00522540 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_00522540(CMorphModel * this_ptr, int part_index, CVector3i * vertex_buffer, int start_offset, ...)
    ADD ESP,0x14                        ; 00522696
    POP ESI                             ; 00522699
    POP EBX                             ; 0052269a
    RET                                 ; 0052269b

