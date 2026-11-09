; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveQuaternion_FUN_0040b690(float *param_1,char *param_2)
;
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[3]:
;   core_boneguy.cpp_FUN_00419c50 at 00419dc7
;   core_platfrm.cpp_CPlatform_archive_FUN_005193f0 at 005196cf
;   unkafter_conveyor.cpp_FUN_00437b80 at 00437d6b
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_f_005cab0b
;   TerminatedCString s_s_g_g_g_g_005cab17
;   TerminatedCString s_Quaternion_00609548
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

    PUSH EBX                            ; 0040b690
        ;   Label: core_actor.cpp_archiveQuaternion_FUN_0040b690
    PUSH EDI                            ; 0040b691
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040b692
    CMP dword ptr [0x007bc038],0x1      ; 0040b696 | DAT_007bc038
    JNZ 0x0040b6f0                      ; 0040b69d
        ;   XREF to: 0040b6f0 (CONDITIONAL_JUMP)  ; LAB_0040b6f0
    LEA EDX,[EAX + 0xc]                 ; 0040b69f
    PUSH EDX                            ; 0040b6a2
    LEA EDX,[EAX + 0x8]                 ; 0040b6a3
    PUSH EDX                            ; 0040b6a6
    LEA EDX,[EAX + 0x4]                 ; 0040b6a7
    PUSH EDX                            ; 0040b6aa
    PUSH EAX                            ; 0040b6ab
    PUSH 0x5cab0b                       ; 0040b6ac | = "%f,%f,%f,%f"
    MOV EBX,dword ptr [0x007bc034]      ; 0040b6b1 | DAT_007bc034
    PUSH EBX                            ; 0040b6b7
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0040b6b8
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    ADD ESP,0x18                        ; 0040b6bd
    CMP EAX,0x4                         ; 0040b6c0
    JNZ 0x0040b6da                      ; 0040b6c3
        ;   XREF to: 0040b6da (CONDITIONAL_JUMP)  ; LAB_0040b6da
    MOV EDI,dword ptr [ESP + 0x10]      ; 0040b6c5
        ;   Label: LAB_0040b6c5
    PUSH EDI                            ; 0040b6c9
    PUSH 0x609548                       ; 0040b6ca | = "Quaternion"
    CALL core_actor.cpp_archiveDescription_FUN_0040b400 ; 0040b6cf
        ;   XREF to: 0040b400 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDescription_FUN_0040b400(char * property_description, char * property_name)
    ADD ESP,0x8                         ; 0040b6d4
    POP EDI                             ; 0040b6d7
    POP EBX                             ; 0040b6d8
    RET                                 ; 0040b6d9
    PUSH ESI                            ; 0040b6da
        ;   Label: LAB_0040b6da
    MOV ESI,dword ptr [ESP + 0x14]      ; 0040b6db
    PUSH ESI                            ; 0040b6df
    PUSH 0x609548                       ; 0040b6e0 | = "Quaternion"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b380 ; 0040b6e5
        ;   XREF to: 0040b380 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b380(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040b6ea
    POP ESI                             ; 0040b6ed
    JMP 0x0040b6c5                      ; 0040b6ee
        ;   XREF to: 0040b6c5 (UNCONDITIONAL_JUMP)  ; LAB_0040b6c5
    SUB ESP,0x8                         ; 0040b6f0
        ;   Label: LAB_0040b6f0
    FLD float ptr [EAX + 0xc]           ; 0040b6f3
    FSTP double ptr [ESP]               ; 0040b6f6
    SUB ESP,0x8                         ; 0040b6f9
    FLD float ptr [EAX + 0x8]           ; 0040b6fc
    FSTP double ptr [ESP]               ; 0040b6ff
    SUB ESP,0x8                         ; 0040b702
    FLD float ptr [EAX + 0x4]           ; 0040b705
    FSTP double ptr [ESP]               ; 0040b708
    SUB ESP,0x8                         ; 0040b70b
    FLD float ptr [EAX]                 ; 0040b70e
    FSTP double ptr [ESP]               ; 0040b710
    PUSH 0x609590                       ; 0040b713 | DAT_00609590
    PUSH 0x5cab17                       ; 0040b718 | = "%s%g,%g,%g,%g"
    MOV ECX,dword ptr [0x007bc034]      ; 0040b71d | DAT_007bc034
    PUSH ECX                            ; 0040b723
    CALL crt_unknown.c_FUN_005b8010     ; 0040b724
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x2c                        ; 0040b729
    JMP 0x0040b6c5                      ; 0040b72c
        ;   XREF to: 0040b6c5 (UNCONDITIONAL_JUMP)  ; LAB_0040b6c5

