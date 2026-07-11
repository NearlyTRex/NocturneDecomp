; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f8af0(int *param_1)
;
;
; XREF[1]:
;   FUN_004c85f0 at 004c86d2
;
; Referenced Globals:
;   string s_..\\engine\\pod.cpp_0058dc31
;   string s_CPod::init_-_No_.POD_to_init!_0058dc43
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f8af0
        ;   Label: FUN_004f8af0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f8af1
    TEST EBX,EBX                        ; 004f8af5
    JZ 0x004f8b00                       ; 004f8af7
        ;   XREF to: 004f8b00 (CONDITIONAL_JUMP)  ; LAB_004f8b00
    CMP dword ptr [EBX],0x0             ; 004f8af9
    JZ 0x004f8b2a                       ; 004f8afc
        ;   XREF to: 004f8b2a (CONDITIONAL_JUMP)  ; LAB_004f8b2a
    POP EBX                             ; 004f8afe
    RET                                 ; 004f8aff
    MOV EDX,0x58dc31                    ; 004f8b00 | = "..\\engine\\pod.cpp"
        ;   Label: LAB_004f8b00
    MOV ECX,0x2be                       ; 004f8b05
    PUSH 0x58dc43                       ; 004f8b0a | = "CPod::init - No .POD to init!"
    MOV dword ptr [0x01cc4800],EDX      ; 004f8b0f | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004f8b15 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004f8b1b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004f8b20
    CMP dword ptr [EBX],0x0             ; 004f8b23
    JZ 0x004f8b2a                       ; 004f8b26
        ;   XREF to: 004f8b2a (CONDITIONAL_JUMP)  ; LAB_004f8b2a
    POP EBX                             ; 004f8b28
    RET                                 ; 004f8b29
    PUSH EBX                            ; 004f8b2a
        ;   Label: LAB_004f8b2a
    MOV EAX,dword ptr [EBX + 0x194]     ; 004f8b2b
    CALL dword ptr [EAX + 0x4]          ; 004f8b31
    ADD ESP,0x4                         ; 004f8b34
    POP EBX                             ; 004f8b37
    RET                                 ; 004f8b38

