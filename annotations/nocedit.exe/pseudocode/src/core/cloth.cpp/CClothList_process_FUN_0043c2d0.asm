; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CClothList_process_FUN_0043c2d0(CClothList *this_ptr,CVector3f *position,CVector3f *euler,float delta_time,float floor_y,CDeformableModelInstance *model_ptr)
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
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0 at 0042e03d
;   core_charactr.cpp_CCharacter_setup_FUN_00428140 at 004282bd
;   core_succubus.cpp_CSuccubus_process_FUN_005c6e90 at 005c7291
;   core_succubus.cpp_CSuccubus_setup_FUN_005c6b60 at 005c6c11
;
; Called Functions:
;   core_cloth.cpp_CCloth_process_FUN_0043ab80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043c2d0
        ;   Label: core_cloth.cpp_CClothList_process_FUN_0043c2d0
    PUSH EDI                            ; 0043c2d1
    PUSH EBP                            ; 0043c2d2
    MOV EDI,dword ptr [ESP + 0x10]      ; 0043c2d3
    MOV EBP,dword ptr [ESP + 0x24]      ; 0043c2d7
    MOV EDX,dword ptr [EDI]             ; 0043c2db
    XOR EBX,EBX                         ; 0043c2dd
    TEST EDX,EDX                        ; 0043c2df
    JLE 0x0043c313                      ; 0043c2e1
        ;   XREF to: 0043c313 (CONDITIONAL_JUMP)  ; LAB_0043c313
    PUSH ESI                            ; 0043c2e3
    MOV ESI,EDI                         ; 0043c2e4
    PUSH EBP                            ; 0043c2e6
        ;   Label: LAB_0043c2e6
    PUSH dword ptr [ESP + 0x28]         ; 0043c2e7
    MOV ECX,dword ptr [ESP + 0x24]      ; 0043c2eb
    PUSH dword ptr [ESP + 0x28]         ; 0043c2ef
    PUSH ECX                            ; 0043c2f3
    MOV EAX,dword ptr [ESP + 0x28]      ; 0043c2f4
    PUSH EAX                            ; 0043c2f8
    MOV EDX,dword ptr [ESI + 0x194]     ; 0043c2f9
    PUSH EDX                            ; 0043c2ff
    ADD ESI,0x4                         ; 0043c300
    INC EBX                             ; 0043c303
    CALL core_cloth.cpp_CCloth_process_FUN_0043ab80 ; 0043c304
        ;   XREF to: 0043ab80 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_process_FUN_0043ab80(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    MOV ECX,dword ptr [EDI]             ; 0043c309
    ADD ESP,0x18                        ; 0043c30b
    CMP EBX,ECX                         ; 0043c30e
    JL 0x0043c2e6                       ; 0043c310
        ;   XREF to: 0043c2e6 (CONDITIONAL_JUMP)  ; LAB_0043c2e6
    POP ESI                             ; 0043c312
    POP EBP                             ; 0043c313
        ;   Label: LAB_0043c313
    POP EDI                             ; 0043c314
    POP EBX                             ; 0043c315
    RET                                 ; 0043c316

