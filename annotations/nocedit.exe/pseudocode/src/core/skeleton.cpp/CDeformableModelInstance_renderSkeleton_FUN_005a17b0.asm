; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_skeleton.cpp_CDeformableModelInstance_renderSkeleton_FUN_005a17b0(CDeformableModelInstance * this_ptr, int color, int render_flags)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   color
; int              Stack[0xc]:4   render_flags
;
; XREF[1]:
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 at 00597578
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_renderSkeleton_FUN_0059b640
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a17b0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_renderSkeleton_FUN_005a17b0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a17b1
    MOV ECX,dword ptr [ESP + 0x10]      ; 005a17b5
    PUSH ECX                            ; 005a17b9
    LEA EAX,[EDX + 0xe80]               ; 005a17ba
    PUSH EAX                            ; 005a17c0
    MOV EBX,dword ptr [ESP + 0x14]      ; 005a17c1
    PUSH EBX                            ; 005a17c5
    PUSH EDX                            ; 005a17c6
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 005a17c7
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a17cc
    PUSH EAX                            ; 005a17cf
    CALL core_skeleton.cpp_CDeformableModel_renderSkeleton_FUN_0059b640 ; 005a17d0
        ;   XREF to: 0059b640 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_renderSkeleton_FUN_0059b640(CDeformableModel * this_ptr, int color, CMatrix3x4f * bone_matrices, int render_flags)
    ADD ESP,0x10                        ; 005a17d5
    POP EBX                             ; 005a17d8
    RET                                 ; 005a17d9

