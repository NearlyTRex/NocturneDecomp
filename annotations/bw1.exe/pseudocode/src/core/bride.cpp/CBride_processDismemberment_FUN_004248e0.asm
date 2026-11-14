; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bride_cpp_CBride_processDismemberment_FUN_004248e0(CBride *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CBride *         Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_bride.cpp_CBride_processDamage_FUN_00424b10 at 00424ba7
;
; Referenced Globals:
;   undefined1* switchdataD_004248c8 = 00424920
;   TerminatedCString s_limb_wav_005d4f9c
;   undefined4 DAT_005d4fa8
;   undefined4 DAT_005d4fb0
;   undefined4 DAT_005d4fb8
;   undefined4 DAT_005d4fc0
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 g_CGameInstance.blood_flag
;   undefined4 g_CGameInstance.gratuitous_dismemberment
;
; Called Functions:
;   core_actor.cpp_randomChance_FUN_0040cd00
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90
;   core_bodypart.cpp_createBodyPart_FUN_00418940
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210
;   core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_004352e0
;   crt_stdlib.c_rand_FUN_005c084c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004248e0
        ;   Label: core_bride.cpp_CBride_processDismemberment_FUN_004248e0
    PUSH ESI                            ; 004248e1
    PUSH EDI                            ; 004248e2
    PUSH EBP                            ; 004248e3
    MOV EBP,ESP                         ; 004248e4
    SUB ESP,0x10                        ; 004248e6
    AND ESP,0xfffffff8                  ; 004248e9
    MOV ESI,dword ptr [EBP + 0x14]      ; 004248ec
    MOV EBX,dword ptr [EBP + 0x18]      ; 004248ef
    FLD float ptr [EBX + 0x2c]          ; 004248f2
    FLDZ                                ; 004248f5
    FCOMPP                              ; 004248f7
    FNSTSW AX                           ; 004248f9
    SAHF                                ; 004248fb
    JNC 0x00424928                      ; 004248fc
        ;   XREF to: 00424928 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [EBX],-0x1            ; 004248fe
    JNZ 0x00424928                      ; 00424901
        ;   XREF to: 00424928 (CONDITIONAL_JUMP)  ; default
    CALL crt_stdlib.c_rand_FUN_005c084c ; 00424903
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005c084c()
    MOV EDX,EAX                         ; 00424908
    MOV EDI,0x5                         ; 0042490a
    SAR EDX,0x1f                        ; 0042490f
    IDIV EDI                            ; 00424912
    CMP EDX,0x4                         ; 00424914
    JA 0x00424928                       ; 00424917
        ;   XREF to: 00424928 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x4248c8]  ; 00424919 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [ESI + 0xc268]    ; 00424920
        ;   Label: caseD_0
    MOV dword ptr [EBX],EAX             ; 00424926
        ;   Label: LAB_00424926
    MOV ECX,dword ptr [ESI + 0xc268]    ; 00424928
        ;   Label: default
    MOV EAX,dword ptr [EBX]             ; 0042492e
    CMP EAX,ECX                         ; 00424930
    JNZ 0x00424a9c                      ; 00424932
        ;   XREF to: 00424a9c (CONDITIONAL_JUMP)  ; LAB_00424a9c
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00424938
        ;   Label: LAB_00424938
    MOV EDX,dword ptr [ESI + 0xc288]    ; 0042493b
    MOV dword ptr [ESP],EAX             ; 00424941
    CMP EDX,dword ptr [EBX]             ; 00424944
    JNZ 0x00424958                      ; 00424946
        ;   XREF to: 00424958 (CONDITIONAL_JUMP)  ; LAB_00424958
    FLD float ptr [ESP]                 ; 00424948
    FLD ST0                             ; 0042494b
    FMUL double ptr [0x005d4fa8]        ; 0042494d | DAT_005d4fa8
    FSTP ST1                            ; 00424953
    FSTP float ptr [ESP]                ; 00424955
    MOV EAX,[0x0061d95c]                ; 00424958 | g_CGamePtr
        ;   Label: LAB_00424958
    CMP dword ptr [EAX + 0x1fc],0x0     ; 0042495d | g_CGameInstance.gratuitous_dismemberment
    JZ 0x0042496d                       ; 00424964
        ;   XREF to: 0042496d (CONDITIONAL_JUMP)  ; LAB_0042496d
    MOV dword ptr [ESP],0x3f800000      ; 00424966
    MOV EAX,[0x0061d95c]                ; 0042496d | g_CGamePtr
        ;   Label: LAB_0042496d
    MOV EDX,dword ptr [EAX + 0x14]      ; 00424972 | g_CGameInstance.blood_flag
    TEST EDX,EDX                        ; 00424975
    JNZ 0x0042497c                      ; 00424977
        ;   XREF to: 0042497c (CONDITIONAL_JUMP)  ; LAB_0042497c
    MOV dword ptr [ESP],EDX             ; 00424979
    PUSH dword ptr [ESP]                ; 0042497c
        ;   Label: LAB_0042497c
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 0042497f
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 00424984
    TEST EAX,EAX                        ; 00424987
    JZ 0x00424a3f                       ; 00424989
        ;   XREF to: 00424a3f (CONDITIONAL_JUMP)  ; LAB_00424a3f
    PUSH 0x0                            ; 0042498f
    PUSH 0x0                            ; 00424991
    PUSH 0x0                            ; 00424993
    PUSH ESI                            ; 00424995
    LEA EAX,[EBX + 0xc]                 ; 00424996
    PUSH EAX                            ; 00424999
    LEA EAX,[ESI + 0x30]                ; 0042499a
    PUSH EAX                            ; 0042499d
    LEA EAX,[ESI + 0x20]                ; 0042499e
    PUSH EAX                            ; 004249a1
    CALL core_bodypart.cpp_createBodyPart_FUN_00418940 ; 004249a2
        ;   XREF to: 00418940 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_createBodyPart_FUN_00418940(CVector3f * position, UOrientationVector * orientation, CVector3f * initial_velocity, CDemonActor * scale_source, ...)
    ADD ESP,0x1c                        ; 004249a7
    MOV EDI,EAX                         ; 004249aa
    PUSH 0x0                            ; 004249ac
    MOV dword ptr [ESP + 0x10],EAX      ; 004249ae
    MOV EAX,dword ptr [EBX]             ; 004249b2
    PUSH EAX                            ; 004249b4
    PUSH EDI                            ; 004249b5
    PUSH ESI                            ; 004249b6
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210 ; 004249b7
        ;   XREF to: 00431210 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    MOV EAX,dword ptr [EBX]             ; 004249bc
    MOV EDX,dword ptr [ESI + 0xc268]    ; 004249be
    ADD ESP,0x10                        ; 004249c4
    CMP EAX,EDX                         ; 004249c7
    JNZ 0x004249de                      ; 004249c9
        ;   XREF to: 004249de (CONDITIONAL_JUMP)  ; LAB_004249de
    PUSH 0x0                            ; 004249cb
    MOV ECX,dword ptr [ESI + 0xc26c]    ; 004249cd
    PUSH ECX                            ; 004249d3
    PUSH EDI                            ; 004249d4
    PUSH ESI                            ; 004249d5
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210 ; 004249d6
        ;   XREF to: 00431210 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 004249db
    MOV EDI,dword ptr [ESI + 0xc270]    ; 004249de
        ;   Label: LAB_004249de
    CMP EDI,dword ptr [EBX]             ; 004249e4
    JNZ 0x004249ff                      ; 004249e6
        ;   XREF to: 004249ff (CONDITIONAL_JUMP)  ; LAB_004249ff
    PUSH 0x0                            ; 004249e8
    MOV EAX,dword ptr [ESI + 0xc274]    ; 004249ea
    PUSH EAX                            ; 004249f0
    MOV EDX,dword ptr [ESP + 0x14]      ; 004249f1
    PUSH EDX                            ; 004249f5
    PUSH ESI                            ; 004249f6
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210 ; 004249f7
        ;   XREF to: 00431210 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 004249fc
    PUSH 0x5d4f9c                       ; 004249ff | = "limb?.wav"
        ;   Label: LAB_004249ff
    PUSH ESI                            ; 00424a04
    CALL core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_004352e0 ; 00424a05
        ;   XREF to: 004352e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_004352e0(CCharacter * this_ptr, char * sound_name)
    ADD ESP,0x8                         ; 00424a0a
    MOV ECX,dword ptr [ESP + 0xc]       ; 00424a0d
    PUSH ECX                            ; 00424a11
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90 ; 00424a12
        ;   XREF to: 00419b90 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90(CBodyPart * this_ptr)
    MOV EAX,dword ptr [ESI + 0xc288]    ; 00424a17
    MOV EDI,dword ptr [ESI + EAX*0x4 + 0x2298] ; 00424a1d
    ADD ESP,0x4                         ; 00424a24
    TEST EDI,EDI                        ; 00424a27
    JZ 0x00424ad1                       ; 00424a29
        ;   XREF to: 00424ad1 (CONDITIONAL_JUMP)  ; LAB_00424ad1
    FLD float ptr [EBX + 0x8]           ; 00424a2f
        ;   Label: LAB_00424a2f
    FLD ST0                             ; 00424a32
    FMUL double ptr [0x005d4fb0]        ; 00424a34 | DAT_005d4fb0
    FSTP ST1                            ; 00424a3a
    FSTP float ptr [EBX + 0x8]          ; 00424a3c
    MOV EDX,dword ptr [ESI + 0xc288]    ; 00424a3f
        ;   Label: LAB_00424a3f
    MOV EAX,dword ptr [EBX]             ; 00424a45
    CMP EAX,EDX                         ; 00424a47
    JZ 0x00424add                       ; 00424a49
        ;   XREF to: 00424add (CONDITIONAL_JUMP)  ; LAB_00424add
    CMP EAX,dword ptr [ESI + 0xc284]    ; 00424a4f
    JZ 0x00424a63                       ; 00424a55
        ;   XREF to: 00424a63 (CONDITIONAL_JUMP)  ; LAB_00424a63
    CMP EAX,dword ptr [ESI + 0xc280]    ; 00424a57
    JNZ 0x00424af4                      ; 00424a5d
        ;   XREF to: 00424af4 (CONDITIONAL_JUMP)  ; LAB_00424af4
    MOV EAX,dword ptr [EBX + 0x4]       ; 00424a63
        ;   Label: LAB_00424a63
    MOV dword ptr [EBX + 0x4],EAX       ; 00424a66
    MOV ESP,EBP                         ; 00424a69
    POP EBP                             ; 00424a6b
    POP EDI                             ; 00424a6c
    POP ESI                             ; 00424a6d
    POP EBX                             ; 00424a6e
    RET                                 ; 00424a6f
    MOV EAX,dword ptr [ESI + 0xc26c]    ; 00424a70
        ;   Label: caseD_1
    JMP 0x00424926                      ; 00424a76
        ;   XREF to: 00424926 (UNCONDITIONAL_JUMP)  ; LAB_00424926
    MOV EAX,dword ptr [ESI + 0xc270]    ; 00424a7b
        ;   Label: caseD_2
    JMP 0x00424926                      ; 00424a81
        ;   XREF to: 00424926 (UNCONDITIONAL_JUMP)  ; LAB_00424926
    MOV EAX,dword ptr [ESI + 0xc274]    ; 00424a86
        ;   Label: caseD_3
    JMP 0x00424926                      ; 00424a8c
        ;   XREF to: 00424926 (UNCONDITIONAL_JUMP)  ; LAB_00424926
    MOV EAX,dword ptr [ESI + 0xc288]    ; 00424a91
        ;   Label: caseD_4
    JMP 0x00424926                      ; 00424a97
        ;   XREF to: 00424926 (UNCONDITIONAL_JUMP)  ; LAB_00424926
    CMP EAX,dword ptr [ESI + 0xc26c]    ; 00424a9c
        ;   Label: LAB_00424a9c
    JZ 0x00424938                       ; 00424aa2
        ;   XREF to: 00424938 (CONDITIONAL_JUMP)  ; LAB_00424938
    CMP EAX,dword ptr [ESI + 0xc270]    ; 00424aa8
    JZ 0x00424938                       ; 00424aae
        ;   XREF to: 00424938 (CONDITIONAL_JUMP)  ; LAB_00424938
    CMP EAX,dword ptr [ESI + 0xc274]    ; 00424ab4
    JZ 0x00424938                       ; 00424aba
        ;   XREF to: 00424938 (CONDITIONAL_JUMP)  ; LAB_00424938
    CMP EAX,dword ptr [ESI + 0xc288]    ; 00424ac0
    JZ 0x00424938                       ; 00424ac6
        ;   XREF to: 00424938 (CONDITIONAL_JUMP)  ; LAB_00424938
    JMP 0x00424a3f                      ; 00424acc
        ;   XREF to: 00424a3f (UNCONDITIONAL_JUMP)  ; LAB_00424a3f
    MOV dword ptr [EBX + 0x4],0x461c3c00 ; 00424ad1
        ;   Label: LAB_00424ad1
    JMP 0x00424a2f                      ; 00424ad8
        ;   XREF to: 00424a2f (UNCONDITIONAL_JUMP)  ; LAB_00424a2f
    FLD float ptr [EBX + 0x4]           ; 00424add
        ;   Label: LAB_00424add
    FLD ST0                             ; 00424ae0
    FMUL double ptr [0x005d4fc0]        ; 00424ae2 | DAT_005d4fc0
    FSTP ST1                            ; 00424ae8
    FSTP float ptr [EBX + 0x4]          ; 00424aea
    MOV ESP,EBP                         ; 00424aed
    POP EBP                             ; 00424aef
    POP EDI                             ; 00424af0
    POP ESI                             ; 00424af1
    POP EBX                             ; 00424af2
    RET                                 ; 00424af3
    FLD float ptr [EBX + 0x4]           ; 00424af4
        ;   Label: LAB_00424af4
    FLD ST0                             ; 00424af7
    FMUL double ptr [0x005d4fb8]        ; 00424af9 | DAT_005d4fb8
    FSTP ST1                            ; 00424aff
    FSTP float ptr [EBX + 0x4]          ; 00424b01
    MOV ESP,EBP                         ; 00424b04
    POP EBP                             ; 00424b06
    POP EDI                             ; 00424b07
    POP ESI                             ; 00424b08
    POP EBX                             ; 00424b09
    RET                                 ; 00424b0a

