; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_game_cpp_FUN_004b2930(void)
;
;
; Referenced Globals:
;   undefined4 g_CDocClassInfo.name_hash
;   undefined4 DAT_01cedef4
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01b4d2ec]      ; 004b2930 | g_CDocClassInfo.name_hash
        ;   Label: core_game.cpp_FUN_004b2930
    MOV EAX,[0x01cedef4]                ; 004b2936 | DAT_01cedef4
    PUSH EDX                            ; 004b293b
    MOV ECX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004b293c
    PUSH ECX                            ; 004b2943
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004b2944
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004b2949
    TEST EAX,EAX                        ; 004b294c
    JZ 0x004b2965                       ; 004b294e
        ;   XREF to: 004b2965 (CONDITIONAL_JUMP)  ; LAB_004b2965
    FLD float ptr [EAX + 0x259b0]       ; 004b2950
    FLDZ                                ; 004b2956
    FCOMPP                              ; 004b2958
    FNSTSW AX                           ; 004b295a
    SAHF                                ; 004b295c
    JNC 0x004b2965                      ; 004b295d
        ;   XREF to: 004b2965 (CONDITIONAL_JUMP)  ; LAB_004b2965
    MOV EAX,0x1                         ; 004b295f
    RET                                 ; 004b2964
    XOR EAX,EAX                         ; 004b2965
        ;   Label: LAB_004b2965
    RET                                 ; 004b2967

