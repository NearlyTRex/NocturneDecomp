; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveOrientation_FUN_0040b550(float *param_1,char *param_2)
;
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[5]:
;   core_actor.cpp_CDemonActor_archive_FUN_0040c330 at 0040c352
;   core_boxactor.cpp_CBoxActor_archive_FUN_0041c7f0 at 0041cacc
;   core_boxactor.cpp_CLightActor_archive_FUN_0041d270 at 0041d2c6
;   core_manpuz.cpp_CMansionPuzzleCircle_archive_FUN_004e7470 at 004e7532
;   core_turret.cpp_CTurret_archive_FUN_0057efa0 at 0057efba
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_005caadd
;   TerminatedCString s_s_g_g_g_005caae6
;   TerminatedCString s_Euler_PBH_orientation_00609520
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

    PUSH EBX                            ; 0040b550
        ;   Label: core_actor.cpp_archiveOrientation_FUN_0040b550
    PUSH EDI                            ; 0040b551
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040b552
    CMP dword ptr [0x007bc038],0x1      ; 0040b556 | DAT_007bc038
    JNZ 0x0040b5ac                      ; 0040b55d
        ;   XREF to: 0040b5ac (CONDITIONAL_JUMP)  ; LAB_0040b5ac
    LEA EDX,[EAX + 0x4]                 ; 0040b55f
    PUSH EDX                            ; 0040b562
    LEA EDX,[EAX + 0x8]                 ; 0040b563
    PUSH EDX                            ; 0040b566
    PUSH EAX                            ; 0040b567
    PUSH 0x5caadd                       ; 0040b568 | = "%f,%f,%f"
    MOV EBX,dword ptr [0x007bc034]      ; 0040b56d | DAT_007bc034
    PUSH EBX                            ; 0040b573
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0040b574
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    ADD ESP,0x14                        ; 0040b579
    CMP EAX,0x3                         ; 0040b57c
    JNZ 0x0040b596                      ; 0040b57f
        ;   XREF to: 0040b596 (CONDITIONAL_JUMP)  ; LAB_0040b596
    MOV EDI,dword ptr [ESP + 0x10]      ; 0040b581
        ;   Label: LAB_0040b581
    PUSH EDI                            ; 0040b585
    PUSH 0x609520                       ; 0040b586 | = "Euler PBH orientation"
    CALL core_actor.cpp_archiveDescription_FUN_0040b400 ; 0040b58b
        ;   XREF to: 0040b400 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDescription_FUN_0040b400(char * property_description, char * property_name)
    ADD ESP,0x8                         ; 0040b590
    POP EDI                             ; 0040b593
    POP EBX                             ; 0040b594
    RET                                 ; 0040b595
    PUSH ESI                            ; 0040b596
        ;   Label: LAB_0040b596
    MOV ESI,dword ptr [ESP + 0x14]      ; 0040b597
    PUSH ESI                            ; 0040b59b
    PUSH 0x609520                       ; 0040b59c | = "Euler PBH orientation"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b380 ; 0040b5a1
        ;   XREF to: 0040b380 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b380(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040b5a6
    POP ESI                             ; 0040b5a9
    JMP 0x0040b581                      ; 0040b5aa
        ;   XREF to: 0040b581 (UNCONDITIONAL_JUMP)  ; LAB_0040b581
    SUB ESP,0x8                         ; 0040b5ac
        ;   Label: LAB_0040b5ac
    FLD float ptr [EAX + 0x4]           ; 0040b5af
    FSTP double ptr [ESP]               ; 0040b5b2
    SUB ESP,0x8                         ; 0040b5b5
    FLD float ptr [EAX + 0x8]           ; 0040b5b8
    FSTP double ptr [ESP]               ; 0040b5bb
    SUB ESP,0x8                         ; 0040b5be
    FLD float ptr [EAX]                 ; 0040b5c1
    FSTP double ptr [ESP]               ; 0040b5c3
    PUSH 0x609590                       ; 0040b5c6 | DAT_00609590
    PUSH 0x5caae6                       ; 0040b5cb | = "%s%g,%g,%g"
    MOV ECX,dword ptr [0x007bc034]      ; 0040b5d0 | DAT_007bc034
    PUSH ECX                            ; 0040b5d6
    CALL crt_unknown.c_FUN_005b8010     ; 0040b5d7
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x24                        ; 0040b5dc
    JMP 0x0040b581                      ; 0040b5df
        ;   XREF to: 0040b581 (UNCONDITIONAL_JUMP)  ; LAB_0040b581

