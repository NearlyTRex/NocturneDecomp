; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * core_netgame_cpp_CNetGame_ctor_FUN_004e9860(int param_1)
;
;
; Referenced Globals:
;   string s_MyComputer_0058ba8e
;   undefined4 s_yComputer_0058ba8e+1
;   undefined4 s_Computer_0058ba8e+2
;   undefined4 s_omputer_0058ba8e+3
;   undefined4 DAT_005a0e20
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005644a7
;   support_trisock.cpp_invalidateSocket_FUN_00548ed0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004e9860
        ;   Label: core_netgame.cpp_CNetGame_ctor_FUN_004e9860
    PUSH EDI                            ; 004e9861
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e9862
    PUSH 0x5a0e20                       ; 004e9866 | DAT_005a0e20
    PUSH 0x2                            ; 004e986b
    ADD EDX,0x20                        ; 004e986d
    PUSH EDX                            ; 004e9870
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 004e9871
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 004e9876
    ADD EAX,0x150                       ; 004e9879
    PUSH EAX                            ; 004e987e
    CALL support_trisock.cpp_invalidateSocket_FUN_00548ed0 ; 004e987f
        ;   XREF to: 00548ed0 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_invalidateSocket_FUN_00548ed0()
    LEA EDX,[EAX + 0xfffffe90]          ; 004e9884
    MOV dword ptr [EDX],0x0             ; 004e988a
    MOV dword ptr [EDX + 0x4],0x0       ; 004e9890
    MOV ESI,0x58ba8e                    ; 004e9897 | = "MyComputer"
    MOV dword ptr [EDX + 0x1c],0x0      ; 004e989c
    ADD ESP,0x4                         ; 004e98a3
    MOV dword ptr [EDX + 0x110],0xffffffff ; 004e98a6
    LEA EDI,[EDX + 0x8]                 ; 004e98b0
    MOV dword ptr [EDX + 0x114],0xffffffff ; 004e98b3
    PUSH EDI                            ; 004e98bd
    MOV AL,byte ptr [ESI]               ; 004e98be | = "MyComputer" | s_Computer_0058ba8e+2
        ;   Label: LAB_004e98be
    MOV byte ptr [EDI],AL               ; 004e98c0
    CMP AL,0x0                          ; 004e98c2
    JZ 0x004e98d6                       ; 004e98c4
        ;   XREF to: 004e98d6 (CONDITIONAL_JUMP)  ; LAB_004e98d6
    MOV AL,byte ptr [ESI + 0x1]         ; 004e98c6 | s_yComputer_0058ba8e+1 | s_omputer_0058ba8e+3
    ADD ESI,0x2                         ; 004e98c9
    MOV byte ptr [EDI + 0x1],AL         ; 004e98cc
    ADD EDI,0x2                         ; 004e98cf
    CMP AL,0x0                          ; 004e98d2
    JNZ 0x004e98be                      ; 004e98d4
        ;   XREF to: 004e98be (CONDITIONAL_JUMP)  ; LAB_004e98be
    POP EDI                             ; 004e98d6
        ;   Label: LAB_004e98d6
    MOV EAX,EDX                         ; 004e98d7
    MOV dword ptr [EDX + 0x168],0x0     ; 004e98d9
    POP EDI                             ; 004e98e3
    POP ESI                             ; 004e98e4
    RET                                 ; 004e98e5

