; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CCloth_process_FUN_005afdf0(CCloth *this_ptr,CVector3f *position,CVector3f *euler,float delta_time,float floor_y ,CDeformableModelInstance *model_ptr)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   euler
; float            Stack[0x10]:4   delta_time
; float            Stack[0x14]:4   floor_y
; CDeformableModelInstance * Stack[0x18]:4   model_ptr
;
; XREF[5]:
;   core_cloth.cpp_CClothList_process_FUN_005b1780 at 005b17b4
;   core_gabriela.cpp_CGabriella_process_FUN_004ad640 at 004adf10
;   core_mimic.cpp_CMimic_processAnimation_FUN_004f0e10 at 004f1753
;   core_svetlana.cpp_CSvetlana_process_FUN_00570510 at 005708c5
;   core_vampboss.cpp_CVampireBoss_process_FUN_00581910 at 00582714
;
; Called Functions:
;   core_cloth.cpp_CCloth_step_FUN_005afe20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005afdf0
        ;   Label: core_cloth.cpp_CCloth_process_FUN_005afdf0
    PUSH ESI                            ; 005afdf1
    MOV EDX,dword ptr [ESP + 0x20]      ; 005afdf2
    PUSH EDX                            ; 005afdf6
    PUSH dword ptr [ESP + 0x20]         ; 005afdf7
    MOV ECX,dword ptr [ESP + 0x1c]      ; 005afdfb
    PUSH dword ptr [ESP + 0x20]         ; 005afdff
    PUSH ECX                            ; 005afe03
    MOV EBX,dword ptr [ESP + 0x20]      ; 005afe04
    PUSH EBX                            ; 005afe08
    MOV ESI,dword ptr [ESP + 0x20]      ; 005afe09
    PUSH ESI                            ; 005afe0d
    CALL core_cloth.cpp_CCloth_step_FUN_005afe20 ; 005afe0e
        ;   XREF to: 005afe20 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_step_FUN_005afe20(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 005afe13
    POP ESI                             ; 005afe16
    POP EBX                             ; 005afe17
    RET                                 ; 005afe18

