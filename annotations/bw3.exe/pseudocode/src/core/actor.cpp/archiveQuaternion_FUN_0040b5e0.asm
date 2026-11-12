; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveQuaternion_FUN_0040b5e0(CQuaternion4f *quat_ptr,char *property_type)
;
; Parameters:
; CQuaternion4f *  Stack[0x4]:4   quat_ptr
; char *           Stack[0x8]:4   property_type
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[3]:
;   core_boneguy.cpp_CBoneGuy_archive_FUN_00419070 at 004191e7
;   core_construc.cpp_CConstruct_archive_FUN_00443ca0 at 00443e8b
;   core_platfrm.cpp_CPlatform_archive_FUN_00512420 at 0051270f
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_f_005b5aba
;   TerminatedCString s_s_g_g_g_g_005b5ac6
;   TerminatedCString s_Quaternion_005f0948
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

    PUSH EBX                            ; 0040b5e0
        ;   Label: core_actor.cpp_archiveQuaternion_FUN_0040b5e0
    PUSH EDI                            ; 0040b5e1
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040b5e2
    CMP dword ptr [0x007df9b8],0x1      ; 0040b5e6 | DAT_007df9b8
    JNZ 0x0040b640                      ; 0040b5ed
        ;   XREF to: 0040b640 (CONDITIONAL_JUMP)  ; LAB_0040b640
    LEA EDX,[EAX + 0xc]                 ; 0040b5ef
    PUSH EDX                            ; 0040b5f2
    LEA EDX,[EAX + 0x8]                 ; 0040b5f3
    PUSH EDX                            ; 0040b5f6
    LEA EDX,[EAX + 0x4]                 ; 0040b5f7
    PUSH EDX                            ; 0040b5fa
    PUSH EAX                            ; 0040b5fb
    PUSH 0x5b5aba                       ; 0040b5fc | = "%f,%f,%f,%f"
    MOV EBX,dword ptr [0x007df9b4]      ; 0040b601 | DAT_007df9b4
    PUSH EBX                            ; 0040b607
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0040b608
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0x18                        ; 0040b60d
    CMP EAX,0x4                         ; 0040b610
    JNZ 0x0040b62a                      ; 0040b613
        ;   XREF to: 0040b62a (CONDITIONAL_JUMP)  ; LAB_0040b62a
    MOV EDI,dword ptr [ESP + 0x10]      ; 0040b615
        ;   Label: LAB_0040b615
    PUSH EDI                            ; 0040b619
    PUSH 0x5f0948                       ; 0040b61a | = "Quaternion"
    CALL core_actor.cpp_archiveDescription_FUN_0040b350 ; 0040b61f
        ;   XREF to: 0040b350 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDescription_FUN_0040b350(char * property_description, char * property_name)
    ADD ESP,0x8                         ; 0040b624
    POP EDI                             ; 0040b627
    POP EBX                             ; 0040b628
    RET                                 ; 0040b629
    PUSH ESI                            ; 0040b62a
        ;   Label: LAB_0040b62a
    MOV ESI,dword ptr [ESP + 0x14]      ; 0040b62b
    PUSH ESI                            ; 0040b62f
    PUSH 0x5f0948                       ; 0040b630 | = "Quaternion"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0 ; 0040b635
        ;   XREF to: 0040b2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040b63a
    POP ESI                             ; 0040b63d
    JMP 0x0040b615                      ; 0040b63e
        ;   XREF to: 0040b615 (UNCONDITIONAL_JUMP)  ; LAB_0040b615
    SUB ESP,0x8                         ; 0040b640
        ;   Label: LAB_0040b640
    FLD float ptr [EAX + 0xc]           ; 0040b643
    FSTP double ptr [ESP]               ; 0040b646
    SUB ESP,0x8                         ; 0040b649
    FLD float ptr [EAX + 0x8]           ; 0040b64c
    FSTP double ptr [ESP]               ; 0040b64f
    SUB ESP,0x8                         ; 0040b652
    FLD float ptr [EAX + 0x4]           ; 0040b655
    FSTP double ptr [ESP]               ; 0040b658
    SUB ESP,0x8                         ; 0040b65b
    FLD float ptr [EAX]                 ; 0040b65e
    FSTP double ptr [ESP]               ; 0040b660
    PUSH 0x5f0990                       ; 0040b663 | DAT_005f0990
    PUSH 0x5b5ac6                       ; 0040b668 | = "%s%g,%g,%g,%g"
    MOV ECX,dword ptr [0x007df9b4]      ; 0040b66d | DAT_007df9b4
    PUSH ECX                            ; 0040b673
    CALL crt_unknown.c_FUN_005a3140     ; 0040b674
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x2c                        ; 0040b679
    JMP 0x0040b615                      ; 0040b67c
        ;   XREF to: 0040b615 (UNCONDITIONAL_JUMP)  ; LAB_0040b615

