; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_free_FUN_004401d0(int param_1)
;
;
; XREF[3]:
;   FUN_0043ff30 at 0043ff36
;   FUN_0050ad20 at 0050ad9a
;   core_dcamera.cpp_CDemonCamera_init_FUN_00440010 at 0044001d
;
; Called Functions:
;   FUN_005638d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004401d0
        ;   Label: core_dcamera.cpp_CDemonCamera_free_FUN_004401d0
    PUSH ESI                            ; 004401d1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004401d2
    MOV EDX,dword ptr [EBX + 0x160]     ; 004401d6
    TEST EDX,EDX                        ; 004401dc
    JNZ 0x0044021f                      ; 004401de
        ;   XREF to: 0044021f (CONDITIONAL_JUMP)  ; LAB_0044021f
    MOV dword ptr [EBX + 0x160],0x0     ; 004401e0
        ;   Label: LAB_004401e0
    MOV ESI,dword ptr [EBX + 0x164]     ; 004401ea
    MOV dword ptr [EBX + 0x158],0x0     ; 004401f0
    TEST ESI,ESI                        ; 004401fa
    JNZ 0x0044022a                      ; 004401fc
        ;   XREF to: 0044022a (CONDITIONAL_JUMP)  ; LAB_0044022a
    MOV dword ptr [EBX + 0x164],0x0     ; 004401fe
        ;   Label: LAB_004401fe
    MOV dword ptr [EBX + 0x1d0],0x0     ; 00440208
    MOV dword ptr [EBX + 0x15c],0x0     ; 00440212
    POP ESI                             ; 0044021c
    POP EBX                             ; 0044021d
    RET                                 ; 0044021e
    PUSH EDX                            ; 0044021f
        ;   Label: LAB_0044021f
    CALL FUN_005638d0                   ; 00440220
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005638d0()
    ADD ESP,0x4                         ; 00440225
    JMP 0x004401e0                      ; 00440228
        ;   XREF to: 004401e0 (UNCONDITIONAL_JUMP)  ; LAB_004401e0
    PUSH ESI                            ; 0044022a
        ;   Label: LAB_0044022a
    CALL FUN_005638d0                   ; 0044022b
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005638d0()
    ADD ESP,0x4                         ; 00440230
    JMP 0x004401fe                      ; 00440233
        ;   XREF to: 004401fe (UNCONDITIONAL_JUMP)  ; LAB_004401fe

