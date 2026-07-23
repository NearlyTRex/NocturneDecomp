; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30(int param_1,undefined4 param_2,int param_3)
;
;
; XREF[14]:
;   FUN_00535450 at 00535765
;   core_batcreat.cpp_CBatCreature_setup_FUN_00412160 at 00412303
;   core_batman.cpp_CBatman_setup_FUN_004134a0 at 00413642
;   core_bride.cpp_CBride_setup_FUN_0041fc20 at 0041fd3e
;   core_cow.cpp_CZombieCow_setup_FUN_0043bc50 at 0043bcb9
;   core_dracbrid.cpp_CDraculaBride_setup_FUN_00458730 at 0045889a
;   core_gargoyle.cpp_CGargoyle_setup_FUN_004a7450 at 004a75f2
;   core_ghoul.cpp_CGhoul_setup_FUN_004a8dd0 at 004a8eeb
;   core_imp.cpp_CImp_setup_FUN_004bb7d0 at 004bb976
;   core_mobster.cpp_CMobster_setup_FUN_004da290 at 004da429
;   ... and 4 more
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005918a1
;   TerminatedCString s_Can_t_find_part_s_in_mod_005918b6
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   crt_string.c__stricmp_FUN_00564520
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00519b30
        ;   Label: core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30
    PUSH ESI                            ; 00519b31
    PUSH EDI                            ; 00519b32
    PUSH EBP                            ; 00519b33
    MOV EDI,dword ptr [ESP + 0x14]      ; 00519b34
    MOV EBP,dword ptr [ESP + 0x18]      ; 00519b38
    MOV EDX,dword ptr [EDI + 0xc00]     ; 00519b3c
    XOR EBX,EBX                         ; 00519b42
    TEST EDX,EDX                        ; 00519b44
    JLE 0x00519b6a                      ; 00519b46
        ;   XREF to: 00519b6a (CONDITIONAL_JUMP)  ; LAB_00519b6a
    LEA ESI,[EDI + 0xc04]               ; 00519b48
    PUSH ESI                            ; 00519b4e
        ;   Label: LAB_00519b4e
    PUSH EBP                            ; 00519b4f
    CALL crt_string.c__stricmp_FUN_00564520 ; 00519b50
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 00519b55
    TEST EAX,EAX                        ; 00519b58
    JZ 0x00519b7b                       ; 00519b5a
        ;   XREF to: 00519b7b (CONDITIONAL_JUMP)  ; LAB_00519b7b
    INC EBX                             ; 00519b5c
    MOV ECX,dword ptr [EDI + 0xc00]     ; 00519b5d
    ADD ESI,0x60                        ; 00519b63
    CMP EBX,ECX                         ; 00519b66
    JL 0x00519b4e                       ; 00519b68
        ;   XREF to: 00519b4e (CONDITIONAL_JUMP)  ; LAB_00519b4e
    CMP dword ptr [ESP + 0x1c],0x0      ; 00519b6a
        ;   Label: LAB_00519b6a
    JNZ 0x00519b82                      ; 00519b6f
        ;   XREF to: 00519b82 (CONDITIONAL_JUMP)  ; LAB_00519b82
    MOV EAX,0xffffffff                  ; 00519b71
    POP EBP                             ; 00519b76
    POP EDI                             ; 00519b77
    POP ESI                             ; 00519b78
    POP EBX                             ; 00519b79
    RET                                 ; 00519b7a
    MOV EAX,EBX                         ; 00519b7b
        ;   Label: LAB_00519b7b
    POP EBP                             ; 00519b7d
    POP EDI                             ; 00519b7e
    POP ESI                             ; 00519b7f
    POP EBX                             ; 00519b80
    RET                                 ; 00519b81
    ADD EDI,0x2a70                      ; 00519b82
        ;   Label: LAB_00519b82
    PUSH EDI                            ; 00519b88
    PUSH EBP                            ; 00519b89
    MOV ESI,0x5918a1                    ; 00519b8a | = "..\\core\\skeleton.cpp"
    MOV EAX,0x5c8                       ; 00519b8f
    PUSH 0x5918b6                       ; 00519b94 | = "Can't find part %s in model %s"
    MOV dword ptr [0x01cc4800],ESI      ; 00519b99 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 00519b9f | DAT_01cc4804
    CALL FUN_004c8440                   ; 00519ba4
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0xc                         ; 00519ba9
    MOV EAX,0xffffffff                  ; 00519bac
    POP EBP                             ; 00519bb1
    POP EDI                             ; 00519bb2
    POP ESI                             ; 00519bb3
    POP EBX                             ; 00519bb4
    RET                                 ; 00519bb5

