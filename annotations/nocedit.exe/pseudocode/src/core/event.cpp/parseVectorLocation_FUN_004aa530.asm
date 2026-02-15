; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_parseVectorLocation_FUN_004aa530(char *buffer,int *offset,CVector3f *out_position)
;
; Parameters:
; char *           Stack[0x4]:4   buffer
; int *            Stack[0x8]:4   offset
; CVector3f *      Stack[0xc]:4   out_position
; Local Variables:
; undefined1       Stack[-0x78]:1  local_78
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_004ae140 at 004af2a7
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_n_006244f4
;   TerminatedCString s_n_00624506
;   TerminatedCString s_Error_parsing_vector_loc_00624514
;   CDemonActor* g_ActorNameSentinel = 0fffffff
;   CDemonActorType g_CDemonActorClassInfo
;   undefined4 g_CDemonActorClassInfo.name_hash
;   char[256] g_EventErrorMessageBuffer
;
; Called Functions:
;   core_event.cpp_resolveActorByName_FUN_004aa400
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_stdio.c_sscanf_FUN_0060013c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aa530
        ;   Label: core_event.cpp_parseVectorLocation_FUN_004aa530
    PUSH ESI                            ; 004aa531
    PUSH EDI                            ; 004aa532
    PUSH EBP                            ; 004aa533
    SUB ESP,0x68                        ; 004aa534
    MOV ESI,dword ptr [ESP + 0x80]      ; 004aa537
    MOV EBX,dword ptr [ESP + 0x84]      ; 004aa53e
    LEA EAX,[ESP + 0x64]                ; 004aa545
    PUSH EAX                            ; 004aa549
    LEA EAX,[EBX + 0x8]                 ; 004aa54a
    PUSH EAX                            ; 004aa54d
    LEA EAX,[EBX + 0x4]                 ; 004aa54e
    MOV EDX,0xffffffff                  ; 004aa551
    PUSH EAX                            ; 004aa556
    MOV dword ptr [ESP + 0x70],EDX      ; 004aa557
    PUSH EBX                            ; 004aa55b
    MOV ECX,dword ptr [ESI]             ; 004aa55c
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004aa55e
    PUSH 0x6244f4                       ; 004aa565 | = " { %f, %f, %f }%n"
    ADD EAX,ECX                         ; 004aa56a
    PUSH EAX                            ; 004aa56c
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004aa56d
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x18                        ; 004aa572
    MOV EDI,dword ptr [ESP + 0x64]      ; 004aa575
    CMP EDI,0x7                         ; 004aa579
    JL 0x004aa593                       ; 004aa57c
        ;   XREF to: 004aa593 (CONDITIONAL_JUMP)  ; LAB_004aa593
    MOV EAX,EDI                         ; 004aa57e
    MOV EDI,dword ptr [ESI]             ; 004aa580
    ADD EDI,EAX                         ; 004aa582
    MOV EAX,0x1                         ; 004aa584
    MOV dword ptr [ESI],EDI             ; 004aa589
    ADD ESP,0x68                        ; 004aa58b
    POP EBP                             ; 004aa58e
    POP EDI                             ; 004aa58f
    POP ESI                             ; 004aa590
    POP EBX                             ; 004aa591
    RET                                 ; 004aa592
    LEA EAX,[ESP + 0x64]                ; 004aa593
        ;   Label: LAB_004aa593
    PUSH EAX                            ; 004aa597
    LEA EAX,[ESP + 0x4]                 ; 004aa598
    PUSH EAX                            ; 004aa59c
    MOV EBP,dword ptr [ESI]             ; 004aa59d
    MOV EAX,dword ptr [ESP + 0x84]      ; 004aa59f
    PUSH 0x624506                       ; 004aa5a6 | = " %[^ ,(){}]%n"
    ADD EAX,EBP                         ; 004aa5ab
    PUSH EAX                            ; 004aa5ad
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004aa5ae
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x10                        ; 004aa5b3
    CMP dword ptr [ESP + 0x64],0x0      ; 004aa5b6
    JL 0x004aa60e                       ; 004aa5bb
        ;   XREF to: 004aa60e (CONDITIONAL_JUMP)  ; LAB_004aa60e
    PUSH 0x821ff8                       ; 004aa5bd | g_CDemonActorClassInfo
    MOV EDX,dword ptr [0x00822030]      ; 004aa5c2 | g_CDemonActorClassInfo.name_hash
    PUSH EDX                            ; 004aa5c8
    LEA EAX,[ESP + 0x8]                 ; 004aa5c9
    PUSH EAX                            ; 004aa5cd
    CALL core_event.cpp_resolveActorByName_FUN_004aa400 ; 004aa5ce
        ;   XREF to: 004aa400 (UNCONDITIONAL_CALL)  ; CDemonActor * core_event.cpp_resolveActorByName_FUN_004aa400(char * name, uint class_hash, char * class_name)
    MOV EDX,EAX                         ; 004aa5d3
    ADD ESP,0xc                         ; 004aa5d5
    TEST EAX,EAX                        ; 004aa5d8
    JZ 0x004aa62d                       ; 004aa5da
        ;   XREF to: 004aa62d (CONDITIONAL_JUMP)  ; LAB_004aa62d
    MOV EAX,dword ptr [ESP + 0x64]      ; 004aa5dc
    ADD dword ptr [ESI],EAX             ; 004aa5e0
    CMP EDX,dword ptr [0x0065d95c]      ; 004aa5e2 | g_ActorNameSentinel
    JZ 0x004aa63a                       ; 004aa5e8
        ;   XREF to: 004aa63a (CONDITIONAL_JUMP)  ; LAB_004aa63a
    ADD EDX,0x20                        ; 004aa5ea
    CMP EBX,EDX                         ; 004aa5ed
    JZ 0x004aa601                       ; 004aa5ef
        ;   XREF to: 004aa601 (CONDITIONAL_JUMP)  ; LAB_004aa601
    MOV EAX,dword ptr [EDX]             ; 004aa5f1
    MOV dword ptr [EBX],EAX             ; 004aa5f3
    MOV EAX,dword ptr [EDX + 0x4]       ; 004aa5f5
    MOV dword ptr [EBX + 0x4],EAX       ; 004aa5f8
    MOV EAX,dword ptr [EDX + 0x8]       ; 004aa5fb
    MOV dword ptr [EBX + 0x8],EAX       ; 004aa5fe
    MOV EAX,0x1                         ; 004aa601
        ;   Label: LAB_004aa601
    ADD ESP,0x68                        ; 004aa606
    POP EBP                             ; 004aa609
    POP EDI                             ; 004aa60a
    POP ESI                             ; 004aa60b
    POP EBX                             ; 004aa60c
    RET                                 ; 004aa60d
    PUSH 0x624514                       ; 004aa60e | = "Error parsing vector location"
        ;   Label: LAB_004aa60e
    PUSH 0x2d0a460                      ; 004aa613 | g_EventErrorMessageBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004aa618
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,0xffffffff                  ; 004aa61d
    ADD ESP,0x8                         ; 004aa622
    ADD ESP,0x68                        ; 004aa625
    POP EBP                             ; 004aa628
    POP EDI                             ; 004aa629
    POP ESI                             ; 004aa62a
    POP EBX                             ; 004aa62b
    RET                                 ; 004aa62c
    MOV EAX,0xffffffff                  ; 004aa62d
        ;   Label: LAB_004aa62d
    ADD ESP,0x68                        ; 004aa632
    POP EBP                             ; 004aa635
    POP EDI                             ; 004aa636
    POP ESI                             ; 004aa637
    POP EBX                             ; 004aa638
    RET                                 ; 004aa639
    XOR EAX,EAX                         ; 004aa63a
        ;   Label: LAB_004aa63a
    ADD ESP,0x68                        ; 004aa63c
    POP EBP                             ; 004aa63f
    POP EDI                             ; 004aa640
    POP ESI                             ; 004aa641
    POP EBX                             ; 004aa642
    RET                                 ; 004aa643

