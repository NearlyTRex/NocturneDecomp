; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_CBodyPart_spawnGore_FUN_00417a70(CBodyPart *this_ptr)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_bodypart.cpp_CBodyPart_process_FUN_004162b0 at 004162f5
;
; Referenced Globals:
;   CGore* g_CGorePtr = 01cb8284
;   undefined4 DAT_0265370c
;
; Called Functions:
;   core_actor.cpp_randomChance_FUN_0040d060
;   core_gore.cpp_CGore_spawnBloodParticles_FUN_004c9730
;
; *****************************************************************************

section .text

    PUSH 0x3da3d70a                     ; 00417a70
        ;   Label: core_bodypart.cpp_CBodyPart_spawnGore_FUN_00417a70
    CALL core_actor.cpp_randomChance_FUN_0040d060 ; 00417a75
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 00417a7a
    TEST EAX,EAX                        ; 00417a7d
    JNZ 0x00417a82                      ; 00417a7f
        ;   XREF to: 00417a82 (CONDITIONAL_JUMP)  ; LAB_00417a82
    RET                                 ; 00417a81
    MOV EAX,dword ptr [ESP + 0x4]       ; 00417a82
        ;   Label: LAB_00417a82
    MOV EDX,dword ptr [EAX + 0x10cc]    ; 00417a86
    PUSH EDX                            ; 00417a8c
    PUSH 0x265370c                      ; 00417a8d | DAT_0265370c
    ADD EAX,0x20                        ; 00417a92
    PUSH EAX                            ; 00417a95
    MOV ECX,dword ptr [0x006167e0]      ; 00417a96 | g_CGorePtr
    PUSH ECX                            ; 00417a9c
    CALL core_gore.cpp_CGore_spawnBloodParticles_FUN_004c9730 ; 00417a9d
        ;   XREF to: 004c9730 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodParticles_FUN_004c9730(CGore * this_ptr, CVector3f * position, CVector3f * velocity, EBloodType blood_type)
    ADD ESP,0x10                        ; 00417aa2
    RET                                 ; 00417aa5

