; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00460c90(undefined4 param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; Referenced Globals:
;   undefined4 DAT_0057dc65
;
; Called Functions:
;   FUN_004c6a10
;   FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460c90
        ;   Label: FUN_00460c90
    SUB ESP,0x8                         ; 00460c91
    MOV EAX,dword ptr [ESP + 0x14]      ; 00460c94
    FLD double ptr [0x0057dc65]         ; 00460c98 | DAT_0057dc65
    FLD float ptr [EAX + 0x8]           ; 00460c9e
    FMUL ST1                            ; 00460ca1
    FLD float ptr [EAX + 0x4]           ; 00460ca3
    FMUL ST2                            ; 00460ca6
    FLD float ptr [EAX]                 ; 00460ca8
    FMULP ST3                           ; 00460caa
    FXCH                                ; 00460cac
    CALL FUN_00563a30                   ; 00460cae
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FXCH                                ; 00460cb3
    CALL FUN_00563a30                   ; 00460cb5
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FXCH                                ; 00460cba
    FISTP dword ptr [ESP]               ; 00460cbc
    FISTP dword ptr [ESP + 0x4]         ; 00460cbf
    MOV EDX,dword ptr [ESP]             ; 00460cc3
    MOV ECX,dword ptr [ESP + 0x4]       ; 00460cc6
    PUSH EDX                            ; 00460cca
    CALL FUN_00563a30                   ; 00460ccb
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    PUSH ECX                            ; 00460cd0
    FISTP dword ptr [ESP + 0xc]         ; 00460cd1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00460cd5
    PUSH EBX                            ; 00460cd9
    CALL FUN_004c6a10                   ; 00460cda
        ;   XREF to: 004c6a10 (UNCONDITIONAL_CALL)  ; undefined FUN_004c6a10()
    ADD ESP,0xc                         ; 00460cdf
    ADD ESP,0x8                         ; 00460ce2
    POP EBX                             ; 00460ce5
    RET                                 ; 00460ce6

