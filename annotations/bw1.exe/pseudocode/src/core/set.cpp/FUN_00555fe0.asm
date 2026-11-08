; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00555fe0(int param_1)
;
;
; XREF[2]:
;   FUN_00550580 at 00550c2d
;   FUN_005545a0 at 005548bf
;
; Referenced Globals:
;   TerminatedCString s_core_set_cpp_005f0d45
;   TerminatedCString s_CDemonSet_isCameraPannin_005f0d55
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00555fe0
        ;   Label: FUN_00555fe0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00555fe1
    CMP dword ptr [EBX + 0x15aeb8],0x0  ; 00555fe5
    JL 0x00556001                       ; 00555fec
        ;   XREF to: 00556001 (CONDITIONAL_JUMP)  ; LAB_00556001
    IMUL EAX,dword ptr [EBX + 0x15aeb8],0x1a4 ; 00555fee
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x144] ; 00555ff8
    POP EBX                             ; 00555fff
    RET                                 ; 00556000
    PUSH ESI                            ; 00556001
        ;   Label: LAB_00556001
    MOV ECX,0x5f0d45                    ; 00556002 | = "..\\core\\set.cpp"
    MOV ESI,0x14d5                      ; 00556007
    PUSH 0x5f0d55                       ; 0055600c | = "CDemonSet::isCameraPanning - no camer..."
    MOV dword ptr [0x01d1d400],ECX      ; 00556011 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00556017 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0055601d
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00556022
    POP ESI                             ; 00556025
    IMUL EAX,dword ptr [EBX + 0x15aeb8],0x1a4 ; 00556026
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x144] ; 00556030
    POP EBX                             ; 00556037
    RET                                 ; 00556038

