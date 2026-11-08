; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fc0d0(undefined4 *param_1,int param_2,int param_3)
;
;
; XREF[88]:
;   FUN_00410030 at 004100f1
;   FUN_004179b0 at 004183e3
;   FUN_00418930 at 00418c8d
;   FUN_004192d0 at 00419342
;   FUN_00419b40 at 0041a523
;   FUN_0041a810 at 0041a886
;   FUN_00425da0 at 00426f91
;   FUN_00427bc0 at 0042824b
;   FUN_00428a80 at 00428b45
;   FUN_00429090 at 00429170
;   ... and 78 more
;
; Referenced Globals:
;   TerminatedCString s_core_motion_cpp_005c9cb4
;   TerminatedCString s_CMotionController_setDes_005c9cc7
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;   FUN_004fbf20
;   FUN_004fc010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fc0d0
        ;   Label: FUN_004fc0d0
    PUSH ESI                            ; 004fc0d1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004fc0d2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004fc0d6
    TEST ESI,ESI                        ; 004fc0da
    JL 0x004fc110                       ; 004fc0dc
        ;   XREF to: 004fc110 (CONDITIONAL_JUMP)  ; LAB_004fc110
    MOV EAX,dword ptr [EBX]             ; 004fc0de
    CMP ESI,dword ptr [EAX]             ; 004fc0e0
    JGE 0x004fc11a                      ; 004fc0e2
        ;   XREF to: 004fc11a (CONDITIONAL_JUMP)  ; LAB_004fc11a
    CMP ESI,dword ptr [EBX + 0x28]      ; 004fc0e4
        ;   Label: LAB_004fc0e4
    JZ 0x004fc106                       ; 004fc0e7
        ;   XREF to: 004fc106 (CONDITIONAL_JUMP)  ; LAB_004fc106
    CMP dword ptr [EBX + 0x2c],0x0      ; 004fc0e9
    JZ 0x004fc0fc                       ; 004fc0ed
        ;   XREF to: 004fc0fc (CONDITIONAL_JUMP)  ; LAB_004fc0fc
    CMP dword ptr [EBX + 0x20],0x0      ; 004fc0ef
    JZ 0x004fc141                       ; 004fc0f3
        ;   XREF to: 004fc141 (CONDITIONAL_JUMP)  ; LAB_004fc141
    MOV dword ptr [EBX + 0x2c],0x0      ; 004fc0f5
        ;   Label: LAB_004fc0f5
    MOV dword ptr [EBX + 0x24],0x0      ; 004fc0fc
        ;   Label: LAB_004fc0fc
    MOV dword ptr [EBX + 0x28],ESI      ; 004fc103
    CMP dword ptr [ESP + 0x14],0x0      ; 004fc106
        ;   Label: LAB_004fc106
    JNZ 0x004fc14c                      ; 004fc10b
        ;   XREF to: 004fc14c (CONDITIONAL_JUMP)  ; LAB_004fc14c
    POP ESI                             ; 004fc10d
    POP EBX                             ; 004fc10e
    RET                                 ; 004fc10f
    MOV dword ptr [EBX + 0x28],0xffffffff ; 004fc110
        ;   Label: LAB_004fc110
    POP ESI                             ; 004fc117
    POP EBX                             ; 004fc118
    RET                                 ; 004fc119
    PUSH EDI                            ; 004fc11a
        ;   Label: LAB_004fc11a
    MOV ECX,0x5c9cb4                    ; 004fc11b | = "..\\core\\motion.cpp"
    MOV EDI,0x2bd                       ; 004fc120
    PUSH 0x5c9cc7                       ; 004fc125 | = "CMotionController::setDesiredState - ..."
    MOV dword ptr [0x01d71de0],ECX      ; 004fc12a | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 004fc130 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004fc136
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004fc13b
    POP EDI                             ; 004fc13e
    JMP 0x004fc0e4                      ; 004fc13f
        ;   XREF to: 004fc0e4 (UNCONDITIONAL_JUMP)  ; LAB_004fc0e4
    PUSH EBX                            ; 004fc141
        ;   Label: LAB_004fc141
    CALL FUN_004fc010                   ; 004fc142
        ;   XREF to: 004fc010 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc010()
    ADD ESP,0x4                         ; 004fc147
    JMP 0x004fc0f5                      ; 004fc14a
        ;   XREF to: 004fc0f5 (UNCONDITIONAL_JUMP)  ; LAB_004fc0f5
    PUSH EBX                            ; 004fc14c
        ;   Label: LAB_004fc14c
    CALL FUN_004fbf20                   ; 004fc14d
        ;   XREF to: 004fbf20 (UNCONDITIONAL_CALL)  ; undefined FUN_004fbf20()
    ADD ESP,0x4                         ; 004fc152
    POP ESI                             ; 004fc155
    POP EBX                             ; 004fc156
    RET                                 ; 004fc157

