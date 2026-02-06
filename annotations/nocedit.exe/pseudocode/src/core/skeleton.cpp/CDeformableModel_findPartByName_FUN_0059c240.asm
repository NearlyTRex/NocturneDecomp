; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240 (CDeformableModel *this_ptr,char *part_name,int error_if_not_found)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   part_name
; int              Stack[0xc]:4   error_if_not_found
;
; XREF[14]:
;   core_batcreat.cpp_CBatCreature_setup_FUN_00415150 at 00415361
;   core_batman.cpp_CBatman_setup_FUN_00416510 at 00416720
;   core_bride.cpp_CBride_setup_FUN_00423810 at 0042392e
;   core_cow.cpp_CZombieCow_setup_FUN_004441b0 at 004442e0
;   core_dracbrid.cpp_DraculaBrideModels_FUN_004840b0 at 0048421a
;   core_gargoyle.cpp_CGargoyle_setup_FUN_004e45e0 at 004e4782
;   core_ghoul.cpp_CGhoul_setup_FUN_004e6160 at 004e6342
;   core_imp.cpp_CImp_setup_FUN_004f9910 at 004f9ab6
;   core_mobster.cpp_CMobster_setup_FUN_00525340 at 005255a0
;   core_script.cpp_parseBodyPartMask_FUN_00559730 at 005597a7
;   ... and 4 more
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_0064ea83
;   TerminatedCString s_Can_t_find_part_s_in_mod_0064ea98
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059c240
        ;   Label: core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
    PUSH ESI                            ; 0059c241
    PUSH EDI                            ; 0059c242
    PUSH EBP                            ; 0059c243
    MOV EDI,dword ptr [ESP + 0x14]      ; 0059c244
    MOV EBP,dword ptr [ESP + 0x18]      ; 0059c248
    MOV EDX,dword ptr [EDI + 0x7140]    ; 0059c24c
    XOR EBX,EBX                         ; 0059c252
    TEST EDX,EDX                        ; 0059c254
    JLE 0x0059c27a                      ; 0059c256
        ;   XREF to: 0059c27a (CONDITIONAL_JUMP)  ; LAB_0059c27a
    LEA ESI,[EDI + 0x7144]              ; 0059c258
    PUSH ESI                            ; 0059c25e
        ;   Label: LAB_0059c25e
    PUSH EBP                            ; 0059c25f
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0059c260
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0059c265
    TEST EAX,EAX                        ; 0059c268
    JZ 0x0059c28b                       ; 0059c26a
        ;   XREF to: 0059c28b (CONDITIONAL_JUMP)  ; LAB_0059c28b
    INC EBX                             ; 0059c26c
    MOV ECX,dword ptr [EDI + 0x7140]    ; 0059c26d
    ADD ESI,0x60                        ; 0059c273
    CMP EBX,ECX                         ; 0059c276
    JL 0x0059c25e                       ; 0059c278
        ;   XREF to: 0059c25e (CONDITIONAL_JUMP)  ; LAB_0059c25e
    CMP dword ptr [ESP + 0x1c],0x0      ; 0059c27a
        ;   Label: LAB_0059c27a
    JNZ 0x0059c292                      ; 0059c27f
        ;   XREF to: 0059c292 (CONDITIONAL_JUMP)  ; LAB_0059c292
    MOV EAX,0xffffffff                  ; 0059c281
    POP EBP                             ; 0059c286
    POP EDI                             ; 0059c287
    POP ESI                             ; 0059c288
    POP EBX                             ; 0059c289
    RET                                 ; 0059c28a
    MOV EAX,EBX                         ; 0059c28b
        ;   Label: LAB_0059c28b
    POP EBP                             ; 0059c28d
    POP EDI                             ; 0059c28e
    POP ESI                             ; 0059c28f
    POP EBX                             ; 0059c290
    RET                                 ; 0059c291
    ADD EDI,0x8fb0                      ; 0059c292
        ;   Label: LAB_0059c292
    PUSH EDI                            ; 0059c298
    PUSH EBP                            ; 0059c299
    MOV ESI,0x64ea83                    ; 0059c29a | = "..\\core\\skeleton.cpp"
    MOV EAX,0x5c8                       ; 0059c29f
    PUSH 0x64ea98                       ; 0059c2a4 | = "Can't find part %s in model %s"
    MOV dword ptr [0x02f0ca48],ESI      ; 0059c2a9 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0059c2af | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0059c2b4
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 0059c2b9
    MOV EAX,0xffffffff                  ; 0059c2bc
    POP EBP                             ; 0059c2c1
    POP EDI                             ; 0059c2c2
    POP ESI                             ; 0059c2c3
    POP EBX                             ; 0059c2c4
    RET                                 ; 0059c2c5

