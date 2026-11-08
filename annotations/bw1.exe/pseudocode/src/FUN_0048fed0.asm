; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048fed0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)
;
;
; XREF[8]:
;   FUN_00467c00 at 00467de0
;   FUN_00468420 at 004686c0
;   FUN_00503c90 at 005040b1
;   FUN_005562c0 at 00556746
;   FUN_005580d0 at 005581e4
;   FUN_005660c0 at 00566223
;   FUN_00584cc0 at 00584db6
;   FUN_005ab530 at 005ab60e
;
; Called Functions:
;   FUN_0048fd80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048fed0
        ;   Label: FUN_0048fed0
    PUSH ESI                            ; 0048fed1
    MOV EAX,dword ptr [ESP + 0xc]       ; 0048fed2
    MOV EDX,dword ptr [ESP + 0x10]      ; 0048fed6
    MOV ECX,dword ptr [ESP + 0x14]      ; 0048feda
    MOV EBX,dword ptr [ESP + 0x18]      ; 0048fede
    CMP EAX,EDX                         ; 0048fee2
    JNZ 0x0048ff20                      ; 0048fee4
        ;   XREF to: 0048ff20 (CONDITIONAL_JUMP)  ; LAB_0048ff20
    LEA EDX,[EAX + 0xc]                 ; 0048fee6
        ;   Label: LAB_0048fee6
    CMP EDX,ECX                         ; 0048fee9
    JZ 0x0048fefd                       ; 0048feeb
        ;   XREF to: 0048fefd (CONDITIONAL_JUMP)  ; LAB_0048fefd
    MOV ESI,dword ptr [ECX]             ; 0048feed
    MOV dword ptr [EDX],ESI             ; 0048feef
    MOV ESI,dword ptr [ECX + 0x4]       ; 0048fef1
    MOV dword ptr [EDX + 0x4],ESI       ; 0048fef4
    MOV ESI,dword ptr [ECX + 0x8]       ; 0048fef7
    MOV dword ptr [EDX + 0x8],ESI       ; 0048fefa
    LEA EDX,[EAX + 0x18]                ; 0048fefd
        ;   Label: LAB_0048fefd
    CMP EDX,EBX                         ; 0048ff00
    JZ 0x0048ff14                       ; 0048ff02
        ;   XREF to: 0048ff14 (CONDITIONAL_JUMP)  ; LAB_0048ff14
    MOV ECX,dword ptr [EBX]             ; 0048ff04
    MOV dword ptr [EDX],ECX             ; 0048ff06
    MOV ECX,dword ptr [EBX + 0x4]       ; 0048ff08
    MOV dword ptr [EDX + 0x4],ECX       ; 0048ff0b
    MOV ECX,dword ptr [EBX + 0x8]       ; 0048ff0e
    MOV dword ptr [EDX + 0x8],ECX       ; 0048ff11
    PUSH EAX                            ; 0048ff14
        ;   Label: LAB_0048ff14
    CALL FUN_0048fd80                   ; 0048ff15
        ;   XREF to: 0048fd80 (UNCONDITIONAL_CALL)  ; undefined FUN_0048fd80()
    ADD ESP,0x4                         ; 0048ff1a
    POP ESI                             ; 0048ff1d
    POP EBX                             ; 0048ff1e
    RET                                 ; 0048ff1f
    MOV ESI,dword ptr [EDX]             ; 0048ff20
        ;   Label: LAB_0048ff20
    MOV dword ptr [EAX],ESI             ; 0048ff22
    MOV ESI,dword ptr [EDX + 0x4]       ; 0048ff24
    MOV dword ptr [EAX + 0x4],ESI       ; 0048ff27
    MOV ESI,dword ptr [EDX + 0x8]       ; 0048ff2a
    MOV dword ptr [EAX + 0x8],ESI       ; 0048ff2d
    JMP 0x0048fee6                      ; 0048ff30
        ;   XREF to: 0048fee6 (UNCONDITIONAL_JUMP)  ; LAB_0048fee6

