; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_renderPolygons_FUN_0051dbc0(CDeformableModelInstance *this_ptr,int render_flags,int skip_texture_capture)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   render_flags
; int              Stack[0xc]:4   skip_texture_capture
;
; XREF[2]:
;   core_charactr.cpp_FUN_004270e0 at 00427225
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0 at 0051da0b
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_00591bd3
;   TerminatedCString s_CDeformableModelInstance_00591be8
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   core_skeleton.cpp_CDeformableModel_renderParts_FUN_00518510
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051dbc0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_0051dbc0
    PUSH EDI                            ; 0051dbc1
    PUSH EBP                            ; 0051dbc2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0051dbc3
    CMP dword ptr [EBX + 0x2230],0x0    ; 0051dbc7
    JL 0x0051dc05                       ; 0051dbce
        ;   XREF to: 0051dc05 (CONDITIONAL_JUMP)  ; LAB_0051dc05
    MOV EDI,dword ptr [ESP + 0x18]      ; 0051dbd0
        ;   Label: LAB_0051dbd0
    PUSH EDI                            ; 0051dbd4
    MOV EBP,dword ptr [ESP + 0x18]      ; 0051dbd5
    PUSH EBP                            ; 0051dbd9
    LEA EAX,[EBX + 0x21b8]              ; 0051dbda
    PUSH EAX                            ; 0051dbe0
    LEA EAX,[EBX + 0x2140]              ; 0051dbe1
    PUSH EAX                            ; 0051dbe7
    MOV EAX,dword ptr [EBX + 0x2230]    ; 0051dbe8
    PUSH EAX                            ; 0051dbee
    PUSH EBX                            ; 0051dbef
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020 ; 0051dbf0
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0051dbf5
    PUSH EAX                            ; 0051dbf8
    CALL core_skeleton.cpp_CDeformableModel_renderParts_FUN_00518510 ; 0051dbf9
        ;   XREF to: 00518510 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_renderParts_FUN_00518510(CDeformableModel * this_ptr, int lod_index, int * part_visibility_flags, int * texture_set_indices, ...)
    ADD ESP,0x18                        ; 0051dbfe
    POP EBP                             ; 0051dc01
    POP EDI                             ; 0051dc02
    POP EBX                             ; 0051dc03
    RET                                 ; 0051dc04
    PUSH ESI                            ; 0051dc05
        ;   Label: LAB_0051dc05
    MOV ECX,0x591bd3                    ; 0051dc06 | = "..\\core\\skeleton.cpp"
    MOV ESI,0xd23                       ; 0051dc0b
    PUSH 0x591be8                       ; 0051dc10 | = "CDeformableModelInstance::renderPolyg..."
    MOV dword ptr [0x01cc4800],ECX      ; 0051dc15 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 0051dc1b | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0051dc21
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0051dc26
    POP ESI                             ; 0051dc29
    JMP 0x0051dbd0                      ; 0051dc2a
        ;   XREF to: 0051dbd0 (UNCONDITIONAL_JUMP)  ; LAB_0051dbd0

