; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_stranger_cpp_FUN_005357d0(int param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; Referenced Globals:
;   undefined1* switchdataD_0053577c = 005357ee
;   double DOUBLE_005954cf = 0.25
;   undefined4 DAT_005b9354
;   undefined4 DAT_01c775ec
;   undefined4 DAT_01c77850
;
; Called Functions:
;   core_charactr.cpp_FUN_004259f0
;   core_game.cpp_CGame_slamDT_FUN_004a5f00
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   core_stranger.cpp_FUN_00535900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005357d0
        ;   Label: core_stranger.cpp_FUN_005357d0
    SUB ESP,0x8                         ; 005357d1
    MOV EBX,dword ptr [ESP + 0x10]      ; 005357d4
    PUSH dword ptr [ESP + 0x14]         ; 005357d8
    PUSH EBX                            ; 005357dc
    CALL core_charactr.cpp_FUN_004259f0 ; 005357dd
        ;   XREF to: 004259f0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004259f0()
    ADD ESP,0x8                         ; 005357e2
    TEST EAX,EAX                        ; 005357e5
    JNZ 0x0053585b                      ; 005357e7
        ;   XREF to: 0053585b (CONDITIONAL_JUMP)  ; LAB_0053585b
    ADD ESP,0x8                         ; 005357e9
    POP EBX                             ; 005357ec
    RET                                 ; 005357ed
    MOV ESI,0x1                         ; 005357ee
        ;   Label: caseD_7
    CMP dword ptr [EBX + 0x1faa0],0x7   ; 005357f3
        ;   Label: caseD_18
    JNZ 0x00535892                      ; 005357fa
        ;   XREF to: 00535892 (CONDITIONAL_JUMP)  ; LAB_00535892
    FLD float ptr [ESP + 0x18]          ; 00535800
        ;   Label: LAB_00535800
    FMUL double ptr [0x005954cf]        ; 00535804 | DOUBLE_005954cf
    FSTP float ptr [ESP + 0x4]          ; 0053580a
    PUSH dword ptr [ESP + 0x4]          ; 0053580e
    PUSH EBX                            ; 00535812
    CALL core_stranger.cpp_FUN_00535900 ; 00535813
        ;   XREF to: 00535900 (UNCONDITIONAL_CALL)  ; undefined core_stranger.cpp_FUN_00535900()
    ADD ESP,0x8                         ; 00535818
    PUSH dword ptr [ESP + 0x4]          ; 0053581b
    PUSH EBX                            ; 0053581f
    CALL core_stranger.cpp_FUN_00535900 ; 00535820
        ;   XREF to: 00535900 (UNCONDITIONAL_CALL)  ; undefined core_stranger.cpp_FUN_00535900()
    ADD ESP,0x8                         ; 00535825
    PUSH dword ptr [ESP + 0x4]          ; 00535828
    PUSH EBX                            ; 0053582c
    CALL core_stranger.cpp_FUN_00535900 ; 0053582d
        ;   XREF to: 00535900 (UNCONDITIONAL_CALL)  ; undefined core_stranger.cpp_FUN_00535900()
    ADD ESP,0x8                         ; 00535832
    PUSH dword ptr [ESP + 0x4]          ; 00535835
    PUSH EBX                            ; 00535839
        ;   Label: LAB_00535839
    CALL core_stranger.cpp_FUN_00535900 ; 0053583a
        ;   XREF to: 00535900 (UNCONDITIONAL_CALL)  ; undefined core_stranger.cpp_FUN_00535900()
    ADD ESP,0x8                         ; 0053583f
    MOV ECX,dword ptr [0x005b9354]      ; 00535842 | DAT_005b9354
    PUSH dword ptr [ESP + 0x8]          ; 00535848
    PUSH ECX                            ; 0053584c | DAT_01c775ec
    CALL core_game.cpp_CGame_slamDT_FUN_004a5f00 ; 0053584d
        ;   XREF to: 004a5f00 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_slamDT_FUN_004a5f00()
    ADD ESP,0x8                         ; 00535852
    POP ESI                             ; 00535855
    ADD ESP,0x8                         ; 00535856
    POP EBX                             ; 00535859
    RET                                 ; 0053585a
    PUSH ESI                            ; 0053585b
        ;   Label: LAB_0053585b
    MOV EAX,[0x005b9354]                ; 0053585c | DAT_005b9354
    FLD float ptr [EAX + 0x264]         ; 00535861 | DAT_01c77850
    LEA EAX,[EBX + 0x150]               ; 00535867
    PUSH EAX                            ; 0053586d
    FSTP float ptr [ESP + 0xc]          ; 0053586e
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 00535872
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00535877
    XOR ESI,ESI                         ; 0053587a
    SUB EAX,0x7                         ; 0053587c
    ADD ESP,0x4                         ; 0053587f
    CMP EAX,0x14                        ; 00535882
    JA 0x005357f3                       ; 00535885
        ;   XREF to: 005357f3 (CONDITIONAL_JUMP)  ; caseD_1a
    JMP dword ptr [EAX*0x4 + 0x53577c]  ; 0053588b | caseD_1b | caseD_1a | switchdataD_0053577c
        ;   Label: switchD
    TEST ESI,ESI                        ; 00535892
        ;   Label: LAB_00535892
    JNZ 0x00535800                      ; 00535894
        ;   XREF to: 00535800 (CONDITIONAL_JUMP)  ; LAB_00535800
    PUSH dword ptr [ESP + 0x18]         ; 0053589a
    JMP 0x00535839                      ; 0053589e
        ;   XREF to: 00535839 (UNCONDITIONAL_JUMP)  ; LAB_00535839

