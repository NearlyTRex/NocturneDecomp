; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_script.cpp_RelatedToMainButtonPresses_FUN_00559660()
;
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055e027
;
; Referenced Globals:
;   TerminatedCString s_walk_0064166b
;   TerminatedCString s_backup_00641670
;   TerminatedCString s_run_00641677
;   TerminatedCString s_fire_0064167b
;   TerminatedCString s_useItem_00641680
;   TerminatedCString s_light_00641688
;   TerminatedCString s_draw_0064168e
;   TerminatedCString s_jump_00641693
;
; Called Functions:
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00559660
        ;   Label: core_script.cpp_RelatedToMainButtonPresses_FUN_00559660
    PUSH ESI                            ; 00559661
    MOV EBX,dword ptr [ESP + 0xc]       ; 00559662
    MOV ESI,dword ptr [ESP + 0x10]      ; 00559666
    PUSH 0x64166b                       ; 0055966a | = "walk" | s_walk_0064166b = walk
    PUSH ESI                            ; 0055966f
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 00559670 | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00559675
    TEST EAX,EAX                        ; 00559678
    JNZ 0x00559681                      ; 0055967a | LAB_00559681
        ;   XREF to: 00559681 (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 0055967c
    POP ESI                             ; 0055967e
    POP EBX                             ; 0055967f
    RET                                 ; 00559680
    PUSH 0x641670                       ; 00559681 | = "backup" | s_backup_00641670 = backup
        ;   Label: LAB_00559681
    PUSH ESI                            ; 00559686
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 00559687 | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0055968c
    TEST EAX,EAX                        ; 0055968f
    JNZ 0x00559699                      ; 00559691 | LAB_00559699
        ;   XREF to: 00559699 (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0x4]                 ; 00559693
    POP ESI                             ; 00559696
    POP EBX                             ; 00559697
    RET                                 ; 00559698
    PUSH 0x641677                       ; 00559699 | = "run" | s_run_00641677 = run
        ;   Label: LAB_00559699
    PUSH ESI                            ; 0055969e
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0055969f | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005596a4
    TEST EAX,EAX                        ; 005596a7
    JNZ 0x005596b1                      ; 005596a9 | LAB_005596b1
        ;   XREF to: 005596b1 (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0x8]                 ; 005596ab
    POP ESI                             ; 005596ae
    POP EBX                             ; 005596af
    RET                                 ; 005596b0
    PUSH 0x64167b                       ; 005596b1 | = "fire" | s_fire_0064167b = fire
        ;   Label: LAB_005596b1
    PUSH ESI                            ; 005596b6
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 005596b7 | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005596bc
    TEST EAX,EAX                        ; 005596bf
    JNZ 0x005596c9                      ; 005596c1 | LAB_005596c9
        ;   XREF to: 005596c9 (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0xc]                 ; 005596c3
    POP ESI                             ; 005596c6
    POP EBX                             ; 005596c7
    RET                                 ; 005596c8
    PUSH 0x641680                       ; 005596c9 | = "useItem" | s_useItem_00641680 = useItem
        ;   Label: LAB_005596c9
    PUSH ESI                            ; 005596ce
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 005596cf | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005596d4
    TEST EAX,EAX                        ; 005596d7
    JNZ 0x005596e1                      ; 005596d9 | LAB_005596e1
        ;   XREF to: 005596e1 (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0x10]                ; 005596db
    POP ESI                             ; 005596de
    POP EBX                             ; 005596df
    RET                                 ; 005596e0
    PUSH 0x641688                       ; 005596e1 | = "light" | s_light_00641688 = light
        ;   Label: LAB_005596e1
    PUSH ESI                            ; 005596e6
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 005596e7 | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005596ec
    TEST EAX,EAX                        ; 005596ef
    JNZ 0x005596f9                      ; 005596f1 | LAB_005596f9
        ;   XREF to: 005596f9 (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0x14]                ; 005596f3
    POP ESI                             ; 005596f6
    POP EBX                             ; 005596f7
    RET                                 ; 005596f8
    PUSH 0x64168e                       ; 005596f9 | = "draw" | s_draw_0064168e = draw
        ;   Label: LAB_005596f9
    PUSH ESI                            ; 005596fe
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 005596ff | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00559704
    TEST EAX,EAX                        ; 00559707
    JNZ 0x00559711                      ; 00559709 | LAB_00559711
        ;   XREF to: 00559711 (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0x18]                ; 0055970b
    POP ESI                             ; 0055970e
    POP EBX                             ; 0055970f
    RET                                 ; 00559710
    PUSH 0x641693                       ; 00559711 | = "jump" | s_jump_00641693 = jump
        ;   Label: LAB_00559711
    PUSH ESI                            ; 00559716
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 00559717 | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0055971c
    TEST EAX,EAX                        ; 0055971f
    JNZ 0x00559729                      ; 00559721 | LAB_00559729
        ;   XREF to: 00559729 (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0x1c]                ; 00559723
    POP ESI                             ; 00559726
    POP EBX                             ; 00559727
    RET                                 ; 00559728
    XOR EAX,EAX                         ; 00559729
        ;   Label: LAB_00559729
    POP ESI                             ; 0055972b
    POP EBX                             ; 0055972c
    RET                                 ; 0055972d

