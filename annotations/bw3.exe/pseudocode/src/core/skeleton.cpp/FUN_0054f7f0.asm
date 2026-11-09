; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_FUN_0054f7f0(CDeformableModelInstance *this_ptr,CVector3f *center_position,CVector3f *orientation_vector,int desired_lod_index)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   center_position
; CVector3f *      Stack[0xc]:4   orientation_vector
; int              Stack[0x10]:4   desired_lod_index
;
; XREF[1]:
;   core_charactr.cpp_FUN_0042ff70 at 0042ffa4
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_shatter_FUN_0054afb0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
;   core_skeleton.cpp_FUN_0054e420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054f7f0
        ;   Label: core_skeleton.cpp_FUN_0054f7f0
    PUSH ESI                            ; 0054f7f1
    PUSH EDI                            ; 0054f7f2
    PUSH EBP                            ; 0054f7f3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0054f7f4
    MOV EAX,dword ptr [ESP + 0x20]      ; 0054f7f8
    CMP EAX,dword ptr [EBX + 0x2320]    ; 0054f7fc
    JNZ 0x0054f841                      ; 0054f802
        ;   XREF to: 0054f841 (CONDITIONAL_JUMP)  ; LAB_0054f841
    LEA EAX,[EBX + 0x2230]              ; 0054f804
        ;   Label: LAB_0054f804
    PUSH EAX                            ; 0054f80a
    LEA EAX,[EBX + 0x2140]              ; 0054f80b
    PUSH EAX                            ; 0054f811
    MOV ECX,dword ptr [EBX + 0x2324]    ; 0054f812
    PUSH ECX                            ; 0054f818
    MOV ESI,dword ptr [EBX + 0x2320]    ; 0054f819
    PUSH ESI                            ; 0054f81f
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0054f820
    PUSH EDI                            ; 0054f824
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0054f825
    PUSH EBP                            ; 0054f829
    PUSH EBX                            ; 0054f82a
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40 ; 0054f82b
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054f830
    PUSH EAX                            ; 0054f833
    CALL core_skeleton.cpp_CDeformableModel_shatter_FUN_0054afb0 ; 0054f834
        ;   XREF to: 0054afb0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_shatter_FUN_0054afb0(CDeformableModel * this_ptr, CVector3f * center_position, CVector3f * orientation_vector, int lod_index, ...)
    ADD ESP,0x1c                        ; 0054f839
    POP EBP                             ; 0054f83c
    POP EDI                             ; 0054f83d
    POP ESI                             ; 0054f83e
    POP EBX                             ; 0054f83f
    RET                                 ; 0054f840
    PUSH EAX                            ; 0054f841
        ;   Label: LAB_0054f841
    PUSH EBX                            ; 0054f842
    CALL core_skeleton.cpp_FUN_0054e420 ; 0054f843
        ;   XREF to: 0054e420 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0054e420(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 0054f848
    JMP 0x0054f804                      ; 0054f84b
        ;   XREF to: 0054f804 (UNCONDITIONAL_JUMP)  ; LAB_0054f804

