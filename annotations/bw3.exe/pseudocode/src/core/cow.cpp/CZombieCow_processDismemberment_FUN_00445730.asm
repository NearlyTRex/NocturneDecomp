; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cow_cpp_CZombieCow_processDismemberment_FUN_00445730(CZombieCow *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CZombieCow *     Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_cow.cpp_CZombieCow_processDamage_FUN_004459b0 at 004459bd
;
; Referenced Globals:
;   undefined1* switchdataD_00445720 = 0044576d
;   TerminatedCString s_limb_wav_005b99a9
;   undefined4 DAT_005b99b5
;   undefined4 DAT_005b99bd
;   undefined4 DAT_005b99c5
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 g_CGameInstance.blood_flag
;   undefined4 g_CGameInstance.gratuitous_dismemberment
;
; Called Functions:
;   core_actor.cpp_randomChance_FUN_0040cf40
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_004157c0
;   core_bodypart.cpp_createBodyPart_FUN_00414550
;   core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00430590
;   core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_00434810
;   crt_stdlib.c_rand_FUN_005a35cc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00445730
        ;   Label: core_cow.cpp_CZombieCow_processDismemberment_FUN_00445730
    PUSH ESI                            ; 00445731
    PUSH EDI                            ; 00445732
    PUSH EBP                            ; 00445733
    SUB ESP,0xc                         ; 00445734
    MOV EBX,dword ptr [ESP + 0x20]      ; 00445737
    MOV ESI,dword ptr [ESP + 0x24]      ; 0044573b
    FLD float ptr [ESI + 0x2c]          ; 0044573f
    FLDZ                                ; 00445742
    FCOMPP                              ; 00445744
    FNSTSW AX                           ; 00445746
    SAHF                                ; 00445748
    JNC 0x00445775                      ; 00445749
        ;   XREF to: 00445775 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI],-0x1            ; 0044574b
    JNZ 0x00445775                      ; 0044574e
        ;   XREF to: 00445775 (CONDITIONAL_JUMP)  ; default
    CALL crt_stdlib.c_rand_FUN_005a35cc ; 00445750
        ;   XREF to: 005a35cc (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005a35cc()
    MOV EDX,EAX                         ; 00445755
    MOV EDI,0x4                         ; 00445757
    SAR EDX,0x1f                        ; 0044575c
    IDIV EDI                            ; 0044575f
    CMP EDX,0x3                         ; 00445761
    JA 0x00445775                       ; 00445764
        ;   XREF to: 00445775 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x445720]  ; 00445766 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xd060]    ; 0044576d
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 00445773
        ;   Label: LAB_00445773
    MOV ECX,dword ptr [EBX + 0xd07c]    ; 00445775
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 0044577b
    CMP EAX,ECX                         ; 0044577d
    JNZ 0x00445944                      ; 0044577f
        ;   XREF to: 00445944 (CONDITIONAL_JUMP)  ; LAB_00445944
    MOV EAX,dword ptr [ESI + 0x2c]      ; 00445785
        ;   Label: LAB_00445785
    MOV dword ptr [ESP + 0x8],EAX       ; 00445788
    MOV EAX,[0x005fe9dc]                ; 0044578c | g_CGamePtr
    CMP dword ptr [EAX + 0x204],0x0     ; 00445791 | g_CGameInstance.gratuitous_dismemberment
    JZ 0x004457a2                       ; 00445798
        ;   XREF to: 004457a2 (CONDITIONAL_JUMP)  ; LAB_004457a2
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 0044579a
    MOV EAX,[0x005fe9dc]                ; 004457a2 | g_CGamePtr
        ;   Label: LAB_004457a2
    MOV EDX,dword ptr [EAX + 0x14]      ; 004457a7 | g_CGameInstance.blood_flag
    TEST EDX,EDX                        ; 004457aa
    JNZ 0x004457b2                      ; 004457ac
        ;   XREF to: 004457b2 (CONDITIONAL_JUMP)  ; LAB_004457b2
    MOV dword ptr [ESP + 0x8],EDX       ; 004457ae
    PUSH dword ptr [ESP + 0x8]          ; 004457b2
        ;   Label: LAB_004457b2
    CALL core_actor.cpp_randomChance_FUN_0040cf40 ; 004457b6
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 004457bb
    TEST EAX,EAX                        ; 004457be
    JZ 0x004458fd                       ; 004457c0
        ;   XREF to: 004458fd (CONDITIONAL_JUMP)  ; LAB_004458fd
    PUSH 0x0                            ; 004457c6
    PUSH 0x0                            ; 004457c8
    PUSH 0x0                            ; 004457ca
    PUSH EBX                            ; 004457cc
    LEA EDI,[ESI + 0xc]                 ; 004457cd
    PUSH EDI                            ; 004457d0
    LEA EAX,[EBX + 0x30]                ; 004457d1
    PUSH EAX                            ; 004457d4
    LEA EAX,[EBX + 0x20]                ; 004457d5
    PUSH EAX                            ; 004457d8
    CALL core_bodypart.cpp_createBodyPart_FUN_00414550 ; 004457d9
        ;   XREF to: 00414550 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_createBodyPart_FUN_00414550(CVector3f * position, UOrientationVector * orientation, CVector3f * initial_velocity, CDemonActor * scale_source, ...)
    ADD ESP,0x1c                        ; 004457de
    PUSH 0x1                            ; 004457e1
    MOV EDX,dword ptr [ESI]             ; 004457e3
    PUSH EDX                            ; 004457e5
    PUSH EAX                            ; 004457e6
    PUSH EBX                            ; 004457e7
    MOV EBP,EAX                         ; 004457e8
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00430590 ; 004457ea
        ;   XREF to: 00430590 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00430590(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    MOV EAX,dword ptr [ESI]             ; 004457ef
    MOV ECX,dword ptr [EBX + 0xd078]    ; 004457f1
    ADD ESP,0x10                        ; 004457f7
    CMP EAX,ECX                         ; 004457fa
    JNZ 0x004458ad                      ; 004457fc
        ;   XREF to: 004458ad (CONDITIONAL_JUMP)  ; LAB_004458ad
    PUSH 0x1                            ; 00445802
    PUSH EDI                            ; 00445804
    MOV EAX,dword ptr [EBX + 0xd060]    ; 00445805
    PUSH EAX                            ; 0044580b
    PUSH EBX                            ; 0044580c
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520 ; 0044580d
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 00445812
    PUSH 0x1                            ; 00445815
    PUSH EDI                            ; 00445817
    MOV EDX,dword ptr [EBX + 0xd064]    ; 00445818
    PUSH EDX                            ; 0044581e
    PUSH EBX                            ; 0044581f
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520 ; 00445820
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 00445825
    PUSH 0x1                            ; 00445828
    PUSH EDI                            ; 0044582a
    MOV ECX,dword ptr [EBX + 0xd068]    ; 0044582b
    PUSH ECX                            ; 00445831
    PUSH EBX                            ; 00445832
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520 ; 00445833
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 00445838
    PUSH 0x1                            ; 0044583b
    PUSH EDI                            ; 0044583d
    MOV EAX,dword ptr [EBX + 0xd06c]    ; 0044583e
    PUSH EAX                            ; 00445844
    PUSH EBX                            ; 00445845
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520 ; 00445846
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 0044584b
    PUSH 0x1                            ; 0044584e
    PUSH EDI                            ; 00445850
    MOV EDX,dword ptr [EBX + 0xd070]    ; 00445851
    PUSH EDX                            ; 00445857
    PUSH EBX                            ; 00445858
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520 ; 00445859
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 0044585e
    PUSH 0x1                            ; 00445861
    PUSH EDI                            ; 00445863
    MOV ECX,dword ptr [EBX + 0xd074]    ; 00445864
    PUSH ECX                            ; 0044586a
    PUSH EBX                            ; 0044586b
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520 ; 0044586c
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 00445871
    PUSH 0x1                            ; 00445874
    PUSH EDI                            ; 00445876
    MOV EAX,dword ptr [EBX + 0xd07c]    ; 00445877
    PUSH EAX                            ; 0044587d
    PUSH EBX                            ; 0044587e
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520 ; 0044587f
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 00445884
    PUSH 0x1                            ; 00445887
    PUSH EDI                            ; 00445889
    MOV EDX,dword ptr [EBX + 0xd080]    ; 0044588a
    PUSH EDX                            ; 00445890
    PUSH EBX                            ; 00445891
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520 ; 00445892
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 00445897
    PUSH 0x1                            ; 0044589a
    PUSH EDI                            ; 0044589c
    MOV ECX,dword ptr [EBX + 0xd084]    ; 0044589d
    PUSH ECX                            ; 004458a3
    PUSH EBX                            ; 004458a4
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520 ; 004458a5
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004458aa
    PUSH 0x5b99a9                       ; 004458ad | = "limb?.wav"
        ;   Label: LAB_004458ad
    PUSH EBX                            ; 004458b2
    CALL core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_00434810 ; 004458b3
        ;   XREF to: 00434810 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_00434810(CCharacter * this_ptr, char * sound_name)
    ADD ESP,0x8                         ; 004458b8
    PUSH EBP                            ; 004458bb
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_004157c0 ; 004458bc
        ;   XREF to: 004157c0 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_004157c0(CBodyPart * this_ptr)
    MOV EAX,dword ptr [EBX + 0xd060]    ; 004458c1
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x2298] ; 004458c7
    ADD ESP,0x4                         ; 004458ce
    TEST EDI,EDI                        ; 004458d1
    JZ 0x00445976                       ; 004458d3
        ;   XREF to: 00445976 (CONDITIONAL_JUMP)  ; LAB_00445976
    MOV EAX,dword ptr [EBX + 0xd07c]    ; 004458d9
        ;   Label: LAB_004458d9
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 004458df
    JZ 0x00445982                       ; 004458e7
        ;   XREF to: 00445982 (CONDITIONAL_JUMP)  ; LAB_00445982
    FLD float ptr [ESI + 0x8]           ; 004458ed
        ;   Label: LAB_004458ed
    FLD ST0                             ; 004458f0
    FMUL double ptr [0x005b99b5]        ; 004458f2 | DAT_005b99b5
    FSTP ST1                            ; 004458f8
    FSTP float ptr [ESI + 0x8]          ; 004458fa
    MOV EDX,dword ptr [EBX + 0xd060]    ; 004458fd
        ;   Label: LAB_004458fd
    CMP EDX,dword ptr [ESI]             ; 00445903
    JNZ 0x0044598e                      ; 00445905
        ;   XREF to: 0044598e (CONDITIONAL_JUMP)  ; LAB_0044598e
    FLD float ptr [ESI + 0x4]           ; 0044590b
    FLD ST0                             ; 0044590e
    FMUL double ptr [0x005b99c5]        ; 00445910 | DAT_005b99c5
    FSTP ST1                            ; 00445916
    FSTP float ptr [ESI + 0x4]          ; 00445918
    ADD ESP,0xc                         ; 0044591b
    POP EBP                             ; 0044591e
    POP EDI                             ; 0044591f
    POP ESI                             ; 00445920
    POP EBX                             ; 00445921
    RET                                 ; 00445922
    MOV EAX,dword ptr [EBX + 0xd07c]    ; 00445923
        ;   Label: caseD_1
    JMP 0x00445773                      ; 00445929
        ;   XREF to: 00445773 (UNCONDITIONAL_JUMP)  ; LAB_00445773
    MOV EAX,dword ptr [EBX + 0xd080]    ; 0044592e
        ;   Label: caseD_2
    JMP 0x00445773                      ; 00445934
        ;   XREF to: 00445773 (UNCONDITIONAL_JUMP)  ; LAB_00445773
    MOV EAX,dword ptr [EBX + 0xd084]    ; 00445939
        ;   Label: caseD_3
    JMP 0x00445773                      ; 0044593f
        ;   XREF to: 00445773 (UNCONDITIONAL_JUMP)  ; LAB_00445773
    CMP EAX,dword ptr [EBX + 0xd080]    ; 00445944
        ;   Label: LAB_00445944
    JZ 0x00445785                       ; 0044594a
        ;   XREF to: 00445785 (CONDITIONAL_JUMP)  ; LAB_00445785
    CMP EAX,dword ptr [EBX + 0xd084]    ; 00445950
    JZ 0x00445785                       ; 00445956
        ;   XREF to: 00445785 (CONDITIONAL_JUMP)  ; LAB_00445785
    CMP EAX,dword ptr [EBX + 0xd060]    ; 0044595c
    JZ 0x00445785                       ; 00445962
        ;   XREF to: 00445785 (CONDITIONAL_JUMP)  ; LAB_00445785
    CMP EAX,dword ptr [EBX + 0xd078]    ; 00445968
    JZ 0x00445785                       ; 0044596e
        ;   XREF to: 00445785 (CONDITIONAL_JUMP)  ; LAB_00445785
    JMP 0x004458fd                      ; 00445974
        ;   XREF to: 004458fd (UNCONDITIONAL_JUMP)  ; LAB_004458fd
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 00445976
        ;   Label: LAB_00445976
    JMP 0x004458d9                      ; 0044597d
        ;   XREF to: 004458d9 (UNCONDITIONAL_JUMP)  ; LAB_004458d9
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 00445982
        ;   Label: LAB_00445982
    JMP 0x004458ed                      ; 00445989
        ;   XREF to: 004458ed (UNCONDITIONAL_JUMP)  ; LAB_004458ed
    FLD float ptr [ESI + 0x4]           ; 0044598e
        ;   Label: LAB_0044598e
    FLD ST0                             ; 00445991
    FMUL double ptr [0x005b99bd]        ; 00445993 | DAT_005b99bd
    FSTP ST1                            ; 00445999
    FSTP float ptr [ESI + 0x4]          ; 0044599b
    ADD ESP,0xc                         ; 0044599e
    POP EBP                             ; 004459a1
    POP EDI                             ; 004459a2
    POP ESI                             ; 004459a3
    POP EBX                             ; 004459a4
    RET                                 ; 004459a5

