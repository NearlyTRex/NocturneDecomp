; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_morph_cpp_CMorphModel_FUN_0052a870(CMorphModel *this_ptr)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_morph.cpp_FUN_0052b430 at 0052b45b
;   core_morph.cpp_FUN_0052b550 at 0052b571
;
; Called Functions:
;   core_morph.cpp_CMorphModel_FUN_0052a710
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052a870
        ;   Label: core_morph.cpp_CMorphModel_FUN_0052a870
    PUSH ESI                            ; 0052a871
    PUSH EDI                            ; 0052a872
    PUSH EBP                            ; 0052a873
    MOV EBX,dword ptr [ESP + 0x18]      ; 0052a874
    PUSH 0x0                            ; 0052a878
    PUSH EBX                            ; 0052a87a
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0 ; 0052a87b
        ;   XREF to: 005a01d0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 0052a880
    PUSH EBX                            ; 0052a883
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 0052a884
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    MOV EDX,EAX                         ; 0052a889
    MOV EAX,dword ptr [EBX + 0x2230]    ; 0052a88b
    SHL EAX,0x2                         ; 0052a891
    ADD EAX,EDX                         ; 0052a894
    ADD ESP,0x4                         ; 0052a896
    MOV ECX,dword ptr [EAX + 0x90]      ; 0052a899
    PUSH ECX                            ; 0052a89f
    ADD EDX,0xc0                        ; 0052a8a0
    PUSH EDX                            ; 0052a8a6
    MOV ESI,dword ptr [EAX + 0x7c]      ; 0052a8a7
    PUSH ESI                            ; 0052a8aa
    MOV EDI,dword ptr [EAX + 0x54]      ; 0052a8ab
    PUSH EDI                            ; 0052a8ae
    MOV EBP,dword ptr [EBX + 0x2234]    ; 0052a8af
    PUSH EBP                            ; 0052a8b5
    MOV EDX,dword ptr [EAX + 0x2c]      ; 0052a8b6
    PUSH EDX                            ; 0052a8b9
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0052a8ba
    PUSH ECX                            ; 0052a8be
    CALL core_morph.cpp_CMorphModel_FUN_0052a710 ; 0052a8bf
        ;   XREF to: 0052a710 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_FUN_0052a710(CMorphModel * this_ptr)
    ADD ESP,0x1c                        ; 0052a8c4
    POP EBP                             ; 0052a8c7
    POP EDI                             ; 0052a8c8
    POP ESI                             ; 0052a8c9
    POP EBX                             ; 0052a8ca
    RET                                 ; 0052a8cb

