; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_skeleton_cpp_CDeformableModel_getVertexPoolPtr_FUN_00548830(CDeformableModel *this_ptr,int index)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   index
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_0054e6e0 at 0054e79b
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00548830
        ;   Label: core_skeleton.cpp_CDeformableModel_getVertexPoolPtr_FUN_00548830
    LEA EAX,[EDX*0x4 + 0x0]             ; 00548834
    SUB EAX,EDX                         ; 0054883b
    LEA EDX,[EAX*0x4 + 0x0]             ; 0054883d
    MOV EAX,dword ptr [ESP + 0x4]       ; 00548844
    ADD EAX,0x2290                      ; 00548848
    ADD EAX,EDX                         ; 0054884d
    RET                                 ; 0054884f

