; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_detachBodyPart_FUN_00430520(CCharacter *this_ptr,int part_index,CVector3f *initial_velocity,int render_in_background)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   part_index
; CVector3f *      Stack[0xc]:4   initial_velocity
; int              Stack[0x10]:4   render_in_background
;
; XREF[10]:
;   core_carved.cpp_FUN_00428810 at 004289cf
;   core_charactr.cpp_FUN_004300e0 at 004302bf
;   core_cow.cpp_CZombieCow_processDismemberment_FUN_00445730 at 0044580d
;   core_gargoyle.cpp_CGargoyle_processDismemberment_FUN_004c5f10 at 004c6041
;   core_ghoul.cpp_CGhoul_processDismemberment_FUN_004c9140 at 004c927c
;   core_imp.cpp_CImp_processDismemberment_FUN_004d7bd0 at 004d7d11
;   core_moocow.cpp_FUN_004f9050 at 004f90fb
;   core_zombie.cpp_CZombie_processDismemberment_FUN_0058c330 at 0058c4ef
;   unkafter_demnfolk.cpp_FUN_00458680 at 004587bc
;   unkafter_zombiepr.cpp_FUN_0058f630 at 0058f852
;
; Called Functions:
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_004157c0
;   core_bodypart.cpp_createBodyPart_FUN_00414550
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00430590
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00430520
        ;   Label: core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520
    PUSH ESI                            ; 00430521
    PUSH EBP                            ; 00430522
    MOV EBX,dword ptr [ESP + 0x10]      ; 00430523
    LEA ESI,[EBX + 0x24a8]              ; 00430527
    CMP byte ptr [ESI],0x0              ; 0043052d
    JZ 0x00430540                       ; 00430530
        ;   XREF to: 00430540 (CONDITIONAL_JUMP)  ; LAB_00430540
    MOV ESI,dword ptr [ESP + 0x14]      ; 00430532
    CMP dword ptr [EBX + ESI*0x4 + 0x2298],0x0 ; 00430536
    JNZ 0x00430544                      ; 0043053e
        ;   XREF to: 00430544 (CONDITIONAL_JUMP)  ; LAB_00430544
    POP EBP                             ; 00430540
        ;   Label: LAB_00430540
    POP ESI                             ; 00430541
    POP EBX                             ; 00430542
    RET                                 ; 00430543
    PUSH EDI                            ; 00430544
        ;   Label: LAB_00430544
    MOV ECX,dword ptr [EBX + 0x27a0]    ; 00430545
    PUSH ECX                            ; 0043054b
    PUSH 0x0                            ; 0043054c
    PUSH 0x0                            ; 0043054e
    PUSH EBX                            ; 00430550
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00430551
    PUSH ESI                            ; 00430555
    LEA ESI,[EBX + 0x30]                ; 00430556
    PUSH ESI                            ; 00430559
    LEA ESI,[EBX + 0x20]                ; 0043055a
    PUSH ESI                            ; 0043055d
    CALL core_bodypart.cpp_createBodyPart_FUN_00414550 ; 0043055e
        ;   XREF to: 00414550 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_createBodyPart_FUN_00414550(CVector3f * position, UOrientationVector * orientation, CVector3f * initial_velocity, CDemonActor * scale_source, ...)
    ADD ESP,0x1c                        ; 00430563
    MOV EDI,dword ptr [ESP + 0x20]      ; 00430566
    PUSH EDI                            ; 0043056a
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0043056b
    PUSH EBP                            ; 0043056f
    PUSH EAX                            ; 00430570
    PUSH EBX                            ; 00430571
    MOV ESI,EAX                         ; 00430572
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00430590 ; 00430574
        ;   XREF to: 00430590 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00430590(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 00430579
    PUSH ESI                            ; 0043057c
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_004157c0 ; 0043057d
        ;   XREF to: 004157c0 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_004157c0(CBodyPart * this_ptr)
    ADD ESP,0x4                         ; 00430582
    POP EDI                             ; 00430585
    POP EBP                             ; 00430586
    POP ESI                             ; 00430587
    POP EBX                             ; 00430588
    RET                                 ; 00430589

