; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_special_cpp_clearScreen_FUN_0055b1f0(void)
;
;
; XREF[29]:
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0043b7f0 at 0043ba15
;   core_game.cpp_CGame_rollCredits_FUN_004be430 at 004be5d0
;   core_game.cpp_FUN_004b5190 at 004b5284
;   core_game.cpp_FUN_004b60c0 at 004b6101
;   core_game.cpp_FUN_004bbf70 at 004bc0cf
;   core_game.cpp_FUN_004bcbf0 at 004bcde7
;   core_game.cpp_FUN_004bdc1e at 004bdc59
;   core_game.cpp_FUN_004bdfb0 at 004be011
;   core_level.cpp_FUN_004e1480 at 004e15c3
;   core_main.c_FUN_004e45e0 at 004e45f0
;   ... and 19 more
;
; Referenced Globals:
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_006141c0
;   undefined8 DAT_0061c78c
;   undefined4 DAT_0061c794
;   undefined4 DAT_01c2a38c
;   undefined4 DAT_01c2a390
;   undefined4 DAT_01c37788
;
; Called Functions:
;   engine_special.cpp_clear_FUN_0055fd40
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0055b1f0
        ;   Label: engine_special.cpp_clearScreen_FUN_0055b1f0
    PUSH EDI                            ; 0055b1f1
    CMP dword ptr [0x01c37788],0x0      ; 0055b1f2 | DAT_01c37788
    JZ 0x0055b203                       ; 0055b1f9
        ;   XREF to: 0055b203 (CONDITIONAL_JUMP)  ; LAB_0055b203
    CALL engine_special.cpp_clear_FUN_0055fd40 ; 0055b1fb
        ;   XREF to: 0055fd40 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_clear_FUN_0055fd40()
    POP EDI                             ; 0055b200
    POP ESI                             ; 0055b201
    RET                                 ; 0055b202
    PUSHAD                              ; 0055b203
        ;   Label: LAB_0055b203
    CLD                                 ; 0055b204
    PUSH DS                             ; 0055b205
    POP ES                              ; 0055b206
    MOV EAX,0x0                         ; 0055b207
    MOV EBX,0x0                         ; 0055b20c
    MOV EAX,[0x006141b8]                ; 0055b211 | DAT_006141b8
        ;   Label: LAB_0055b211
    IMUL dword ptr [0x006141c0]         ; 0055b216 | DAT_006141c0
    SHR EAX,0x3                         ; 0055b21c
    MOV ECX,EAX                         ; 0055b21f
    MOV EDI,dword ptr [EBX*0x4 + 0x1c2a38c] ; 0055b221 | DAT_01c2a38c | DAT_01c2a390
    FLD double ptr [0x0061c78c]         ; 0055b228 | DAT_0061c78c
    FST double ptr [EDI]                ; 0055b22e
        ;   Label: LAB_0055b22e
    FST double ptr [EDI + 0x8]          ; 0055b230
    FST double ptr [EDI + 0x10]         ; 0055b233
    FST double ptr [EDI + 0x18]         ; 0055b236
    ADD EDI,0x20                        ; 0055b239
    SUB ECX,0x20                        ; 0055b23c
    JG 0x0055b22e                       ; 0055b23f
        ;   XREF to: 0055b22e (CONDITIONAL_JUMP)  ; LAB_0055b22e
    FSTP double ptr [0x0061c794]        ; 0055b241 | DAT_0061c794
    INC EBX                             ; 0055b247
    CMP EBX,dword ptr [0x006141bc]      ; 0055b248 | DAT_006141bc
    JL 0x0055b211                       ; 0055b24e
        ;   XREF to: 0055b211 (CONDITIONAL_JUMP)  ; LAB_0055b211
    POPAD                               ; 0055b250
    POP EDI                             ; 0055b251
    POP ESI                             ; 0055b252
    RET                                 ; 0055b253

