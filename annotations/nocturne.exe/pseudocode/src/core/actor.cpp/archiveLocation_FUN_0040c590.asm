; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveLocation_FUN_0040c590(CLocation *location_ptr,char *property_name)
;
; Parameters:
; CLocation *      Stack[0x4]:4   location_ptr
; char *           Stack[0x8]:4   property_name
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[1]:
;   core_actor.cpp_CDemonActor_archive_FUN_0040d2d0 at 0040d2e1
;
; Referenced Globals:
;   TerminatedCString s_d_f_f_f_00577c2c
;   TerminatedCString s_s_d_g_g_g_00577c38
;   TerminatedCString s_s_4D_location_005acc38
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

    PUSH ESI                            ; 0040c590
        ;   Label: core_actor.cpp_archiveLocation_FUN_0040c590
    PUSH EDI                            ; 0040c591
    PUSH EBP                            ; 0040c592
    MOV EAX,dword ptr [ESP + 0x10]      ; 0040c593
    CMP dword ptr [0x00763e88],0x1      ; 0040c597 | DAT_00763e88
    JNZ 0x0040c5f0                      ; 0040c59e
        ;   XREF to: 0040c5f0 (CONDITIONAL_JUMP)  ; LAB_0040c5f0
    LEA EDX,[EAX + 0x8]                 ; 0040c5a0
    PUSH EDX                            ; 0040c5a3
    LEA EDX,[EAX + 0x4]                 ; 0040c5a4
    PUSH EDX                            ; 0040c5a7
    PUSH EAX                            ; 0040c5a8
    ADD EAX,0xc                         ; 0040c5a9
    PUSH EAX                            ; 0040c5ac
    PUSH 0x577c2c                       ; 0040c5ad | = "%d,%f,%f,%f"
    MOV ESI,dword ptr [0x00763e84]      ; 0040c5b2 | DAT_00763e84
    PUSH ESI                            ; 0040c5b8
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0040c5b9
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0x18                        ; 0040c5be
    CMP EAX,0x4                         ; 0040c5c1
    JNZ 0x0040c5dc                      ; 0040c5c4
        ;   XREF to: 0040c5dc (CONDITIONAL_JUMP)  ; LAB_0040c5dc
    MOV EBP,dword ptr [ESP + 0x14]      ; 0040c5c6
        ;   Label: LAB_0040c5c6
    PUSH EBP                            ; 0040c5ca
    PUSH 0x5acc38                       ; 0040c5cb | = "4D location"
    CALL core_actor.cpp_archiveDescription_FUN_0040c3a0 ; 0040c5d0
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDescription_FUN_0040c3a0(char * property_description, char * property_name)
    ADD ESP,0x8                         ; 0040c5d5
    POP EBP                             ; 0040c5d8
    POP EDI                             ; 0040c5d9
    POP ESI                             ; 0040c5da
    RET                                 ; 0040c5db
    MOV EDI,dword ptr [ESP + 0x14]      ; 0040c5dc
        ;   Label: LAB_0040c5dc
    PUSH EDI                            ; 0040c5e0
    PUSH 0x5acc38                       ; 0040c5e1 | = "4D location"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040c320 ; 0040c5e6
        ;   XREF to: 0040c320 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040c320(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040c5eb
    JMP 0x0040c5c6                      ; 0040c5ee
        ;   XREF to: 0040c5c6 (UNCONDITIONAL_JUMP)  ; LAB_0040c5c6
    PUSH EBX                            ; 0040c5f0
        ;   Label: LAB_0040c5f0
    SUB ESP,0x8                         ; 0040c5f1
    FLD float ptr [EAX + 0x8]           ; 0040c5f4
    FSTP double ptr [ESP]               ; 0040c5f7
    SUB ESP,0x8                         ; 0040c5fa
    FLD float ptr [EAX + 0x4]           ; 0040c5fd
    FSTP double ptr [ESP]               ; 0040c600
    SUB ESP,0x8                         ; 0040c603
    FLD float ptr [EAX]                 ; 0040c606
    FSTP double ptr [ESP]               ; 0040c608
    MOV ECX,dword ptr [EAX + 0xc]       ; 0040c60b
    PUSH ECX                            ; 0040c60e
    PUSH 0x5acc90                       ; 0040c60f | DAT_005acc90
    PUSH 0x577c38                       ; 0040c614 | = "%s%d,%g,%g,%g"
    MOV EBX,dword ptr [0x00763e84]      ; 0040c619 | DAT_00763e84
    PUSH EBX                            ; 0040c61f
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0040c620
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x28                        ; 0040c625
    POP EBX                             ; 0040c628
    JMP 0x0040c5c6                      ; 0040c629
        ;   XREF to: 0040c5c6 (UNCONDITIONAL_JUMP)  ; LAB_0040c5c6

