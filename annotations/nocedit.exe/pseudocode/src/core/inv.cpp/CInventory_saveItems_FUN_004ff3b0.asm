; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_inv_cpp_CInventory_saveItems_FUN_004ff3b0(CInventory *this_ptr,FILE *file_handle)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; FILE *           Stack[0x8]:4   file_handle
;
; XREF[2]:
;   core_inv.cpp_CInventory_save_FUN_004ff210 at 004ff328
;   core_mission.cpp_CDemonMission_writeFile_FUN_00523600 at 00523983
;
; Referenced Globals:
;   TerminatedCString s_s_s_s_0063093f
;   char[104] g_PropertyNamePrefix
;
; Called Functions:
;   core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004ff3b0
        ;   Label: core_inv.cpp_CInventory_saveItems_FUN_004ff3b0
    PUSH EDI                            ; 004ff3b1
    PUSH EBP                            ; 004ff3b2
    MOV EDI,dword ptr [ESP + 0x10]      ; 004ff3b3
    MOV EBP,dword ptr [ESP + 0x14]      ; 004ff3b7
    MOV EDX,dword ptr [EDI + 0x8]       ; 004ff3bb
    XOR ESI,ESI                         ; 004ff3be
    TEST EDX,EDX                        ; 004ff3c0
    JLE 0x004ff3f4                      ; 004ff3c2
        ;   XREF to: 004ff3f4 (CONDITIONAL_JUMP)  ; LAB_004ff3f4
    PUSH EBX                            ; 004ff3c4
    MOV EBX,EDI                         ; 004ff3c5
    MOV ECX,dword ptr [EBX + 0xc]       ; 004ff3c7
        ;   Label: LAB_004ff3c7
    PUSH ECX                            ; 004ff3ca
    PUSH ECX                            ; 004ff3cb
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90 ; 004ff3cc
        ;   XREF to: 00408b90 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004ff3d1
    PUSH EAX                            ; 004ff3d4
    PUSH 0x66e178                       ; 004ff3d5 | g_PropertyNamePrefix
    PUSH 0x63093f                       ; 004ff3da | = "%s%s \"%s\"\n"
    PUSH EBP                            ; 004ff3df
    ADD EBX,0x4                         ; 004ff3e0
    INC ESI                             ; 004ff3e3
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004ff3e4
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    MOV EDX,dword ptr [EDI + 0x8]       ; 004ff3e9
    ADD ESP,0x14                        ; 004ff3ec
    CMP ESI,EDX                         ; 004ff3ef
    JL 0x004ff3c7                       ; 004ff3f1
        ;   XREF to: 004ff3c7 (CONDITIONAL_JUMP)  ; LAB_004ff3c7
    POP EBX                             ; 004ff3f3
    POP EBP                             ; 004ff3f4
        ;   Label: LAB_004ff3f4
    POP EDI                             ; 004ff3f5
    POP ESI                             ; 004ff3f6
    RET                                 ; 004ff3f7

