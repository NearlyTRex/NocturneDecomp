; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CVector3f * __cdecl core_skeleton_cpp_CDeformableModel_getVertexPoolPtr_FUN_0059a860(CDeformableModel *this_ptr,int index)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   index
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480 at 005a052e
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0059a860
        ;   Label: core_skeleton.cpp_CDeformableModel_getVertexPoolPtr_FUN_0059a860
    LEA EAX,[EDX*0x4 + 0x0]             ; 0059a864
    SUB EAX,EDX                         ; 0059a86b
    LEA EDX,[EAX*0x4 + 0x0]             ; 0059a86d
    MOV EAX,dword ptr [ESP + 0x4]       ; 0059a874
    ADD EAX,0x7c90                      ; 0059a878
    ADD EAX,EDX                         ; 0059a87d
    RET                                 ; 0059a87f

