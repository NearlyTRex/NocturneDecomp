; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054bf00(undefined4 param_1)
;
;
; XREF[7]:
;   FUN_0042ac20 at 0042ac3a
;   FUN_004a4340 at 004a4361
;   FUN_004a7600 at 004a760d
;   FUN_00527ca0 at 00527cb4
;   FUN_0054a3c0 at 0054a40e
;   FUN_0054b5b0 at 0054b62b
;   FUN_005638a0 at 005638b3
;
; Referenced Globals:
;   undefined4 DAT_005db0f0
;   void* PTR_FUN_005e4784 = 0054bf80
;
; Called Functions:
;   FUN_004fbad0
;   FUN_005a30d7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0054bf00
        ;   Label: FUN_0054bf00
    PUSH EAX                            ; 0054bf04
    CALL FUN_004fbad0                   ; 0054bf05
        ;   XREF to: 004fbad0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fbad0()
    ADD ESP,0x4                         ; 0054bf0a
    PUSH 0x5db0f0                       ; 0054bf0d | DAT_005db0f0
    PUSH 0x64                           ; 0054bf12
    ADD EAX,0x58                        ; 0054bf14
    PUSH EAX                            ; 0054bf17
    CALL FUN_005a30d7                   ; 0054bf18
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30d7()
    SUB EAX,0x58                        ; 0054bf1d
    MOV dword ptr [EAX + 0x50],0x5e4784 ; 0054bf20 | PTR_FUN_005e4784
    MOV byte ptr [EAX + 0x2350],0x0     ; 0054bf27
    MOV dword ptr [EAX + 0x23a0],0x0    ; 0054bf2e
    MOV dword ptr [EAX + 0x2324],0x0    ; 0054bf38
    MOV dword ptr [EAX + 0x2320],0xffffffff ; 0054bf42
    LEA EDX,[EAX + 0x2344]              ; 0054bf4c
    MOV dword ptr [EAX + 0x2340],0x0    ; 0054bf52
    MOV dword ptr [EDX + 0x8],0x0       ; 0054bf5c
    ADD ESP,0xc                         ; 0054bf63
    MOV ECX,dword ptr [EDX + 0x8]       ; 0054bf66
    MOV dword ptr [EDX + 0x4],ECX       ; 0054bf69
    MOV ECX,dword ptr [EDX + 0x4]       ; 0054bf6c
    MOV dword ptr [EDX],ECX             ; 0054bf6f
    MOV dword ptr [EAX + 0x54],0x3f800000 ; 0054bf71
    RET                                 ; 0054bf78

