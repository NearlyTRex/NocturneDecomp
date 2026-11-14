; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveVector_FUN_0040b1c0(CVector3f *vector_ptr,char *property_name)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   vector_ptr
; char *           Stack[0x8]:4   property_name
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[26]:
;   core_barrier.cpp_CBarrier_archive_FUN_00410940 at 0041095a
;   core_batman.cpp_CBatman_archive_FUN_00413b60 at 00413c10
;   core_boneguy.cpp_CBoneGuy_archive_FUN_0041d0d0 at 0041d22b
;   core_boxactor.cpp_CBoxActor_archive_FUN_00422760 at 004227c0
;   core_boxactor.cpp_CLightActor_archive_FUN_004231e0 at 0042321c
;   core_charactr.cpp_CCharacter_archive_FUN_0042c7f0 at 0042ca62
;   core_construc.cpp_CConstruct_archive_FUN_00446e30 at 00446ef4
;   core_conveyor.cpp_CConveyor_archive_FUN_00447a40 at 00447a5a
;   core_curtain.cpp_CCurtain_archive_FUN_0044c2e0 at 0044c2fd
;   core_door.cpp_CDoor_archive_FUN_00478490 at 00478573
;   ... and 16 more
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_005d2a2c
;   TerminatedCString s_s_g_g_g_005d2a35
;   TerminatedCString s_s_3D_vector_00610640
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

    PUSH EBX                            ; 0040b1c0
        ;   Label: core_actor.cpp_archiveVector_FUN_0040b1c0
    PUSH EDI                            ; 0040b1c1
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040b1c2
    CMP dword ptr [0x007c3038],0x1      ; 0040b1c6 | DAT_007c3038
    JNZ 0x0040b21c                      ; 0040b1cd
        ;   XREF to: 0040b21c (CONDITIONAL_JUMP)  ; LAB_0040b21c
    LEA EDX,[EAX + 0x8]                 ; 0040b1cf
    PUSH EDX                            ; 0040b1d2
    LEA EDX,[EAX + 0x4]                 ; 0040b1d3
    PUSH EDX                            ; 0040b1d6
    PUSH EAX                            ; 0040b1d7
    PUSH 0x5d2a2c                       ; 0040b1d8 | = "%f,%f,%f"
    MOV EBX,dword ptr [0x007c3034]      ; 0040b1dd | DAT_007c3034
    PUSH EBX                            ; 0040b1e3
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0040b1e4
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 0040b1e9
    CMP EAX,0x3                         ; 0040b1ec
    JNZ 0x0040b206                      ; 0040b1ef
        ;   XREF to: 0040b206 (CONDITIONAL_JUMP)  ; LAB_0040b206
    MOV EDI,dword ptr [ESP + 0x10]      ; 0040b1f1
        ;   Label: LAB_0040b1f1
    PUSH EDI                            ; 0040b1f5
    PUSH 0x610640                       ; 0040b1f6 | = "3D vector"
    CALL core_actor.cpp_archiveDescription_FUN_0040b110 ; 0040b1fb
        ;   XREF to: 0040b110 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDescription_FUN_0040b110(char * property_description, char * property_name)
    ADD ESP,0x8                         ; 0040b200
    POP EDI                             ; 0040b203
    POP EBX                             ; 0040b204
    RET                                 ; 0040b205
    PUSH ESI                            ; 0040b206
        ;   Label: LAB_0040b206
    MOV ESI,dword ptr [ESP + 0x14]      ; 0040b207
    PUSH ESI                            ; 0040b20b
    PUSH 0x610640                       ; 0040b20c | = "3D vector"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b090 ; 0040b211
        ;   XREF to: 0040b090 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b090(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040b216
    POP ESI                             ; 0040b219
    JMP 0x0040b1f1                      ; 0040b21a
        ;   XREF to: 0040b1f1 (UNCONDITIONAL_JUMP)  ; LAB_0040b1f1
    SUB ESP,0x8                         ; 0040b21c
        ;   Label: LAB_0040b21c
    FLD float ptr [EAX + 0x8]           ; 0040b21f
    FSTP double ptr [ESP]               ; 0040b222
    SUB ESP,0x8                         ; 0040b225
    FLD float ptr [EAX + 0x4]           ; 0040b228
    FSTP double ptr [ESP]               ; 0040b22b
    SUB ESP,0x8                         ; 0040b22e
    FLD float ptr [EAX]                 ; 0040b231
    FSTP double ptr [ESP]               ; 0040b233
    PUSH 0x6106c0                       ; 0040b236 | DAT_006106c0
    PUSH 0x5d2a35                       ; 0040b23b | = "%s%g,%g,%g"
    MOV ECX,dword ptr [0x007c3034]      ; 0040b240 | DAT_007c3034
    PUSH ECX                            ; 0040b246
    CALL crt_unknown.c_FUN_005c03c0     ; 0040b247
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x24                        ; 0040b24c
    JMP 0x0040b1f1                      ; 0040b24f
        ;   XREF to: 0040b1f1 (UNCONDITIONAL_JUMP)  ; LAB_0040b1f1

