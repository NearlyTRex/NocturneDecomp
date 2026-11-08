; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined * FUN_004041f0(undefined4 *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Old_func_d_005ca315
;   TerminatedCString s_engine_3d_c_005ca323
;   undefined4 DAT_0070ca84
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;   FUN_005b7790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004041f0
        ;   Label: FUN_004041f0
    SUB ESP,0x50                        ; 004041f1
    MOV EAX,dword ptr [ESP + 0x58]      ; 004041f4
    MOV EDX,dword ptr [EAX]             ; 004041f8
    PUSH EDX                            ; 004041fa
    PUSH 0x5ca315                       ; 004041fb | = "Old func : %d"
    LEA EAX,[ESP + 0x8]                 ; 00404200
    PUSH EAX                            ; 00404204
    MOV EBX,0xe2                        ; 00404205
    CALL FUN_005b7790                   ; 0040420a
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0xc                         ; 0040420f
    MOV EAX,ESP                         ; 00404212
    MOV ECX,0x5ca323                    ; 00404214 | = "..\\engine\\3d.c"
    PUSH EAX                            ; 00404219
    MOV dword ptr [0x01d046a4],EBX      ; 0040421a | DAT_01d046a4
    MOV dword ptr [0x01d046a0],ECX      ; 00404220 | DAT_01d046a0
    CALL FUN_004e4500                   ; 00404226
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    MOV EAX,0x70ca84                    ; 0040422b | DAT_0070ca84
    ADD ESP,0x4                         ; 00404230
    ADD ESP,0x50                        ; 00404233
    POP EBX                             ; 00404236
    RET                                 ; 00404237

