; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(undefined4 *param_1,int param_2,int param_3)
;
;
; XREF[98]:
;   FUN_00414930 at 004149f7
;   FUN_00418a00 at 004192d8
;   FUN_004196b0 at 00419981
;   FUN_0041fe40 at 0041fef3
;   FUN_00439f50 at 0043a15c
;   FUN_00495a20 at 00496b7a
;   FUN_004996b0 at 00499795
;   FUN_004a9270 at 004a93a4
;   FUN_004ab450 at 004ab59c
;   FUN_004b32d0 at 004b34dc
;   ... and 88 more
;
; Referenced Globals:
;   undefined4 s_..\\core\\motion.cpp_0058b2cc+1
;   string s_CMotionController::setDesiredSta_0058b2e0
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   core_motion.cpp_CMotionController_findAndStartTransition_FUN_004e1500
;   core_motion.cpp_CMotionController_reverseTransition_FUN_004e1600
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e16b0
        ;   Label: core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
    PUSH ESI                            ; 004e16b1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004e16b2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004e16b6
    TEST ESI,ESI                        ; 004e16ba
    JL 0x004e16f0                       ; 004e16bc
        ;   XREF to: 004e16f0 (CONDITIONAL_JUMP)  ; LAB_004e16f0
    MOV EAX,dword ptr [EBX]             ; 004e16be
    CMP ESI,dword ptr [EAX]             ; 004e16c0
    JGE 0x004e16fa                      ; 004e16c2
        ;   XREF to: 004e16fa (CONDITIONAL_JUMP)  ; LAB_004e16fa
    CMP ESI,dword ptr [EBX + 0x28]      ; 004e16c4
        ;   Label: LAB_004e16c4
    JZ 0x004e16e6                       ; 004e16c7
        ;   XREF to: 004e16e6 (CONDITIONAL_JUMP)  ; LAB_004e16e6
    CMP dword ptr [EBX + 0x2c],0x0      ; 004e16c9
    JZ 0x004e16dc                       ; 004e16cd
        ;   XREF to: 004e16dc (CONDITIONAL_JUMP)  ; LAB_004e16dc
    CMP dword ptr [EBX + 0x20],0x0      ; 004e16cf
    JZ 0x004e1721                       ; 004e16d3
        ;   XREF to: 004e1721 (CONDITIONAL_JUMP)  ; LAB_004e1721
    MOV dword ptr [EBX + 0x2c],0x0      ; 004e16d5
        ;   Label: LAB_004e16d5
    MOV dword ptr [EBX + 0x24],0x0      ; 004e16dc
        ;   Label: LAB_004e16dc
    MOV dword ptr [EBX + 0x28],ESI      ; 004e16e3
    CMP dword ptr [ESP + 0x14],0x0      ; 004e16e6
        ;   Label: LAB_004e16e6
    JNZ 0x004e172c                      ; 004e16eb
        ;   XREF to: 004e172c (CONDITIONAL_JUMP)  ; LAB_004e172c
    POP ESI                             ; 004e16ed
    POP EBX                             ; 004e16ee
    RET                                 ; 004e16ef
    MOV dword ptr [EBX + 0x28],0xffffffff ; 004e16f0
        ;   Label: LAB_004e16f0
    POP ESI                             ; 004e16f7
    POP EBX                             ; 004e16f8
    RET                                 ; 004e16f9
    PUSH EDI                            ; 004e16fa
        ;   Label: LAB_004e16fa
    MOV ECX,0x58b2cd                    ; 004e16fb | s_..\core\motion.cpp_0058b2cc+1
    MOV EDI,0x274                       ; 004e1700
    PUSH 0x58b2e0                       ; 004e1705 | = "CMotionController::setDesiredState - ..."
    MOV dword ptr [0x01cc4800],ECX      ; 004e170a | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 004e1710 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004e1716
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004e171b
    POP EDI                             ; 004e171e
    JMP 0x004e16c4                      ; 004e171f
        ;   XREF to: 004e16c4 (UNCONDITIONAL_JUMP)  ; LAB_004e16c4
    PUSH EBX                            ; 004e1721
        ;   Label: LAB_004e1721
    CALL core_motion.cpp_CMotionController_reverseTransition_FUN_004e1600 ; 004e1722
        ;   XREF to: 004e1600 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_reverseTransition_FUN_004e1600()
    ADD ESP,0x4                         ; 004e1727
    JMP 0x004e16d5                      ; 004e172a
        ;   XREF to: 004e16d5 (UNCONDITIONAL_JUMP)  ; LAB_004e16d5
    PUSH EBX                            ; 004e172c
        ;   Label: LAB_004e172c
    CALL core_motion.cpp_CMotionController_findAndStartTransition_FUN_004e1500 ; 004e172d
        ;   XREF to: 004e1500 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_findAndStartTransition_FUN_004e1500()
    ADD ESP,0x4                         ; 004e1732
    POP ESI                             ; 004e1735
    POP EBX                             ; 004e1736
    RET                                 ; 004e1737

