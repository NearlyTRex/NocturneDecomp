; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CClothList_process_FUN_00441fa0(CClothList *this_ptr,CVector3f *position,CVector3f *euler,float delta_time,float floor_y,CDeformableModelInstance *model_ptr)
;
; Parameters:
; CClothList *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   euler
; float            Stack[0x10]:4   delta_time
; float            Stack[0x14]:4   floor_y
; CDeformableModelInstance * Stack[0x18]:4   model_ptr
;
; XREF[4]:
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80 at 00433efd
;   core_charactr.cpp_CCharacter_setup_FUN_0042c510 at 0042c6da
;   core_succubus.cpp_CSuccubus_process_FUN_00592320 at 00592761
;   core_succubus.cpp_CSuccubus_setup_FUN_00591ff0 at 005920a1
;
; Called Functions:
;   core_cloth.cpp_CCloth_process_FUN_00440610
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441fa0
        ;   Label: core_cloth.cpp_CClothList_process_FUN_00441fa0
    PUSH EDI                            ; 00441fa1
    PUSH EBP                            ; 00441fa2
    MOV EDI,dword ptr [ESP + 0x10]      ; 00441fa3
    MOV EBP,dword ptr [ESP + 0x24]      ; 00441fa7
    MOV EDX,dword ptr [EDI]             ; 00441fab
    XOR EBX,EBX                         ; 00441fad
    TEST EDX,EDX                        ; 00441faf
    JLE 0x00441fe3                      ; 00441fb1
        ;   XREF to: 00441fe3 (CONDITIONAL_JUMP)  ; LAB_00441fe3
    PUSH ESI                            ; 00441fb3
    MOV ESI,EDI                         ; 00441fb4
    PUSH EBP                            ; 00441fb6
        ;   Label: LAB_00441fb6
    PUSH dword ptr [ESP + 0x28]         ; 00441fb7
    MOV ECX,dword ptr [ESP + 0x24]      ; 00441fbb
    PUSH dword ptr [ESP + 0x28]         ; 00441fbf
    PUSH ECX                            ; 00441fc3
    MOV EAX,dword ptr [ESP + 0x28]      ; 00441fc4
    PUSH EAX                            ; 00441fc8
    MOV EDX,dword ptr [ESI + 0x194]     ; 00441fc9
    PUSH EDX                            ; 00441fcf
    ADD ESI,0x4                         ; 00441fd0
    INC EBX                             ; 00441fd3
    CALL core_cloth.cpp_CCloth_process_FUN_00440610 ; 00441fd4
        ;   XREF to: 00440610 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_process_FUN_00440610(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    MOV ECX,dword ptr [EDI]             ; 00441fd9
    ADD ESP,0x18                        ; 00441fdb
    CMP EBX,ECX                         ; 00441fde
    JL 0x00441fb6                       ; 00441fe0
        ;   XREF to: 00441fb6 (CONDITIONAL_JUMP)  ; LAB_00441fb6
    POP ESI                             ; 00441fe2
    POP EBP                             ; 00441fe3
        ;   Label: LAB_00441fe3
    POP EDI                             ; 00441fe4
    POP EBX                             ; 00441fe5
    RET                                 ; 00441fe6

