; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveQuaternion_FUN_0040b3a0(CQuaternion4f *quat_ptr,char *property_type)
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
;   core_boneguy.cpp_CBoneGuy_archive_FUN_0041d0d0 at 0041d247
;   core_construc.cpp_CConstruct_archive_FUN_00446e30 at 0044701b
;   core_platfrm.cpp_CPlatform_archive_FUN_0053a740 at 0053aa1f
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_f_005d2a6e
;   TerminatedCString s_s_g_g_g_g_005d2a7a
;   TerminatedCString s_Quaternion_00610678
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

    PUSH EBX                            ; 0040b3a0
        ;   Label: core_actor.cpp_archiveQuaternion_FUN_0040b3a0
    PUSH EDI                            ; 0040b3a1
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040b3a2
    CMP dword ptr [0x007c3038],0x1      ; 0040b3a6 | DAT_007c3038
    JNZ 0x0040b400                      ; 0040b3ad
        ;   XREF to: 0040b400 (CONDITIONAL_JUMP)  ; LAB_0040b400
    LEA EDX,[EAX + 0xc]                 ; 0040b3af
    PUSH EDX                            ; 0040b3b2
    LEA EDX,[EAX + 0x8]                 ; 0040b3b3
    PUSH EDX                            ; 0040b3b6
    LEA EDX,[EAX + 0x4]                 ; 0040b3b7
    PUSH EDX                            ; 0040b3ba
    PUSH EAX                            ; 0040b3bb
    PUSH 0x5d2a6e                       ; 0040b3bc | = "%f,%f,%f,%f"
    MOV EBX,dword ptr [0x007c3034]      ; 0040b3c1 | DAT_007c3034
    PUSH EBX                            ; 0040b3c7
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0040b3c8
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x18                        ; 0040b3cd
    CMP EAX,0x4                         ; 0040b3d0
    JNZ 0x0040b3ea                      ; 0040b3d3
        ;   XREF to: 0040b3ea (CONDITIONAL_JUMP)  ; LAB_0040b3ea
    MOV EDI,dword ptr [ESP + 0x10]      ; 0040b3d5
        ;   Label: LAB_0040b3d5
    PUSH EDI                            ; 0040b3d9
    PUSH 0x610678                       ; 0040b3da | = "Quaternion"
    CALL core_actor.cpp_archiveDescription_FUN_0040b110 ; 0040b3df
        ;   XREF to: 0040b110 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDescription_FUN_0040b110(char * property_description, char * property_name)
    ADD ESP,0x8                         ; 0040b3e4
    POP EDI                             ; 0040b3e7
    POP EBX                             ; 0040b3e8
    RET                                 ; 0040b3e9
    PUSH ESI                            ; 0040b3ea
        ;   Label: LAB_0040b3ea
    MOV ESI,dword ptr [ESP + 0x14]      ; 0040b3eb
    PUSH ESI                            ; 0040b3ef
    PUSH 0x610678                       ; 0040b3f0 | = "Quaternion"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b090 ; 0040b3f5
        ;   XREF to: 0040b090 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b090(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040b3fa
    POP ESI                             ; 0040b3fd
    JMP 0x0040b3d5                      ; 0040b3fe
        ;   XREF to: 0040b3d5 (UNCONDITIONAL_JUMP)  ; LAB_0040b3d5
    SUB ESP,0x8                         ; 0040b400
        ;   Label: LAB_0040b400
    FLD float ptr [EAX + 0xc]           ; 0040b403
    FSTP double ptr [ESP]               ; 0040b406
    SUB ESP,0x8                         ; 0040b409
    FLD float ptr [EAX + 0x8]           ; 0040b40c
    FSTP double ptr [ESP]               ; 0040b40f
    SUB ESP,0x8                         ; 0040b412
    FLD float ptr [EAX + 0x4]           ; 0040b415
    FSTP double ptr [ESP]               ; 0040b418
    SUB ESP,0x8                         ; 0040b41b
    FLD float ptr [EAX]                 ; 0040b41e
    FSTP double ptr [ESP]               ; 0040b420
    PUSH 0x6106c0                       ; 0040b423 | DAT_006106c0
    PUSH 0x5d2a7a                       ; 0040b428 | = "%s%g,%g,%g,%g"
    MOV ECX,dword ptr [0x007c3034]      ; 0040b42d | DAT_007c3034
    PUSH ECX                            ; 0040b433
    CALL crt_unknown.c_FUN_005c03c0     ; 0040b434
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x2c                        ; 0040b439
    JMP 0x0040b3d5                      ; 0040b43c
        ;   XREF to: 0040b3d5 (UNCONDITIONAL_JUMP)  ; LAB_0040b3d5

