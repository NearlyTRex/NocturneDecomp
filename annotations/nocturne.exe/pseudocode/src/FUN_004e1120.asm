; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_004e1120(undefined4 *param_1)
;
;
; XREF[1]:
;   FUN_0051b660 at 0051b665
;
; Referenced Globals:
;   void* PTR_FUN_005a0d24 = 004e1150
;
; Called Functions:
;   FUN_004e1680
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e1120
        ;   Label: FUN_004e1120
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e1121
    MOV dword ptr [EBX + 0x50],0x5a0d24 ; 004e1125 | PTR_FUN_005a0d24
    MOV byte ptr [EBX + 0x30],0x0       ; 004e112c
    PUSH EBX                            ; 004e1130
    MOV dword ptr [EBX],0x0             ; 004e1131
    CALL FUN_004e1680                   ; 004e1137
        ;   XREF to: 004e1680 (UNCONDITIONAL_CALL)  ; undefined FUN_004e1680()
    ADD ESP,0x4                         ; 004e113c
    MOV EAX,EBX                         ; 004e113f
    POP EBX                             ; 004e1141
    RET                                 ; 004e1142

