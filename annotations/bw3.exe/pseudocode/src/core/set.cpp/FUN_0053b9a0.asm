; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0053b9a0(int param_1)
;
;
; XREF[2]:
;   FUN_00535da0 at 0053644d
;   FUN_00539f30 at 0053a24f
;
; Referenced Globals:
;   TerminatedCString s_core_set_cpp_005d09ee
;   TerminatedCString s_CDemonSet_isCameraPannin_005d09fe
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053b9a0
        ;   Label: FUN_0053b9a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0053b9a1
    CMP dword ptr [EBX + 0x15aeb8],0x0  ; 0053b9a5
    JL 0x0053b9c1                       ; 0053b9ac
        ;   XREF to: 0053b9c1 (CONDITIONAL_JUMP)  ; LAB_0053b9c1
    IMUL EAX,dword ptr [EBX + 0x15aeb8],0x1a4 ; 0053b9ae
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x144] ; 0053b9b8
    POP EBX                             ; 0053b9bf
    RET                                 ; 0053b9c0
    PUSH ESI                            ; 0053b9c1
        ;   Label: LAB_0053b9c1
    MOV ECX,0x5d09ee                    ; 0053b9c2 | = "..\\core\\set.cpp"
    MOV ESI,0x14ef                      ; 0053b9c7
    PUSH 0x5d09fe                       ; 0053b9cc | = "CDemonSet::isCameraPanning - no camer..."
    MOV dword ptr [0x01d71de0],ECX      ; 0053b9d1 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0053b9d7 | DAT_01d71de4
    CALL FUN_004e4330                   ; 0053b9dd
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 0053b9e2
    POP ESI                             ; 0053b9e5
    IMUL EAX,dword ptr [EBX + 0x15aeb8],0x1a4 ; 0053b9e6
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x144] ; 0053b9f0
    POP EBX                             ; 0053b9f7
    RET                                 ; 0053b9f8

