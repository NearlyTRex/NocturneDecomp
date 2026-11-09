; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_CBodyPart_spawnGore_FUN_00416b20(CBodyPart *this_ptr)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_bodypart.cpp_FUN_00415350 at 00415395
;
; Referenced Globals:
;   CGore* g_CGorePtr = 01d22e44
;   undefined4 DAT_02cfd900
;
; Called Functions:
;   core_actor.cpp_FUN_0040cf40
;   core_gore.cpp_CGore_spawnBloodParticles_FUN_004ce8a0
;
; *****************************************************************************

section .text

    PUSH 0x3da3d70a                     ; 00416b20
        ;   Label: core_bodypart.cpp_CBodyPart_spawnGore_FUN_00416b20
    CALL core_actor.cpp_FUN_0040cf40    ; 00416b25
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 00416b2a
    TEST EAX,EAX                        ; 00416b2d
    JNZ 0x00416b32                      ; 00416b2f
        ;   XREF to: 00416b32 (CONDITIONAL_JUMP)  ; LAB_00416b32
    RET                                 ; 00416b31
    MOV EAX,dword ptr [ESP + 0x4]       ; 00416b32
        ;   Label: LAB_00416b32
    MOV EDX,dword ptr [EAX + 0xcb8]     ; 00416b36
    PUSH EDX                            ; 00416b3c
    PUSH 0x2cfd900                      ; 00416b3d | DAT_02cfd900
    ADD EAX,0x20                        ; 00416b42
    PUSH EAX                            ; 00416b45
    MOV ECX,dword ptr [0x005fed24]      ; 00416b46 | g_CGorePtr
    PUSH ECX                            ; 00416b4c
    CALL core_gore.cpp_CGore_spawnBloodParticles_FUN_004ce8a0 ; 00416b4d
        ;   XREF to: 004ce8a0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodParticles_FUN_004ce8a0(CGore * this_ptr, CVector3f * position, CVector3f * velocity, EBloodType blood_type)
    ADD ESP,0x10                        ; 00416b52
    RET                                 ; 00416b55

