; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CGore_spawnBloodParticles_FUN_004e5f40(CGore *this_ptr,CVector3f *position,CVector3f *velocity,EBloodType blood_type)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   velocity
; EBloodType       Stack[0x10]:4   blood_type
;
; XREF[8]:
;   core_bodypart.cpp_CBodyPart_spawnGore_FUN_0041aef0 at 0041af1d
;   core_charactr.cpp_FUN_00430960 at 00430a82
;   core_charactr.cpp_FUN_00430a90 at 00430b45
;   core_charactr.cpp_FUN_00430b60 at 00430bf8
;   core_gore.cpp_FUN_004e6060 at 004e6094
;   core_hostage.cpp_FUN_004ed890 at 004ede00
;   core_melee.cpp_FUN_005099a0 at 00509a5c
;   core_tentacle.cpp_FUN_005952f0 at 00595741
;
; Referenced Globals:
;   undefined4 DAT_01cd0ea8
;
; Called Functions:
;   core_gore.cpp_FUN_004e3e20
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004e5f40
        ;   Label: core_gore.cpp_CGore_spawnBloodParticles_FUN_004e5f40
    MOV ECX,dword ptr [ESP + 0x14]      ; 004e5f41
    CMP ECX,0x2                         ; 004e5f45
    JZ 0x004e5f90                       ; 004e5f48
        ;   XREF to: 004e5f90 (CONDITIONAL_JUMP)  ; LAB_004e5f90
    PUSH EDI                            ; 004e5f4a
    MOV EDX,dword ptr [0x01cd0ea8]      ; 004e5f4b | DAT_01cd0ea8
    LEA EAX,[EDX*0x8 + 0x0]             ; 004e5f51
    ADD EAX,EDX                         ; 004e5f58
    SHL EAX,0x3                         ; 004e5f5a
    INC EDX                             ; 004e5f5d
    ADD EAX,0x1cd0eac                   ; 004e5f5e
    MOV dword ptr [0x01cd0ea8],EDX      ; 004e5f63 | DAT_01cd0ea8
    CMP EDX,0x100                       ; 004e5f69
    JL 0x004e5f7b                       ; 004e5f6f
        ;   XREF to: 004e5f7b (CONDITIONAL_JUMP)  ; LAB_004e5f7b
    PUSH ESI                            ; 004e5f71
    XOR ESI,ESI                         ; 004e5f72
    MOV dword ptr [0x01cd0ea8],ESI      ; 004e5f74 | DAT_01cd0ea8
    POP ESI                             ; 004e5f7a
    PUSH ECX                            ; 004e5f7b
        ;   Label: LAB_004e5f7b
    MOV EDI,dword ptr [ESP + 0x18]      ; 004e5f7c
    PUSH EDI                            ; 004e5f80
    MOV EBP,dword ptr [ESP + 0x18]      ; 004e5f81
    PUSH EBP                            ; 004e5f85
    PUSH EAX                            ; 004e5f86
    CALL core_gore.cpp_FUN_004e3e20     ; 004e5f87
        ;   XREF to: 004e3e20 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_FUN_004e3e20(CBloodParticle * this_ptr, CVector3f * position, CVector3f * velocity, EBloodType blood_type)
    ADD ESP,0x10                        ; 004e5f8c
    POP EDI                             ; 004e5f8f
    POP EBP                             ; 004e5f90
        ;   Label: LAB_004e5f90
    RET                                 ; 004e5f91

