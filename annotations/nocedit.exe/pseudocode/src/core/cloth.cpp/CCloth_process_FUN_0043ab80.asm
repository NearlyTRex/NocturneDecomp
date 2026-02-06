; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_cloth_cpp_CCloth_process_FUN_0043ab80 (CCloth *this_ptr,CVector3f *position,CVector3f *euler,float delta_time,float floor_y, CDeformableModelInstance *model_ptr)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   euler
; float            Stack[0x10]:4   delta_time
; float            Stack[0x14]:4   floor_y
; CDeformableModelInstance * Stack[0x18]:4   model_ptr
;
; XREF[6]:
;   core_cloth.cpp_CClothList_process_FUN_0043c2d0 at 0043c304
;   core_cloth.cpp_CCloth_boneEditor_FUN_0043c880 at 0043ca56
;   core_gabriela.cpp_CGabriella_process_FUN_004d2ea0 at 004d36c5
;   core_mimic.cpp_CMimic_FUN_0051fcc0 at 005204b6
;   core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0 at 005d8ed2
;   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 at 005e6189
;
; Called Functions:
;   core_cloth.cpp_CCloth_step_FUN_0043abb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043ab80
        ;   Label: core_cloth.cpp_CCloth_process_FUN_0043ab80
    PUSH ESI                            ; 0043ab81
    MOV EDX,dword ptr [ESP + 0x20]      ; 0043ab82
    PUSH EDX                            ; 0043ab86
    PUSH dword ptr [ESP + 0x20]         ; 0043ab87
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0043ab8b
    PUSH dword ptr [ESP + 0x20]         ; 0043ab8f
    PUSH ECX                            ; 0043ab93
    MOV EBX,dword ptr [ESP + 0x20]      ; 0043ab94
    PUSH EBX                            ; 0043ab98
    MOV ESI,dword ptr [ESP + 0x20]      ; 0043ab99
    PUSH ESI                            ; 0043ab9d
    CALL core_cloth.cpp_CCloth_step_FUN_0043abb0 ; 0043ab9e
        ;   XREF to: 0043abb0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_step_FUN_0043abb0(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 0043aba3
    POP ESI                             ; 0043aba6
    POP EBX                             ; 0043aba7
    RET                                 ; 0043aba8

