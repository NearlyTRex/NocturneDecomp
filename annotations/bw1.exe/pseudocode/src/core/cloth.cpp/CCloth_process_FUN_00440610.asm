; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CCloth_process_FUN_00440610(CCloth *this_ptr,CVector3f *position,CVector3f *euler,float delta_time,float floor_y ,CDeformableModelInstance *model_ptr)
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
;   core_cloth.cpp_CClothList_process_FUN_00441fa0 at 00441fd4
;   core_gabriela.cpp_FUN_004c65f0 at 004c6eb8
;   core_mimic.cpp_FUN_0050fba0 at 005104e3
;   core_svetlana.cpp_FUN_00593150 at 00593505
;   core_vampboss.cpp_FUN_005a5550 at 005a6354
;
; Called Functions:
;   core_cloth.cpp_FUN_00440640
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00440610
        ;   Label: core_cloth.cpp_CCloth_process_FUN_00440610
    PUSH ESI                            ; 00440611
    MOV EDX,dword ptr [ESP + 0x20]      ; 00440612
    PUSH EDX                            ; 00440616
    PUSH dword ptr [ESP + 0x20]         ; 00440617
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0044061b
    PUSH dword ptr [ESP + 0x20]         ; 0044061f
    PUSH ECX                            ; 00440623
    MOV EBX,dword ptr [ESP + 0x20]      ; 00440624
    PUSH EBX                            ; 00440628
    MOV ESI,dword ptr [ESP + 0x20]      ; 00440629
    PUSH ESI                            ; 0044062d
    CALL core_cloth.cpp_FUN_00440640    ; 0044062e
        ;   XREF to: 00440640 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_00440640(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 00440633
    POP ESI                             ; 00440636
    POP EBX                             ; 00440637
    RET                                 ; 00440638

