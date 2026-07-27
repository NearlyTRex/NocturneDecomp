; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(float param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[128]:
;   core_baron.cpp_FUN_00410490 at 0041074f
;   core_bat.cpp_CBat_process_FUN_00411c40 at 00411e0a
;   core_bat.cpp_CBat_setup_FUN_00411ae0 at 00411b35
;   core_batcreat.cpp_CBatCreature_process_FUN_00412480 at 00412762
;   core_batman.cpp_CBatman_process_FUN_00413800 at 00413ede
;   core_bodypart.cpp_CBodyPart_addFire_FUN_00417b40 at 00417c6a
;   core_bodypart.cpp_CBodyPart_fillAttackDamageInfo_FUN_00417f10 at 00417f3b
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40 at 00417296
;   core_bodypart.cpp_CBodyPart_process_FUN_004168d0 at 00416aa5
;   core_bodypart.cpp_createBodyPart_FUN_00415b30 at 00415c49
;   ... and 118 more
;
; Referenced Globals:
;   float FLOAT_00578049 = 0.00003051851
;   float FLOAT_0057804d = 5.960465E-8
;   undefined4 DAT_005b9354
;   undefined4 DAT_01c77828
;
; Called Functions:
;   core_actor.cpp_generateRandomValue_FUN_0040dd30
;   crt_stdlib.c_rand_FUN_0056488c
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 0040dda0
        ;   Label: core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
    FLD float ptr [ESP + 0x18]          ; 0040dda3
    MOV EAX,[0x005b9354]                ; 0040dda7 | DAT_005b9354
    FSUB float ptr [ESP + 0x14]         ; 0040ddac
    MOV EDX,dword ptr [EAX + 0x23c]     ; 0040ddb0 | DAT_01c77828
    FSTP float ptr [ESP + 0x4]          ; 0040ddb6
    TEST EDX,EDX                        ; 0040ddba
    JZ 0x0040ddeb                       ; 0040ddbc
        ;   XREF to: 0040ddeb (CONDITIONAL_JUMP)  ; LAB_0040ddeb
    CALL core_actor.cpp_generateRandomValue_FUN_0040dd30 ; 0040ddbe
        ;   XREF to: 0040dd30 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_generateRandomValue_FUN_0040dd30()
    MOV dword ptr [ESP + 0xc],EAX       ; 0040ddc3
    FILD dword ptr [ESP + 0xc]          ; 0040ddc7
    FMUL float ptr [0x0057804d]         ; 0040ddcb | FLOAT_0057804d
    FSTP float ptr [ESP + 0x8]          ; 0040ddd1
        ;   Label: LAB_0040ddd1
    FLD float ptr [ESP + 0x8]           ; 0040ddd5
    FMUL float ptr [ESP + 0x4]          ; 0040ddd9
    FADD float ptr [ESP + 0x14]         ; 0040dddd
    FSTP float ptr [ESP]                ; 0040dde1
    MOV EAX,dword ptr [ESP]             ; 0040dde4
    ADD ESP,0x10                        ; 0040dde7
    RET                                 ; 0040ddea
    CALL crt_stdlib.c_rand_FUN_0056488c ; 0040ddeb
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c_rand_FUN_0056488c()
        ;   Label: LAB_0040ddeb
    MOV dword ptr [ESP + 0xc],EAX       ; 0040ddf0
    FILD dword ptr [ESP + 0xc]          ; 0040ddf4
    FMUL float ptr [0x00578049]         ; 0040ddf8 | FLOAT_00578049
    JMP 0x0040ddd1                      ; 0040ddfe
        ;   XREF to: 0040ddd1 (UNCONDITIONAL_JUMP)  ; LAB_0040ddd1

