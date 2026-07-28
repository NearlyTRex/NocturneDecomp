; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_actor_cpp_archiveOrientation_FUN_0040c4f0(float *param_1,char *param_2)
;
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[4]:
;   core_actor.cpp_CDemonActor_archive_FUN_0040d2d0 at 0040d2f2
;   core_boxactor.cpp_CLightActor_archive_FUN_0041f600 at 0041f656
;   core_manpuz.cpp_CMansionPuzzleCircle_archive_FUN_004cb7f0 at 004cb8b2
;   core_turret.cpp_CTurret_archive_FUN_0054a000 at 0054a01a
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_00577c18
;   TerminatedCString s_s_g_g_g_00577c21
;   TerminatedCString s_Euler_PBH_orientation_005acc20
;   undefined1 DAT_005acc90
;   undefined4 DAT_00763e84
;   undefined4 DAT_00763e88
;
; Called Functions:
;   core_actor.cpp_archiveDescription_FUN_0040c3a0
;   core_actor.cpp_handleActorPropertyParseError_FUN_0040c320
;   crt_stdio.c_fprintf_FUN_005644f0
;   crt_stdio.c_fscanf_FUN_00563350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c4f0
        ;   Label: core_actor.cpp_archiveOrientation_FUN_0040c4f0
    PUSH EDI                            ; 0040c4f1
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040c4f2
    CMP dword ptr [0x00763e88],0x1      ; 0040c4f6 | DAT_00763e88
    JNZ 0x0040c54c                      ; 0040c4fd
        ;   XREF to: 0040c54c (CONDITIONAL_JUMP)  ; LAB_0040c54c
    LEA EDX,[EAX + 0x4]                 ; 0040c4ff
    PUSH EDX                            ; 0040c502
    LEA EDX,[EAX + 0x8]                 ; 0040c503
    PUSH EDX                            ; 0040c506
    PUSH EAX                            ; 0040c507
    PUSH 0x577c18                       ; 0040c508 | = "%f,%f,%f"
    MOV EBX,dword ptr [0x00763e84]      ; 0040c50d | DAT_00763e84
    PUSH EBX                            ; 0040c513
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0040c514
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x14                        ; 0040c519
    CMP EAX,0x3                         ; 0040c51c
    JNZ 0x0040c536                      ; 0040c51f
        ;   XREF to: 0040c536 (CONDITIONAL_JUMP)  ; LAB_0040c536
    MOV EDI,dword ptr [ESP + 0x10]      ; 0040c521
        ;   Label: LAB_0040c521
    PUSH EDI                            ; 0040c525
    PUSH 0x5acc20                       ; 0040c526 | = "Euler PBH orientation"
    CALL core_actor.cpp_archiveDescription_FUN_0040c3a0 ; 0040c52b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDescription_FUN_0040c3a0(char * property_description, char * property_name)
    ADD ESP,0x8                         ; 0040c530
    POP EDI                             ; 0040c533
    POP EBX                             ; 0040c534
    RET                                 ; 0040c535
    PUSH ESI                            ; 0040c536
        ;   Label: LAB_0040c536
    MOV ESI,dword ptr [ESP + 0x14]      ; 0040c537
    PUSH ESI                            ; 0040c53b
    PUSH 0x5acc20                       ; 0040c53c | = "Euler PBH orientation"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040c320 ; 0040c541
        ;   XREF to: 0040c320 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040c320(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040c546
    POP ESI                             ; 0040c549
    JMP 0x0040c521                      ; 0040c54a
        ;   XREF to: 0040c521 (UNCONDITIONAL_JUMP)  ; LAB_0040c521
    SUB ESP,0x8                         ; 0040c54c
        ;   Label: LAB_0040c54c
    FLD float ptr [EAX + 0x4]           ; 0040c54f
    FSTP double ptr [ESP]               ; 0040c552
    SUB ESP,0x8                         ; 0040c555
    FLD float ptr [EAX + 0x8]           ; 0040c558
    FSTP double ptr [ESP]               ; 0040c55b
    SUB ESP,0x8                         ; 0040c55e
    FLD float ptr [EAX]                 ; 0040c561
    FSTP double ptr [ESP]               ; 0040c563
    PUSH 0x5acc90                       ; 0040c566 | DAT_005acc90
    PUSH 0x577c21                       ; 0040c56b | = "%s%g,%g,%g"
    MOV ECX,dword ptr [0x00763e84]      ; 0040c570 | DAT_00763e84
    PUSH ECX                            ; 0040c576
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0040c577
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x24                        ; 0040c57c
    JMP 0x0040c521                      ; 0040c57f
        ;   XREF to: 0040c521 (UNCONDITIONAL_JUMP)  ; LAB_0040c521

