; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_env_c_getenv_FUN_005bac90(char *name)
;
; Parameters:
; char *           Stack[0x4]:4   name
;
; XREF[8]:
;   core_game.cpp_CGame_runGameSession_FUN_004b6170 at 004b63b4
;   core_game.cpp_FUN_004b5190 at 004b5d52
;   core_game.cpp_FUN_004b82e0 at 004b8a82
;   core_netgame.cpp_CNetGame_init_FUN_0050b340 at 0050b37a
;   crt_unknown.c_FUN_005be9ac at 005be9c4
;   crt_unknown.c_FUN_005c1168 at 005c116d
;   crt_unknown.c_FUN_005c59e0 at 005c59ec
;   wincore_winrun.cpp_getComputerAndUserName_FUN_0058fdec at 0058fe4f
;
; Referenced Globals:
;   undefined4 DAT_026807e4
;
; Called Functions:
;   crt_unknown.c_FUN_005c1b50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bac90
        ;   Label: crt_env.c_getenv_FUN_005bac90
    PUSH ESI                            ; 005bac91
    PUSH EDI                            ; 005bac92
    PUSH EBP                            ; 005bac93
    MOV EBP,dword ptr [ESP + 0x14]      ; 005bac94
    MOV ESI,dword ptr [0x026807e4]      ; 005bac98 | DAT_026807e4
    TEST ESI,ESI                        ; 005bac9e
    JZ 0x005bace4                       ; 005baca0
        ;   XREF to: 005bace4 (CONDITIONAL_JUMP)  ; LAB_005bace4
    TEST EBP,EBP                        ; 005baca2
    JZ 0x005bace4                       ; 005baca4
        ;   XREF to: 005bace4 (CONDITIONAL_JUMP)  ; LAB_005bace4
    MOV EDI,EBP                         ; 005baca6
    PUSH ES                             ; 005baca8
    MOV AX,DS                           ; 005baca9
    MOV ES,AX                           ; 005bacab
    SUB ECX,ECX                         ; 005bacad
    DEC ECX                             ; 005bacaf
    XOR EAX,EAX                         ; 005bacb0
    SCASB.REPNE ES:EDI                  ; 005bacb2
    NOT ECX                             ; 005bacb4
    DEC ECX                             ; 005bacb6
    POP ES                              ; 005bacb7
    MOV EDI,ECX                         ; 005bacb8
    JMP 0x005bacde                      ; 005bacba
        ;   XREF to: 005bacde (UNCONDITIONAL_JUMP)  ; LAB_005bacde
    PUSH EDI                            ; 005bacbc
        ;   Label: LAB_005bacbc
    PUSH EBP                            ; 005bacbd
    PUSH EBX                            ; 005bacbe
    CALL crt_unknown.c_FUN_005c1b50     ; 005bacbf
        ;   XREF to: 005c1b50 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1b50()
    ADD ESP,0xc                         ; 005bacc4
    TEST EAX,EAX                        ; 005bacc7
    JNZ 0x005bacdb                      ; 005bacc9
        ;   XREF to: 005bacdb (CONDITIONAL_JUMP)  ; LAB_005bacdb
    CMP byte ptr [EDI + EBX*0x1],0x3d   ; 005baccb
    JNZ 0x005bacdb                      ; 005baccf
        ;   XREF to: 005bacdb (CONDITIONAL_JUMP)  ; LAB_005bacdb
    LEA EAX,[EDI + 0x1]                 ; 005bacd1
    ADD EAX,EBX                         ; 005bacd4
    POP EBP                             ; 005bacd6
    POP EDI                             ; 005bacd7
    POP ESI                             ; 005bacd8
    POP EBX                             ; 005bacd9
    RET                                 ; 005bacda
    ADD ESI,0x4                         ; 005bacdb
        ;   Label: LAB_005bacdb
    MOV EBX,dword ptr [ESI]             ; 005bacde
        ;   Label: LAB_005bacde
    TEST EBX,EBX                        ; 005bace0
    JNZ 0x005bacbc                      ; 005bace2
        ;   XREF to: 005bacbc (CONDITIONAL_JUMP)  ; LAB_005bacbc
    XOR EAX,EAX                         ; 005bace4
        ;   Label: LAB_005bace4
    POP EBP                             ; 005bace6
    POP EDI                             ; 005bace7
    POP ESI                             ; 005bace8
    POP EBX                             ; 005bace9
    RET                                 ; 005bacea

