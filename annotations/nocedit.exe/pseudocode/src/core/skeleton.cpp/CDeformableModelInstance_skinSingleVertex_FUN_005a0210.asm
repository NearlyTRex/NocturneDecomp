; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CVector3f * core_skeleton.cpp_CDeformableModelInstance_skinSingleVertex_FUN_005a0210(CDeformableModelInstance * this_ptr, CVector3f * output_pos, int lod_index, int vertex_index)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   output_pos
; int              Stack[0xc]:4   lod_index
; int              Stack[0x10]:4   vertex_index
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_skinSingleVertex_FUN_0059aa00
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a0210
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_skinSingleVertex_FUN_005a0210
    PUSH ESI                            ; 005a0211
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a0212
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a0216
    LEA EAX,[EDX + 0xe80]               ; 005a021a
    PUSH EAX                            ; 005a0220
    MOV ECX,dword ptr [ESP + 0x1c]      ; 005a0221
    PUSH ECX                            ; 005a0225
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005a0226
    PUSH ESI                            ; 005a022a
    PUSH EBX                            ; 005a022b
    PUSH EDX                            ; 005a022c
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 005a022d | CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005a0232
    PUSH EAX                            ; 005a0235
    CALL core_skeleton.cpp_CDeformableModel_skinSingleVertex_FUN_0059aa00 ; 005a0236 | CVector3f * core_skeleton.cpp_CDeformableModel_skinSingleVertex_FUN_0059aa00(CDeformableModel * this_ptr, CVector3f * output_pos, int lod_index, int vertex_index, ...)
        ;   XREF to: 0059aa00 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 005a023b
    MOV EAX,EBX                         ; 005a023e
    POP ESI                             ; 005a0240
    POP EBX                             ; 005a0241
    RET                                 ; 005a0242

