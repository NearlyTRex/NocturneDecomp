; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_004cbf20(int param_1)
;
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[8]:
;   core_game.cpp_CGame_rollCredits_FUN_004d8e50 at 004d90e7
;   core_game.cpp_FUN_004ce580 at 004ce636
;   core_game.cpp_FUN_004d77d0 at 004d7d33
;   core_menu.cpp_FUN_0050b470 at 0050b4b4
;   core_menu.cpp_FUN_0050ba70 at 0050bab9
;   core_menu.cpp_FUN_0050c990 at 0050c9e0
;   core_menu.cpp_configureGraphicsOptions_FUN_0050aa90 at 0050ab43
;   core_menu.cpp_showMainGameMenu_FUN_0050cc90 at 0050cd67
;
; Referenced Globals:
;   undefined4 DAT_005e136c
;   undefined4 DAT_005e1374
;   undefined4 DAT_005e137c
;   undefined4 DAT_005e1384
;   undefined4 DAT_0061d968
;   undefined4 DAT_01c43530
;   undefined4 DAT_01cd0c3c
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;   wincore_winrun.cpp_getTime_FUN_005b2420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cbf20
        ;   Label: core_game.cpp_FUN_004cbf20
    PUSH ESI                            ; 004cbf21
    PUSH EDI                            ; 004cbf22
    PUSH EBP                            ; 004cbf23
    MOV EBP,ESP                         ; 004cbf24
    SUB ESP,0x8                         ; 004cbf26
    AND ESP,0xfffffff8                  ; 004cbf29
    MOV EBX,dword ptr [EBP + 0x14]      ; 004cbf2c
    MOV EDX,dword ptr [EBX + 0x280]     ; 004cbf2f
    CMP EDX,0x1                         ; 004cbf35
    JNZ 0x004cc070                      ; 004cbf38
        ;   XREF to: 004cc070 (CONDITIONAL_JUMP)  ; LAB_004cc070
    FLD float ptr [EBX + 0x284]         ; 004cbf3e
    FLDZ                                ; 004cbf44
    FCOMPP                              ; 004cbf46
    FNSTSW AX                           ; 004cbf48
    SAHF                                ; 004cbf4a
    JC 0x004cbf57                       ; 004cbf4b
        ;   XREF to: 004cbf57 (CONDITIONAL_JUMP)  ; LAB_004cbf57
    MOV dword ptr [EBX + 0x284],0x3f800000 ; 004cbf4d
    FLD float ptr [EBX + 0x284]         ; 004cbf57
        ;   Label: LAB_004cbf57
    FSUBR double ptr [0x005e136c]       ; 004cbf5d | DAT_005e136c
    FST float ptr [EBX + 0x208]         ; 004cbf63
    FST double ptr [ESP]                ; 004cbf69
    FCOMP double ptr [0x005e1374]       ; 004cbf6c | DAT_005e1374
    FNSTSW AX                           ; 004cbf72
    SAHF                                ; 004cbf74
    JNC 0x004cc053                      ; 004cbf75
        ;   XREF to: 004cc053 (CONDITIONAL_JUMP)  ; LAB_004cc053
    MOV dword ptr [EBX + 0x208],0x3dcccccd ; 004cbf7b
    FLD float ptr [EBX + 0x294]         ; 004cbf85
        ;   Label: LAB_004cbf85
    FSUBR float ptr [EBX + 0x284]       ; 004cbf8b
    MOV ESI,dword ptr [EBX + 0x280]     ; 004cbf91
    FSTP float ptr [EBX + 0x284]        ; 004cbf97
    CMP ESI,0x1                         ; 004cbf9d
    JNZ 0x004cbfc5                      ; 004cbfa0
        ;   XREF to: 004cbfc5 (CONDITIONAL_JUMP)  ; LAB_004cbfc5
    FLD float ptr [EBX + 0x284]         ; 004cbfa2
    FLDZ                                ; 004cbfa8
    FCOMPP                              ; 004cbfaa
    FNSTSW AX                           ; 004cbfac
    SAHF                                ; 004cbfae
    JC 0x004cbfc5                       ; 004cbfaf
        ;   XREF to: 004cbfc5 (CONDITIONAL_JUMP)  ; LAB_004cbfc5
    MOV dword ptr [EBX + 0x280],0x0     ; 004cbfb1
    MOV dword ptr [EBX + 0x208],0x3f800000 ; 004cbfbb
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 004cbfc5
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005b2420()
        ;   Label: LAB_004cbfc5
    MOV EDX,EAX                         ; 004cbfca
    MOV EDI,dword ptr [EBX + 0x28c]     ; 004cbfcc
    MOV ECX,0x12                        ; 004cbfd2
    SUB EDX,EDI                         ; 004cbfd7
    MOV ESI,EAX                         ; 004cbfd9
    MOV EAX,EDX                         ; 004cbfdb
    SAR EDX,0x1f                        ; 004cbfdd
    IDIV ECX                            ; 004cbfe0
    MOV dword ptr [EBX + 0x290],EAX     ; 004cbfe2
    TEST EAX,EAX                        ; 004cbfe8
    JL 0x004cc088                       ; 004cbfea
        ;   XREF to: 004cc088 (CONDITIONAL_JUMP)  ; LAB_004cc088
    MOV EDX,dword ptr [EBX + 0x290]     ; 004cbff0
        ;   Label: LAB_004cbff0
    MOV dword ptr [EBX + 0x28c],ESI     ; 004cbff6
    CMP EDX,0x4000                      ; 004cbffc
    JLE 0x004cc00e                      ; 004cc002
        ;   XREF to: 004cc00e (CONDITIONAL_JUMP)  ; LAB_004cc00e
    MOV dword ptr [EBX + 0x290],0x4000  ; 004cc004
    FILD dword ptr [EBX + 0x290]        ; 004cc00e
        ;   Label: LAB_004cc00e
    FMUL float ptr [EBX + 0x208]        ; 004cc014
    MOV ECX,dword ptr [0x01cd0c3c]      ; 004cc01a | DAT_01cd0c3c
    CALL crt_math.c_round_FUN_005c03a0  ; 004cc020
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [EBX + 0x290]       ; 004cc025
    TEST ECX,ECX                        ; 004cc02b
    JNZ 0x004cc097                      ; 004cc02d
        ;   XREF to: 004cc097 (CONDITIONAL_JUMP)  ; LAB_004cc097
    FILD dword ptr [EBX + 0x290]        ; 004cc02f
        ;   Label: LAB_004cc02f
    MOV EAX,dword ptr [EBX + 0x290]     ; 004cc035
    FMUL double ptr [0x005e1384]        ; 004cc03b | DAT_005e1384
    MOV [0x01c43530],EAX                ; 004cc041 | DAT_01c43530
    FSTP float ptr [EBX + 0x294]        ; 004cc046
    MOV ESP,EBP                         ; 004cc04c
    POP EBP                             ; 004cc04e
    POP EDI                             ; 004cc04f
    POP ESI                             ; 004cc050
    POP EBX                             ; 004cc051
    RET                                 ; 004cc052
    FLD1                                ; 004cc053
        ;   Label: LAB_004cc053
    FCOMP double ptr [ESP]              ; 004cc055
    FNSTSW AX                           ; 004cc058
    SAHF                                ; 004cc05a
    JNC 0x004cbf85                      ; 004cc05b
        ;   XREF to: 004cbf85 (CONDITIONAL_JUMP)  ; LAB_004cbf85
    MOV dword ptr [EBX + 0x208],0x3f800000 ; 004cc061
    JMP 0x004cbf85                      ; 004cc06b
        ;   XREF to: 004cbf85 (UNCONDITIONAL_JUMP)  ; LAB_004cbf85
    CMP EDX,0x2                         ; 004cc070
        ;   Label: LAB_004cc070
    JZ 0x004cbf85                       ; 004cc073
        ;   XREF to: 004cbf85 (CONDITIONAL_JUMP)  ; LAB_004cbf85
    MOV dword ptr [EBX + 0x208],0x3f800000 ; 004cc079
    JMP 0x004cbf85                      ; 004cc083
        ;   XREF to: 004cbf85 (UNCONDITIONAL_JUMP)  ; LAB_004cbf85
    MOV dword ptr [EBX + 0x290],0x0     ; 004cc088
        ;   Label: LAB_004cc088
    JMP 0x004cbff0                      ; 004cc092
        ;   XREF to: 004cbff0 (UNCONDITIONAL_JUMP)  ; LAB_004cbff0
    FLD float ptr [0x005e137c]          ; 004cc097 | DAT_005e137c
        ;   Label: LAB_004cc097
    FDIV float ptr [0x0061d968]         ; 004cc09d | DAT_0061d968
    FMUL float ptr [EBX + 0x208]        ; 004cc0a3
    CALL crt_math.c_round_FUN_005c03a0  ; 004cc0a9
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [EBX + 0x290]       ; 004cc0ae
    JMP 0x004cc02f                      ; 004cc0b4
        ;   XREF to: 004cc02f (UNCONDITIONAL_JUMP)  ; LAB_004cc02f

