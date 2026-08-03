; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_bindSkeleton_FUN_00519ae0(CDeformableModel *this_ptr,CSkeleton *skeleton_ptr)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; CSkeleton *      Stack[0x8]:4   skeleton_ptr
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModel_captureTextures_FUN_005180a0 at 005180be
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0051b280
;   core_skeleton.cpp_CDeformableModel_computeFarthestChildBones_FUN_0051b480
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00519ae0
        ;   Label: core_skeleton.cpp_CDeformableModel_bindSkeleton_FUN_00519ae0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00519ae1
    MOV EAX,dword ptr [ESP + 0xc]       ; 00519ae5
    PUSH EBX                            ; 00519ae9
    MOV dword ptr [EBX + 0x2a6c],EAX    ; 00519aea
    CALL core_skeleton.cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0051b280 ; 00519af0
        ;   XREF to: 0051b280 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0051b280(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 00519af5
    PUSH EBX                            ; 00519af8
    CALL core_skeleton.cpp_CDeformableModel_computeFarthestChildBones_FUN_0051b480 ; 00519af9
        ;   XREF to: 0051b480 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_computeFarthestChildBones_FUN_0051b480(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 00519afe
    POP EBX                             ; 00519b01
    RET                                 ; 00519b02

