; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_env_c_getenv_FUN_005c3050(char *name)
;
; Parameters:
; char *           Stack[0x4]:4   name
;
; XREF[8]:
;   core_game.cpp_CGame_processHotkeys_FUN_004d1a80 at 004d2134
;   core_game.cpp_FUN_004ce580 at 004cf12c
;   core_game.cpp_FUN_004cf5e0 at 004cf810
;   core_netgame.cpp_CNetGame_init_FUN_0052c520 at 0052c55a
;   crt_unknown.c_FUN_005c6c7c at 005c6c94
;   crt_unknown.c_FUN_005c9428 at 005c942d
;   unkafter_2d.cpp_FUN_005cdce0 at 005cdcec
;   wincore_winrun.cpp_FUN_005b38bc at 005b391f
;
; Referenced Globals:
;   undefined4 DAT_02c9f6d4
;
; Called Functions:
;   crt_unknown.c_FUN_005c9ea0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c3050
        ;   Label: crt_env.c_getenv_FUN_005c3050
    PUSH ESI                            ; 005c3051
    PUSH EDI                            ; 005c3052
    PUSH EBP                            ; 005c3053
    MOV EBP,dword ptr [ESP + 0x14]      ; 005c3054
    MOV ESI,dword ptr [0x02c9f6d4]      ; 005c3058 | DAT_02c9f6d4
    TEST ESI,ESI                        ; 005c305e
    JZ 0x005c30a4                       ; 005c3060
        ;   XREF to: 005c30a4 (CONDITIONAL_JUMP)  ; LAB_005c30a4
    TEST EBP,EBP                        ; 005c3062
    JZ 0x005c30a4                       ; 005c3064
        ;   XREF to: 005c30a4 (CONDITIONAL_JUMP)  ; LAB_005c30a4
    MOV EDI,EBP                         ; 005c3066
    PUSH ES                             ; 005c3068
    MOV AX,DS                           ; 005c3069
    MOV ES,AX                           ; 005c306b
    SUB ECX,ECX                         ; 005c306d
    DEC ECX                             ; 005c306f
    XOR EAX,EAX                         ; 005c3070
    SCASB.REPNE ES:EDI                  ; 005c3072
    NOT ECX                             ; 005c3074
    DEC ECX                             ; 005c3076
    POP ES                              ; 005c3077
    MOV EDI,ECX                         ; 005c3078
    JMP 0x005c309e                      ; 005c307a
        ;   XREF to: 005c309e (UNCONDITIONAL_JUMP)  ; LAB_005c309e
    PUSH EDI                            ; 005c307c
        ;   Label: LAB_005c307c
    PUSH EBP                            ; 005c307d
    PUSH EBX                            ; 005c307e
    CALL crt_unknown.c_FUN_005c9ea0     ; 005c307f
        ;   XREF to: 005c9ea0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c9ea0()
    ADD ESP,0xc                         ; 005c3084
    TEST EAX,EAX                        ; 005c3087
    JNZ 0x005c309b                      ; 005c3089
        ;   XREF to: 005c309b (CONDITIONAL_JUMP)  ; LAB_005c309b
    CMP byte ptr [EDI + EBX*0x1],0x3d   ; 005c308b
    JNZ 0x005c309b                      ; 005c308f
        ;   XREF to: 005c309b (CONDITIONAL_JUMP)  ; LAB_005c309b
    LEA EAX,[EDI + 0x1]                 ; 005c3091
    ADD EAX,EBX                         ; 005c3094
    POP EBP                             ; 005c3096
    POP EDI                             ; 005c3097
    POP ESI                             ; 005c3098
    POP EBX                             ; 005c3099
    RET                                 ; 005c309a
    ADD ESI,0x4                         ; 005c309b
        ;   Label: LAB_005c309b
    MOV EBX,dword ptr [ESI]             ; 005c309e
        ;   Label: LAB_005c309e
    TEST EBX,EBX                        ; 005c30a0
    JNZ 0x005c307c                      ; 005c30a2
        ;   XREF to: 005c307c (CONDITIONAL_JUMP)  ; LAB_005c307c
    XOR EAX,EAX                         ; 005c30a4
        ;   Label: LAB_005c30a4
    POP EBP                             ; 005c30a6
    POP EDI                             ; 005c30a7
    POP ESI                             ; 005c30a8
    POP EBX                             ; 005c30a9
    RET                                 ; 005c30aa

