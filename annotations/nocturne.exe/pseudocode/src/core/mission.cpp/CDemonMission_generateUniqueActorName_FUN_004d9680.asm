; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_generateUniqueActorName_FUN_004d9680(CDemonMission *this_ptr,char *out_buf,char *base_name)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   out_buf
; char *           Stack[0xc]:4   base_name
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720 at 004d974d
;
; Referenced Globals:
;   TerminatedCString s_d_00589e5f
;   TerminatedCString s_s_d_00589e62
;
; Called Functions:
;   core_mission.cpp_CDemonMission_findActorByName_FUN_004d90a0
;   crt_stdio.c_sprintf_FUN_00563c90
;   crt_stdio.c_sscanf_FUN_00566b5c
;   crt_string.c__strnicmp_FUN_00564bc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d9680
        ;   Label: core_mission.cpp_CDemonMission_generateUniqueActorName_FUN_004d9680
    PUSH ESI                            ; 004d9681
    PUSH EDI                            ; 004d9682
    PUSH EBP                            ; 004d9683
    SUB ESP,0x4                         ; 004d9684
    MOV EBP,dword ptr [ESP + 0x20]      ; 004d9687
    MOV EBX,dword ptr [ESP + 0x18]      ; 004d968b
    MOV EDI,EBP                         ; 004d968f
    MOV ESI,0xffffffff                  ; 004d9691
    SUB ECX,ECX                         ; 004d9696
    DEC ECX                             ; 004d9698
    XOR EAX,EAX                         ; 004d9699
    SCASB.REPNE ES:EDI                  ; 004d969b
    NOT ECX                             ; 004d969d
    DEC ECX                             ; 004d969f
    MOV EBX,dword ptr [EBX + 0x514]     ; 004d96a0
    MOV EDI,ECX                         ; 004d96a6
    TEST EBX,EBX                        ; 004d96a8
    JZ 0x004d96c5                       ; 004d96aa
        ;   XREF to: 004d96c5 (CONDITIONAL_JUMP)  ; LAB_004d96c5
    PUSH EDI                            ; 004d96ac
        ;   Label: LAB_004d96ac
    PUSH EBP                            ; 004d96ad
    PUSH EBX                            ; 004d96ae
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004d96af
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004d96b4
    TEST EAX,EAX                        ; 004d96b7
    JZ 0x004d96f8                       ; 004d96b9
        ;   XREF to: 004d96f8 (CONDITIONAL_JUMP)  ; LAB_004d96f8
    MOV EBX,dword ptr [EBX + 0x144]     ; 004d96bb
        ;   Label: LAB_004d96bb
    TEST EBX,EBX                        ; 004d96c1
    JNZ 0x004d96ac                      ; 004d96c3
        ;   XREF to: 004d96ac (CONDITIONAL_JUMP)  ; LAB_004d96ac
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004d96c5
        ;   Label: LAB_004d96c5
    MOV EDI,dword ptr [ESP + 0x18]      ; 004d96c9
    INC ESI                             ; 004d96cd
        ;   Label: LAB_004d96cd
    PUSH ESI                            ; 004d96ce
    PUSH EBP                            ; 004d96cf
    PUSH 0x589e62                       ; 004d96d0 | = "%s%d"
    MOV ECX,dword ptr [ESP + 0x28]      ; 004d96d5
    PUSH ECX                            ; 004d96d9
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004d96da
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 004d96df
    PUSH EBX                            ; 004d96e2
    PUSH EDI                            ; 004d96e3
    CALL core_mission.cpp_CDemonMission_findActorByName_FUN_004d90a0 ; 004d96e4
        ;   XREF to: 004d90a0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_mission.cpp_CDemonMission_findActorByName_FUN_004d90a0(CDemonMission * this_ptr, char * name)
    ADD ESP,0x8                         ; 004d96e9
    TEST EAX,EAX                        ; 004d96ec
    JNZ 0x004d96cd                      ; 004d96ee
        ;   XREF to: 004d96cd (CONDITIONAL_JUMP)  ; LAB_004d96cd
    ADD ESP,0x4                         ; 004d96f0
    POP EBP                             ; 004d96f3
    POP EDI                             ; 004d96f4
    POP ESI                             ; 004d96f5
    POP EBX                             ; 004d96f6
    RET                                 ; 004d96f7
    MOV EAX,ESP                         ; 004d96f8
        ;   Label: LAB_004d96f8
    PUSH EAX                            ; 004d96fa
    PUSH 0x589e5f                       ; 004d96fb | = "%d"
    LEA EAX,[EBX + EDI*0x1]             ; 004d9700
    PUSH EAX                            ; 004d9703
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 004d9704
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sscanf_FUN_00566b5c()
    ADD ESP,0xc                         ; 004d9709
    CMP EAX,0x1                         ; 004d970c
    JNZ 0x004d96bb                      ; 004d970f
        ;   XREF to: 004d96bb (CONDITIONAL_JUMP)  ; LAB_004d96bb
    MOV EDX,dword ptr [ESP]             ; 004d9711
    CMP ESI,EDX                         ; 004d9714
    JGE 0x004d96bb                      ; 004d9716
        ;   XREF to: 004d96bb (CONDITIONAL_JUMP)  ; LAB_004d96bb
    MOV ESI,EDX                         ; 004d9718
    JMP 0x004d96bb                      ; 004d971a
        ;   XREF to: 004d96bb (UNCONDITIONAL_JUMP)  ; LAB_004d96bb

