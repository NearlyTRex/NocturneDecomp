; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_set_cpp_FUN_005090f0(CDemonSet *param_1,undefined4 param_2,undefined4 param_3,int param_4)
;
;
; XREF[2]:
;   core_game.cpp_CGame_processCheatCodes_FUN_004a0550 at 004a0b61
;   core_game.cpp_FUN_0049f930 at 0049fb07
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_init_FUN_00440010
;   core_dcamera.cpp_FUN_004401b0
;   core_set.cpp_CDemonSet_setCameraView_FUN_005088f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005090f0
        ;   Label: core_set.cpp_FUN_005090f0
    PUSH ESI                            ; 005090f1
    MOV EDX,dword ptr [ESP + 0x18]      ; 005090f2
    PUSH EDX                            ; 005090f6
    PUSH 0x1fb8508                      ; 005090f7
    CALL core_dcamera.cpp_CDemonCamera_init_FUN_00440010 ; 005090fc
        ;   XREF to: 00440010 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_init_FUN_00440010(CDemonCamera * this_ptr, int screen_height)
    ADD ESP,0x8                         ; 00509101
    MOV ECX,dword ptr [ESP + 0x14]      ; 00509104
    PUSH ECX                            ; 00509108
    MOV EBX,dword ptr [ESP + 0x14]      ; 00509109
    PUSH EBX                            ; 0050910d
    PUSH 0x1fb8508                      ; 0050910e
    CALL core_dcamera.cpp_FUN_004401b0  ; 00509113
        ;   XREF to: 004401b0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_004401b0()
    ADD ESP,0xc                         ; 00509118
    MOV EAX,dword ptr [ESP + 0xc]       ; 0050911b
    MOV ESI,dword ptr [EAX + 0x15aabc]  ; 0050911f
    PUSH ESI                            ; 00509125
    PUSH EAX                            ; 00509126
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_005088f0 ; 00509127
        ;   XREF to: 005088f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_005088f0(CDemonSet * this_ptr, int index)
    ADD ESP,0x8                         ; 0050912c
    POP ESI                             ; 0050912f
    POP EBX                             ; 00509130
    RET                                 ; 00509131

