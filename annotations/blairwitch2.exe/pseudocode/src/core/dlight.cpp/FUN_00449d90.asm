; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00449d90(int param_1)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[4]:
;   FUN_0041cff0 at 0041d00e
;   FUN_004b6170 at 004b63d2
;   FUN_0053b6b0 at 0053b6fe
;   FUN_0059cbd0 at 0059cca7
;
; Referenced Globals:
;   TerminatedCString s_core_dlight_cpp_005cf1c7
;   TerminatedCString s_CDemonCamera_init_Unable_005cf1da
;   undefined4 DAT_005cf20f
;   undefined4 DAT_0060a084
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_00449e70
;   FUN_0044b600
;   FUN_004e4500
;   FUN_005b7ff0
;   FUN_005b8580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00449d90
        ;   Label: FUN_00449d90
    PUSH EBP                            ; 00449d91
    SUB ESP,0x4                         ; 00449d92
    MOV EBX,dword ptr [ESP + 0x10]      ; 00449d95
    PUSH EBX                            ; 00449d99
    CALL FUN_00449e70                   ; 00449d9a
        ;   XREF to: 00449e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00449e70()
    MOV EDX,dword ptr [EBX + 0x1cc0]    ; 00449d9f
    IMUL EDX,dword ptr [EBX + 0x1cc4]   ; 00449da5
    ADD EDX,EDX                         ; 00449dac
    ADD ESP,0x4                         ; 00449dae
    ADD EDX,0x210                       ; 00449db1
    PUSH EDX                            ; 00449db7
    CALL FUN_005b8580                   ; 00449db8
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8580()
    ADD ESP,0x4                         ; 00449dbd
    MOV dword ptr [EBX + 0x2f98],EAX    ; 00449dc0
    TEST EAX,EAX                        ; 00449dc6
    JZ 0x00449e3c                       ; 00449dc8
        ;   XREF to: 00449e3c (CONDITIONAL_JUMP)  ; LAB_00449e3c
    MOV EAX,dword ptr [EBX + 0x2f98]    ; 00449dca
        ;   Label: LAB_00449dca
    ADD EAX,0x10                        ; 00449dd0
    AND AL,0xf0                         ; 00449dd3
    MOV dword ptr [EBX + 0x2f94],EAX    ; 00449dd5
    MOV EDX,dword ptr [EBX + 0x1cc0]    ; 00449ddb
    MOV EAX,dword ptr [EBX + 0x1cc4]    ; 00449de1
    IMUL EDX,EAX                        ; 00449de7
    MOV EAX,EDX                         ; 00449dea
    SAR EDX,0x1f                        ; 00449dec
    SHL EDX,0x3                         ; 00449def
    SBB EAX,EDX                         ; 00449df2
    SAR EAX,0x3                         ; 00449df4
    PUSH EAX                            ; 00449df7
    CALL FUN_005b8580                   ; 00449df8
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8580()
    FLD float ptr [EBX + 0x2fa8]        ; 00449dfd
    FMUL double ptr [0x005cf20f]        ; 00449e03 | DAT_005cf20f
    ADD ESP,0x4                         ; 00449e09
    MOV dword ptr [EBX + 0x2fa0],EAX    ; 00449e0c
    PUSH 0x0                            ; 00449e12
    CALL FUN_005b7ff0                   ; 00449e14
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    PUSH 0x0                            ; 00449e19
    FISTP dword ptr [ESP + 0x8]         ; 00449e1b
    MOV EAX,dword ptr [ESP + 0x8]       ; 00449e1f
    PUSH 0x0                            ; 00449e23
    MOV EDX,dword ptr [EAX*0x4 + 0x60a084] ; 00449e25 | DAT_0060a084
    PUSH EDX                            ; 00449e2c
    PUSH EBX                            ; 00449e2d
    CALL FUN_0044b600                   ; 00449e2e
        ;   XREF to: 0044b600 (UNCONDITIONAL_CALL)  ; undefined FUN_0044b600()
    ADD ESP,0x14                        ; 00449e33
    ADD ESP,0x4                         ; 00449e36
    POP EBP                             ; 00449e39
    POP EBX                             ; 00449e3a
    RET                                 ; 00449e3b
    PUSH EDI                            ; 00449e3c
        ;   Label: LAB_00449e3c
    MOV EDI,0x5cf1c7                    ; 00449e3d | = "..\\core\\dlight.cpp"
    MOV EBP,0x6d                        ; 00449e42
    PUSH 0x5cf1da                       ; 00449e47 | = "CDemonCamera::init - Unable to alloc ..."
    MOV dword ptr [0x01d046a0],EDI      ; 00449e4c | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 00449e52 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00449e58
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00449e5d
    POP EDI                             ; 00449e60
    JMP 0x00449dca                      ; 00449e61
        ;   XREF to: 00449dca (UNCONDITIONAL_JUMP)  ; LAB_00449dca

