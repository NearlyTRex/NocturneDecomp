; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_skeleton_cpp_CDeformableModel_getVertexPoolPtr_FUN_00518180(int param_1,int param_2)
;
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_0051dd00 at 0051ddae
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00518180
        ;   Label: core_skeleton.cpp_CDeformableModel_getVertexPoolPtr_FUN_00518180
    LEA EAX,[EDX*0x4 + 0x0]             ; 00518184
    SUB EAX,EDX                         ; 0051818b
    LEA EDX,[EAX*0x4 + 0x0]             ; 0051818d
    MOV EAX,dword ptr [ESP + 0x4]       ; 00518194
    ADD EAX,0x1750                      ; 00518198
    ADD EAX,EDX                         ; 0051819d
    RET                                 ; 0051819f

