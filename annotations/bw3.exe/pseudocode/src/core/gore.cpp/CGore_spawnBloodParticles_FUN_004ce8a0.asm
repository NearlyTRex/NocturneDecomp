; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CGore_spawnBloodParticles_FUN_004ce8a0(CGore *this_ptr,CVector3f *position,CVector3f *velocity,EBloodType blood_type)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   velocity
; EBloodType       Stack[0x10]:4   blood_type
;
; XREF[6]:
;   core_bodypart.cpp_CBodyPart_spawnGore_FUN_00416b20 at 00416b4d
;   core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_0042fe90 at 0042ff28
;   core_charactr.cpp_FUN_0042fc90 at 0042fdb2
;   core_charactr.cpp_FUN_0042fdc0 at 0042fe75
;   core_gore.cpp_CGore_spawnBloodBurst_FUN_004ce9c0 at 004ce9f4
;   core_melee.cpp_CMelee_process_FUN_004e73e0 at 004e749c
;
; Referenced Globals:
;   undefined4 DAT_01d22eb0
;
; Called Functions:
;   core_gore.cpp_CBloodParticle_setup_FUN_004ccac0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004ce8a0
        ;   Label: core_gore.cpp_CGore_spawnBloodParticles_FUN_004ce8a0
    MOV ECX,dword ptr [ESP + 0x14]      ; 004ce8a1
    CMP ECX,0x2                         ; 004ce8a5
    JZ 0x004ce8f0                       ; 004ce8a8
        ;   XREF to: 004ce8f0 (CONDITIONAL_JUMP)  ; LAB_004ce8f0
    PUSH EDI                            ; 004ce8aa
    MOV EDX,dword ptr [0x01d22eb0]      ; 004ce8ab | DAT_01d22eb0
    LEA EAX,[EDX*0x8 + 0x0]             ; 004ce8b1
    ADD EAX,EDX                         ; 004ce8b8
    SHL EAX,0x3                         ; 004ce8ba
    INC EDX                             ; 004ce8bd
    ADD EAX,0x1d22eb4                   ; 004ce8be
    MOV dword ptr [0x01d22eb0],EDX      ; 004ce8c3 | DAT_01d22eb0
    CMP EDX,0x100                       ; 004ce8c9
    JL 0x004ce8db                       ; 004ce8cf
        ;   XREF to: 004ce8db (CONDITIONAL_JUMP)  ; LAB_004ce8db
    PUSH ESI                            ; 004ce8d1
    XOR ESI,ESI                         ; 004ce8d2
    MOV dword ptr [0x01d22eb0],ESI      ; 004ce8d4 | DAT_01d22eb0
    POP ESI                             ; 004ce8da
    PUSH ECX                            ; 004ce8db
        ;   Label: LAB_004ce8db
    MOV EDI,dword ptr [ESP + 0x18]      ; 004ce8dc
    PUSH EDI                            ; 004ce8e0
    MOV EBP,dword ptr [ESP + 0x18]      ; 004ce8e1
    PUSH EBP                            ; 004ce8e5
    PUSH EAX                            ; 004ce8e6
    CALL core_gore.cpp_CBloodParticle_setup_FUN_004ccac0 ; 004ce8e7
        ;   XREF to: 004ccac0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CBloodParticle_setup_FUN_004ccac0(CBloodParticle * this_ptr, CVector3f * position, CVector3f * velocity, EBloodType blood_type)
    ADD ESP,0x10                        ; 004ce8ec
    POP EDI                             ; 004ce8ef
    POP EBP                             ; 004ce8f0
        ;   Label: LAB_004ce8f0
    RET                                 ; 004ce8f1

