; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveLocation_FUN_0040b5f0(float *param_1,char *param_2)
;
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[1]:
;   core_actor.cpp_CDemonActor_archive_FUN_0040c330 at 0040c341
;
; Referenced Globals:
;   TerminatedCString s_d_f_f_f_005caaf1
;   TerminatedCString s_s_d_g_g_g_005caafd
;   TerminatedCString s_s_4D_location_00609538
;   undefined1 DAT_00609590
;   undefined4 DAT_007bc034
;   undefined4 DAT_007bc038
;
; Called Functions:
;   core_actor.cpp_archiveDescription_FUN_0040b400
;   core_actor.cpp_handleActorPropertyParseError_FUN_0040b380
;   crt_stdio.c_fscanf_FUN_005b8100
;   crt_unknown.c_FUN_005b8010
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0040b5f0
        ;   Label: core_actor.cpp_archiveLocation_FUN_0040b5f0
    PUSH EDI                            ; 0040b5f1
    PUSH EBP                            ; 0040b5f2
    MOV EAX,dword ptr [ESP + 0x10]      ; 0040b5f3
    CMP dword ptr [0x007bc038],0x1      ; 0040b5f7 | DAT_007bc038
    JNZ 0x0040b650                      ; 0040b5fe
        ;   XREF to: 0040b650 (CONDITIONAL_JUMP)  ; LAB_0040b650
    LEA EDX,[EAX + 0x8]                 ; 0040b600
    PUSH EDX                            ; 0040b603
    LEA EDX,[EAX + 0x4]                 ; 0040b604
    PUSH EDX                            ; 0040b607
    PUSH EAX                            ; 0040b608
    ADD EAX,0xc                         ; 0040b609
    PUSH EAX                            ; 0040b60c
    PUSH 0x5caaf1                       ; 0040b60d | = "%d,%f,%f,%f"
    MOV ESI,dword ptr [0x007bc034]      ; 0040b612 | DAT_007bc034
    PUSH ESI                            ; 0040b618
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0040b619
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    ADD ESP,0x18                        ; 0040b61e
    CMP EAX,0x4                         ; 0040b621
    JNZ 0x0040b63c                      ; 0040b624
        ;   XREF to: 0040b63c (CONDITIONAL_JUMP)  ; LAB_0040b63c
    MOV EBP,dword ptr [ESP + 0x14]      ; 0040b626
        ;   Label: LAB_0040b626
    PUSH EBP                            ; 0040b62a
    PUSH 0x609538                       ; 0040b62b | = "4D location"
    CALL core_actor.cpp_archiveDescription_FUN_0040b400 ; 0040b630
        ;   XREF to: 0040b400 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDescription_FUN_0040b400(char * property_description, char * property_name)
    ADD ESP,0x8                         ; 0040b635
    POP EBP                             ; 0040b638
    POP EDI                             ; 0040b639
    POP ESI                             ; 0040b63a
    RET                                 ; 0040b63b
    MOV EDI,dword ptr [ESP + 0x14]      ; 0040b63c
        ;   Label: LAB_0040b63c
    PUSH EDI                            ; 0040b640
    PUSH 0x609538                       ; 0040b641 | = "4D location"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b380 ; 0040b646
        ;   XREF to: 0040b380 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b380(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040b64b
    JMP 0x0040b626                      ; 0040b64e
        ;   XREF to: 0040b626 (UNCONDITIONAL_JUMP)  ; LAB_0040b626
    PUSH EBX                            ; 0040b650
        ;   Label: LAB_0040b650
    SUB ESP,0x8                         ; 0040b651
    FLD float ptr [EAX + 0x8]           ; 0040b654
    FSTP double ptr [ESP]               ; 0040b657
    SUB ESP,0x8                         ; 0040b65a
    FLD float ptr [EAX + 0x4]           ; 0040b65d
    FSTP double ptr [ESP]               ; 0040b660
    SUB ESP,0x8                         ; 0040b663
    FLD float ptr [EAX]                 ; 0040b666
    FSTP double ptr [ESP]               ; 0040b668
    MOV ECX,dword ptr [EAX + 0xc]       ; 0040b66b
    PUSH ECX                            ; 0040b66e
    PUSH 0x609590                       ; 0040b66f | DAT_00609590
    PUSH 0x5caafd                       ; 0040b674 | = "%s%d,%g,%g,%g"
    MOV EBX,dword ptr [0x007bc034]      ; 0040b679 | DAT_007bc034
    PUSH EBX                            ; 0040b67f
    CALL crt_unknown.c_FUN_005b8010     ; 0040b680
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x28                        ; 0040b685
    POP EBX                             ; 0040b688
    JMP 0x0040b626                      ; 0040b689
        ;   XREF to: 0040b626 (UNCONDITIONAL_JUMP)  ; LAB_0040b626

