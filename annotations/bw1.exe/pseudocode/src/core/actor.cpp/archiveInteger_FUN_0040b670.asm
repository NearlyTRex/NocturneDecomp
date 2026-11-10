; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveInteger_FUN_0040b670(int *int_ptr,char *property_name)
;
; Parameters:
; int *            Stack[0x4]:4   int_ptr
; char *           Stack[0x8]:4   property_name
;
; XREF[71]:
;   core_actor.cpp_CDemonActor_archive_FUN_0040c040 at 0040c0ac
;   core_ammo.cpp_CAmmo_archive_FUN_0040dd40 at 0040dd82
;   core_ammobox.cpp_CAmmoBox_archive_FUN_0040e400 at 0040e442
;   core_anvil.cpp_CAnvil_archive_FUN_0040e860 at 0040e8b6
;   core_backgnd.cpp_CBackgroundActor_archive_FUN_0040f050 at 0040f07e
;   core_baron.cpp_CBaron_archive_FUN_00410180 at 004101cf
;   core_barrier.cpp_CBarrier_archive_FUN_00410940 at 0041098f
;   core_batman.cpp_CBatman_archive_FUN_00413b60 at 00413be8
;   core_biggs.cpp_CBiggs_archive_FUN_00414f30 at 00414f81
;   core_bird.cpp_CBird_archive_FUN_00415780 at 004157e5
;   ... and 61 more
;
; Referenced Globals:
;   undefined4 DAT_005d2aa9
;   undefined4 DAT_005d2aac
;   TerminatedCString s_Integer_value_006106a8
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

    PUSH ESI                            ; 0040b670
        ;   Label: core_actor.cpp_archiveInteger_FUN_0040b670
    PUSH EDI                            ; 0040b671
    PUSH EBP                            ; 0040b672
    MOV EAX,dword ptr [ESP + 0x10]      ; 0040b673
    CMP dword ptr [0x007c3038],0x1      ; 0040b677 | DAT_007c3038
    JNZ 0x0040b6c4                      ; 0040b67e
        ;   XREF to: 0040b6c4 (CONDITIONAL_JUMP)  ; LAB_0040b6c4
    PUSH EAX                            ; 0040b680
    PUSH 0x5d2aa9                       ; 0040b681 | DAT_005d2aa9
    MOV ESI,dword ptr [0x007c3034]      ; 0040b686 | DAT_007c3034
    PUSH ESI                            ; 0040b68c
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0040b68d
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 0040b692
    CMP EAX,0x1                         ; 0040b695
    JNZ 0x0040b6b0                      ; 0040b698
        ;   XREF to: 0040b6b0 (CONDITIONAL_JUMP)  ; LAB_0040b6b0
    MOV EBP,dword ptr [ESP + 0x14]      ; 0040b69a
        ;   Label: LAB_0040b69a
    PUSH EBP                            ; 0040b69e
    PUSH 0x6106a8                       ; 0040b69f | = "Integer value"
    CALL core_actor.cpp_archiveDescription_FUN_0040b110 ; 0040b6a4
        ;   XREF to: 0040b110 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDescription_FUN_0040b110(char * property_description, char * property_name)
    ADD ESP,0x8                         ; 0040b6a9
    POP EBP                             ; 0040b6ac
    POP EDI                             ; 0040b6ad
    POP ESI                             ; 0040b6ae
    RET                                 ; 0040b6af
    MOV EDI,dword ptr [ESP + 0x14]      ; 0040b6b0
        ;   Label: LAB_0040b6b0
    PUSH EDI                            ; 0040b6b4
    PUSH 0x6106a8                       ; 0040b6b5 | = "Integer value"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b090 ; 0040b6ba
        ;   XREF to: 0040b090 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b090(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040b6bf
    JMP 0x0040b69a                      ; 0040b6c2
        ;   XREF to: 0040b69a (UNCONDITIONAL_JUMP)  ; LAB_0040b69a
    PUSH EBX                            ; 0040b6c4
        ;   Label: LAB_0040b6c4
    MOV ECX,dword ptr [EAX]             ; 0040b6c5
    PUSH ECX                            ; 0040b6c7
    PUSH 0x6106c0                       ; 0040b6c8 | DAT_006106c0
    PUSH 0x5d2aac                       ; 0040b6cd | DAT_005d2aac
    MOV EBX,dword ptr [0x007c3034]      ; 0040b6d2 | DAT_007c3034
    PUSH EBX                            ; 0040b6d8
    CALL crt_unknown.c_FUN_005c03c0     ; 0040b6d9
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x10                        ; 0040b6de
    POP EBX                             ; 0040b6e1
    JMP 0x0040b69a                      ; 0040b6e2
        ;   XREF to: 0040b69a (UNCONDITIONAL_JUMP)  ; LAB_0040b69a

