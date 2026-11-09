; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0(CDeformableModelInstance *param_1,char *param_2)
;
; Local Variables:
; undefined        Stack[-0xd0]:1  local_d0
; undefined1       Stack[-0xcf]:1  local_cf
;
; XREF[30]:
;   core_armour.cpp_FUN_0040f040 at 0040f06f
;   core_batcreat.cpp_FUN_004124a0 at 004124cf
;   core_batman.cpp_FUN_00413e60 at 00413e8f
;   core_beast.cpp_FUN_00414b10 at 00414b3f
;   core_biggs.cpp_FUN_00415250 at 0041527f
;   core_boneguy.cpp_FUN_00419c50 at 00419c8a
;   core_bride.cpp_FUN_0041e800 at 0041e825
;   core_cow.cpp_FUN_00439830 at 0043985e
;   core_dog.cpp_FUN_0045eab0 at 0045eade
;   core_dracbrid.cpp_FUN_00464cc0 at 00464cef
;   ... and 20 more
;
; Referenced Globals:
;   undefined4 DAT_007bc038
;
; Called Functions:
;   core_actor.cpp_archiveString_FUN_0040b730
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0040bae0
        ;   Label: core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0
    PUSH EDI                            ; 0040bae1
    SUB ESP,0xc8                        ; 0040bae2
    MOV EDI,dword ptr [ESP + 0xd4]      ; 0040bae8
    MOV EDX,dword ptr [ESP + 0xd8]      ; 0040baef
    CMP dword ptr [0x007bc038],0x1      ; 0040baf6 | DAT_007bc038
    JNZ 0x0040bb22                      ; 0040bafd
        ;   XREF to: 0040bb22 (CONDITIONAL_JUMP)  ; LAB_0040bb22
    PUSH EDX                            ; 0040baff
    LEA ESI,[ESP + 0x4]                 ; 0040bb00
    PUSH ESI                            ; 0040bb04
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 0040bb05
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0040bb0a
    MOV ESI,ESP                         ; 0040bb0d
    PUSH ESI                            ; 0040bb0f
    PUSH EDI                            ; 0040bb10
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 0040bb11
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 0040bb16
    ADD ESP,0xc8                        ; 0040bb19
    POP EDI                             ; 0040bb1f
    POP ESI                             ; 0040bb20
    RET                                 ; 0040bb21
    LEA ESI,[EDI + 0x2260]              ; 0040bb22
        ;   Label: LAB_0040bb22
    MOV EDI,ESP                         ; 0040bb28
    PUSH EDI                            ; 0040bb2a
    MOV AL,byte ptr [ESI]               ; 0040bb2b
        ;   Label: LAB_0040bb2b
    MOV byte ptr [EDI],AL               ; 0040bb2d
    CMP AL,0x0                          ; 0040bb2f
    JZ 0x0040bb43                       ; 0040bb31
        ;   XREF to: 0040bb43 (CONDITIONAL_JUMP)  ; LAB_0040bb43
    MOV AL,byte ptr [ESI + 0x1]         ; 0040bb33
    ADD ESI,0x2                         ; 0040bb36
    MOV byte ptr [EDI + 0x1],AL         ; 0040bb39
    ADD EDI,0x2                         ; 0040bb3c
    CMP AL,0x0                          ; 0040bb3f
    JNZ 0x0040bb2b                      ; 0040bb41
        ;   XREF to: 0040bb2b (CONDITIONAL_JUMP)  ; LAB_0040bb2b
    POP EDI                             ; 0040bb43
        ;   Label: LAB_0040bb43
    PUSH EDX                            ; 0040bb44
    LEA ESI,[ESP + 0x4]                 ; 0040bb45
    PUSH ESI                            ; 0040bb49
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 0040bb4a
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0040bb4f
    ADD ESP,0xc8                        ; 0040bb52
    POP EDI                             ; 0040bb58
    POP ESI                             ; 0040bb59
    RET                                 ; 0040bb5a

