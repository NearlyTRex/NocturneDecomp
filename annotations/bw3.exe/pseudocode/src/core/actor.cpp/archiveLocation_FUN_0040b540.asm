; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveLocation_FUN_0040b540(CLocation *location_ptr,char *property_name)
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
;   core_actor.cpp_CDemonActor_archive_FUN_0040c280 at 0040c291
;
; Referenced Globals:
;   TerminatedCString s_d_f_f_f_005b5aa0
;   TerminatedCString s_s_d_g_g_g_005b5aac
;   TerminatedCString s_s_4D_location_005f0938
;   undefined1 DAT_005f0990
;   undefined4 DAT_007df9b4
;   undefined4 DAT_007df9b8
;
; Called Functions:
;   core_actor.cpp_archiveDescription_FUN_0040b350
;   core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0
;   crt_stdio.c_fscanf_FUN_005a3230
;   crt_unknown.c_FUN_005a3140
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0040b540
        ;   Label: core_actor.cpp_archiveLocation_FUN_0040b540
    PUSH EDI                            ; 0040b541
    PUSH EBP                            ; 0040b542
    MOV EAX,dword ptr [ESP + 0x10]      ; 0040b543
    CMP dword ptr [0x007df9b8],0x1      ; 0040b547 | DAT_007df9b8
    JNZ 0x0040b5a0                      ; 0040b54e
        ;   XREF to: 0040b5a0 (CONDITIONAL_JUMP)  ; LAB_0040b5a0
    LEA EDX,[EAX + 0x8]                 ; 0040b550
    PUSH EDX                            ; 0040b553
    LEA EDX,[EAX + 0x4]                 ; 0040b554
    PUSH EDX                            ; 0040b557
    PUSH EAX                            ; 0040b558
    ADD EAX,0xc                         ; 0040b559
    PUSH EAX                            ; 0040b55c
    PUSH 0x5b5aa0                       ; 0040b55d | = "%d,%f,%f,%f"
    MOV ESI,dword ptr [0x007df9b4]      ; 0040b562 | DAT_007df9b4
    PUSH ESI                            ; 0040b568
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0040b569
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0x18                        ; 0040b56e
    CMP EAX,0x4                         ; 0040b571
    JNZ 0x0040b58c                      ; 0040b574
        ;   XREF to: 0040b58c (CONDITIONAL_JUMP)  ; LAB_0040b58c
    MOV EBP,dword ptr [ESP + 0x14]      ; 0040b576
        ;   Label: LAB_0040b576
    PUSH EBP                            ; 0040b57a
    PUSH 0x5f0938                       ; 0040b57b | = "4D location"
    CALL core_actor.cpp_archiveDescription_FUN_0040b350 ; 0040b580
        ;   XREF to: 0040b350 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDescription_FUN_0040b350(char * property_description, char * property_name)
    ADD ESP,0x8                         ; 0040b585
    POP EBP                             ; 0040b588
    POP EDI                             ; 0040b589
    POP ESI                             ; 0040b58a
    RET                                 ; 0040b58b
    MOV EDI,dword ptr [ESP + 0x14]      ; 0040b58c
        ;   Label: LAB_0040b58c
    PUSH EDI                            ; 0040b590
    PUSH 0x5f0938                       ; 0040b591 | = "4D location"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0 ; 0040b596
        ;   XREF to: 0040b2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040b59b
    JMP 0x0040b576                      ; 0040b59e
        ;   XREF to: 0040b576 (UNCONDITIONAL_JUMP)  ; LAB_0040b576
    PUSH EBX                            ; 0040b5a0
        ;   Label: LAB_0040b5a0
    SUB ESP,0x8                         ; 0040b5a1
    FLD float ptr [EAX + 0x8]           ; 0040b5a4
    FSTP double ptr [ESP]               ; 0040b5a7
    SUB ESP,0x8                         ; 0040b5aa
    FLD float ptr [EAX + 0x4]           ; 0040b5ad
    FSTP double ptr [ESP]               ; 0040b5b0
    SUB ESP,0x8                         ; 0040b5b3
    FLD float ptr [EAX]                 ; 0040b5b6
    FSTP double ptr [ESP]               ; 0040b5b8
    MOV ECX,dword ptr [EAX + 0xc]       ; 0040b5bb
    PUSH ECX                            ; 0040b5be
    PUSH 0x5f0990                       ; 0040b5bf | DAT_005f0990
    PUSH 0x5b5aac                       ; 0040b5c4 | = "%s%d,%g,%g,%g"
    MOV EBX,dword ptr [0x007df9b4]      ; 0040b5c9 | DAT_007df9b4
    PUSH EBX                            ; 0040b5cf
    CALL crt_unknown.c_FUN_005a3140     ; 0040b5d0
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x28                        ; 0040b5d5
    POP EBX                             ; 0040b5d8
    JMP 0x0040b576                      ; 0040b5d9
        ;   XREF to: 0040b576 (UNCONDITIONAL_JUMP)  ; LAB_0040b576

