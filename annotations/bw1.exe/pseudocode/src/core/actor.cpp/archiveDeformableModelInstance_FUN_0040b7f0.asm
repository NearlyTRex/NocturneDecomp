; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveDeformableModelInstance_FUN_0040b7f0(CDeformableModelInstance *model_ptr,char *property_name)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   model_ptr
; char *           Stack[0x8]:4   property_name
; Local Variables:
; undefined        Stack[-0xd0]:1  local_d0
; undefined1       Stack[-0xcf]:1  local_cf
;
; XREF[37]:
;   core_armour.cpp_CArmour_archive_FUN_0040ebe0 at 0040ec0f
;   core_batcreat.cpp_CBatCreature_archive_FUN_00412110 at 0041213f
;   core_batman.cpp_CBatman_archive_FUN_00413b60 at 00413b8f
;   core_beast.cpp_CBeast_archive_FUN_00414800 at 0041482f
;   core_biggs.cpp_CBiggs_archive_FUN_00414f30 at 00414f5f
;   core_bird.cpp_CBird_archive_FUN_00415780 at 004157af
;   core_boneguy.cpp_CBoneGuy_archive_FUN_0041d0d0 at 0041d10a
;   core_bride.cpp_CBride_archive_FUN_00424840 at 00424865
;   core_carved.cpp_CCarved_archive_FUN_0042b3c0 at 0042b3ef
;   core_construc.cpp_CConstruct_archive_FUN_00446e30 at 00446e69
;   ... and 27 more
;
; Referenced Globals:
;   undefined4 DAT_007c3038
;
; Called Functions:
;   core_actor.cpp_archiveString_FUN_0040b440
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0040b7f0
        ;   Label: core_actor.cpp_archiveDeformableModelInstance_FUN_0040b7f0
    PUSH EDI                            ; 0040b7f1
    SUB ESP,0xc8                        ; 0040b7f2
    MOV EDI,dword ptr [ESP + 0xd4]      ; 0040b7f8
    MOV EDX,dword ptr [ESP + 0xd8]      ; 0040b7ff
    CMP dword ptr [0x007c3038],0x1      ; 0040b806 | DAT_007c3038
    JNZ 0x0040b832                      ; 0040b80d
        ;   XREF to: 0040b832 (CONDITIONAL_JUMP)  ; LAB_0040b832
    PUSH EDX                            ; 0040b80f
    LEA ESI,[ESP + 0x4]                 ; 0040b810
    PUSH ESI                            ; 0040b814
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 0040b815
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0040b81a
    MOV ESI,ESP                         ; 0040b81d
    PUSH ESI                            ; 0040b81f
    PUSH EDI                            ; 0040b820
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50 ; 0040b821
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 0040b826
    ADD ESP,0xc8                        ; 0040b829
    POP EDI                             ; 0040b82f
    POP ESI                             ; 0040b830
    RET                                 ; 0040b831
    LEA ESI,[EDI + 0x2350]              ; 0040b832
        ;   Label: LAB_0040b832
    MOV EDI,ESP                         ; 0040b838
    PUSH EDI                            ; 0040b83a
    MOV AL,byte ptr [ESI]               ; 0040b83b
        ;   Label: LAB_0040b83b
    MOV byte ptr [EDI],AL               ; 0040b83d
    CMP AL,0x0                          ; 0040b83f
    JZ 0x0040b853                       ; 0040b841
        ;   XREF to: 0040b853 (CONDITIONAL_JUMP)  ; LAB_0040b853
    MOV AL,byte ptr [ESI + 0x1]         ; 0040b843
    ADD ESI,0x2                         ; 0040b846
    MOV byte ptr [EDI + 0x1],AL         ; 0040b849
    ADD EDI,0x2                         ; 0040b84c
    CMP AL,0x0                          ; 0040b84f
    JNZ 0x0040b83b                      ; 0040b851
        ;   XREF to: 0040b83b (CONDITIONAL_JUMP)  ; LAB_0040b83b
    POP EDI                             ; 0040b853
        ;   Label: LAB_0040b853
    PUSH EDX                            ; 0040b854
    LEA ESI,[ESP + 0x4]                 ; 0040b855
    PUSH ESI                            ; 0040b859
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 0040b85a
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0040b85f
    ADD ESP,0xc8                        ; 0040b862
    POP EDI                             ; 0040b868
    POP ESI                             ; 0040b869
    RET                                 ; 0040b86a

