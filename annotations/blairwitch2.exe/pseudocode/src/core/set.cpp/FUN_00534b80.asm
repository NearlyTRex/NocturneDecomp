; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00534b80(int param_1)
;
;
; XREF[2]:
;   FUN_0052f2a0 at 0052f95d
;   FUN_005332f0 at 0053360f
;
; Referenced Globals:
;   TerminatedCString s_core_set_cpp_005e5cd5
;   TerminatedCString s_CDemonSet_isCameraPannin_005e5ce5
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00534b80
        ;   Label: FUN_00534b80
    MOV EBX,dword ptr [ESP + 0x8]       ; 00534b81
    CMP dword ptr [EBX + 0x15aeb8],0x0  ; 00534b85
    JL 0x00534ba1                       ; 00534b8c
        ;   XREF to: 00534ba1 (CONDITIONAL_JUMP)  ; LAB_00534ba1
    IMUL EAX,dword ptr [EBX + 0x15aeb8],0x1a4 ; 00534b8e
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x144] ; 00534b98
    POP EBX                             ; 00534b9f
    RET                                 ; 00534ba0
    PUSH ESI                            ; 00534ba1
        ;   Label: LAB_00534ba1
    MOV ECX,0x5e5cd5                    ; 00534ba2 | = "..\\core\\set.cpp"
    MOV ESI,0x149c                      ; 00534ba7
    PUSH 0x5e5ce5                       ; 00534bac | = "CDemonSet::isCameraPanning - no camer..."
    MOV dword ptr [0x01d046a0],ECX      ; 00534bb1 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00534bb7 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00534bbd
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00534bc2
    POP ESI                             ; 00534bc5
    IMUL EAX,dword ptr [EBX + 0x15aeb8],0x1a4 ; 00534bc6
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x144] ; 00534bd0
    POP EBX                             ; 00534bd7
    RET                                 ; 00534bd8

