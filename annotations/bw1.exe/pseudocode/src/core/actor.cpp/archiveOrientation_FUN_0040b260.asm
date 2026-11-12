; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveOrientation_FUN_0040b260(COrientation *orient_ptr,char *property_name)
;
; Parameters:
; COrientation *   Stack[0x4]:4   orient_ptr
; char *           Stack[0x8]:4   property_name
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[6]:
;   core_actor.cpp_CDemonActor_archive_FUN_0040c040 at 0040c062
;   core_boxactor.cpp_CBoxActor_archive_FUN_00422760 at 00422a3c
;   core_boxactor.cpp_CLightActor_archive_FUN_004231e0 at 00423236
;   core_charactr.cpp_CCharacter_archive_FUN_0042c7f0 at 0042ca74
;   core_manpuz.cpp_CMansionPuzzleCircle_archive_FUN_00506110 at 005061d2
;   core_turret.cpp_CTurret_archive_FUN_005a2bf0 at 005a2c0a
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_005d2a40
;   TerminatedCString s_s_g_g_g_005d2a49
;   TerminatedCString s_Euler_PBH_orientation_00610650
;   undefined1 DAT_006106c0
;   undefined4 DAT_007c3034
;   undefined4 DAT_007c3038
;
; Called Functions:
;   core_actor.cpp_archiveDescription_FUN_0040b110
;   core_actor.cpp_handleActorPropertyParseError_FUN_0040b090
;   crt_stdio.c_fscanf_FUN_005c04b0
;   crt_unknown.c_FUN_005c03c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040b260
        ;   Label: core_actor.cpp_archiveOrientation_FUN_0040b260
    PUSH EDI                            ; 0040b261
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040b262
    CMP dword ptr [0x007c3038],0x1      ; 0040b266 | DAT_007c3038
    JNZ 0x0040b2bc                      ; 0040b26d
        ;   XREF to: 0040b2bc (CONDITIONAL_JUMP)  ; LAB_0040b2bc
    LEA EDX,[EAX + 0x4]                 ; 0040b26f
    PUSH EDX                            ; 0040b272
    LEA EDX,[EAX + 0x8]                 ; 0040b273
    PUSH EDX                            ; 0040b276
    PUSH EAX                            ; 0040b277
    PUSH 0x5d2a40                       ; 0040b278 | = "%f,%f,%f"
    MOV EBX,dword ptr [0x007c3034]      ; 0040b27d | DAT_007c3034
    PUSH EBX                            ; 0040b283
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0040b284
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 0040b289
    CMP EAX,0x3                         ; 0040b28c
    JNZ 0x0040b2a6                      ; 0040b28f
        ;   XREF to: 0040b2a6 (CONDITIONAL_JUMP)  ; LAB_0040b2a6
    MOV EDI,dword ptr [ESP + 0x10]      ; 0040b291
        ;   Label: LAB_0040b291
    PUSH EDI                            ; 0040b295
    PUSH 0x610650                       ; 0040b296 | = "Euler PBH orientation"
    CALL core_actor.cpp_archiveDescription_FUN_0040b110 ; 0040b29b
        ;   XREF to: 0040b110 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDescription_FUN_0040b110(char * property_description, char * property_name)
    ADD ESP,0x8                         ; 0040b2a0
    POP EDI                             ; 0040b2a3
    POP EBX                             ; 0040b2a4
    RET                                 ; 0040b2a5
    PUSH ESI                            ; 0040b2a6
        ;   Label: LAB_0040b2a6
    MOV ESI,dword ptr [ESP + 0x14]      ; 0040b2a7
    PUSH ESI                            ; 0040b2ab
    PUSH 0x610650                       ; 0040b2ac | = "Euler PBH orientation"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b090 ; 0040b2b1
        ;   XREF to: 0040b090 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b090(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040b2b6
    POP ESI                             ; 0040b2b9
    JMP 0x0040b291                      ; 0040b2ba
        ;   XREF to: 0040b291 (UNCONDITIONAL_JUMP)  ; LAB_0040b291
    SUB ESP,0x8                         ; 0040b2bc
        ;   Label: LAB_0040b2bc
    FLD float ptr [EAX + 0x4]           ; 0040b2bf
    FSTP double ptr [ESP]               ; 0040b2c2
    SUB ESP,0x8                         ; 0040b2c5
    FLD float ptr [EAX + 0x8]           ; 0040b2c8
    FSTP double ptr [ESP]               ; 0040b2cb
    SUB ESP,0x8                         ; 0040b2ce
    FLD float ptr [EAX]                 ; 0040b2d1
    FSTP double ptr [ESP]               ; 0040b2d3
    PUSH 0x6106c0                       ; 0040b2d6 | DAT_006106c0
    PUSH 0x5d2a49                       ; 0040b2db | = "%s%g,%g,%g"
    MOV ECX,dword ptr [0x007c3034]      ; 0040b2e0 | DAT_007c3034
    PUSH ECX                            ; 0040b2e6
    CALL crt_unknown.c_FUN_005c03c0     ; 0040b2e7
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x24                        ; 0040b2ec
    JMP 0x0040b291                      ; 0040b2ef
        ;   XREF to: 0040b291 (UNCONDITIONAL_JUMP)  ; LAB_0040b291

