; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_imp_cpp_CImp_FUN_004fab60(CImp *this_ptr)
;
; Parameters:
; CImp *           Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_imp.cpp_CImp_processDamage_FUN_004fae00 at 004fae82
;
; Referenced Globals:
;   void* switchdataD_004fab48 = 004fab9d
;   TerminatedCString s_limb_wav_0062fa4b
;   double DOUBLE_0062fa56 = 7
;   double DOUBLE_0062fa5e = 0.5
;   double DOUBLE_0062fa66 = 2.5
;   CGame* g_CGamePtr = 02d81a9c
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.blood_flag
;   undefined4 g_CGameInstance.gratuitous_dismemberment
;
; Called Functions:
;   core_actor.cpp_randomChance_FUN_0040cd10
;   core_bodypart.cpp_CBodyPart_FUN_0041a050
;   core_bodypart.cpp_createBodyPart_FUN_00418e10
;   core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_0042bd30
;   core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_0042f300
;   crt_stdlib.c_rand_FUN_005feb5c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fab60
        ;   Label: core_imp.cpp_CImp_FUN_004fab60
    PUSH ESI                            ; 004fab61
    PUSH EDI                            ; 004fab62
    PUSH EBP                            ; 004fab63
    SUB ESP,0xc                         ; 004fab64
    MOV EBX,dword ptr [ESP + 0x20]      ; 004fab67
    MOV ESI,dword ptr [ESP + 0x24]      ; 004fab6b
    FLD float ptr [ESI + 0x2c]          ; 004fab6f
    FLDZ                                ; 004fab72
    FCOMPP                              ; 004fab74
    FNSTSW AX                           ; 004fab76
    SAHF                                ; 004fab78
    JNC 0x004faba5                      ; 004fab79
        ;   XREF to: 004faba5 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI],-0x1            ; 004fab7b
    JNZ 0x004faba5                      ; 004fab7e
        ;   XREF to: 004faba5 (CONDITIONAL_JUMP)  ; default
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 004fab80
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
    MOV EDX,EAX                         ; 004fab85
    MOV EDI,0x6                         ; 004fab87
    SAR EDX,0x1f                        ; 004fab8c
    IDIV EDI                            ; 004fab8f
    CMP EDX,0x5                         ; 004fab91
    JA 0x004faba5                       ; 004fab94
        ;   XREF to: 004faba5 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x4fab48]  ; 004fab96 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xbec8]    ; 004fab9d
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 004faba3
        ;   Label: LAB_004faba3
    MOV ECX,dword ptr [EBX + 0xbec8]    ; 004faba5
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 004fabab
    CMP EAX,ECX                         ; 004fabad
    JNZ 0x004fad85                      ; 004fabaf
        ;   XREF to: 004fad85 (CONDITIONAL_JUMP)  ; LAB_004fad85
    MOV EAX,dword ptr [ESI + 0x2c]      ; 004fabb5
        ;   Label: LAB_004fabb5
    MOV EBP,dword ptr [EBX + 0xbef0]    ; 004fabb8
    MOV dword ptr [ESP + 0x8],EAX       ; 004fabbe
    CMP EBP,dword ptr [ESI]             ; 004fabc2
    JNZ 0x004fabce                      ; 004fabc4
        ;   XREF to: 004fabce (CONDITIONAL_JUMP)  ; LAB_004fabce
    MOV dword ptr [ESP + 0x8],0x3d4ccccd ; 004fabc6
    MOV EDX,dword ptr [EBX + 0xbeec]    ; 004fabce
        ;   Label: LAB_004fabce
    CMP EDX,dword ptr [ESI]             ; 004fabd4
    JNZ 0x004fabe0                      ; 004fabd6
        ;   XREF to: 004fabe0 (CONDITIONAL_JUMP)  ; LAB_004fabe0
    MOV dword ptr [ESP + 0x8],0x3ca3d70a ; 004fabd8
    MOV EAX,[0x0067b654]                ; 004fabe0 | g_CGameInstance | g_CGamePtr
        ;   Label: LAB_004fabe0
    CMP dword ptr [EAX + 0x1e0],0x0     ; 004fabe5 | g_CGameInstance.gratuitous_dismemberment
    JZ 0x004fabf6                       ; 004fabec
        ;   XREF to: 004fabf6 (CONDITIONAL_JUMP)  ; LAB_004fabf6
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 004fabee
    MOV EAX,[0x0067b654]                ; 004fabf6 | g_CGameInstance | g_CGamePtr
        ;   Label: LAB_004fabf6
    MOV EDX,dword ptr [EAX + 0x14]      ; 004fabfb | g_CGameInstance.blood_flag
    TEST EDX,EDX                        ; 004fabfe
    JNZ 0x004fac06                      ; 004fac00
        ;   XREF to: 004fac06 (CONDITIONAL_JUMP)  ; LAB_004fac06
    MOV dword ptr [ESP + 0x8],EDX       ; 004fac02
    PUSH dword ptr [ESP + 0x8]          ; 004fac06
        ;   Label: LAB_004fac06
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 004fac0a
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 004fac0f
    TEST EAX,EAX                        ; 004fac12
    JZ 0x004fad1c                       ; 004fac14
        ;   XREF to: 004fad1c (CONDITIONAL_JUMP)  ; LAB_004fad1c
    MOV EDI,dword ptr [EBX + 0x2610]    ; 004fac1a
    PUSH EDI                            ; 004fac20
    PUSH 0x0                            ; 004fac21
    PUSH 0x0                            ; 004fac23
    PUSH EBX                            ; 004fac25
    LEA EAX,[ESI + 0xc]                 ; 004fac26
    PUSH EAX                            ; 004fac29
    LEA EAX,[EBX + 0x30]                ; 004fac2a
    PUSH EAX                            ; 004fac2d
    LEA EAX,[EBX + 0x20]                ; 004fac2e
    PUSH EAX                            ; 004fac31
    CALL core_bodypart.cpp_createBodyPart_FUN_00418e10 ; 004fac32
        ;   XREF to: 00418e10 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_createBodyPart_FUN_00418e10()
    ADD ESP,0x1c                        ; 004fac37
    MOV EDI,EAX                         ; 004fac3a
    PUSH 0x1                            ; 004fac3c
    MOV EBP,EAX                         ; 004fac3e
    MOV EAX,dword ptr [ESI]             ; 004fac40
    PUSH EAX                            ; 004fac42
    PUSH EDI                            ; 004fac43
    PUSH EBX                            ; 004fac44
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_0042bd30 ; 004fac45
        ;   XREF to: 0042bd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_0042bd30(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    MOV EAX,dword ptr [ESI]             ; 004fac4a
    MOV EDX,dword ptr [EBX + 0xbec8]    ; 004fac4c
    ADD ESP,0x10                        ; 004fac52
    CMP EAX,EDX                         ; 004fac55
    JNZ 0x004fac6c                      ; 004fac57
        ;   XREF to: 004fac6c (CONDITIONAL_JUMP)  ; LAB_004fac6c
    PUSH 0x0                            ; 004fac59
    MOV ECX,dword ptr [EBX + 0xbecc]    ; 004fac5b
    PUSH ECX                            ; 004fac61
    PUSH EDI                            ; 004fac62
    PUSH EBX                            ; 004fac63
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_0042bd30 ; 004fac64
        ;   XREF to: 0042bd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_0042bd30(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 004fac69
    MOV EDI,dword ptr [EBX + 0xbed0]    ; 004fac6c
        ;   Label: LAB_004fac6c
    CMP EDI,dword ptr [ESI]             ; 004fac72
    JNZ 0x004fac89                      ; 004fac74
        ;   XREF to: 004fac89 (CONDITIONAL_JUMP)  ; LAB_004fac89
    PUSH 0x0                            ; 004fac76
    MOV EAX,dword ptr [EBX + 0xbed4]    ; 004fac78
    PUSH EAX                            ; 004fac7e
    PUSH EBP                            ; 004fac7f
    PUSH EBX                            ; 004fac80
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_0042bd30 ; 004fac81
        ;   XREF to: 0042bd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_0042bd30(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 004fac86
    MOV EDX,dword ptr [EBX + 0xbeec]    ; 004fac89
        ;   Label: LAB_004fac89
    CMP EDX,dword ptr [ESI]             ; 004fac8f
    JNZ 0x004facf5                      ; 004fac91
        ;   XREF to: 004facf5 (CONDITIONAL_JUMP)  ; LAB_004facf5
    PUSH 0x1                            ; 004fac93
    LEA EDI,[ESI + 0xc]                 ; 004fac95
    PUSH EDI                            ; 004fac98
    MOV ECX,dword ptr [EBX + 0xbed0]    ; 004fac99
    PUSH ECX                            ; 004fac9f
    PUSH EBX                            ; 004faca0
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0 ; 004faca1
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0(CCharacter * this_ptr, int part_index)
    ADD ESP,0x10                        ; 004faca6
    PUSH 0x1                            ; 004faca9
    PUSH EDI                            ; 004facab
    MOV EAX,dword ptr [EBX + 0xbed4]    ; 004facac
    PUSH EAX                            ; 004facb2
    PUSH EBX                            ; 004facb3
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0 ; 004facb4
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0(CCharacter * this_ptr, int part_index)
    ADD ESP,0x10                        ; 004facb9
    PUSH 0x1                            ; 004facbc
    PUSH EDI                            ; 004facbe
    MOV EDX,dword ptr [EBX + 0xbec8]    ; 004facbf
    PUSH EDX                            ; 004facc5
    PUSH EBX                            ; 004facc6
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0 ; 004facc7
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0(CCharacter * this_ptr, int part_index)
    ADD ESP,0x10                        ; 004faccc
    PUSH 0x1                            ; 004faccf
    PUSH EDI                            ; 004facd1
    MOV ECX,dword ptr [EBX + 0xbecc]    ; 004facd2
    PUSH ECX                            ; 004facd8
    PUSH EBX                            ; 004facd9
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0 ; 004facda
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0(CCharacter * this_ptr, int part_index)
    ADD ESP,0x10                        ; 004facdf
    PUSH 0x1                            ; 004face2
    PUSH EDI                            ; 004face4
    MOV EDI,dword ptr [EBX + 0xbef0]    ; 004face5
    PUSH EDI                            ; 004faceb
    PUSH EBX                            ; 004facec
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0 ; 004faced
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0(CCharacter * this_ptr, int part_index)
    ADD ESP,0x10                        ; 004facf2
    PUSH 0x62fa4b                       ; 004facf5 | = "limb?.wav"
        ;   Label: LAB_004facf5
    PUSH EBX                            ; 004facfa
    CALL core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_0042f300 ; 004facfb
        ;   XREF to: 0042f300 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_0042f300(CCharacter * this_ptr, char * sound_name)
    ADD ESP,0x8                         ; 004fad00
    PUSH EBP                            ; 004fad03
    CALL core_bodypart.cpp_CBodyPart_FUN_0041a050 ; 004fad04
        ;   XREF to: 0041a050 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_FUN_0041a050(CBodyPart * this_ptr)
    ADD ESP,0x4                         ; 004fad09
    FLD float ptr [ESI + 0x8]           ; 004fad0c
    FLD ST0                             ; 004fad0f
    FMUL double ptr [0x0062fa56]        ; 004fad11 | DOUBLE_0062fa56
    FSTP ST1                            ; 004fad17
    FSTP float ptr [ESI + 0x8]          ; 004fad19
    MOV EBP,dword ptr [EBX + 0xbef0]    ; 004fad1c
        ;   Label: LAB_004fad1c
    MOV EAX,dword ptr [ESI]             ; 004fad22
    CMP EAX,EBP                         ; 004fad24
    JZ 0x004fadc6                       ; 004fad26
        ;   XREF to: 004fadc6 (CONDITIONAL_JUMP)  ; LAB_004fadc6
    CMP EAX,dword ptr [EBX + 0xbee8]    ; 004fad2c
    JZ 0x004fad40                       ; 004fad32
        ;   XREF to: 004fad40 (CONDITIONAL_JUMP)  ; LAB_004fad40
    CMP EAX,dword ptr [EBX + 0xbeec]    ; 004fad34
    JNZ 0x004fadde                      ; 004fad3a
        ;   XREF to: 004fadde (CONDITIONAL_JUMP)  ; LAB_004fadde
    MOV EAX,dword ptr [ESI + 0x4]       ; 004fad40
        ;   Label: LAB_004fad40
    MOV dword ptr [ESI + 0x4],EAX       ; 004fad43
    ADD ESP,0xc                         ; 004fad46
    POP EBP                             ; 004fad49
    POP EDI                             ; 004fad4a
    POP ESI                             ; 004fad4b
    POP EBX                             ; 004fad4c
    RET                                 ; 004fad4d
    MOV EAX,dword ptr [EBX + 0xbecc]    ; 004fad4e
        ;   Label: caseD_1
    JMP 0x004faba3                      ; 004fad54
        ;   XREF to: 004faba3 (UNCONDITIONAL_JUMP)  ; LAB_004faba3
    MOV EAX,dword ptr [EBX + 0xbed0]    ; 004fad59
        ;   Label: caseD_2
    JMP 0x004faba3                      ; 004fad5f
        ;   XREF to: 004faba3 (UNCONDITIONAL_JUMP)  ; LAB_004faba3
    MOV EAX,dword ptr [EBX + 0xbed4]    ; 004fad64
        ;   Label: caseD_3
    JMP 0x004faba3                      ; 004fad6a
        ;   XREF to: 004faba3 (UNCONDITIONAL_JUMP)  ; LAB_004faba3
    MOV EAX,dword ptr [EBX + 0xbef0]    ; 004fad6f
        ;   Label: caseD_4
    JMP 0x004faba3                      ; 004fad75
        ;   XREF to: 004faba3 (UNCONDITIONAL_JUMP)  ; LAB_004faba3
    MOV EAX,dword ptr [EBX + 0xbeec]    ; 004fad7a
        ;   Label: caseD_5
    JMP 0x004faba3                      ; 004fad80
        ;   XREF to: 004faba3 (UNCONDITIONAL_JUMP)  ; LAB_004faba3
    CMP EAX,dword ptr [EBX + 0xbecc]    ; 004fad85
        ;   Label: LAB_004fad85
    JZ 0x004fabb5                       ; 004fad8b
        ;   XREF to: 004fabb5 (CONDITIONAL_JUMP)  ; LAB_004fabb5
    CMP EAX,dword ptr [EBX + 0xbed0]    ; 004fad91
    JZ 0x004fabb5                       ; 004fad97
        ;   XREF to: 004fabb5 (CONDITIONAL_JUMP)  ; LAB_004fabb5
    CMP EAX,dword ptr [EBX + 0xbed4]    ; 004fad9d
    JZ 0x004fabb5                       ; 004fada3
        ;   XREF to: 004fabb5 (CONDITIONAL_JUMP)  ; LAB_004fabb5
    CMP EAX,dword ptr [EBX + 0xbeec]    ; 004fada9
    JZ 0x004fabb5                       ; 004fadaf
        ;   XREF to: 004fabb5 (CONDITIONAL_JUMP)  ; LAB_004fabb5
    CMP EAX,dword ptr [EBX + 0xbef0]    ; 004fadb5
    JZ 0x004fabb5                       ; 004fadbb
        ;   XREF to: 004fabb5 (CONDITIONAL_JUMP)  ; LAB_004fabb5
    JMP 0x004fad1c                      ; 004fadc1
        ;   XREF to: 004fad1c (UNCONDITIONAL_JUMP)  ; LAB_004fad1c
    FLD float ptr [ESI + 0x4]           ; 004fadc6
        ;   Label: LAB_004fadc6
    FLD ST0                             ; 004fadc9
    FMUL double ptr [0x0062fa66]        ; 004fadcb | DOUBLE_0062fa66
    FSTP ST1                            ; 004fadd1
    FSTP float ptr [ESI + 0x4]          ; 004fadd3
    ADD ESP,0xc                         ; 004fadd6
    POP EBP                             ; 004fadd9
    POP EDI                             ; 004fadda
    POP ESI                             ; 004faddb
    POP EBX                             ; 004faddc
    RET                                 ; 004faddd
    FLD float ptr [ESI + 0x4]           ; 004fadde
        ;   Label: LAB_004fadde
    FLD ST0                             ; 004fade1
    FMUL double ptr [0x0062fa5e]        ; 004fade3 | DOUBLE_0062fa5e
    FSTP ST1                            ; 004fade9
    FSTP float ptr [ESI + 0x4]          ; 004fadeb
    ADD ESP,0xc                         ; 004fadee
    POP EBP                             ; 004fadf1
    POP EDI                             ; 004fadf2
    POP ESI                             ; 004fadf3
    POP EBX                             ; 004fadf4
    RET                                 ; 004fadf5

