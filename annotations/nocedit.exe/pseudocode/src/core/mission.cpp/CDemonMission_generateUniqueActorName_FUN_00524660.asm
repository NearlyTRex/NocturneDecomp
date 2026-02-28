; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_generateUniqueActorName_FUN_00524660(CDemonMission *this_ptr,char *out_buf,char *base_name)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   out_buf
; char *           Stack[0xc]:4   base_name
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_mission.cpp_CDemonMission_generateActorName_FUN_00524700 at 0052472d
;   core_msnedit.cpp_CDemonMission_FUN_0053bd80 at 0053bf11
;
; Referenced Globals:
;   TerminatedCString s_d_0063933e
;   TerminatedCString s_s_d_00639341
;
; Called Functions:
;   core_mission.cpp_CDemonMission_findActorByName_FUN_00524030
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_stdio.c_sscanf_FUN_0060013c
;   crt_string.c__strnicmp_FUN_005ff070
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00524660
        ;   Label: core_mission.cpp_CDemonMission_generateUniqueActorName_FUN_00524660
    PUSH ESI                            ; 00524661
    PUSH EDI                            ; 00524662
    PUSH EBP                            ; 00524663
    SUB ESP,0x4                         ; 00524664
    MOV EBP,dword ptr [ESP + 0x20]      ; 00524667
    MOV EBX,dword ptr [ESP + 0x18]      ; 0052466b
    MOV EDI,EBP                         ; 0052466f
    MOV ESI,0xffffffff                  ; 00524671
    SUB ECX,ECX                         ; 00524676
    DEC ECX                             ; 00524678
    XOR EAX,EAX                         ; 00524679
    SCASB.REPNE ES:EDI                  ; 0052467b
    NOT ECX                             ; 0052467d
    DEC ECX                             ; 0052467f
    MOV EBX,dword ptr [EBX + 0x548]     ; 00524680
    MOV EDI,ECX                         ; 00524686
    TEST EBX,EBX                        ; 00524688
    JZ 0x005246a5                       ; 0052468a
        ;   XREF to: 005246a5 (CONDITIONAL_JUMP)  ; LAB_005246a5
    PUSH EDI                            ; 0052468c
        ;   Label: LAB_0052468c
    PUSH EBP                            ; 0052468d
    PUSH EBX                            ; 0052468e
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 0052468f
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00524694
    TEST EAX,EAX                        ; 00524697
    JZ 0x005246d8                       ; 00524699
        ;   XREF to: 005246d8 (CONDITIONAL_JUMP)  ; LAB_005246d8
    MOV EBX,dword ptr [EBX + 0x14c]     ; 0052469b
        ;   Label: LAB_0052469b
    TEST EBX,EBX                        ; 005246a1
    JNZ 0x0052468c                      ; 005246a3
        ;   XREF to: 0052468c (CONDITIONAL_JUMP)  ; LAB_0052468c
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005246a5
        ;   Label: LAB_005246a5
    MOV EDI,dword ptr [ESP + 0x18]      ; 005246a9
    INC ESI                             ; 005246ad
        ;   Label: LAB_005246ad
    PUSH ESI                            ; 005246ae
    PUSH EBP                            ; 005246af
    PUSH 0x639341                       ; 005246b0 | = "%s%d"
    MOV ECX,dword ptr [ESP + 0x28]      ; 005246b5
    PUSH ECX                            ; 005246b9
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005246ba
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005246bf
    PUSH EBX                            ; 005246c2
    PUSH EDI                            ; 005246c3
    CALL core_mission.cpp_CDemonMission_findActorByName_FUN_00524030 ; 005246c4
        ;   XREF to: 00524030 (UNCONDITIONAL_CALL)  ; CDemonActor * core_mission.cpp_CDemonMission_findActorByName_FUN_00524030(CDemonMission * this_ptr, char * name)
    ADD ESP,0x8                         ; 005246c9
    TEST EAX,EAX                        ; 005246cc
    JNZ 0x005246ad                      ; 005246ce
        ;   XREF to: 005246ad (CONDITIONAL_JUMP)  ; LAB_005246ad
    ADD ESP,0x4                         ; 005246d0
    POP EBP                             ; 005246d3
    POP EDI                             ; 005246d4
    POP ESI                             ; 005246d5
    POP EBX                             ; 005246d6
    RET                                 ; 005246d7
    MOV EAX,ESP                         ; 005246d8
        ;   Label: LAB_005246d8
    PUSH EAX                            ; 005246da
    PUSH 0x63933e                       ; 005246db | = "%d"
    LEA EAX,[EBX + EDI*0x1]             ; 005246e0
    PUSH EAX                            ; 005246e3
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 005246e4
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0xc                         ; 005246e9
    CMP EAX,0x1                         ; 005246ec
    JNZ 0x0052469b                      ; 005246ef
        ;   XREF to: 0052469b (CONDITIONAL_JUMP)  ; LAB_0052469b
    MOV EDX,dword ptr [ESP]             ; 005246f1
    CMP ESI,EDX                         ; 005246f4
    JGE 0x0052469b                      ; 005246f6
        ;   XREF to: 0052469b (CONDITIONAL_JUMP)  ; LAB_0052469b
    MOV ESI,EDX                         ; 005246f8
    JMP 0x0052469b                      ; 005246fa
        ;   XREF to: 0052469b (UNCONDITIONAL_JUMP)  ; LAB_0052469b

