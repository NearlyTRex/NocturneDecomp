; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_004fbad0(undefined4 *param_1)
;
;
; XREF[1]:
;   FUN_0054bf00 at 0054bf05
;
; Referenced Globals:
;   void* PTR_FUN_005e2c84 = 004fbb00
;
; Called Functions:
;   FUN_004fc090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fbad0
        ;   Label: FUN_004fbad0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004fbad1
    MOV dword ptr [EBX + 0x50],0x5e2c84 ; 004fbad5 | PTR_FUN_005e2c84
    MOV byte ptr [EBX + 0x30],0x0       ; 004fbadc
    PUSH EBX                            ; 004fbae0
    MOV dword ptr [EBX],0x0             ; 004fbae1
    CALL FUN_004fc090                   ; 004fbae7
        ;   XREF to: 004fc090 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc090()
    ADD ESP,0x4                         ; 004fbaec
    MOV EAX,EBX                         ; 004fbaef
    POP EBX                             ; 004fbaf1
    RET                                 ; 004fbaf2

