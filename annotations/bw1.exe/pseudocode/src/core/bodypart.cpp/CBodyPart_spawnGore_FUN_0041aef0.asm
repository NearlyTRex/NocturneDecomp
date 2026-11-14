; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_CBodyPart_spawnGore_FUN_0041aef0(CBodyPart *this_ptr)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_bodypart.cpp_CBodyPart_process_FUN_00419740 at 00419785
;
; Referenced Globals:
;   CGore* g_CGorePtr = 01cd0e3c
;   undefined4 DAT_02c8af28
;
; Called Functions:
;   core_actor.cpp_randomChance_FUN_0040cd00
;   core_gore.cpp_CGore_spawnBloodParticles_FUN_004e5f40
;
; *****************************************************************************

section .text

    PUSH 0x3da3d70a                     ; 0041aef0
        ;   Label: core_bodypart.cpp_CBodyPart_spawnGore_FUN_0041aef0
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 0041aef5
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 0041aefa
    TEST EAX,EAX                        ; 0041aefd
    JNZ 0x0041af02                      ; 0041aeff
        ;   XREF to: 0041af02 (CONDITIONAL_JUMP)  ; LAB_0041af02
    RET                                 ; 0041af01
    MOV EAX,dword ptr [ESP + 0x4]       ; 0041af02
        ;   Label: LAB_0041af02
    MOV EDX,dword ptr [EAX + 0xcb8]     ; 0041af06
    PUSH EDX                            ; 0041af0c
    PUSH 0x2c8af28                      ; 0041af0d | DAT_02c8af28
    ADD EAX,0x20                        ; 0041af12
    PUSH EAX                            ; 0041af15
    MOV ECX,dword ptr [0x0061dca4]      ; 0041af16 | g_CGorePtr
    PUSH ECX                            ; 0041af1c
    CALL core_gore.cpp_CGore_spawnBloodParticles_FUN_004e5f40 ; 0041af1d
        ;   XREF to: 004e5f40 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodParticles_FUN_004e5f40(CGore * this_ptr, CVector3f * position, CVector3f * velocity, EBloodType blood_type)
    ADD ESP,0x10                        ; 0041af22
    RET                                 ; 0041af25

