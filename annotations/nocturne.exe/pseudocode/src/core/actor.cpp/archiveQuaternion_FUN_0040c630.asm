; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveQuaternion_FUN_0040c630(CQuaternion4f *quat_ptr,char *property_type)
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
; XREF[2]:
;   core_boneguy.cpp_FUN_00419ce0 at 00419e57
;   core_platfrm.cpp_CPlatform_archive_FUN_004f6fa0 at 004f727f
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_f_00577c46
;   TerminatedCString s_s_g_g_g_g_00577c52
;   TerminatedCString s_Quaternion_005acc48
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

    PUSH EBX                            ; 0040c630
        ;   Label: core_actor.cpp_archiveQuaternion_FUN_0040c630
    PUSH EDI                            ; 0040c631
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040c632
    CMP dword ptr [0x00763e88],0x1      ; 0040c636 | DAT_00763e88
    JNZ 0x0040c690                      ; 0040c63d
        ;   XREF to: 0040c690 (CONDITIONAL_JUMP)  ; LAB_0040c690
    LEA EDX,[EAX + 0xc]                 ; 0040c63f
    PUSH EDX                            ; 0040c642
    LEA EDX,[EAX + 0x8]                 ; 0040c643
    PUSH EDX                            ; 0040c646
    LEA EDX,[EAX + 0x4]                 ; 0040c647
    PUSH EDX                            ; 0040c64a
    PUSH EAX                            ; 0040c64b
    PUSH 0x577c46                       ; 0040c64c | = "%f,%f,%f,%f"
    MOV EBX,dword ptr [0x00763e84]      ; 0040c651 | DAT_00763e84
    PUSH EBX                            ; 0040c657
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0040c658
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x18                        ; 0040c65d
    CMP EAX,0x4                         ; 0040c660
    JNZ 0x0040c67a                      ; 0040c663
        ;   XREF to: 0040c67a (CONDITIONAL_JUMP)  ; LAB_0040c67a
    MOV EDI,dword ptr [ESP + 0x10]      ; 0040c665
        ;   Label: LAB_0040c665
    PUSH EDI                            ; 0040c669
    PUSH 0x5acc48                       ; 0040c66a | = "Quaternion"
    CALL core_actor.cpp_archiveDescription_FUN_0040c3a0 ; 0040c66f
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDescription_FUN_0040c3a0(char * property_description, char * property_name)
    ADD ESP,0x8                         ; 0040c674
    POP EDI                             ; 0040c677
    POP EBX                             ; 0040c678
    RET                                 ; 0040c679
    PUSH ESI                            ; 0040c67a
        ;   Label: LAB_0040c67a
    MOV ESI,dword ptr [ESP + 0x14]      ; 0040c67b
    PUSH ESI                            ; 0040c67f
    PUSH 0x5acc48                       ; 0040c680 | = "Quaternion"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040c320 ; 0040c685
        ;   XREF to: 0040c320 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040c320(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040c68a
    POP ESI                             ; 0040c68d
    JMP 0x0040c665                      ; 0040c68e
        ;   XREF to: 0040c665 (UNCONDITIONAL_JUMP)  ; LAB_0040c665
    SUB ESP,0x8                         ; 0040c690
        ;   Label: LAB_0040c690
    FLD float ptr [EAX + 0xc]           ; 0040c693
    FSTP double ptr [ESP]               ; 0040c696
    SUB ESP,0x8                         ; 0040c699
    FLD float ptr [EAX + 0x8]           ; 0040c69c
    FSTP double ptr [ESP]               ; 0040c69f
    SUB ESP,0x8                         ; 0040c6a2
    FLD float ptr [EAX + 0x4]           ; 0040c6a5
    FSTP double ptr [ESP]               ; 0040c6a8
    SUB ESP,0x8                         ; 0040c6ab
    FLD float ptr [EAX]                 ; 0040c6ae
    FSTP double ptr [ESP]               ; 0040c6b0
    PUSH 0x5acc90                       ; 0040c6b3 | DAT_005acc90
    PUSH 0x577c52                       ; 0040c6b8 | = "%s%g,%g,%g,%g"
    MOV ECX,dword ptr [0x00763e84]      ; 0040c6bd | DAT_00763e84
    PUSH ECX                            ; 0040c6c3
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0040c6c4
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x2c                        ; 0040c6c9
    JMP 0x0040c665                      ; 0040c6cc
        ;   XREF to: 0040c665 (UNCONDITIONAL_JUMP)  ; LAB_0040c665

