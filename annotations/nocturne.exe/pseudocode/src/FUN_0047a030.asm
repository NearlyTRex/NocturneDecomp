; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0047a030(int param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 s_Capture_0057f38d+2
;   undefined4 DAT_005b7650
;   undefined4 DAT_005b9354
;   undefined4 DAT_01c777c0
;
; Called Functions:
;   FUN_0042a1e0
;   FUN_0047dc30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047a030
        ;   Label: FUN_0047a030
    MOV EBX,dword ptr [ESP + 0x8]       ; 0047a031
    MOV EAX,[0x005b9354]                ; 0047a035 | DAT_005b9354
    CMP dword ptr [EAX + 0x1d4],0x0     ; 0047a03a | DAT_01c777c0
    JNZ 0x0047a05b                      ; 0047a041
        ;   XREF to: 0047a05b (CONDITIONAL_JUMP)  ; LAB_0047a05b
    PUSH 0x57f38f                       ; 0047a043 | s_Capture_0057f38d+2
    MOV ECX,dword ptr [0x005b7650]      ; 0047a048 | DAT_005b7650
    PUSH ECX                            ; 0047a04e
    CALL FUN_0047dc30                   ; 0047a04f
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; undefined FUN_0047dc30()
    ADD ESP,0x8                         ; 0047a054
    TEST EAX,EAX                        ; 0047a057
    JZ 0x0047a06c                       ; 0047a059
        ;   XREF to: 0047a06c (CONDITIONAL_JUMP)  ; LAB_0047a06c
    PUSH 0x0                            ; 0047a05b
        ;   Label: LAB_0047a05b
    PUSH dword ptr [ESP + 0x10]         ; 0047a05d
    PUSH EBX                            ; 0047a061
    CALL FUN_0042a1e0                   ; 0047a062
        ;   XREF to: 0042a1e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042a1e0()
    ADD ESP,0xc                         ; 0047a067
    POP EBX                             ; 0047a06a
    RET                                 ; 0047a06b
    LEA EAX,[EBX + 0xbcb0]              ; 0047a06c
        ;   Label: LAB_0047a06c
    PUSH EAX                            ; 0047a072
    PUSH dword ptr [ESP + 0x10]         ; 0047a073
    PUSH EBX                            ; 0047a077
    CALL FUN_0042a1e0                   ; 0047a078
        ;   XREF to: 0042a1e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042a1e0()
    ADD ESP,0xc                         ; 0047a07d
    POP EBX                             ; 0047a080
    RET                                 ; 0047a081

