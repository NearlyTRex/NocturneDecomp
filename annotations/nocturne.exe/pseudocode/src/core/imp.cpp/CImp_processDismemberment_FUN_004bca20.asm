; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_imp_cpp_CImp_processDismemberment_FUN_004bca20(int param_1,int *param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_imp.cpp_CImp_processDamage_FUN_004bccc0 at 004bcd42
;
; Referenced Globals:
;   undefined1* switchdataD_004bca08 = 004bca5d
;   string s_limb?.wav_0058649a
;   double DOUBLE_005864a5 = 7
;   double DOUBLE_005864ad = 0.5
;   double DOUBLE_005864b5 = 2.5
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

    PUSH EBX                            ; 004bca20
        ;   Label: core_imp.cpp_CImp_processDismemberment_FUN_004bca20
    PUSH ESI                            ; 004bca21
    PUSH EDI                            ; 004bca22
    PUSH EBP                            ; 004bca23
    SUB ESP,0xc                         ; 004bca24
    MOV EBX,dword ptr [ESP + 0x20]      ; 004bca27
    MOV ESI,dword ptr [ESP + 0x24]      ; 004bca2b
    FLD float ptr [ESI + 0x2c]          ; 004bca2f
    FLDZ                                ; 004bca32
    FCOMPP                              ; 004bca34
    FNSTSW AX                           ; 004bca36
    SAHF                                ; 004bca38
    JNC 0x004bca65                      ; 004bca39
        ;   XREF to: 004bca65 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI],-0x1            ; 004bca3b
    JNZ 0x004bca65                      ; 004bca3e
        ;   XREF to: 004bca65 (CONDITIONAL_JUMP)  ; default
    CALL crt_stdlib.c_rand_FUN_0056488c ; 004bca40
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c_rand_FUN_0056488c()
    MOV EDX,EAX                         ; 004bca45
    MOV EDI,0x6                         ; 004bca47
    SAR EDX,0x1f                        ; 004bca4c
    IDIV EDI                            ; 004bca4f
    CMP EDX,0x5                         ; 004bca51
    JA 0x004bca65                       ; 004bca54
        ;   XREF to: 004bca65 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x4bca08]  ; 004bca56 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xbd30]    ; 004bca5d
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 004bca63
        ;   Label: LAB_004bca63
    MOV ECX,dword ptr [EBX + 0xbd30]    ; 004bca65
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 004bca6b
    CMP EAX,ECX                         ; 004bca6d
    JNZ 0x004bcc45                      ; 004bca6f
        ;   XREF to: 004bcc45 (CONDITIONAL_JUMP)  ; LAB_004bcc45
    MOV EAX,dword ptr [ESI + 0x2c]      ; 004bca75
        ;   Label: LAB_004bca75
    MOV EBP,dword ptr [EBX + 0xbd58]    ; 004bca78
    MOV dword ptr [ESP + 0x8],EAX       ; 004bca7e
    CMP EBP,dword ptr [ESI]             ; 004bca82
    JNZ 0x004bca8e                      ; 004bca84
        ;   XREF to: 004bca8e (CONDITIONAL_JUMP)  ; LAB_004bca8e
    MOV dword ptr [ESP + 0x8],0x3d4ccccd ; 004bca86
    MOV EDX,dword ptr [EBX + 0xbd54]    ; 004bca8e
        ;   Label: LAB_004bca8e
    CMP EDX,dword ptr [ESI]             ; 004bca94
    JNZ 0x004bcaa0                      ; 004bca96
        ;   XREF to: 004bcaa0 (CONDITIONAL_JUMP)  ; LAB_004bcaa0
    MOV dword ptr [ESP + 0x8],0x3ca3d70a ; 004bca98
    MOV EAX,[0x005b9354]                ; 004bcaa0 | DAT_005b9354
        ;   Label: LAB_004bcaa0
    CMP dword ptr [EAX + 0x1e0],0x0     ; 004bcaa5 | DAT_01c777cc
    JZ 0x004bcab6                       ; 004bcaac
        ;   XREF to: 004bcab6 (CONDITIONAL_JUMP)  ; LAB_004bcab6
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 004bcaae
    MOV EAX,[0x005b9354]                ; 004bcab6 | DAT_005b9354
        ;   Label: LAB_004bcab6
    MOV EDX,dword ptr [EAX + 0x14]      ; 004bcabb | DAT_01c77600
    TEST EDX,EDX                        ; 004bcabe
    JNZ 0x004bcac6                      ; 004bcac0
        ;   XREF to: 004bcac6 (CONDITIONAL_JUMP)  ; LAB_004bcac6
    MOV dword ptr [ESP + 0x8],EDX       ; 004bcac2
    PUSH dword ptr [ESP + 0x8]          ; 004bcac6
        ;   Label: LAB_004bcac6
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 004bcaca
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_randomChance_FUN_0040dea0()
    ADD ESP,0x4                         ; 004bcacf
    TEST EAX,EAX                        ; 004bcad2
    JZ 0x004bcbdc                       ; 004bcad4
        ;   XREF to: 004bcbdc (CONDITIONAL_JUMP)  ; LAB_004bcbdc
    MOV EDI,dword ptr [EBX + 0x2608]    ; 004bcada
    PUSH EDI                            ; 004bcae0
    PUSH 0x0                            ; 004bcae1
    PUSH 0x0                            ; 004bcae3
    PUSH EBX                            ; 004bcae5
    LEA EAX,[ESI + 0xc]                 ; 004bcae6
    PUSH EAX                            ; 004bcae9
    LEA EAX,[EBX + 0x30]                ; 004bcaea
    PUSH EAX                            ; 004bcaed
    LEA EAX,[EBX + 0x20]                ; 004bcaee
    PUSH EAX                            ; 004bcaf1
    CALL core_bodypart.cpp_createBodyPart_FUN_00415b30 ; 004bcaf2
        ;   XREF to: 00415b30 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_createBodyPart_FUN_00415b30()
    ADD ESP,0x1c                        ; 004bcaf7
    MOV EDI,EAX                         ; 004bcafa
    PUSH 0x1                            ; 004bcafc
    MOV EBP,EAX                         ; 004bcafe
    MOV EAX,dword ptr [ESI]             ; 004bcb00
    PUSH EAX                            ; 004bcb02
    PUSH EDI                            ; 004bcb03
    PUSH EBX                            ; 004bcb04
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0 ; 004bcb05
        ;   XREF to: 00427eb0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0()
    MOV EAX,dword ptr [ESI]             ; 004bcb0a
    MOV EDX,dword ptr [EBX + 0xbd30]    ; 004bcb0c
    ADD ESP,0x10                        ; 004bcb12
    CMP EAX,EDX                         ; 004bcb15
    JNZ 0x004bcb2c                      ; 004bcb17
        ;   XREF to: 004bcb2c (CONDITIONAL_JUMP)  ; LAB_004bcb2c
    PUSH 0x0                            ; 004bcb19
    MOV ECX,dword ptr [EBX + 0xbd34]    ; 004bcb1b
    PUSH ECX                            ; 004bcb21
    PUSH EDI                            ; 004bcb22
    PUSH EBX                            ; 004bcb23
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0 ; 004bcb24
        ;   XREF to: 00427eb0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0()
    ADD ESP,0x10                        ; 004bcb29
    MOV EDI,dword ptr [EBX + 0xbd38]    ; 004bcb2c
        ;   Label: LAB_004bcb2c
    CMP EDI,dword ptr [ESI]             ; 004bcb32
    JNZ 0x004bcb49                      ; 004bcb34
        ;   XREF to: 004bcb49 (CONDITIONAL_JUMP)  ; LAB_004bcb49
    PUSH 0x0                            ; 004bcb36
    MOV EAX,dword ptr [EBX + 0xbd3c]    ; 004bcb38
    PUSH EAX                            ; 004bcb3e
    PUSH EBP                            ; 004bcb3f
    PUSH EBX                            ; 004bcb40
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0 ; 004bcb41
        ;   XREF to: 00427eb0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0()
    ADD ESP,0x10                        ; 004bcb46
    MOV EDX,dword ptr [EBX + 0xbd54]    ; 004bcb49
        ;   Label: LAB_004bcb49
    CMP EDX,dword ptr [ESI]             ; 004bcb4f
    JNZ 0x004bcbb5                      ; 004bcb51
        ;   XREF to: 004bcbb5 (CONDITIONAL_JUMP)  ; LAB_004bcbb5
    PUSH 0x1                            ; 004bcb53
    LEA EDI,[ESI + 0xc]                 ; 004bcb55
    PUSH EDI                            ; 004bcb58
    MOV ECX,dword ptr [EBX + 0xbd38]    ; 004bcb59
    PUSH ECX                            ; 004bcb5f
    PUSH EBX                            ; 004bcb60
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40 ; 004bcb61
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40()
    ADD ESP,0x10                        ; 004bcb66
    PUSH 0x1                            ; 004bcb69
    PUSH EDI                            ; 004bcb6b
    MOV EAX,dword ptr [EBX + 0xbd3c]    ; 004bcb6c
    PUSH EAX                            ; 004bcb72
    PUSH EBX                            ; 004bcb73
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40 ; 004bcb74
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40()
    ADD ESP,0x10                        ; 004bcb79
    PUSH 0x1                            ; 004bcb7c
    PUSH EDI                            ; 004bcb7e
    MOV EDX,dword ptr [EBX + 0xbd30]    ; 004bcb7f
    PUSH EDX                            ; 004bcb85
    PUSH EBX                            ; 004bcb86
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40 ; 004bcb87
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40()
    ADD ESP,0x10                        ; 004bcb8c
    PUSH 0x1                            ; 004bcb8f
    PUSH EDI                            ; 004bcb91
    MOV ECX,dword ptr [EBX + 0xbd34]    ; 004bcb92
    PUSH ECX                            ; 004bcb98
    PUSH EBX                            ; 004bcb99
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40 ; 004bcb9a
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40()
    ADD ESP,0x10                        ; 004bcb9f
    PUSH 0x1                            ; 004bcba2
    PUSH EDI                            ; 004bcba4
    MOV EDI,dword ptr [EBX + 0xbd58]    ; 004bcba5
    PUSH EDI                            ; 004bcbab
    PUSH EBX                            ; 004bcbac
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40 ; 004bcbad
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40()
    ADD ESP,0x10                        ; 004bcbb2
    PUSH 0x58649a                       ; 004bcbb5 | = "limb?.wav"
        ;   Label: LAB_004bcbb5
    PUSH EBX                            ; 004bcbba
    CALL core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_0042b490 ; 004bcbbb
        ;   XREF to: 0042b490 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_0042b490()
    ADD ESP,0x8                         ; 004bcbc0
    PUSH EBP                            ; 004bcbc3
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40 ; 004bcbc4
        ;   XREF to: 00416d40 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40()
    ADD ESP,0x4                         ; 004bcbc9
    FLD float ptr [ESI + 0x8]           ; 004bcbcc
    FLD ST0                             ; 004bcbcf
    FMUL double ptr [0x005864a5]        ; 004bcbd1 | DOUBLE_005864a5
    FSTP ST1                            ; 004bcbd7
    FSTP float ptr [ESI + 0x8]          ; 004bcbd9
    MOV EBP,dword ptr [EBX + 0xbd58]    ; 004bcbdc
        ;   Label: LAB_004bcbdc
    MOV EAX,dword ptr [ESI]             ; 004bcbe2
    CMP EAX,EBP                         ; 004bcbe4
    JZ 0x004bcc86                       ; 004bcbe6
        ;   XREF to: 004bcc86 (CONDITIONAL_JUMP)  ; LAB_004bcc86
    CMP EAX,dword ptr [EBX + 0xbd50]    ; 004bcbec
    JZ 0x004bcc00                       ; 004bcbf2
        ;   XREF to: 004bcc00 (CONDITIONAL_JUMP)  ; LAB_004bcc00
    CMP EAX,dword ptr [EBX + 0xbd54]    ; 004bcbf4
    JNZ 0x004bcc9e                      ; 004bcbfa
        ;   XREF to: 004bcc9e (CONDITIONAL_JUMP)  ; LAB_004bcc9e
    MOV EAX,dword ptr [ESI + 0x4]       ; 004bcc00
        ;   Label: LAB_004bcc00
    MOV dword ptr [ESI + 0x4],EAX       ; 004bcc03
    ADD ESP,0xc                         ; 004bcc06
    POP EBP                             ; 004bcc09
    POP EDI                             ; 004bcc0a
    POP ESI                             ; 004bcc0b
    POP EBX                             ; 004bcc0c
    RET                                 ; 004bcc0d
    MOV EAX,dword ptr [EBX + 0xbd34]    ; 004bcc0e
        ;   Label: caseD_1
    JMP 0x004bca63                      ; 004bcc14
        ;   XREF to: 004bca63 (UNCONDITIONAL_JUMP)  ; LAB_004bca63
    MOV EAX,dword ptr [EBX + 0xbd38]    ; 004bcc19
        ;   Label: caseD_2
    JMP 0x004bca63                      ; 004bcc1f
        ;   XREF to: 004bca63 (UNCONDITIONAL_JUMP)  ; LAB_004bca63
    MOV EAX,dword ptr [EBX + 0xbd3c]    ; 004bcc24
        ;   Label: caseD_3
    JMP 0x004bca63                      ; 004bcc2a
        ;   XREF to: 004bca63 (UNCONDITIONAL_JUMP)  ; LAB_004bca63
    MOV EAX,dword ptr [EBX + 0xbd58]    ; 004bcc2f
        ;   Label: caseD_4
    JMP 0x004bca63                      ; 004bcc35
        ;   XREF to: 004bca63 (UNCONDITIONAL_JUMP)  ; LAB_004bca63
    MOV EAX,dword ptr [EBX + 0xbd54]    ; 004bcc3a
        ;   Label: caseD_5
    JMP 0x004bca63                      ; 004bcc40
        ;   XREF to: 004bca63 (UNCONDITIONAL_JUMP)  ; LAB_004bca63
    CMP EAX,dword ptr [EBX + 0xbd34]    ; 004bcc45
        ;   Label: LAB_004bcc45
    JZ 0x004bca75                       ; 004bcc4b
        ;   XREF to: 004bca75 (CONDITIONAL_JUMP)  ; LAB_004bca75
    CMP EAX,dword ptr [EBX + 0xbd38]    ; 004bcc51
    JZ 0x004bca75                       ; 004bcc57
        ;   XREF to: 004bca75 (CONDITIONAL_JUMP)  ; LAB_004bca75
    CMP EAX,dword ptr [EBX + 0xbd3c]    ; 004bcc5d
    JZ 0x004bca75                       ; 004bcc63
        ;   XREF to: 004bca75 (CONDITIONAL_JUMP)  ; LAB_004bca75
    CMP EAX,dword ptr [EBX + 0xbd54]    ; 004bcc69
    JZ 0x004bca75                       ; 004bcc6f
        ;   XREF to: 004bca75 (CONDITIONAL_JUMP)  ; LAB_004bca75
    CMP EAX,dword ptr [EBX + 0xbd58]    ; 004bcc75
    JZ 0x004bca75                       ; 004bcc7b
        ;   XREF to: 004bca75 (CONDITIONAL_JUMP)  ; LAB_004bca75
    JMP 0x004bcbdc                      ; 004bcc81
        ;   XREF to: 004bcbdc (UNCONDITIONAL_JUMP)  ; LAB_004bcbdc
    FLD float ptr [ESI + 0x4]           ; 004bcc86
        ;   Label: LAB_004bcc86
    FLD ST0                             ; 004bcc89
    FMUL double ptr [0x005864b5]        ; 004bcc8b | DOUBLE_005864b5
    FSTP ST1                            ; 004bcc91
    FSTP float ptr [ESI + 0x4]          ; 004bcc93
    ADD ESP,0xc                         ; 004bcc96
    POP EBP                             ; 004bcc99
    POP EDI                             ; 004bcc9a
    POP ESI                             ; 004bcc9b
    POP EBX                             ; 004bcc9c
    RET                                 ; 004bcc9d
    FLD float ptr [ESI + 0x4]           ; 004bcc9e
        ;   Label: LAB_004bcc9e
    FLD ST0                             ; 004bcca1
    FMUL double ptr [0x005864ad]        ; 004bcca3 | DOUBLE_005864ad
    FSTP ST1                            ; 004bcca9
    FSTP float ptr [ESI + 0x4]          ; 004bccab
    ADD ESP,0xc                         ; 004bccae
    POP EBP                             ; 004bccb1
    POP EDI                             ; 004bccb2
    POP ESI                             ; 004bccb3
    POP EBX                             ; 004bccb4
    RET                                 ; 004bccb5

