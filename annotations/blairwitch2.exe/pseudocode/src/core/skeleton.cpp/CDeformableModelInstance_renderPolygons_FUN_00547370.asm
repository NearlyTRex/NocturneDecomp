; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_renderPolygons_FUN_00547370(CDeformableModelInstance *this_ptr,int render_flags,int skip_texture_capture)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   render_flags
; int              Stack[0xc]:4   skip_texture_capture
;
; XREF[2]:
;   core_charactr.cpp_CCharacter_renderEthereal_FUN_00426730 at 00426875
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170 at 005471ab
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005e733f
;   TerminatedCString s_CDeformableModelInstance_005e7354
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_skeleton.cpp_CDeformableModel_renderParts_FUN_00541a60
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00547370
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_00547370
    PUSH EDI                            ; 00547371
    PUSH EBP                            ; 00547372
    MOV EBX,dword ptr [ESP + 0x10]      ; 00547373
    CMP dword ptr [EBX + 0x2230],0x0    ; 00547377
    JL 0x005473b5                       ; 0054737e
        ;   XREF to: 005473b5 (CONDITIONAL_JUMP)  ; LAB_005473b5
    MOV EDI,dword ptr [ESP + 0x18]      ; 00547380
        ;   Label: LAB_00547380
    PUSH EDI                            ; 00547384
    MOV EBP,dword ptr [ESP + 0x18]      ; 00547385
    PUSH EBP                            ; 00547389
    LEA EAX,[EBX + 0x21b8]              ; 0054738a
    PUSH EAX                            ; 00547390
    LEA EAX,[EBX + 0x2140]              ; 00547391
    PUSH EAX                            ; 00547397
    MOV EAX,dword ptr [EBX + 0x2230]    ; 00547398
    PUSH EAX                            ; 0054739e
    PUSH EBX                            ; 0054739f
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810 ; 005473a0
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005473a5
    PUSH EAX                            ; 005473a8
    CALL core_skeleton.cpp_CDeformableModel_renderParts_FUN_00541a60 ; 005473a9
        ;   XREF to: 00541a60 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_renderParts_FUN_00541a60(CDeformableModel * this_ptr, int lod_index, int * part_visibility_flags, int * texture_set_indices, ...)
    ADD ESP,0x18                        ; 005473ae
    POP EBP                             ; 005473b1
    POP EDI                             ; 005473b2
    POP EBX                             ; 005473b3
    RET                                 ; 005473b4
    PUSH ESI                            ; 005473b5
        ;   Label: LAB_005473b5
    MOV ECX,0x5e733f                    ; 005473b6 | = "..\\core\\skeleton.cpp"
    MOV ESI,0xd32                       ; 005473bb
    PUSH 0x5e7354                       ; 005473c0 | = "CDeformableModelInstance::renderPolyg..."
    MOV dword ptr [0x01d046a0],ECX      ; 005473c5 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 005473cb | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005473d1
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005473d6
    POP ESI                             ; 005473d9
    JMP 0x00547380                      ; 005473da
        ;   XREF to: 00547380 (UNCONDITIONAL_JUMP)  ; LAB_00547380

