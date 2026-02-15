; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveDeformableModelInstance_FUN_0040b970(CDeformableModelInstance *model_ptr,char *property_name)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   model_ptr
; char *           Stack[0x8]:4   property_name
; Local Variables:
; undefined1       Stack[-0xd0]:1  local_d0
; undefined1       Stack[-0xcf]:1  local_cf
;
; XREF[27]:
;   core_armour.cpp_CArmour_archive_FUN_004123a0 at 004123cf
;   core_batcreat.cpp_CBatCreature_archive_FUN_00415d70 at 00415d9f
;   core_batman.cpp_CBatman_archive_FUN_00417580 at 004175af
;   core_beast.cpp_CBeast_archive_FUN_00418330 at 0041835f
;   core_biggs.cpp_CBiggs_archive_FUN_00418ac0 at 00418aef
;   core_boneguy.cpp_CBoneGuy_archive_FUN_0041d270 at 0041d2aa
;   core_bride.cpp_CBride_archive_FUN_00424560 at 00424585
;   core_cow.cpp_CZombieCow_archive_FUN_00444840 at 0044486e
;   core_dog.cpp_CZombieDog_archive_FUN_0047f7b0 at 0047f7de
;   core_dracbrid.cpp_CDraculaBride_archive_FUN_00485dd0 at 00485dff
;   ... and 17 more
;
; Referenced Globals:
;   int g_ActorReadingMode
;
; Called Functions:
;   core_actor.cpp_archiveString_FUN_0040b5c0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0040b970
        ;   Label: core_actor.cpp_archiveDeformableModelInstance_FUN_0040b970
    PUSH EDI                            ; 0040b971
    SUB ESP,0xc8                        ; 0040b972
    MOV EDI,dword ptr [ESP + 0xd4]      ; 0040b978
    MOV EDX,dword ptr [ESP + 0xd8]      ; 0040b97f
    CMP dword ptr [0x00822038],0x1      ; 0040b986 | g_ActorReadingMode
    JNZ 0x0040b9b2                      ; 0040b98d
        ;   XREF to: 0040b9b2 (CONDITIONAL_JUMP)  ; LAB_0040b9b2
    PUSH EDX                            ; 0040b98f
    LEA ESI,[ESP + 0x4]                 ; 0040b990
    PUSH ESI                            ; 0040b994
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 0040b995
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0040b99a
    MOV ESI,ESP                         ; 0040b99d
    PUSH ESI                            ; 0040b99f
    PUSH EDI                            ; 0040b9a0
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 0040b9a1
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 0040b9a6
    ADD ESP,0xc8                        ; 0040b9a9
    POP EDI                             ; 0040b9af
    POP ESI                             ; 0040b9b0
    RET                                 ; 0040b9b1
    LEA ESI,[EDI + 0x2260]              ; 0040b9b2
        ;   Label: LAB_0040b9b2
    MOV EDI,ESP                         ; 0040b9b8
    PUSH EDI                            ; 0040b9ba
    MOV AL,byte ptr [ESI]               ; 0040b9bb
        ;   Label: LAB_0040b9bb
    MOV byte ptr [EDI],AL               ; 0040b9bd
    CMP AL,0x0                          ; 0040b9bf
    JZ 0x0040b9d3                       ; 0040b9c1
        ;   XREF to: 0040b9d3 (CONDITIONAL_JUMP)  ; LAB_0040b9d3
    MOV AL,byte ptr [ESI + 0x1]         ; 0040b9c3
    ADD ESI,0x2                         ; 0040b9c6
    MOV byte ptr [EDI + 0x1],AL         ; 0040b9c9
    ADD EDI,0x2                         ; 0040b9cc
    CMP AL,0x0                          ; 0040b9cf
    JNZ 0x0040b9bb                      ; 0040b9d1
        ;   XREF to: 0040b9bb (CONDITIONAL_JUMP)  ; LAB_0040b9bb
    POP EDI                             ; 0040b9d3
        ;   Label: LAB_0040b9d3
    PUSH EDX                            ; 0040b9d4
    LEA ESI,[ESP + 0x4]                 ; 0040b9d5
    PUSH ESI                            ; 0040b9d9
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 0040b9da
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0040b9df
    ADD ESP,0xc8                        ; 0040b9e2
    POP EDI                             ; 0040b9e8
    POP ESI                             ; 0040b9e9
    RET                                 ; 0040b9ea

