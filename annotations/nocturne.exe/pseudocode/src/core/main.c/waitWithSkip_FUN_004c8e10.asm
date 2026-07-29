; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_main_c_waitWithSkip_FUN_004c8e10(int duration_ms)
;
; Parameters:
; int              Stack[0x4]:4   duration_ms
;
; Referenced Globals:
;   int INT_005bac64 = 0x1cc30e4
;   undefined4 DAT_01bd1d80
;   undefined4 DAT_01cc30e4
;
; Called Functions:
;   wincore_wddvmem.cpp_swapBuffers_FUN_00553910
;   wincore_winrun.cpp_getTime_FUN_00558a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c8e10
        ;   Label: core_main.c_waitWithSkip_FUN_004c8e10
    PUSH ESI                            ; 004c8e11
    PUSH EDI                            ; 004c8e12
    PUSH EBP                            ; 004c8e13
    MOV EBX,dword ptr [ESP + 0x14]      ; 004c8e14
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 004c8e18
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV ESI,EAX                         ; 004c8e1d
    TEST EBX,EBX                        ; 004c8e1f
    JLE 0x004c8e7f                      ; 004c8e21
        ;   XREF to: 004c8e7f (CONDITIONAL_JUMP)  ; LAB_004c8e7f
    MOV EBP,0x4000                      ; 004c8e23
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 004c8e28
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
        ;   Label: LAB_004c8e28
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 004c8e2d
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV ECX,EAX                         ; 004c8e32
    SUB EAX,ESI                         ; 004c8e34
    MOV EDX,EAX                         ; 004c8e36
    MOV ESI,0x12                        ; 004c8e38
    SAR EDX,0x1f                        ; 004c8e3d
    IDIV ESI                            ; 004c8e40
    MOV [0x01bd1d80],EAX                ; 004c8e42 | DAT_01bd1d80
    TEST EAX,EAX                        ; 004c8e47
    JL 0x004c8e84                       ; 004c8e49
        ;   XREF to: 004c8e84 (CONDITIONAL_JUMP)  ; LAB_004c8e84
    MOV EDI,dword ptr [0x01bd1d80]      ; 004c8e4b | DAT_01bd1d80
        ;   Label: LAB_004c8e4b
    MOV ESI,ECX                         ; 004c8e51
    CMP EDI,0x4000                      ; 004c8e53
    JLE 0x004c8e61                      ; 004c8e59
        ;   XREF to: 004c8e61 (CONDITIONAL_JUMP)  ; LAB_004c8e61
    MOV dword ptr [0x01bd1d80],EBP      ; 004c8e5b | DAT_01bd1d80
    MOV EAX,[0x01bd1d80]                ; 004c8e61 | DAT_01bd1d80
        ;   Label: LAB_004c8e61
    PUSH 0x2a                           ; 004c8e66
    SUB EBX,EAX                         ; 004c8e68
    MOV EAX,[0x005bac64]                ; 004c8e6a | INT_005bac64
    PUSH EAX                            ; 004c8e6f | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 004c8e70 | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 004c8e72
    ADD ESP,0x8                         ; 004c8e74
    TEST EAX,EAX                        ; 004c8e77
    JNZ 0x004c8e8e                      ; 004c8e79
        ;   XREF to: 004c8e8e (CONDITIONAL_JUMP)  ; LAB_004c8e8e
    TEST EBX,EBX                        ; 004c8e7b
    JG 0x004c8e28                       ; 004c8e7d
        ;   XREF to: 004c8e28 (CONDITIONAL_JUMP)  ; LAB_004c8e28
    POP EBP                             ; 004c8e7f
        ;   Label: LAB_004c8e7f
    POP EDI                             ; 004c8e80
    POP ESI                             ; 004c8e81
    POP EBX                             ; 004c8e82
    RET                                 ; 004c8e83
    XOR ESI,ESI                         ; 004c8e84
        ;   Label: LAB_004c8e84
    MOV dword ptr [0x01bd1d80],ESI      ; 004c8e86 | DAT_01bd1d80
    JMP 0x004c8e4b                      ; 004c8e8c
        ;   XREF to: 004c8e4b (UNCONDITIONAL_JUMP)  ; LAB_004c8e4b
    PUSH 0x1                            ; 004c8e8e
        ;   Label: LAB_004c8e8e
    MOV EAX,[0x005bac64]                ; 004c8e90 | INT_005bac64
    PUSH EAX                            ; 004c8e95 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 004c8e96 | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 004c8e98
    ADD ESP,0x8                         ; 004c8e9a
    TEST EAX,EAX                        ; 004c8e9d
    JNZ 0x004c8e7f                      ; 004c8e9f
        ;   XREF to: 004c8e7f (CONDITIONAL_JUMP)  ; LAB_004c8e7f
    TEST EBX,EBX                        ; 004c8ea1
    JG 0x004c8e28                       ; 004c8ea3
        ;   XREF to: 004c8e28 (CONDITIONAL_JUMP)  ; LAB_004c8e28
    POP EBP                             ; 004c8ea5
    POP EDI                             ; 004c8ea6
    POP ESI                             ; 004c8ea7
    POP EBX                             ; 004c8ea8
    RET                                 ; 004c8ea9

