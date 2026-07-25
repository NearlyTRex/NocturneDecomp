; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_CBodyPart_spawnGore_FUN_00417eb0(int param_1)
;
;
; XREF[1]:
;   core_bodypart.cpp_CBodyPart_process_FUN_004168d0 at 00416913
;
; Referenced Globals:
;   int INT_005b96c4 = 0x1c78c7c
;   undefined4 DAT_02dd1184
;
; Called Functions:
;   core_actor.cpp_randomChance_FUN_0040dea0
;   core_gore.cpp_CGore_spawnBloodParticles_FUN_004b00f0
;
; *****************************************************************************

section .text

    PUSH 0x3da3d70a                     ; 00417eb0
        ;   Label: core_bodypart.cpp_CBodyPart_spawnGore_FUN_00417eb0
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 00417eb5
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_randomChance_FUN_0040dea0()
    ADD ESP,0x4                         ; 00417eba
    TEST EAX,EAX                        ; 00417ebd
    JNZ 0x00417ec2                      ; 00417ebf
        ;   XREF to: 00417ec2 (CONDITIONAL_JUMP)  ; LAB_00417ec2
    RET                                 ; 00417ec1
    MOV EAX,dword ptr [ESP + 0x4]       ; 00417ec2
        ;   Label: LAB_00417ec2
    MOV EDX,dword ptr [EAX + 0xca0]     ; 00417ec6
    PUSH EDX                            ; 00417ecc
    PUSH 0x2dd1184                      ; 00417ecd | DAT_02dd1184
    ADD EAX,0x20                        ; 00417ed2
    PUSH EAX                            ; 00417ed5
    MOV ECX,dword ptr [0x005b96c4]      ; 00417ed6 | INT_005b96c4
    PUSH ECX                            ; 00417edc
    CALL core_gore.cpp_CGore_spawnBloodParticles_FUN_004b00f0 ; 00417edd
        ;   XREF to: 004b00f0 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_CGore_spawnBloodParticles_FUN_004b00f0()
    ADD ESP,0x10                        ; 00417ee2
    RET                                 ; 00417ee5

