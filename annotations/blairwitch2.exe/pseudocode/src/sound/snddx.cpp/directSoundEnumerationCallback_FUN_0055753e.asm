; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_snddx_cpp_directSoundEnumerationCallback_FUN_0055753e(LPGUID device_guid,LPCSTR description,LPCSTR module,LPVOID context)
;
; Parameters:
; LPGUID           Stack[0x4]:4   device_guid
; LPCSTR           Stack[0x8]:4   description
; LPCSTR           Stack[0xc]:4   module
; LPVOID           Stack[0x10]:4   context
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005e9a3b
;   TerminatedCString s_create_DirectSound_objec_005ea397
;   TerminatedCString s_Querry_DirectSound_capab_005ea3b1
;   TerminatedCString s_SOUND_No_onboard_RAM_det_005ea3d1
;   TerminatedCString s_SOUND_Onboard_RAM_detect_005ea41d
;   undefined4 DAT_0061bf80
;   undefined4 DAT_02649758
;   undefined4 DAT_0264975c
;   undefined4 DAT_02649760
;   undefined4 DAT_02649764
;   undefined4 DAT_02649768
;   undefined4 DAT_0264986c
;   undefined4 DAT_02649870
;   undefined4 DAT_0264ac0c
;
; Called Functions:
;   crt_dsound.c_DirectSoundCreate
;   crt_memory.c_memset_FUN_005b77c0
;   crt_string.c__strncpy_FUN_005b9cf0
;   crt_unknown.c_sprintf_FUN_005b7790
;   sound_snddx.cpp_FUN_00554ad0
;   sound_sndmain.cpp_FUN_005549c0
;   wincore_winrun.cpp_FUN_0058ffc0
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 0055753e
        ;   Label: sound_snddx.cpp_directSoundEnumerationCallback_FUN_0055753e
    PUSH EBX                            ; 00557540
        ;   Label: LAB_00557540
    PUSH ESI                            ; 00557541
    PUSH EDI                            ; 00557542
    PUSH EBP                            ; 00557543
    SUB ESP,0x384                       ; 00557544
    MOV ESI,dword ptr [ESP + 0x398]     ; 0055754a
    CMP dword ptr [0x0061bf80],0xc      ; 00557551 | DAT_0061bf80
    JL 0x00557569                       ; 00557558
        ;   XREF to: 00557569 (CONDITIONAL_JUMP)  ; LAB_00557569
    XOR EAX,EAX                         ; 0055755a
    ADD ESP,0x384                       ; 0055755c
    POP EBP                             ; 00557562
    POP EDI                             ; 00557563
    POP ESI                             ; 00557564
    POP EBX                             ; 00557565
    RET 0x10                            ; 00557566
    XOR ECX,ECX                         ; 00557569
        ;   Label: LAB_00557569
    PUSH ECX                            ; 0055756b
    LEA EAX,[ESP + 0x384]               ; 0055756c
    PUSH EAX                            ; 00557573
    PUSH ESI                            ; 00557574
    MOV dword ptr [ESP + 0x38c],ECX     ; 00557575
    CALL crt_dsound.c_DirectSoundCreate ; 0055757c
        ;   XREF to: 005c7550 (UNCONDITIONAL_CALL)  ; HRESULT crt_dsound.c_DirectSoundCreate(LPGUID lp_guid, LPDIRECTSOUND * pp_ds, LPUNKNOWN p_unk_outer)
    TEST EAX,EAX                        ; 00557581
    JNZ 0x005575a1                      ; 00557583
        ;   XREF to: 005575a1 (CONDITIONAL_JUMP)  ; LAB_005575a1
    CMP dword ptr [ESP + 0x380],0x0     ; 00557585
    JNZ 0x005575df                      ; 0055758d
        ;   XREF to: 005575df (CONDITIONAL_JUMP)  ; LAB_005575df
    MOV EAX,0x1                         ; 0055758f
    ADD ESP,0x384                       ; 00557594
    POP EBP                             ; 0055759a
    POP EDI                             ; 0055759b
    POP ESI                             ; 0055759c
    POP EBX                             ; 0055759d
    RET 0x10                            ; 0055759e
    PUSH EAX                            ; 005575a1
        ;   Label: LAB_005575a1
    CALL sound_snddx.cpp_FUN_00554ad0   ; 005575a2
        ;   XREF to: 00554ad0 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00554ad0(uint error_code)
    ADD ESP,0x4                         ; 005575a7
    PUSH EAX                            ; 005575aa
    PUSH 0x5ea397                       ; 005575ab | = "create DirectSound object"
    PUSH 0x5e9a3b                       ; 005575b0 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 005575b5
    PUSH EAX                            ; 005575b9
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 005575ba
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 005575bf
    MOV EAX,ESP                         ; 005575c2
    PUSH EAX                            ; 005575c4
    CALL sound_sndmain.cpp_FUN_005549c0 ; 005575c5
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    MOV EAX,0x1                         ; 005575ca
    ADD ESP,0x4                         ; 005575cf
    ADD ESP,0x384                       ; 005575d2
    POP EBP                             ; 005575d8
    POP EDI                             ; 005575d9
    POP ESI                             ; 005575da
    POP EBX                             ; 005575db
    RET 0x10                            ; 005575dc
    PUSH 0x60                           ; 005575df
        ;   Label: LAB_005575df
    PUSH EAX                            ; 005575e1
    LEA EAX,[ESP + 0x328]               ; 005575e2
    PUSH EAX                            ; 005575e9
    CALL crt_memory.c_memset_FUN_005b77c0 ; 005575ea
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005575ef
    MOV EDI,0x60                        ; 005575f2
    MOV EAX,dword ptr [ESP + 0x380]     ; 005575f7
    MOV dword ptr [ESP + 0x320],EDI     ; 005575fe
    MOV EBX,dword ptr [EAX]             ; 00557605
    LEA EAX,[ESP + 0x320]               ; 00557607
    PUSH EAX                            ; 0055760e
    MOV EBP,dword ptr [ESP + 0x384]     ; 0055760f
    PUSH EBP                            ; 00557616
    CALL dword ptr [EBX + 0x10]         ; 00557617
    TEST EAX,EAX                        ; 0055761a
    JNZ 0x0055765c                      ; 0055761c
        ;   XREF to: 0055765c (CONDITIONAL_JUMP)  ; LAB_0055765c
    MOV EAX,0x1                         ; 0055761e
    MOV EBX,EAX                         ; 00557623
        ;   Label: LAB_00557623
    MOV EAX,dword ptr [ESP + 0x380]     ; 00557625
    TEST EAX,EAX                        ; 0055762c
    JZ 0x00557646                       ; 0055762e
        ;   XREF to: 00557646 (CONDITIONAL_JUMP)  ; LAB_00557646
    MOV EDX,dword ptr [ESP + 0x380]     ; 00557630
    MOV EAX,dword ptr [EAX]             ; 00557637
    PUSH EDX                            ; 00557639
    CALL dword ptr [EAX + 0x8]          ; 0055763a
    XOR ECX,ECX                         ; 0055763d
    MOV dword ptr [ESP + 0x380],ECX     ; 0055763f
    TEST EBX,EBX                        ; 00557646
        ;   Label: LAB_00557646
    JNZ 0x00557694                      ; 00557648
        ;   XREF to: 00557694 (CONDITIONAL_JUMP)  ; LAB_00557694
    MOV EAX,0x1                         ; 0055764a
    ADD ESP,0x384                       ; 0055764f
    POP EBP                             ; 00557655
    POP EDI                             ; 00557656
    POP ESI                             ; 00557657
    POP EBX                             ; 00557658
    RET 0x10                            ; 00557659
    PUSH EAX                            ; 0055765c
        ;   Label: LAB_0055765c
    CALL sound_snddx.cpp_FUN_00554ad0   ; 0055765d
        ;   XREF to: 00554ad0 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00554ad0(uint error_code)
    ADD ESP,0x4                         ; 00557662
    PUSH EAX                            ; 00557665
    PUSH 0x5ea3b1                       ; 00557666 | = "Querry DirectSound capabilities"
    PUSH 0x5e9a3b                       ; 0055766b | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x19c]               ; 00557670
    PUSH EAX                            ; 00557677
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00557678
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 0055767d
    LEA EAX,[ESP + 0x190]               ; 00557680
    PUSH EAX                            ; 00557687
    CALL sound_sndmain.cpp_FUN_005549c0 ; 00557688
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    ADD ESP,0x4                         ; 0055768d
    XOR EAX,EAX                         ; 00557690
    JMP 0x00557623                      ; 00557692
        ;   XREF to: 00557623 (UNCONDITIONAL_JUMP)  ; LAB_00557623
    MOV EBX,dword ptr [0x0061bf80]      ; 00557694 | DAT_0061bf80
        ;   Label: LAB_00557694
    LEA EAX,[EBX*0x8 + 0x0]             ; 0055769a
    ADD EAX,EBX                         ; 005576a1
    SHL EAX,0x3                         ; 005576a3
    PUSH 0x11c                          ; 005576a6
    SUB EAX,EBX                         ; 005576ab
    MOV EBX,0x2649874                   ; 005576ad
    SHL EAX,0x2                         ; 005576b2
    PUSH 0x0                            ; 005576b5
    ADD EBX,EAX                         ; 005576b7
    PUSH EBX                            ; 005576b9
    CALL crt_memory.c_memset_FUN_005b77c0 ; 005576ba
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005576bf
    TEST ESI,ESI                        ; 005576c2
    JNZ 0x00557723                      ; 005576c4
        ;   XREF to: 00557723 (CONDITIONAL_JUMP)  ; LAB_00557723
    MOV dword ptr [EBX],0x1             ; 005576c6 | DAT_02649758
    MOV dword ptr [EBX + 0x118],0x0     ; 005576cc | DAT_02649870
        ;   Label: LAB_005576cc
    TEST byte ptr [ESP + 0x324],0x20    ; 005576d6
    JZ 0x00557732                       ; 005576de
        ;   XREF to: 00557732 (CONDITIONAL_JUMP)  ; LAB_00557732
    MOV dword ptr [EBX + 0x114],0x1     ; 005576e0 | DAT_0264986c
    PUSH 0xff                           ; 005576ea
        ;   Label: LAB_005576ea
    MOV ECX,dword ptr [ESP + 0x3a0]     ; 005576ef
    PUSH ECX                            ; 005576f6
    ADD EBX,0x14                        ; 005576f7
    PUSH EBX                            ; 005576fa
    CALL crt_string.c__strncpy_FUN_005b9cf0 ; 005576fb
        ;   XREF to: 005b9cf0 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_005b9cf0(char * dest, char * src, SIZE_T count)
    MOV EAX,0x1                         ; 00557700
    MOV EBX,dword ptr [0x0061bf80]      ; 00557705 | DAT_0061bf80
    ADD EBX,EAX                         ; 0055770b
    ADD ESP,0xc                         ; 0055770d
    MOV dword ptr [0x0061bf80],EBX      ; 00557710 | DAT_0061bf80
    ADD ESP,0x384                       ; 00557716
    POP EBP                             ; 0055771c
    POP EDI                             ; 0055771d
    POP ESI                             ; 0055771e
    POP EBX                             ; 0055771f
    RET 0x10                            ; 00557720
    LEA EDI,[EBX + 0x4]                 ; 00557723
        ;   Label: LAB_00557723
    MOV dword ptr [EBX],0x0             ; 00557726 | DAT_02649758
    MOVSD ES:EDI,ESI                    ; 0055772c | DAT_0264975c
    MOVSD ES:EDI,ESI                    ; 0055772d | DAT_02649760
    MOVSD ES:EDI,ESI                    ; 0055772e | DAT_02649764
    MOVSD ES:EDI,ESI                    ; 0055772f | DAT_02649768
    JMP 0x005576cc                      ; 00557730
        ;   XREF to: 005576cc (UNCONDITIONAL_JUMP)  ; LAB_005576cc
    MOV dword ptr [EBX + 0x114],0x0     ; 00557732 | DAT_0264986c
        ;   Label: LAB_00557732
    CMP dword ptr [ESP + 0x338],0x0     ; 0055773c
    JBE 0x00557750                      ; 00557744
        ;   XREF to: 00557750 (CONDITIONAL_JUMP)  ; LAB_00557750
    MOV dword ptr [EBX + 0x118],0x1     ; 00557746 | DAT_02649870
    CMP dword ptr [ESP + 0x34c],0x0     ; 00557750
        ;   Label: LAB_00557750
    JBE 0x00557764                      ; 00557758
        ;   XREF to: 00557764 (CONDITIONAL_JUMP)  ; LAB_00557764
    MOV dword ptr [EBX + 0x118],0x2     ; 0055775a | DAT_02649870
    CMP dword ptr [ESP + 0x364],0x0     ; 00557764
        ;   Label: LAB_00557764
    JBE 0x0055778a                      ; 0055776c
        ;   XREF to: 0055778a (CONDITIONAL_JUMP)  ; LAB_0055778a
    MOV EAX,0x1                         ; 0055776e
    PUSH 0x5ea41d                       ; 00557773 | = "SOUND: Onboard RAM detected.  Samples..."
    MOV [0x0264ac0c],EAX                ; 00557778 | DAT_0264ac0c
    CALL wincore_winrun.cpp_FUN_0058ffc0 ; 0055777d
        ;   XREF to: 0058ffc0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_0058ffc0()
    ADD ESP,0x4                         ; 00557782
    JMP 0x005576ea                      ; 00557785
        ;   XREF to: 005576ea (UNCONDITIONAL_JUMP)  ; LAB_005576ea
    MOV EDX,0x1                         ; 0055778a
        ;   Label: LAB_0055778a
    PUSH 0x5ea3d1                       ; 0055778f | = "SOUND: No onboard RAM detected.  Forc..."
    MOV dword ptr [0x0264ac0c],EDX      ; 00557794 | DAT_0264ac0c
    CALL wincore_winrun.cpp_FUN_0058ffc0 ; 0055779a
        ;   XREF to: 0058ffc0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_0058ffc0()
    ADD ESP,0x4                         ; 0055779f
    JMP 0x005576ea                      ; 005577a2
        ;   XREF to: 005576ea (UNCONDITIONAL_JUMP)  ; LAB_005576ea

