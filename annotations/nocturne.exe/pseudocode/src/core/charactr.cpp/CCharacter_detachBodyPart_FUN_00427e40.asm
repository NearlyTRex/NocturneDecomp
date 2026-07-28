; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_detachBodyPart_FUN_00427e40(CCharacter *this_ptr,int part_index,CVector3f *initial_velocity,int render_in_background)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   part_index
; CVector3f *      Stack[0xc]:4   initial_velocity
; int              Stack[0x10]:4   render_in_background
;
; XREF[10]:
;   core_batcreat.cpp_CBatCreature_processDismemberment_FUN_00412de0 at 00412fa4
;   core_batman.cpp_CBatman_processDismemberment_FUN_004145f0 at 00414731
;   core_charactr.cpp_CCharacter_dismember_FUN_00427b60 at 00427be6
;   core_cow.cpp_CZombieCow_processDismemberment_FUN_0043c360 at 0043c43d
;   core_gargoyle.cpp_CGargoyle_processDismemberment_FUN_004a8330 at 004a8461
;   core_ghoul.cpp_CGhoul_processDismemberment_FUN_004ab190 at 004ab2cc
;   core_imp.cpp_CImp_processDismemberment_FUN_004bca20 at 004bcb61
;   core_mobster.cpp_CMobster_processDismemberment_FUN_004dc2d0 at 004dc454
;   core_smiley.cpp_CSmiley_processDismemberment_FUN_00520b60 at 00520cbb
;   core_zombie.cpp_CZombie_processDismemberment_FUN_00561cf0 at 00561e2c
;
; Called Functions:
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40
;   core_bodypart.cpp_createBodyPart_FUN_00415b30
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00427e40
        ;   Label: core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40
    PUSH ESI                            ; 00427e41
    PUSH EBP                            ; 00427e42
    MOV EBX,dword ptr [ESP + 0x10]      ; 00427e43
    LEA ESI,[EBX + 0x23b0]              ; 00427e47
    CMP byte ptr [ESI],0x0              ; 00427e4d
    JZ 0x00427e60                       ; 00427e50
        ;   XREF to: 00427e60 (CONDITIONAL_JUMP)  ; LAB_00427e60
    MOV ESI,dword ptr [ESP + 0x14]      ; 00427e52
    CMP dword ptr [EBX + ESI*0x4 + 0x2290],0x0 ; 00427e56
    JNZ 0x00427e64                      ; 00427e5e
        ;   XREF to: 00427e64 (CONDITIONAL_JUMP)  ; LAB_00427e64
    POP EBP                             ; 00427e60
        ;   Label: LAB_00427e60
    POP ESI                             ; 00427e61
    POP EBX                             ; 00427e62
    RET                                 ; 00427e63
    PUSH EDI                            ; 00427e64
        ;   Label: LAB_00427e64
    MOV ECX,dword ptr [EBX + 0x2608]    ; 00427e65
    PUSH ECX                            ; 00427e6b
    PUSH 0x0                            ; 00427e6c
    PUSH 0x0                            ; 00427e6e
    PUSH EBX                            ; 00427e70
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00427e71
    PUSH ESI                            ; 00427e75
    LEA ESI,[EBX + 0x30]                ; 00427e76
    PUSH ESI                            ; 00427e79
    LEA ESI,[EBX + 0x20]                ; 00427e7a
    PUSH ESI                            ; 00427e7d
    CALL core_bodypart.cpp_createBodyPart_FUN_00415b30 ; 00427e7e
        ;   XREF to: 00415b30 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_createBodyPart_FUN_00415b30(CVector3f * position, UOrientationVector * orientation, CVector3f * initial_velocity, CDemonActor * scale_source, ...)
    ADD ESP,0x1c                        ; 00427e83
    MOV EDI,dword ptr [ESP + 0x20]      ; 00427e86
    PUSH EDI                            ; 00427e8a
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00427e8b
    PUSH EBP                            ; 00427e8f
    PUSH EAX                            ; 00427e90
    PUSH EBX                            ; 00427e91
    MOV ESI,EAX                         ; 00427e92
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0 ; 00427e94
        ;   XREF to: 00427eb0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 00427e99
    PUSH ESI                            ; 00427e9c
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40 ; 00427e9d
        ;   XREF to: 00416d40 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40(CBodyPart * this_ptr)
    ADD ESP,0x4                         ; 00427ea2
    POP EDI                             ; 00427ea5
    POP EBP                             ; 00427ea6
    POP ESI                             ; 00427ea7
    POP EBX                             ; 00427ea8
    RET                                 ; 00427ea9

