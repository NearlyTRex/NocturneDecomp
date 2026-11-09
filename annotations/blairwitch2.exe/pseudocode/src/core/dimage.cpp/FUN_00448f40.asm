; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dimage_cpp_FUN_00448f40(int param_1)
;
;
; XREF[1]:
;   core_dimage.cpp_FUN_0044902e at 004490a7
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_dimage.cpp_FUN_00448fa0
;   core_main.c_FUN_004e4500
;   crt_unknown.c_FUN_005b8580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448f40
        ;   Label: core_dimage.cpp_FUN_00448f40
    MOV EBX,dword ptr [ESP + 0x8]       ; 00448f41
    PUSH EBX                            ; 00448f45
    CALL core_dimage.cpp_FUN_00448fa0   ; 00448f46
        ;   XREF to: 00448fa0 (UNCONDITIONAL_CALL)  ; undefined core_dimage.cpp_FUN_00448fa0()
    MOV EAX,dword ptr [EBX + 0x304]     ; 00448f4b
    IMUL EAX,dword ptr [EBX + 0x308]    ; 00448f51
    ADD ESP,0x4                         ; 00448f58
    PUSH EAX                            ; 00448f5b
    CALL crt_unknown.c_FUN_005b8580     ; 00448f5c
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 00448f61
    MOV dword ptr [EBX + 0x300],EAX     ; 00448f64
    TEST EAX,EAX                        ; 00448f6a
    JZ 0x00448f70                       ; 00448f6c
        ;   XREF to: 00448f70 (CONDITIONAL_JUMP)  ; LAB_00448f70
    POP EBX                             ; 00448f6e
    RET                                 ; 00448f6f
    PUSH ESI                            ; 00448f70
        ;   Label: LAB_00448f70
    MOV EBX,0x5cf022                    ; 00448f71
    MOV ESI,0x31                        ; 00448f76
    PUSH 0x5cf035                       ; 00448f7b
    MOV dword ptr [0x01d046a0],EBX      ; 00448f80 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00448f86 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00448f8c
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00448f91
    POP ESI                             ; 00448f94
    POP EBX                             ; 00448f95
    RET                                 ; 00448f96

