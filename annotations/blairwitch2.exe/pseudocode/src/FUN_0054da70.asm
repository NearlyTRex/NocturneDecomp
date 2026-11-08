; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054da70(int param_1)
;
;
; XREF[2]:
;   FUN_0054d840 at 0054d852
;   FUN_0054d9b0 at 0054d9f6
;
; Referenced Globals:
;   undefined4 DAT_02648e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054da70
        ;   Label: FUN_0054da70
    MOV EBX,dword ptr [ESP + 0x8]       ; 0054da71
    CMP dword ptr [EBX + 0x158],0x0     ; 0054da75
    JZ 0x0054da92                       ; 0054da7c
        ;   XREF to: 0054da92 (CONDITIONAL_JUMP)  ; LAB_0054da92
    MOV ECX,dword ptr [0x02648e80]      ; 0054da7e | DAT_02648e80
    TEST ECX,ECX                        ; 0054da84
    JNZ 0x0054da94                      ; 0054da86
        ;   XREF to: 0054da94 (CONDITIONAL_JUMP)  ; LAB_0054da94
    MOV dword ptr [EBX + 0x158],0x0     ; 0054da88
    POP EBX                             ; 0054da92
        ;   Label: LAB_0054da92
    RET                                 ; 0054da93
    PUSH ESI                            ; 0054da94
        ;   Label: LAB_0054da94
    MOV ESI,dword ptr [EBX + 0x158]     ; 0054da95
    PUSH ESI                            ; 0054da9b
    MOV EDX,dword ptr [ECX]             ; 0054da9c
    PUSH ECX                            ; 0054da9e
    CALL dword ptr [EDX + 0x34]         ; 0054da9f
    ADD ESP,0x8                         ; 0054daa2
    POP ESI                             ; 0054daa5
    MOV dword ptr [EBX + 0x158],0x0     ; 0054daa6
    POP EBX                             ; 0054dab0
    RET                                 ; 0054dab1

