; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_mission_cpp_CDemonMission_loadActor_FUN_004d8aa0(undefined4 param_1,undefined4 param_2,char *param_3,char *param_4)
;
; Local Variables:
; undefined        Stack[-0xdc]:1  local_dc
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_actor.cpp_archiveActor_FUN_0040c980 at 0040c9a6
;
; Referenced Globals:
;   string s_(unknown)_00589b84
;   string s_(unknown)_00589b8e
;   string s_..\\core\\mission.cpp_00589b98
;   string s_Error_reading_actor_pointer._Own_00589bac
;   string s_%[^\"]_00589be4
;   string s_WARNING._Can't_find_actor_'%s'_i_00589bea
;   TerminatedCString s_x_00589c44
;   undefined4 DAT_005b6d50
;   string s_(none)_005bb0d0
;   undefined4 DAT_005c168c
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   core_mission.cpp_CDemonMission_findActorByName_FUN_004d90a0
;   crt_stdio.c_fgetc_FUN_00564570
;   crt_stdio.c_fscanf_FUN_00563350
;   crt_stdio.c_ungetc_FUN_00564740
;   crt_string.c__stricmp_FUN_00564520
;   FUN_0046fcd0
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8aa0
        ;   Label: core_mission.cpp_CDemonMission_loadActor_FUN_004d8aa0
    PUSH ESI                            ; 004d8aa1
    PUSH EDI                            ; 004d8aa2
    PUSH EBP                            ; 004d8aa3
    SUB ESP,0xcc                        ; 004d8aa4
    MOV EBX,dword ptr [ESP + 0xe4]      ; 004d8aaa
    MOV EDI,dword ptr [ESP + 0xe8]      ; 004d8ab1
    MOV EBP,dword ptr [ESP + 0xec]      ; 004d8ab8
    TEST EDI,EDI                        ; 004d8abf
    JNZ 0x004d8ac8                      ; 004d8ac1
        ;   XREF to: 004d8ac8 (CONDITIONAL_JUMP)  ; LAB_004d8ac8
    MOV EDI,0x589b84                    ; 004d8ac3 | = "(unknown)"
    TEST EBP,EBP                        ; 004d8ac8
        ;   Label: LAB_004d8ac8
    JNZ 0x004d8ad1                      ; 004d8aca
        ;   XREF to: 004d8ad1 (CONDITIONAL_JUMP)  ; LAB_004d8ad1
    MOV EBP,0x589b8e                    ; 004d8acc | = "(unknown)"
    PUSH EBX                            ; 004d8ad1
        ;   Label: LAB_004d8ad1
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 004d8ad2
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    MOV EDX,EAX                         ; 004d8ad7
    ADD ESP,0x4                         ; 004d8ad9
    INC DL                              ; 004d8adc
    AND EDX,0xff                        ; 004d8ade
    TEST byte ptr [EDX + 0x5c168c],0x2  ; 004d8ae4 | DAT_005c168c
    JNZ 0x004d8ad1                      ; 004d8aeb
        ;   XREF to: 004d8ad1 (CONDITIONAL_JUMP)  ; LAB_004d8ad1
    CMP EAX,0x22                        ; 004d8aed
    JNZ 0x004d8bca                      ; 004d8af0
        ;   XREF to: 004d8bca (CONDITIONAL_JUMP)  ; LAB_004d8bca
    PUSH EBX                            ; 004d8af6
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 004d8af7
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 004d8afc
    CMP EAX,0x22                        ; 004d8aff
    JNZ 0x004d8b48                      ; 004d8b02
        ;   XREF to: 004d8b48 (CONDITIONAL_JUMP)  ; LAB_004d8b48
    PUSH EBP                            ; 004d8b04 | = "(unknown)"
        ;   Label: LAB_004d8b04
    PUSH EDI                            ; 004d8b05 | = "(unknown)"
    MOV EAX,0x589b98                    ; 004d8b06 | = "..\\core\\mission.cpp"
    MOV EDX,0x22d                       ; 004d8b0b
    PUSH 0x589bac                       ; 004d8b10 | = "Error reading actor pointer.\nOwner: ..."
    MOV [0x01cc4800],EAX                ; 004d8b15 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 004d8b1a | DAT_01cc4804
    CALL FUN_004c8440                   ; 004d8b20
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0xc                         ; 004d8b25
    PUSH EBX                            ; 004d8b28
        ;   Label: LAB_004d8b28
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 004d8b29
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 004d8b2e
    CMP EAX,-0x1                        ; 004d8b31
    JZ 0x004d8b04                       ; 004d8b34
        ;   XREF to: 004d8b04 (CONDITIONAL_JUMP)  ; LAB_004d8b04
    CMP EAX,0xa                         ; 004d8b36
    JNZ 0x004d8b28                      ; 004d8b39
        ;   XREF to: 004d8b28 (CONDITIONAL_JUMP)  ; LAB_004d8b28
    MOV EAX,ESI                         ; 004d8b3b
    ADD ESP,0xcc                        ; 004d8b3d
    POP EBP                             ; 004d8b43
    POP EDI                             ; 004d8b44
    POP ESI                             ; 004d8b45
    POP EBX                             ; 004d8b46
    RET                                 ; 004d8b47
    PUSH EBX                            ; 004d8b48
        ;   Label: LAB_004d8b48
    PUSH EAX                            ; 004d8b49
    CALL crt_stdio.c_ungetc_FUN_00564740 ; 004d8b4a
        ;   XREF to: 00564740 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_ungetc_FUN_00564740()
    ADD ESP,0x8                         ; 004d8b4f
    MOV EAX,ESP                         ; 004d8b52
    PUSH EAX                            ; 004d8b54
    PUSH 0x589be4                       ; 004d8b55 | = "%[^\"]"
    PUSH EBX                            ; 004d8b5a
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004d8b5b
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 004d8b60
    CMP EAX,0x1                         ; 004d8b63
    JNZ 0x004d8b04                      ; 004d8b66
        ;   XREF to: 004d8b04 (CONDITIONAL_JUMP)  ; LAB_004d8b04
    PUSH 0x5bb0d0                       ; 004d8b68 | = "(none)"
    LEA EAX,[ESP + 0x4]                 ; 004d8b6d
    PUSH EAX                            ; 004d8b71
    CALL crt_string.c__stricmp_FUN_00564520 ; 004d8b72
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 004d8b77
    TEST EAX,EAX                        ; 004d8b7a
    JNZ 0x004d8b94                      ; 004d8b7c
        ;   XREF to: 004d8b94 (CONDITIONAL_JUMP)  ; LAB_004d8b94
    XOR ESI,ESI                         ; 004d8b7e
    PUSH EBX                            ; 004d8b80
        ;   Label: LAB_004d8b80
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 004d8b81
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 004d8b86
    CMP EAX,0x22                        ; 004d8b89
    JNZ 0x004d8b04                      ; 004d8b8c
        ;   XREF to: 004d8b04 (CONDITIONAL_JUMP)  ; LAB_004d8b04
    JMP 0x004d8b28                      ; 004d8b92
        ;   XREF to: 004d8b28 (UNCONDITIONAL_JUMP)  ; LAB_004d8b28
    MOV EAX,ESP                         ; 004d8b94
        ;   Label: LAB_004d8b94
    PUSH EAX                            ; 004d8b96
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004d8b97
    PUSH EDX                            ; 004d8b9e
    CALL core_mission.cpp_CDemonMission_findActorByName_FUN_004d90a0 ; 004d8b9f
        ;   XREF to: 004d90a0 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_CDemonMission_findActorByName_FUN_004d90a0()
    ADD ESP,0x8                         ; 004d8ba4
    MOV ESI,EAX                         ; 004d8ba7
    TEST EAX,EAX                        ; 004d8ba9
    JNZ 0x004d8b80                      ; 004d8bab
        ;   XREF to: 004d8b80 (CONDITIONAL_JUMP)  ; LAB_004d8b80
    PUSH EBP                            ; 004d8bad | = "(unknown)"
    PUSH EDI                            ; 004d8bae | = "(unknown)"
    LEA EAX,[ESP + 0x8]                 ; 004d8baf
    PUSH EAX                            ; 004d8bb3
    PUSH 0x589bea                       ; 004d8bb4 | = "WARNING.  Can't find actor '%s' in %s..."
    MOV ECX,dword ptr [0x005b6d50]      ; 004d8bb9 | DAT_005b6d50
    PUSH ECX                            ; 004d8bbf
    CALL FUN_0046fcd0                   ; 004d8bc0
        ;   XREF to: 0046fcd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046fcd0()
    ADD ESP,0x14                        ; 004d8bc5
    JMP 0x004d8b80                      ; 004d8bc8
        ;   XREF to: 004d8b80 (UNCONDITIONAL_JUMP)  ; LAB_004d8b80
    PUSH EBX                            ; 004d8bca
        ;   Label: LAB_004d8bca
    PUSH EAX                            ; 004d8bcb
    CALL crt_stdio.c_ungetc_FUN_00564740 ; 004d8bcc
        ;   XREF to: 00564740 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_ungetc_FUN_00564740()
    ADD ESP,0x8                         ; 004d8bd1
    LEA EAX,[ESP + 0xc8]                ; 004d8bd4
    PUSH EAX                            ; 004d8bdb
    PUSH 0x589c44                       ; 004d8bdc | = "%x"
    PUSH EBX                            ; 004d8be1
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004d8be2
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 004d8be7
    CMP EAX,0x1                         ; 004d8bea
    JNZ 0x004d8b04                      ; 004d8bed
        ;   XREF to: 004d8b04 (CONDITIONAL_JUMP)  ; LAB_004d8b04
    MOV ESI,dword ptr [ESP + 0xc8]      ; 004d8bf3
    JMP 0x004d8b28                      ; 004d8bfa
        ;   XREF to: 004d8b28 (UNCONDITIONAL_JUMP)  ; LAB_004d8b28

