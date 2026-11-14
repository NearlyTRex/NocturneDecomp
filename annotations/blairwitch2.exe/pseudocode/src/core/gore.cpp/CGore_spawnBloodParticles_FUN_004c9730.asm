; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CGore_spawnBloodParticles_FUN_004c9730(CGore *this_ptr,CVector3f *position,CVector3f *velocity,EBloodType blood_type)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   velocity
; EBloodType       Stack[0x10]:4   blood_type
;
; XREF[8]:
;   core_bodypart.cpp_CBodyPart_spawnGore_FUN_00417a70 at 00417a9d
;   core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_00427130 at 004271c8
;   core_charactr.cpp_FUN_00426f30 at 00427052
;   core_charactr.cpp_FUN_00427060 at 00427115
;   core_gore.cpp_CGore_spawnBloodBurst_FUN_004c9850 at 004c9884
;   core_hostage.cpp_CHostage_process_FUN_004d1660 at 004d1bd2
;   core_schngeis.cpp_FUN_005a3560 at 005a3815
;   core_tentacle.cpp_CTentacle_process_FUN_005726c0 at 00572b11
;
; Referenced Globals:
;   undefined4 DAT_01cb82f0
;
; Called Functions:
;   core_gore.cpp_CBloodParticle_setup_FUN_004c7460
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004c9730
        ;   Label: core_gore.cpp_CGore_spawnBloodParticles_FUN_004c9730
    MOV ECX,dword ptr [ESP + 0x14]      ; 004c9731
    CMP ECX,0x2                         ; 004c9735
    JZ 0x004c9780                       ; 004c9738
        ;   XREF to: 004c9780 (CONDITIONAL_JUMP)  ; LAB_004c9780
    PUSH EDI                            ; 004c973a
    MOV EDX,dword ptr [0x01cb82f0]      ; 004c973b | DAT_01cb82f0
    LEA EAX,[EDX*0x8 + 0x0]             ; 004c9741
    ADD EAX,EDX                         ; 004c9748
    SHL EAX,0x3                         ; 004c974a
    INC EDX                             ; 004c974d
    ADD EAX,0x1cb82f4                   ; 004c974e
    MOV dword ptr [0x01cb82f0],EDX      ; 004c9753 | DAT_01cb82f0
    CMP EDX,0x100                       ; 004c9759
    JL 0x004c976b                       ; 004c975f
        ;   XREF to: 004c976b (CONDITIONAL_JUMP)  ; LAB_004c976b
    PUSH ESI                            ; 004c9761
    XOR ESI,ESI                         ; 004c9762
    MOV dword ptr [0x01cb82f0],ESI      ; 004c9764 | DAT_01cb82f0
    POP ESI                             ; 004c976a
    PUSH ECX                            ; 004c976b
        ;   Label: LAB_004c976b
    MOV EDI,dword ptr [ESP + 0x18]      ; 004c976c
    PUSH EDI                            ; 004c9770
    MOV EBP,dword ptr [ESP + 0x18]      ; 004c9771
    PUSH EBP                            ; 004c9775
    PUSH EAX                            ; 004c9776
    CALL core_gore.cpp_CBloodParticle_setup_FUN_004c7460 ; 004c9777
        ;   XREF to: 004c7460 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CBloodParticle_setup_FUN_004c7460(CBloodParticle * this_ptr, CVector3f * position, CVector3f * velocity, EBloodType blood_type)
    ADD ESP,0x10                        ; 004c977c
    POP EDI                             ; 004c977f
    POP EBP                             ; 004c9780
        ;   Label: LAB_004c9780
    RET                                 ; 004c9781

