; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ee9e0(int param_1)
;
;
; XREF[5]:
;   FUN_004b6750 at 004b6755
;   FUN_004b6b20 at 004b6cbc
;   FUN_004ef6d0 at 004ef6d8
;   FUN_00543180 at 00543187
;   FUN_005433d0 at 005433d7
;
; Referenced Globals:
;   string s_priest.dfm_0058cacb
;
; Called Functions:
;   FUN_00424260
;   FUN_00564520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ee9e0
        ;   Label: FUN_004ee9e0
    PUSH EBP                            ; 004ee9e1
    MOV EBP,ESP                         ; 004ee9e2
    MOV EBX,dword ptr [EBP + 0xc]       ; 004ee9e4
    PUSH EBX                            ; 004ee9e7
    CALL FUN_00424260                   ; 004ee9e8
        ;   XREF to: 00424260 (UNCONDITIONAL_CALL)  ; undefined FUN_00424260()
    ADD ESP,0x4                         ; 004ee9ed
    PUSH 0x58cacb                       ; 004ee9f0 | = "priest.dfm"
    LEA EAX,[EBX + 0x23b0]              ; 004ee9f5
    PUSH EAX                            ; 004ee9fb
    CALL FUN_00564520                   ; 004ee9fc
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined FUN_00564520()
    ADD ESP,0x8                         ; 004eea01
    TEST EAX,EAX                        ; 004eea04
    JZ 0x004eea0b                       ; 004eea06
        ;   XREF to: 004eea0b (CONDITIONAL_JUMP)  ; LAB_004eea0b
    POP EBP                             ; 004eea08
    POP EBX                             ; 004eea09
    RET                                 ; 004eea0a
    MOV dword ptr [EBX + 0x2608],0x2    ; 004eea0b
        ;   Label: LAB_004eea0b
    POP EBP                             ; 004eea15
    POP EBX                             ; 004eea16
    RET                                 ; 004eea17

