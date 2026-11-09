; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_skeleton_cpp_CDeformableModel_getVertexPoolPtr_FUN_00541620(CDeformableModel *this_ptr,int index)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   index
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005474b0 at 0054756b
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00541620
        ;   Label: core_skeleton.cpp_CDeformableModel_getVertexPoolPtr_FUN_00541620
    LEA EAX,[EDX*0x4 + 0x0]             ; 00541624
    SUB EAX,EDX                         ; 0054162b
    LEA EDX,[EAX*0x4 + 0x0]             ; 0054162d
    MOV EAX,dword ptr [ESP + 0x4]       ; 00541634
    ADD EAX,0x1750                      ; 00541638
    ADD EAX,EDX                         ; 0054163d
    RET                                 ; 0054163f

