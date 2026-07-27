; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0xd0]:1  local_d0
; undefined1       Stack[-0xcf]:1  local_cf
;
; XREF[27]:
;   core_armour.cpp_FUN_0040fb60 at 0040fb8f
;   core_batcreat.cpp_FUN_00412d80 at 00412daf
;   core_batman.cpp_CBatman_archive_FUN_00414510 at 0041453f
;   core_beast.cpp_FUN_00415160 at 0041518f
;   core_biggs.cpp_CBiggs_archive_FUN_00415870 at 0041589f
;   core_boneguy.cpp_FUN_00419ce0 at 00419d1a
;   core_bride.cpp_CBride_archive_FUN_00420970 at 00420995
;   core_cow.cpp_FUN_0043c2e0 at 0043c30e
;   core_dog.cpp_FUN_00454dc0 at 00454dee
;   core_dracbrid.cpp_CDraculaBride_archive_FUN_0045a450 at 0045a47f
;   ... and 17 more
;
; Referenced Globals:
;   undefined4 DAT_00763e88
;
; Called Functions:
;   core_actor.cpp_archiveString_FUN_0040c6d0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0040ca80
        ;   Label: core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80
    PUSH EDI                            ; 0040ca81
    SUB ESP,0xc8                        ; 0040ca82
    MOV EDI,dword ptr [ESP + 0xd4]      ; 0040ca88
    MOV EDX,dword ptr [ESP + 0xd8]      ; 0040ca8f
    CMP dword ptr [0x00763e88],0x1      ; 0040ca96 | DAT_00763e88
    JNZ 0x0040cac2                      ; 0040ca9d
        ;   XREF to: 0040cac2 (CONDITIONAL_JUMP)  ; LAB_0040cac2
    PUSH EDX                            ; 0040ca9f
    LEA ESI,[ESP + 0x4]                 ; 0040caa0
    PUSH ESI                            ; 0040caa4
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 0040caa5
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 0040caaa
    MOV ESI,ESP                         ; 0040caad
    PUSH ESI                            ; 0040caaf
    PUSH EDI                            ; 0040cab0
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 0040cab1
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0()
    ADD ESP,0x8                         ; 0040cab6
    ADD ESP,0xc8                        ; 0040cab9
    POP EDI                             ; 0040cabf
    POP ESI                             ; 0040cac0
    RET                                 ; 0040cac1
    LEA ESI,[EDI + 0x2260]              ; 0040cac2
        ;   Label: LAB_0040cac2
    MOV EDI,ESP                         ; 0040cac8
    PUSH EDI                            ; 0040caca
    MOV AL,byte ptr [ESI]               ; 0040cacb
        ;   Label: LAB_0040cacb
    MOV byte ptr [EDI],AL               ; 0040cacd
    CMP AL,0x0                          ; 0040cacf
    JZ 0x0040cae3                       ; 0040cad1
        ;   XREF to: 0040cae3 (CONDITIONAL_JUMP)  ; LAB_0040cae3
    MOV AL,byte ptr [ESI + 0x1]         ; 0040cad3
    ADD ESI,0x2                         ; 0040cad6
    MOV byte ptr [EDI + 0x1],AL         ; 0040cad9
    ADD EDI,0x2                         ; 0040cadc
    CMP AL,0x0                          ; 0040cadf
    JNZ 0x0040cacb                      ; 0040cae1
        ;   XREF to: 0040cacb (CONDITIONAL_JUMP)  ; LAB_0040cacb
    POP EDI                             ; 0040cae3
        ;   Label: LAB_0040cae3
    PUSH EDX                            ; 0040cae4
    LEA ESI,[ESP + 0x4]                 ; 0040cae5
    PUSH ESI                            ; 0040cae9
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 0040caea
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 0040caef
    ADD ESP,0xc8                        ; 0040caf2
    POP EDI                             ; 0040caf8
    POP ESI                             ; 0040caf9
    RET                                 ; 0040cafa

