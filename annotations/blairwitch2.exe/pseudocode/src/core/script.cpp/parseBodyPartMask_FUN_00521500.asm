; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_script_cpp_parseBodyPartMask_FUN_00521500(CCharacter *character,char *part_names,int *part_mask)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   character
; char *           Stack[0x8]:4   part_names
; int *            Stack[0xc]:4   part_mask
; Local Variables:
; undefined        Stack[-0x74]:1  local_74
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_script.cpp_FUN_00522350 at 00524c49
;
; Referenced Globals:
;   TerminatedCString s_n_005e2e00
;   TerminatedCString s_Character_s_model_s_does_005e2e0c
;   undefined4 DAT_01e65100
;
; Called Functions:
;   core_script.cpp_getDeformableModelFilename_FUN_0052a690
;   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
;   crt_stdio.c_sscanf_FUN_005ba8cc
;   crt_unknown.c_sprintf_FUN_005b7790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00521500
        ;   Label: core_script.cpp_parseBodyPartMask_FUN_00521500
    PUSH ESI                            ; 00521501
    PUSH EDI                            ; 00521502
    SUB ESP,0x68                        ; 00521503
    MOV EBX,dword ptr [ESP + 0x7c]      ; 00521506
    MOV EDI,dword ptr [ESP + 0x80]      ; 0052150a
    MOV EAX,EDI                         ; 00521511
    LEA ESI,[EDI + 0x78]                ; 00521513
    MOV dword ptr [EAX],0x0             ; 00521516
        ;   Label: LAB_00521516
    ADD EAX,0x4                         ; 0052151c
    CMP EAX,ESI                         ; 0052151f
    JNZ 0x00521516                      ; 00521521
        ;   XREF to: 00521516 (CONDITIONAL_JUMP)  ; LAB_00521516
    MOV EAX,dword ptr [ESP + 0x78]      ; 00521523
    ADD EAX,0x2b4                       ; 00521527
    PUSH EAX                            ; 0052152c
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810 ; 0052152d
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00521532
    MOV ESI,EAX                         ; 00521535
    LEA EAX,[ESP + 0x64]                ; 00521537
        ;   Label: LAB_00521537
    PUSH EAX                            ; 0052153b
    LEA EAX,[ESP + 0x4]                 ; 0052153c
    PUSH EAX                            ; 00521540
    PUSH 0x5e2e00                       ; 00521541 | = " %[^ \t),]%n"
    MOV EDX,0xffffffff                  ; 00521546
    PUSH EBX                            ; 0052154b
    MOV dword ptr [ESP + 0x74],EDX      ; 0052154c
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 00521550
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0x10                        ; 00521555
    MOV ECX,dword ptr [ESP + 0x64]      ; 00521558
    CMP ECX,0x1                         ; 0052155c
    JGE 0x0052156d                      ; 0052155f
        ;   XREF to: 0052156d (CONDITIONAL_JUMP)  ; LAB_0052156d
    MOV EAX,0x1                         ; 00521561
    ADD ESP,0x68                        ; 00521566
    POP EDI                             ; 00521569
    POP ESI                             ; 0052156a
    POP EBX                             ; 0052156b
    RET                                 ; 0052156c
    PUSH 0x0                            ; 0052156d
        ;   Label: LAB_0052156d
    LEA EAX,[ESP + 0x4]                 ; 0052156f
    PUSH EAX                            ; 00521573
    PUSH ESI                            ; 00521574
    ADD EBX,ECX                         ; 00521575
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 00521577
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0052157c
    TEST EAX,EAX                        ; 0052157f
    JL 0x0052158c                       ; 00521581
        ;   XREF to: 0052158c (CONDITIONAL_JUMP)  ; LAB_0052158c
    MOV dword ptr [EDI + EAX*0x4],0x1   ; 00521583
    JMP 0x00521537                      ; 0052158a
        ;   XREF to: 00521537 (UNCONDITIONAL_JUMP)  ; LAB_00521537
    MOV EAX,ESP                         ; 0052158c
        ;   Label: LAB_0052158c
    PUSH EAX                            ; 0052158e
    PUSH ESI                            ; 0052158f
    CALL core_script.cpp_getDeformableModelFilename_FUN_0052a690 ; 00521590
        ;   XREF to: 0052a690 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_getDeformableModelFilename_FUN_0052a690(CDeformableModel * model_ptr)
    ADD ESP,0x4                         ; 00521595
    PUSH EAX                            ; 00521598
    MOV EAX,dword ptr [ESP + 0x80]      ; 00521599
    PUSH EAX                            ; 005215a0
    PUSH 0x5e2e0c                       ; 005215a1 | = "Character %s model %s does not have a..."
    PUSH 0x1e65100                      ; 005215a6 | DAT_01e65100
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 005215ab
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x14                        ; 005215b0
    XOR EAX,EAX                         ; 005215b3
    ADD ESP,0x68                        ; 005215b5
    POP EDI                             ; 005215b8
    POP ESI                             ; 005215b9
    POP EBX                             ; 005215ba
    RET                                 ; 005215bb

