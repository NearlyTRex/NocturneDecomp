; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_renderPolygons_FUN_0054e5a0(CDeformableModelInstance *this_ptr,int render_flags,int skip_texture_capture)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   render_flags
; int              Stack[0xc]:4   skip_texture_capture
;
; XREF[2]:
;   core_charactr.cpp_FUN_0042f310 at 0042f459
;   core_skeleton.cpp_FUN_0054e3a0 at 0054e3db
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005d203c
;   TerminatedCString s_CDeformableModelInstance_005d2051
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_skeleton.cpp_CDeformableModel_renderParts_FUN_00548c70
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054e5a0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_0054e5a0
    PUSH EDI                            ; 0054e5a1
    PUSH EBP                            ; 0054e5a2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0054e5a3
    CMP dword ptr [EBX + 0x2320],0x0    ; 0054e5a7
    JL 0x0054e5e5                       ; 0054e5ae
        ;   XREF to: 0054e5e5 (CONDITIONAL_JUMP)  ; LAB_0054e5e5
    MOV EDI,dword ptr [ESP + 0x18]      ; 0054e5b0
        ;   Label: LAB_0054e5b0
    PUSH EDI                            ; 0054e5b4
    MOV EBP,dword ptr [ESP + 0x18]      ; 0054e5b5
    PUSH EBP                            ; 0054e5b9
    LEA EAX,[EBX + 0x2230]              ; 0054e5ba
    PUSH EAX                            ; 0054e5c0
    LEA EAX,[EBX + 0x2140]              ; 0054e5c1
    PUSH EAX                            ; 0054e5c7
    MOV EAX,dword ptr [EBX + 0x2320]    ; 0054e5c8
    PUSH EAX                            ; 0054e5ce
    PUSH EBX                            ; 0054e5cf
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40 ; 0054e5d0
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054e5d5
    PUSH EAX                            ; 0054e5d8
    CALL core_skeleton.cpp_CDeformableModel_renderParts_FUN_00548c70 ; 0054e5d9
        ;   XREF to: 00548c70 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_renderParts_FUN_00548c70(CDeformableModel * this_ptr, int lod_index, int * part_visibility_flags, int * texture_set_indices, ...)
    ADD ESP,0x18                        ; 0054e5de
    POP EBP                             ; 0054e5e1
    POP EDI                             ; 0054e5e2
    POP EBX                             ; 0054e5e3
    RET                                 ; 0054e5e4
    PUSH ESI                            ; 0054e5e5
        ;   Label: LAB_0054e5e5
    MOV ECX,0x5d203c                    ; 0054e5e6 | = "..\\core\\skeleton.cpp"
    MOV ESI,0xd39                       ; 0054e5eb
    PUSH 0x5d2051                       ; 0054e5f0 | = "CDeformableModelInstance::renderPolyg..."
    MOV dword ptr [0x01d71de0],ECX      ; 0054e5f5 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0054e5fb | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0054e601
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0054e606
    POP ESI                             ; 0054e609
    JMP 0x0054e5b0                      ; 0054e60a
        ;   XREF to: 0054e5b0 (UNCONDITIONAL_JUMP)  ; LAB_0054e5b0

