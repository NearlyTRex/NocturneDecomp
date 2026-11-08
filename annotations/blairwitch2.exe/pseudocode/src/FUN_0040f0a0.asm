; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040f0a0(int param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_armour_wav_005cb3a5
;
; Called Functions:
;   FUN_00427360
;   FUN_00488890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f0a0
        ;   Label: FUN_0040f0a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040f0a1
    MOV EDX,dword ptr [EBX + 0x281c]    ; 0040f0a5
    TEST EDX,EDX                        ; 0040f0ab
    JZ 0x0040f0b1                       ; 0040f0ad
        ;   XREF to: 0040f0b1 (CONDITIONAL_JUMP)  ; LAB_0040f0b1
    POP EBX                             ; 0040f0af
    RET                                 ; 0040f0b0
    PUSH 0x1                            ; 0040f0b1
        ;   Label: LAB_0040f0b1
    PUSH 0xbf800000                     ; 0040f0b3
    PUSH EDX                            ; 0040f0b8
    PUSH EBX                            ; 0040f0b9
    CALL FUN_00427360                   ; 0040f0ba
        ;   XREF to: 00427360 (UNCONDITIONAL_CALL)  ; undefined FUN_00427360()
    ADD ESP,0x10                        ; 0040f0bf
    PUSH 0x5cb3a5                       ; 0040f0c2 | = "armour.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0040f0c7
    PUSH EBX                            ; 0040f0cd
    CALL dword ptr [EAX + 0x34]         ; 0040f0ce
    ADD ESP,0x8                         ; 0040f0d1
    MOV ECX,dword ptr [ESP + 0xc]       ; 0040f0d4
    PUSH ECX                            ; 0040f0d8
    PUSH EBX                            ; 0040f0d9
    CALL FUN_00488890                   ; 0040f0da
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; undefined FUN_00488890()
    ADD ESP,0x8                         ; 0040f0df
    POP EBX                             ; 0040f0e2
    RET                                 ; 0040f0e3

