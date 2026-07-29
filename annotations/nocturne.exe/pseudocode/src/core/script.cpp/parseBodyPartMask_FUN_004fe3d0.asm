; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_script_cpp_parseBodyPartMask_FUN_004fe3d0(CCharacter *character,char *part_names,int *part_mask)
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
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 00501331
;
; Referenced Globals:
;   TerminatedCString s_n_0058e19a
;   TerminatedCString s_Character_s_model_s_does_0058e1a6
;   undefined4 DAT_01e56420
;
; Called Functions:
;   core_script.cpp_getDeformableModelFilename_FUN_005058b0
;   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
;   crt_stdio.c_sprintf_FUN_00563c90
;   crt_stdio.c_sscanf_FUN_00566b5c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fe3d0
        ;   Label: core_script.cpp_parseBodyPartMask_FUN_004fe3d0
    PUSH ESI                            ; 004fe3d1
    PUSH EDI                            ; 004fe3d2
    SUB ESP,0x68                        ; 004fe3d3
    MOV EBX,dword ptr [ESP + 0x7c]      ; 004fe3d6
    MOV EDI,dword ptr [ESP + 0x80]      ; 004fe3da
    MOV EAX,EDI                         ; 004fe3e1
    LEA ESI,[EDI + 0x78]                ; 004fe3e3
    MOV dword ptr [EAX],0x0             ; 004fe3e6
        ;   Label: LAB_004fe3e6
    ADD EAX,0x4                         ; 004fe3ec
    CMP EAX,ESI                         ; 004fe3ef
    JNZ 0x004fe3e6                      ; 004fe3f1
        ;   XREF to: 004fe3e6 (CONDITIONAL_JUMP)  ; LAB_004fe3e6
    MOV EAX,dword ptr [ESP + 0x78]      ; 004fe3f3
    ADD EAX,0x150                       ; 004fe3f7
    PUSH EAX                            ; 004fe3fc
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020 ; 004fe3fd
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004fe402
    MOV ESI,EAX                         ; 004fe405
    LEA EAX,[ESP + 0x64]                ; 004fe407
        ;   Label: LAB_004fe407
    PUSH EAX                            ; 004fe40b
    LEA EAX,[ESP + 0x4]                 ; 004fe40c
    PUSH EAX                            ; 004fe410
    PUSH 0x58e19a                       ; 004fe411 | = " %[^ \t),]%n"
    MOV EDX,0xffffffff                  ; 004fe416
    PUSH EBX                            ; 004fe41b
    MOV dword ptr [ESP + 0x74],EDX      ; 004fe41c
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 004fe420
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x10                        ; 004fe425
    MOV ECX,dword ptr [ESP + 0x64]      ; 004fe428
    CMP ECX,0x1                         ; 004fe42c
    JGE 0x004fe43d                      ; 004fe42f
        ;   XREF to: 004fe43d (CONDITIONAL_JUMP)  ; LAB_004fe43d
    MOV EAX,0x1                         ; 004fe431
    ADD ESP,0x68                        ; 004fe436
    POP EDI                             ; 004fe439
    POP ESI                             ; 004fe43a
    POP EBX                             ; 004fe43b
    RET                                 ; 004fe43c
    PUSH 0x0                            ; 004fe43d
        ;   Label: LAB_004fe43d
    LEA EAX,[ESP + 0x4]                 ; 004fe43f
    PUSH EAX                            ; 004fe443
    PUSH ESI                            ; 004fe444
    ADD EBX,ECX                         ; 004fe445
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 004fe447
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004fe44c
    TEST EAX,EAX                        ; 004fe44f
    JL 0x004fe45c                       ; 004fe451
        ;   XREF to: 004fe45c (CONDITIONAL_JUMP)  ; LAB_004fe45c
    MOV dword ptr [EDI + EAX*0x4],0x1   ; 004fe453
    JMP 0x004fe407                      ; 004fe45a
        ;   XREF to: 004fe407 (UNCONDITIONAL_JUMP)  ; LAB_004fe407
    MOV EAX,ESP                         ; 004fe45c
        ;   Label: LAB_004fe45c
    PUSH EAX                            ; 004fe45e
    PUSH ESI                            ; 004fe45f
    CALL core_script.cpp_getDeformableModelFilename_FUN_005058b0 ; 004fe460
        ;   XREF to: 005058b0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_getDeformableModelFilename_FUN_005058b0(CDeformableModel * model_ptr)
    ADD ESP,0x4                         ; 004fe465
    PUSH EAX                            ; 004fe468
    MOV EAX,dword ptr [ESP + 0x80]      ; 004fe469
    PUSH EAX                            ; 004fe470
    PUSH 0x58e1a6                       ; 004fe471 | = "Character %s model %s does not have a..."
    PUSH 0x1e56420                      ; 004fe476 | DAT_01e56420
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004fe47b
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x14                        ; 004fe480
    XOR EAX,EAX                         ; 004fe483
    ADD ESP,0x68                        ; 004fe485
    POP EDI                             ; 004fe488
    POP ESI                             ; 004fe489
    POP EBX                             ; 004fe48a
    RET                                 ; 004fe48b

