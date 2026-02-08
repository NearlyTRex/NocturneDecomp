; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_script_cpp_parseBodyPartMask_FUN_00559730 (CCharacter *character,char *part_names,int *part_mask)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   character
; char *           Stack[0x8]:4   part_names
; int *            Stack[0xc]:4   part_mask
; Local Variables:
; undefined1       Stack[-0x74]:1  local_74
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055c881
;   core_script.cpp_editParameterValue_FUN_00562920 at 00563d8c
;
; Referenced Globals:
;   TerminatedCString s_n_00641698
;   TerminatedCString s_Character_s_model_s_does_006416a4
;   char[2048] g_ScriptErrorBuffer
;
; Called Functions:
;   core_script.cpp_CDeformableModel_getModelFilename_FUN_00567d30
;   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_stdio.c_sscanf_FUN_0060013c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00559730
        ;   Label: core_script.cpp_parseBodyPartMask_FUN_00559730
    PUSH ESI                            ; 00559731
    PUSH EDI                            ; 00559732
    SUB ESP,0x68                        ; 00559733
    MOV EBX,dword ptr [ESP + 0x7c]      ; 00559736
    MOV EDI,dword ptr [ESP + 0x80]      ; 0055973a
    MOV EAX,EDI                         ; 00559741
    LEA ESI,[EDI + 0x78]                ; 00559743
    MOV dword ptr [EAX],0x0             ; 00559746
        ;   Label: LAB_00559746
    ADD EAX,0x4                         ; 0055974c
    CMP EAX,ESI                         ; 0055974f
    JNZ 0x00559746                      ; 00559751
        ;   XREF to: 00559746 (CONDITIONAL_JUMP)  ; LAB_00559746
    MOV EAX,dword ptr [ESP + 0x78]      ; 00559753
    ADD EAX,0x158                       ; 00559757
    PUSH EAX                            ; 0055975c
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 0055975d
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00559762
    MOV ESI,EAX                         ; 00559765
    LEA EAX,[ESP + 0x64]                ; 00559767
        ;   Label: LAB_00559767
    PUSH EAX                            ; 0055976b
    LEA EAX,[ESP + 0x4]                 ; 0055976c
    PUSH EAX                            ; 00559770
    PUSH 0x641698                       ; 00559771 | = " %[^ \t),]%n"
    MOV EDX,0xffffffff                  ; 00559776
    PUSH EBX                            ; 0055977b
    MOV dword ptr [ESP + 0x74],EDX      ; 0055977c
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 00559780
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x10                        ; 00559785
    MOV ECX,dword ptr [ESP + 0x64]      ; 00559788
    CMP ECX,0x1                         ; 0055978c
    JGE 0x0055979d                      ; 0055978f
        ;   XREF to: 0055979d (CONDITIONAL_JUMP)  ; LAB_0055979d
    MOV EAX,0x1                         ; 00559791
    ADD ESP,0x68                        ; 00559796
    POP EDI                             ; 00559799
    POP ESI                             ; 0055979a
    POP EBX                             ; 0055979b
    RET                                 ; 0055979c
    PUSH 0x0                            ; 0055979d
        ;   Label: LAB_0055979d
    LEA EAX,[ESP + 0x4]                 ; 0055979f
    PUSH EAX                            ; 005597a3
    PUSH ESI                            ; 005597a4
    ADD EBX,ECX                         ; 005597a5
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 005597a7
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 005597ac
    TEST EAX,EAX                        ; 005597af
    JL 0x005597bc                       ; 005597b1
        ;   XREF to: 005597bc (CONDITIONAL_JUMP)  ; LAB_005597bc
    MOV dword ptr [EDI + EAX*0x4],0x1   ; 005597b3
    JMP 0x00559767                      ; 005597ba
        ;   XREF to: 00559767 (UNCONDITIONAL_JUMP)  ; LAB_00559767
    MOV EAX,ESP                         ; 005597bc
        ;   Label: LAB_005597bc
    PUSH EAX                            ; 005597be
    PUSH ESI                            ; 005597bf
    CALL core_script.cpp_CDeformableModel_getModelFilename_FUN_00567d30 ; 005597c0
        ;   XREF to: 00567d30 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_CDeformableModel_getModelFilename_FUN_00567d30(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 005597c5
    PUSH EAX                            ; 005597c8
    MOV EAX,dword ptr [ESP + 0x80]      ; 005597c9
    PUSH EAX                            ; 005597d0
    PUSH 0x6416a4                       ; 005597d1 | = "Character %s model %s does not have a..."
    PUSH 0x310eca0                      ; 005597d6 | g_ScriptErrorBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005597db
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x14                        ; 005597e0
    XOR EAX,EAX                         ; 005597e3
    ADD ESP,0x68                        ; 005597e5
    POP EDI                             ; 005597e8
    POP ESI                             ; 005597e9
    POP EBX                             ; 005597ea
    RET                                 ; 005597eb

