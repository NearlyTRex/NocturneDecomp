; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CClothList_process_FUN_0043fc00(CClothList *this_ptr,CVector3f *position,CVector3f *euler,float delta_time,float floor_y,CDeformableModelInstance *model_ptr)
;
; Parameters:
; CClothList *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   euler
; float            Stack[0x10]:4   delta_time
; float            Stack[0x14]:4   floor_y
; CDeformableModelInstance * Stack[0x18]:4   model_ptr
;
; XREF[5]:
;   core_charactr.cpp_FUN_0042b0e0 at 0042b2aa
;   core_charactr.cpp_FUN_00433350 at 004333cd
;   core_spirbear.cpp_FUN_0059aba0 at 0059ac4b
;   core_spireagl.cpp_FUN_005992f0 at 00599387
;   core_spirindi.cpp_FUN_0059a060 at 0059a10b
;
; Called Functions:
;   core_cloth.cpp_CCloth_process_FUN_0043e270
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043fc00
        ;   Label: core_cloth.cpp_CClothList_process_FUN_0043fc00
    PUSH EDI                            ; 0043fc01
    PUSH EBP                            ; 0043fc02
    MOV EDI,dword ptr [ESP + 0x10]      ; 0043fc03
    MOV EBP,dword ptr [ESP + 0x24]      ; 0043fc07
    MOV EDX,dword ptr [EDI]             ; 0043fc0b
    XOR EBX,EBX                         ; 0043fc0d
    TEST EDX,EDX                        ; 0043fc0f
    JLE 0x0043fc43                      ; 0043fc11
        ;   XREF to: 0043fc43 (CONDITIONAL_JUMP)  ; LAB_0043fc43
    PUSH ESI                            ; 0043fc13
    MOV ESI,EDI                         ; 0043fc14
    PUSH EBP                            ; 0043fc16
        ;   Label: LAB_0043fc16
    PUSH dword ptr [ESP + 0x28]         ; 0043fc17
    MOV ECX,dword ptr [ESP + 0x24]      ; 0043fc1b
    PUSH dword ptr [ESP + 0x28]         ; 0043fc1f
    PUSH ECX                            ; 0043fc23
    MOV EAX,dword ptr [ESP + 0x28]      ; 0043fc24
    PUSH EAX                            ; 0043fc28
    MOV EDX,dword ptr [ESI + 0x194]     ; 0043fc29
    PUSH EDX                            ; 0043fc2f
    ADD ESI,0x4                         ; 0043fc30
    INC EBX                             ; 0043fc33
    CALL core_cloth.cpp_CCloth_process_FUN_0043e270 ; 0043fc34
        ;   XREF to: 0043e270 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_process_FUN_0043e270(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    MOV ECX,dword ptr [EDI]             ; 0043fc39
    ADD ESP,0x18                        ; 0043fc3b
    CMP EBX,ECX                         ; 0043fc3e
    JL 0x0043fc16                       ; 0043fc40
        ;   XREF to: 0043fc16 (CONDITIONAL_JUMP)  ; LAB_0043fc16
    POP ESI                             ; 0043fc42
    POP EBP                             ; 0043fc43
        ;   Label: LAB_0043fc43
    POP EDI                             ; 0043fc44
    POP EBX                             ; 0043fc45
    RET                                 ; 0043fc46

