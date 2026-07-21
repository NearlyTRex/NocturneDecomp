; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_batcreat_cpp_CBatCreature_processDismemberment_FUN_00412de0(int param_1,int *param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00413040 at 004130c6
;
; Referenced Globals:
;   undefined1* switchdataD_00412dc8 = 00412e1d
;   string s_limb?.wav_00578a54
;   undefined4 DAT_00578a5f
;   undefined4 DAT_005b9354
;   undefined4 DAT_01c77600
;   undefined4 DAT_01c777cc
;
; Called Functions:
;   core_actor.cpp_randomChance_FUN_0040dea0
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40
;   core_bodypart.cpp_createBodyPart_FUN_00415b30
;   core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0
;   core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_0042b490
;   crt_stdlib.c_rand_FUN_0056488c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00412de0
        ;   Label: core_batcreat.cpp_CBatCreature_processDismemberment_FUN_00412de0
    PUSH ESI                            ; 00412de1
    PUSH EDI                            ; 00412de2
    PUSH EBP                            ; 00412de3
    SUB ESP,0xc                         ; 00412de4
    MOV EBX,dword ptr [ESP + 0x20]      ; 00412de7
    MOV ESI,dword ptr [ESP + 0x24]      ; 00412deb
    FLD float ptr [ESI + 0x2c]          ; 00412def
    FLDZ                                ; 00412df2
    FCOMPP                              ; 00412df4
    FNSTSW AX                           ; 00412df6
    SAHF                                ; 00412df8
    JNC 0x00412e25                      ; 00412df9
        ;   XREF to: 00412e25 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI],-0x1            ; 00412dfb
    JNZ 0x00412e25                      ; 00412dfe
        ;   XREF to: 00412e25 (CONDITIONAL_JUMP)  ; default
    CALL crt_stdlib.c_rand_FUN_0056488c ; 00412e00
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c_rand_FUN_0056488c()
    MOV EDX,EAX                         ; 00412e05
    MOV EDI,0x6                         ; 00412e07
    SAR EDX,0x1f                        ; 00412e0c
    IDIV EDI                            ; 00412e0f
    CMP EDX,0x5                         ; 00412e11
    JA 0x00412e25                       ; 00412e14
        ;   XREF to: 00412e25 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x412dc8]  ; 00412e16 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xbd44]    ; 00412e1d
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 00412e23
        ;   Label: LAB_00412e23
    MOV ECX,dword ptr [EBX + 0xbd44]    ; 00412e25
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 00412e2b
    CMP EAX,ECX                         ; 00412e2d
    JNZ 0x00412ed9                      ; 00412e2f
        ;   XREF to: 00412ed9 (CONDITIONAL_JUMP)  ; LAB_00412ed9
    MOV EAX,dword ptr [ESI + 0x2c]      ; 00412e35
        ;   Label: LAB_00412e35
    MOV EBP,dword ptr [EBX + 0xbd24]    ; 00412e38
    MOV dword ptr [ESP + 0x8],EAX       ; 00412e3e
    CMP EBP,dword ptr [ESI]             ; 00412e42
    JNZ 0x00412e4e                      ; 00412e44
        ;   XREF to: 00412e4e (CONDITIONAL_JUMP)  ; LAB_00412e4e
    MOV dword ptr [ESP + 0x8],0x3d4ccccd ; 00412e46
    MOV EDX,dword ptr [EBX + 0xbd28]    ; 00412e4e
        ;   Label: LAB_00412e4e
    CMP EDX,dword ptr [ESI]             ; 00412e54
    JNZ 0x00412e60                      ; 00412e56
        ;   XREF to: 00412e60 (CONDITIONAL_JUMP)  ; LAB_00412e60
    MOV dword ptr [ESP + 0x8],0x3ca3d70a ; 00412e58
    MOV EAX,[0x005b9354]                ; 00412e60 | DAT_005b9354
        ;   Label: LAB_00412e60
    CMP dword ptr [EAX + 0x1e0],0x0     ; 00412e65 | DAT_01c777cc
    JZ 0x00412e76                       ; 00412e6c
        ;   XREF to: 00412e76 (CONDITIONAL_JUMP)  ; LAB_00412e76
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 00412e6e
    MOV EAX,[0x005b9354]                ; 00412e76 | DAT_005b9354
        ;   Label: LAB_00412e76
    MOV EDX,dword ptr [EAX + 0x14]      ; 00412e7b | DAT_01c77600
    TEST EDX,EDX                        ; 00412e7e
    JNZ 0x00412e86                      ; 00412e80
        ;   XREF to: 00412e86 (CONDITIONAL_JUMP)  ; LAB_00412e86
    MOV dword ptr [ESP + 0x8],EDX       ; 00412e82
    PUSH dword ptr [ESP + 0x8]          ; 00412e86
        ;   Label: LAB_00412e86
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 00412e8a
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_randomChance_FUN_0040dea0()
    ADD ESP,0x4                         ; 00412e8f
    TEST EAX,EAX                        ; 00412e92
    JNZ 0x00412f1d                      ; 00412e94
        ;   XREF to: 00412f1d (CONDITIONAL_JUMP)  ; LAB_00412f1d
    ADD ESP,0xc                         ; 00412e9a
    POP EBP                             ; 00412e9d
    POP EDI                             ; 00412e9e
    POP ESI                             ; 00412e9f
    POP EBX                             ; 00412ea0
    RET                                 ; 00412ea1
    MOV EAX,dword ptr [EBX + 0xbd48]    ; 00412ea2
        ;   Label: caseD_1
    JMP 0x00412e23                      ; 00412ea8
        ;   XREF to: 00412e23 (UNCONDITIONAL_JUMP)  ; LAB_00412e23
    MOV EAX,dword ptr [EBX + 0xbd4c]    ; 00412ead
        ;   Label: caseD_2
    JMP 0x00412e23                      ; 00412eb3
        ;   XREF to: 00412e23 (UNCONDITIONAL_JUMP)  ; LAB_00412e23
    MOV EAX,dword ptr [EBX + 0xbd50]    ; 00412eb8
        ;   Label: caseD_3
    JMP 0x00412e23                      ; 00412ebe
        ;   XREF to: 00412e23 (UNCONDITIONAL_JUMP)  ; LAB_00412e23
    MOV EAX,dword ptr [EBX + 0xbd24]    ; 00412ec3
        ;   Label: caseD_4
    JMP 0x00412e23                      ; 00412ec9
        ;   XREF to: 00412e23 (UNCONDITIONAL_JUMP)  ; LAB_00412e23
    MOV EAX,dword ptr [EBX + 0xbd28]    ; 00412ece
        ;   Label: caseD_5
    JMP 0x00412e23                      ; 00412ed4
        ;   XREF to: 00412e23 (UNCONDITIONAL_JUMP)  ; LAB_00412e23
    CMP EAX,dword ptr [EBX + 0xbd48]    ; 00412ed9
        ;   Label: LAB_00412ed9
    JZ 0x00412e35                       ; 00412edf
        ;   XREF to: 00412e35 (CONDITIONAL_JUMP)  ; LAB_00412e35
    CMP EAX,dword ptr [EBX + 0xbd4c]    ; 00412ee5
    JZ 0x00412e35                       ; 00412eeb
        ;   XREF to: 00412e35 (CONDITIONAL_JUMP)  ; LAB_00412e35
    CMP EAX,dword ptr [EBX + 0xbd50]    ; 00412ef1
    JZ 0x00412e35                       ; 00412ef7
        ;   XREF to: 00412e35 (CONDITIONAL_JUMP)  ; LAB_00412e35
    CMP EAX,dword ptr [EBX + 0xbd28]    ; 00412efd
    JZ 0x00412e35                       ; 00412f03
        ;   XREF to: 00412e35 (CONDITIONAL_JUMP)  ; LAB_00412e35
    CMP EAX,dword ptr [EBX + 0xbd24]    ; 00412f09
    JZ 0x00412e35                       ; 00412f0f
        ;   XREF to: 00412e35 (CONDITIONAL_JUMP)  ; LAB_00412e35
    ADD ESP,0xc                         ; 00412f15
    POP EBP                             ; 00412f18
    POP EDI                             ; 00412f19
    POP ESI                             ; 00412f1a
    POP EBX                             ; 00412f1b
    RET                                 ; 00412f1c
    MOV EDI,dword ptr [EBX + 0x2608]    ; 00412f1d
        ;   Label: LAB_00412f1d
    PUSH EDI                            ; 00412f23
    PUSH 0x0                            ; 00412f24
    PUSH 0x0                            ; 00412f26
    PUSH EBX                            ; 00412f28
    LEA EAX,[ESI + 0xc]                 ; 00412f29
    PUSH EAX                            ; 00412f2c
    LEA EAX,[EBX + 0x30]                ; 00412f2d
    PUSH EAX                            ; 00412f30
    LEA EAX,[EBX + 0x20]                ; 00412f31
    PUSH EAX                            ; 00412f34
    CALL core_bodypart.cpp_createBodyPart_FUN_00415b30 ; 00412f35
        ;   XREF to: 00415b30 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_createBodyPart_FUN_00415b30()
    ADD ESP,0x1c                        ; 00412f3a
    MOV EDI,EAX                         ; 00412f3d
    PUSH 0x0                            ; 00412f3f
    MOV EBP,EAX                         ; 00412f41
    MOV EAX,dword ptr [ESI]             ; 00412f43
    PUSH EAX                            ; 00412f45
    PUSH EDI                            ; 00412f46
    PUSH EBX                            ; 00412f47
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0 ; 00412f48
        ;   XREF to: 00427eb0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0()
    MOV EAX,dword ptr [ESI]             ; 00412f4d
    MOV EDX,dword ptr [EBX + 0xbd44]    ; 00412f4f
    ADD ESP,0x10                        ; 00412f55
    CMP EAX,EDX                         ; 00412f58
    JNZ 0x00412f6f                      ; 00412f5a
        ;   XREF to: 00412f6f (CONDITIONAL_JUMP)  ; LAB_00412f6f
    PUSH 0x0                            ; 00412f5c
    MOV ECX,dword ptr [EBX + 0xbd48]    ; 00412f5e
    PUSH ECX                            ; 00412f64
    PUSH EDI                            ; 00412f65
    PUSH EBX                            ; 00412f66
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0 ; 00412f67
        ;   XREF to: 00427eb0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0()
    ADD ESP,0x10                        ; 00412f6c
    MOV EDI,dword ptr [EBX + 0xbd4c]    ; 00412f6f
        ;   Label: LAB_00412f6f
    CMP EDI,dword ptr [ESI]             ; 00412f75
    JNZ 0x00412f8c                      ; 00412f77
        ;   XREF to: 00412f8c (CONDITIONAL_JUMP)  ; LAB_00412f8c
    PUSH 0x0                            ; 00412f79
    MOV EAX,dword ptr [EBX + 0xbd50]    ; 00412f7b
    PUSH EAX                            ; 00412f81
    PUSH EBP                            ; 00412f82
    PUSH EBX                            ; 00412f83
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0 ; 00412f84
        ;   XREF to: 00427eb0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0()
    ADD ESP,0x10                        ; 00412f89
    MOV EDX,dword ptr [EBX + 0xbd28]    ; 00412f8c
        ;   Label: LAB_00412f8c
    CMP EDX,dword ptr [ESI]             ; 00412f92
    JNZ 0x00412ff8                      ; 00412f94
        ;   XREF to: 00412ff8 (CONDITIONAL_JUMP)  ; LAB_00412ff8
    PUSH 0x0                            ; 00412f96
    LEA EDI,[ESI + 0xc]                 ; 00412f98
    PUSH EDI                            ; 00412f9b
    MOV ECX,dword ptr [EBX + 0xbd4c]    ; 00412f9c
    PUSH ECX                            ; 00412fa2
    PUSH EBX                            ; 00412fa3
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40 ; 00412fa4
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40()
    ADD ESP,0x10                        ; 00412fa9
    PUSH 0x0                            ; 00412fac
    PUSH EDI                            ; 00412fae
    MOV EAX,dword ptr [EBX + 0xbd50]    ; 00412faf
    PUSH EAX                            ; 00412fb5
    PUSH EBX                            ; 00412fb6
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40 ; 00412fb7
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40()
    ADD ESP,0x10                        ; 00412fbc
    PUSH 0x0                            ; 00412fbf
    PUSH EDI                            ; 00412fc1
    MOV EDX,dword ptr [EBX + 0xbd44]    ; 00412fc2
    PUSH EDX                            ; 00412fc8
    PUSH EBX                            ; 00412fc9
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40 ; 00412fca
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40()
    ADD ESP,0x10                        ; 00412fcf
    PUSH 0x0                            ; 00412fd2
    PUSH EDI                            ; 00412fd4
    MOV ECX,dword ptr [EBX + 0xbd48]    ; 00412fd5
    PUSH ECX                            ; 00412fdb
    PUSH EBX                            ; 00412fdc
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40 ; 00412fdd
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40()
    ADD ESP,0x10                        ; 00412fe2
    PUSH 0x0                            ; 00412fe5
    PUSH EDI                            ; 00412fe7
    MOV EDI,dword ptr [EBX + 0xbd24]    ; 00412fe8
    PUSH EDI                            ; 00412fee
    PUSH EBX                            ; 00412fef
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40 ; 00412ff0
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40()
    ADD ESP,0x10                        ; 00412ff5
    PUSH 0x578a54                       ; 00412ff8 | = "limb?.wav"
        ;   Label: LAB_00412ff8
    PUSH EBX                            ; 00412ffd
    CALL core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_0042b490 ; 00412ffe
        ;   XREF to: 0042b490 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_0042b490()
    ADD ESP,0x8                         ; 00413003
    PUSH EBP                            ; 00413006
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40 ; 00413007
        ;   XREF to: 00416d40 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40()
    MOV EAX,dword ptr [EBX + 0xbd24]    ; 0041300c
    MOV EBP,dword ptr [EBX + EAX*0x4 + 0x2290] ; 00413012
    ADD ESP,0x4                         ; 00413019
    TEST EBP,EBP                        ; 0041301c
    JNZ 0x00413027                      ; 0041301e
        ;   XREF to: 00413027 (CONDITIONAL_JUMP)  ; LAB_00413027
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 00413020
    FLD float ptr [ESI + 0x8]           ; 00413027
        ;   Label: LAB_00413027
    FLD ST0                             ; 0041302a
    FMUL double ptr [0x00578a5f]        ; 0041302c | DAT_00578a5f
    FSTP ST1                            ; 00413032
    FSTP float ptr [ESI + 0x8]          ; 00413034
    ADD ESP,0xc                         ; 00413037
    POP EBP                             ; 0041303a
    POP EDI                             ; 0041303b
    POP ESI                             ; 0041303c
    POP EBX                             ; 0041303d
    RET                                 ; 0041303e

