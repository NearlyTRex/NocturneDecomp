; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel *this_ptr,char *part_name,int error_if_not_found)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   part_name
; int              Stack[0xc]:4   error_if_not_found
;
; XREF[16]:
;   core_batcreat.cpp_CBatCreature_setup_FUN_004116f0 at 00411893
;   core_batman.cpp_CBatman_setup_FUN_00412be0 at 00412d82
;   core_bride.cpp_CBride_setup_FUN_0041d9c0 at 0041dade
;   core_charactr.cpp_FUN_004247f0 at 004249be
;   core_conveyor.cpp_CConstruct_setup_FUN_00436be0 at 00436d3f
;   core_cow.cpp_CZombieCow_setup_FUN_00439150 at 004391b9
;   core_dracbrid.cpp_CDraculaBride_setup_FUN_00462c90 at 00462dfa
;   core_gargoyle.cpp_CGargoyle_setup_FUN_004bfbe0 at 004bfd82
;   core_ghoul.cpp_CGhoul_setup_FUN_004c1710 at 004c182b
;   core_imp.cpp_CImp_setup_FUN_004d6660 at 004d6806
;   ... and 6 more
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005e7025
;   TerminatedCString s_Can_t_find_part_s_in_mod_005e703a
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_string.c__stricmp_FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00543100
        ;   Label: core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100
    PUSH ESI                            ; 00543101
    PUSH EDI                            ; 00543102
    PUSH EBP                            ; 00543103
    MOV EDI,dword ptr [ESP + 0x14]      ; 00543104
    MOV EBP,dword ptr [ESP + 0x18]      ; 00543108
    MOV EDX,dword ptr [EDI + 0xc00]     ; 0054310c
    XOR EBX,EBX                         ; 00543112
    TEST EDX,EDX                        ; 00543114
    JLE 0x0054313a                      ; 00543116
        ;   XREF to: 0054313a (CONDITIONAL_JUMP)  ; LAB_0054313a
    LEA ESI,[EDI + 0xc04]               ; 00543118
    PUSH ESI                            ; 0054311e
        ;   Label: LAB_0054311e
    PUSH EBP                            ; 0054311f
    CALL crt_string.c__stricmp_FUN_005b8130 ; 00543120
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00543125
    TEST EAX,EAX                        ; 00543128
    JZ 0x0054314b                       ; 0054312a
        ;   XREF to: 0054314b (CONDITIONAL_JUMP)  ; LAB_0054314b
    INC EBX                             ; 0054312c
    MOV ECX,dword ptr [EDI + 0xc00]     ; 0054312d
    ADD ESI,0x60                        ; 00543133
    CMP EBX,ECX                         ; 00543136
    JL 0x0054311e                       ; 00543138
        ;   XREF to: 0054311e (CONDITIONAL_JUMP)  ; LAB_0054311e
    CMP dword ptr [ESP + 0x1c],0x0      ; 0054313a
        ;   Label: LAB_0054313a
    JNZ 0x00543152                      ; 0054313f
        ;   XREF to: 00543152 (CONDITIONAL_JUMP)  ; LAB_00543152
    MOV EAX,0xffffffff                  ; 00543141
    POP EBP                             ; 00543146
    POP EDI                             ; 00543147
    POP ESI                             ; 00543148
    POP EBX                             ; 00543149
    RET                                 ; 0054314a
    MOV EAX,EBX                         ; 0054314b
        ;   Label: LAB_0054314b
    POP EBP                             ; 0054314d
    POP EDI                             ; 0054314e
    POP ESI                             ; 0054314f
    POP EBX                             ; 00543150
    RET                                 ; 00543151
    ADD EDI,0x2a70                      ; 00543152
        ;   Label: LAB_00543152
    PUSH EDI                            ; 00543158
    PUSH EBP                            ; 00543159
    MOV ESI,0x5e7025                    ; 0054315a | = "..\\core\\skeleton.cpp"
    MOV EAX,0x5d7                       ; 0054315f
    PUSH 0x5e703a                       ; 00543164 | = "Can't find part %s in model %s"
    MOV dword ptr [0x01d046a0],ESI      ; 00543169 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0054316f | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00543174
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0xc                         ; 00543179
    MOV EAX,0xffffffff                  ; 0054317c
    POP EBP                             ; 00543181
    POP EDI                             ; 00543182
    POP ESI                             ; 00543183
    POP EBX                             ; 00543184
    RET                                 ; 00543185

