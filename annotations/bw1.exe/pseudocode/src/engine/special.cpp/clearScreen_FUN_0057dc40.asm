; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_special_cpp_clearScreen_FUN_0057dc40(void)
;
;
; XREF[26]:
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044ceb0 at 0044d0d5
;   core_dlight.cpp_FUN_00466220 at 0046622f
;   core_game.cpp_CGame_rollCredits_FUN_004d8e50 at 004d8fda
;   core_game.cpp_FUN_004ce580 at 004ce669
;   core_game.cpp_FUN_004cf530 at 004cf571
;   core_game.cpp_FUN_004cf5e0 at 004d027e
;   core_game.cpp_FUN_004d77d0 at 004d7999
;   core_game.cpp_FUN_004d8700 at 004d8739
;   core_game.cpp_FUN_004d8a90 at 004d8b03
;   core_level.cpp_FUN_004fe840 at 004fe983
;   ... and 16 more
;
; Referenced Globals:
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_0061b4a0
;   undefined8 DAT_00623ddc
;   undefined4 DAT_00623de4
;   undefined4 DAT_01c4354c
;   undefined4 DAT_01c43550
;   undefined4 DAT_01c50948
;
; Called Functions:
;   engine_special.cpp_clear_FUN_00582790
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0057dc40
        ;   Label: engine_special.cpp_clearScreen_FUN_0057dc40
    PUSH EDI                            ; 0057dc41
    CMP dword ptr [0x01c50948],0x0      ; 0057dc42 | DAT_01c50948
    JZ 0x0057dc53                       ; 0057dc49
        ;   XREF to: 0057dc53 (CONDITIONAL_JUMP)  ; LAB_0057dc53
    CALL engine_special.cpp_clear_FUN_00582790 ; 0057dc4b
        ;   XREF to: 00582790 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_clear_FUN_00582790()
    POP EDI                             ; 0057dc50
    POP ESI                             ; 0057dc51
    RET                                 ; 0057dc52
    PUSHAD                              ; 0057dc53
        ;   Label: LAB_0057dc53
    CLD                                 ; 0057dc54
    PUSH DS                             ; 0057dc55
    POP ES                              ; 0057dc56
    MOV EAX,0x0                         ; 0057dc57
    MOV EBX,0x0                         ; 0057dc5c
    MOV EAX,[0x0061b498]                ; 0057dc61 | DAT_0061b498
        ;   Label: LAB_0057dc61
    IMUL dword ptr [0x0061b4a0]         ; 0057dc66 | DAT_0061b4a0
    SHR EAX,0x3                         ; 0057dc6c
    MOV ECX,EAX                         ; 0057dc6f
    MOV EDI,dword ptr [EBX*0x4 + 0x1c4354c] ; 0057dc71 | DAT_01c4354c | DAT_01c43550
    FLD double ptr [0x00623ddc]         ; 0057dc78 | DAT_00623ddc
    FST double ptr [EDI]                ; 0057dc7e
        ;   Label: LAB_0057dc7e
    FST double ptr [EDI + 0x8]          ; 0057dc80
    FST double ptr [EDI + 0x10]         ; 0057dc83
    FST double ptr [EDI + 0x18]         ; 0057dc86
    ADD EDI,0x20                        ; 0057dc89
    SUB ECX,0x20                        ; 0057dc8c
    JG 0x0057dc7e                       ; 0057dc8f
        ;   XREF to: 0057dc7e (CONDITIONAL_JUMP)  ; LAB_0057dc7e
    FSTP double ptr [0x00623de4]        ; 0057dc91 | DAT_00623de4
    INC EBX                             ; 0057dc97
    CMP EBX,dword ptr [0x0061b49c]      ; 0057dc98 | DAT_0061b49c
    JL 0x0057dc61                       ; 0057dc9e
        ;   XREF to: 0057dc61 (CONDITIONAL_JUMP)  ; LAB_0057dc61
    POPAD                               ; 0057dca0
    POP EDI                             ; 0057dca1
    POP ESI                             ; 0057dca2
    RET                                 ; 0057dca3

