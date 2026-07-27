; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveString_FUN_0040c6d0(undefined1 *param_1,undefined4 param_2)
;
;
; XREF[54]:
;   core_actor.cpp_CDemonActor_archive_FUN_0040d2d0 at 0040d35e
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80 at 0040caa5
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00 at 0040ca25
;   core_actor.cpp_archiveLocalizedString_FUN_0040c7f0 at 0040c845
;   core_ammo.cpp_FUN_0040ecf0 at 0040ed1e
;   core_ammobox.cpp_FUN_0040f390 at 0040f3be
;   core_anvil.cpp_FUN_0040f7d0 at 0040f7fe
;   core_armour.cpp_FUN_0040fb60 at 0040fbb1
;   core_baron.cpp_CBaron_archive_FUN_00411080 at 004110a7
;   core_barrier.cpp_CBarrier_archive_FUN_00411800 at 0041183b
;   ... and 44 more
;
; Referenced Globals:
;   TerminatedCString s_anon_00577c60
;   TerminatedCString s_s_s_00577c66
;   TerminatedCString s_String_005acc58
;   undefined1 DAT_005acc90
;   undefined4 DAT_005c168c
;   undefined4 DAT_00763e84
;   undefined4 DAT_00763e88
;
; Called Functions:
;   core_actor.cpp_archiveDescription_FUN_0040c3a0
;   core_actor.cpp_handleActorPropertyParseError_FUN_0040c320
;   crt_stdio.c_fgetc_FUN_00564570
;   crt_stdio.c_fprintf_FUN_005644f0
;   crt_stdio.c_fscanf_FUN_00563350
;   crt_stdio.c_ungetc_FUN_00564740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c6d0
        ;   Label: core_actor.cpp_archiveString_FUN_0040c6d0
    PUSH ESI                            ; 0040c6d1
    PUSH EDI                            ; 0040c6d2
    PUSH EBP                            ; 0040c6d3
    MOV ESI,dword ptr [ESP + 0x14]      ; 0040c6d4
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040c6d8
    CMP dword ptr [0x00763e88],0x1      ; 0040c6dc | DAT_00763e88
    JNZ 0x0040c7b7                      ; 0040c6e3
        ;   XREF to: 0040c7b7 (CONDITIONAL_JUMP)  ; LAB_0040c7b7
    MOV EDI,dword ptr [0x00763e84]      ; 0040c6e9 | DAT_00763e84
        ;   Label: LAB_0040c6e9
    PUSH EDI                            ; 0040c6ef
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 0040c6f0
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    MOV EDX,EAX                         ; 0040c6f5
    ADD ESP,0x4                         ; 0040c6f7
    INC DL                              ; 0040c6fa
    AND EDX,0xff                        ; 0040c6fc
    TEST byte ptr [EDX + 0x5c168c],0x2  ; 0040c702 | DAT_005c168c
    JNZ 0x0040c6e9                      ; 0040c709
        ;   XREF to: 0040c6e9 (CONDITIONAL_JUMP)  ; LAB_0040c6e9
    CMP EAX,0x22                        ; 0040c70b
    JZ 0x0040c71e                       ; 0040c70e
        ;   XREF to: 0040c71e (CONDITIONAL_JUMP)  ; LAB_0040c71e
    PUSH EBX                            ; 0040c710
    PUSH 0x5acc58                       ; 0040c711 | = "String"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040c320 ; 0040c716
        ;   XREF to: 0040c320 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_handleActorPropertyParseError_FUN_0040c320()
    ADD ESP,0x8                         ; 0040c71b
    MOV EBP,dword ptr [0x00763e84]      ; 0040c71e | DAT_00763e84
        ;   Label: LAB_0040c71e
    PUSH EBP                            ; 0040c724
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 0040c725
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 0040c72a
    CMP EAX,0x22                        ; 0040c72d
    JZ 0x0040c791                       ; 0040c730
        ;   XREF to: 0040c791 (CONDITIONAL_JUMP)  ; LAB_0040c791
    MOV EDX,dword ptr [0x00763e84]      ; 0040c732 | DAT_00763e84
    PUSH EDX                            ; 0040c738
    PUSH EAX                            ; 0040c739
    CALL crt_stdio.c_ungetc_FUN_00564740 ; 0040c73a
        ;   XREF to: 00564740 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_ungetc_FUN_00564740()
    ADD ESP,0x8                         ; 0040c73f
    PUSH ESI                            ; 0040c742
    PUSH 0x577c60                       ; 0040c743 | = "%[^\"]"
    MOV ECX,dword ptr [0x00763e84]      ; 0040c748 | DAT_00763e84
    PUSH ECX                            ; 0040c74e
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0040c74f
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 0040c754
    CMP EAX,0x1                         ; 0040c757
    JZ 0x0040c76a                       ; 0040c75a
        ;   XREF to: 0040c76a (CONDITIONAL_JUMP)  ; LAB_0040c76a
    PUSH EBX                            ; 0040c75c
    PUSH 0x5acc58                       ; 0040c75d | = "String"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040c320 ; 0040c762
        ;   XREF to: 0040c320 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_handleActorPropertyParseError_FUN_0040c320()
    ADD ESP,0x8                         ; 0040c767
    MOV ESI,dword ptr [0x00763e84]      ; 0040c76a | DAT_00763e84
        ;   Label: LAB_0040c76a
    PUSH ESI                            ; 0040c770
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 0040c771
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 0040c776
    CMP EAX,0x22                        ; 0040c779
    JNZ 0x0040c796                      ; 0040c77c
        ;   XREF to: 0040c796 (CONDITIONAL_JUMP)  ; LAB_0040c796
    PUSH EBX                            ; 0040c77e
        ;   Label: LAB_0040c77e
    PUSH 0x5acc58                       ; 0040c77f | = "String"
    CALL core_actor.cpp_archiveDescription_FUN_0040c3a0 ; 0040c784
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveDescription_FUN_0040c3a0()
    ADD ESP,0x8                         ; 0040c789
    POP EBP                             ; 0040c78c
    POP EDI                             ; 0040c78d
    POP ESI                             ; 0040c78e
    POP EBX                             ; 0040c78f
    RET                                 ; 0040c790
    MOV byte ptr [ESI],0x0              ; 0040c791
        ;   Label: LAB_0040c791
    JMP 0x0040c77e                      ; 0040c794
        ;   XREF to: 0040c77e (UNCONDITIONAL_JUMP)  ; LAB_0040c77e
    PUSH EBX                            ; 0040c796
        ;   Label: LAB_0040c796
    PUSH 0x5acc58                       ; 0040c797 | = "String"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040c320 ; 0040c79c
        ;   XREF to: 0040c320 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_handleActorPropertyParseError_FUN_0040c320()
    ADD ESP,0x8                         ; 0040c7a1
    PUSH EBX                            ; 0040c7a4
    PUSH 0x5acc58                       ; 0040c7a5 | = "String"
    CALL core_actor.cpp_archiveDescription_FUN_0040c3a0 ; 0040c7aa
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveDescription_FUN_0040c3a0()
    ADD ESP,0x8                         ; 0040c7af
    POP EBP                             ; 0040c7b2
    POP EDI                             ; 0040c7b3
    POP ESI                             ; 0040c7b4
    POP EBX                             ; 0040c7b5
    RET                                 ; 0040c7b6
    PUSH ESI                            ; 0040c7b7
        ;   Label: LAB_0040c7b7
    PUSH 0x5acc90                       ; 0040c7b8 | DAT_005acc90
    PUSH 0x577c66                       ; 0040c7bd | = "%s\"%s\""
    MOV ECX,dword ptr [0x00763e84]      ; 0040c7c2 | DAT_00763e84
    PUSH ECX                            ; 0040c7c8
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0040c7c9
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x10                        ; 0040c7ce
    PUSH EBX                            ; 0040c7d1
    PUSH 0x5acc58                       ; 0040c7d2 | = "String"
    CALL core_actor.cpp_archiveDescription_FUN_0040c3a0 ; 0040c7d7
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveDescription_FUN_0040c3a0()
    ADD ESP,0x8                         ; 0040c7dc
    POP EBP                             ; 0040c7df
    POP EDI                             ; 0040c7e0
    POP ESI                             ; 0040c7e1
    POP EBX                             ; 0040c7e2
    RET                                 ; 0040c7e3

