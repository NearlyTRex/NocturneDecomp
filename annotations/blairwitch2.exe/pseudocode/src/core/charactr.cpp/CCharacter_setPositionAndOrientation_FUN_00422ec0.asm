; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_00422ec0(CCharacter *this_ptr,CVector3f *new_position,CVector3f *new_orientation)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   new_position
; CVector3f *      Stack[0xc]:4   new_orientation
;
; XREF[2]:
;   core_doc.cpp_CDoc_setPositionAndOrientation_FUN_00455580 at 004555a6
;   core_stranger.cpp_CStranger_setPositionAndOrientation_FUN_00567840 at 00567866
;
; Referenced Globals:
;   undefined4 DAT_005f4084
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setPositionAndOrientation_FUN_00409e70
;   core_cloth.cpp_CClothList_process_FUN_005b1780
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00422ec0
        ;   Label: core_charactr.cpp_CCharacter_setPositionAndOrientation_FUN_00422ec0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00422ec1
    PUSH EBX                            ; 00422ec5
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00422ec6
    CALL dword ptr [EAX + 0x100]        ; 00422ecc
    ADD ESP,0x4                         ; 00422ed2
    MOV EDX,dword ptr [ESP + 0x10]      ; 00422ed5
    PUSH EDX                            ; 00422ed9
    MOV ECX,dword ptr [ESP + 0x10]      ; 00422eda
    PUSH ECX                            ; 00422ede
    PUSH EBX                            ; 00422edf
    CALL core_actor.cpp_CDemonActor_setPositionAndOrientation_FUN_00409e70 ; 00422ee0
        ;   XREF to: 00409e70 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setPositionAndOrientation_FUN_00409e70(CDemonActor * this_ptr, CVector3f * new_position, CVector3f * new_orientation)
    LEA EAX,[EBX + 0x2588]              ; 00422ee5
    MOV dword ptr [EAX + 0x8],0x0       ; 00422eeb
    ADD ESP,0xc                         ; 00422ef2
    MOV EDX,dword ptr [EAX + 0x8]       ; 00422ef5
    MOV dword ptr [EAX + 0x4],EDX       ; 00422ef8
    MOV EDX,dword ptr [EAX + 0x4]       ; 00422efb
    MOV dword ptr [EAX],EDX             ; 00422efe
    LEA EAX,[EBX + 0x2b4]               ; 00422f00
    FLD float ptr [0x005f4084]          ; 00422f06 | DAT_005f4084
    PUSH EAX                            ; 00422f0c
    FSTP float ptr [EBX + 0x2574]       ; 00422f0d
    PUSH dword ptr [EBX + 0x2574]       ; 00422f13
    LEA EAX,[EBX + 0x30]                ; 00422f19
    PUSH 0x41200000                     ; 00422f1c
    PUSH EAX                            ; 00422f21
    LEA EAX,[EBX + 0x20]                ; 00422f22
    PUSH EAX                            ; 00422f25
    ADD EBX,0x2d0c                      ; 00422f26
    PUSH EBX                            ; 00422f2c
    CALL core_cloth.cpp_CClothList_process_FUN_005b1780 ; 00422f2d
        ;   XREF to: 005b1780 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_process_FUN_005b1780(CClothList * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 00422f32
    POP EBX                             ; 00422f35
    RET                                 ; 00422f36

