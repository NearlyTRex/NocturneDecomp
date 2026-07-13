; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005261b0(int param_1)
;
;
; XREF[7]:
;   FUN_0047ac50 at 0047c4f0
;   FUN_004a6e90 at 004a71fb
;   FUN_005049b0 at 00504b16
;   FUN_0052d790 at 0052db9d
;   FUN_0052ddf0 at 0052decc
;   FUN_0052dff0 at 0052e3b5
;   FUN_0052e850 at 0052e95f
;
; Referenced Globals:
;   string s_..\\sound\\sndmain.cpp_00593437
;   string s_setNextSfxChannel_-_invalid_chan_0059344c
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_02dc1b74
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005261b0
        ;   Label: FUN_005261b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005261b1
    TEST EBX,EBX                        ; 005261b5
    JL 0x005261db                       ; 005261b7
        ;   XREF to: 005261db (CONDITIONAL_JUMP)  ; LAB_005261db
    CMP EBX,0x20                        ; 005261b9
    JGE 0x005261db                      ; 005261bc
        ;   XREF to: 005261db (CONDITIONAL_JUMP)  ; LAB_005261db
    MOV EDX,dword ptr [0x02dc1b74]      ; 005261be | DAT_02dc1b74
        ;   Label: LAB_005261be
    LEA EAX,[EDX*0x4 + 0x0]             ; 005261c4
    SUB EAX,EDX                         ; 005261cb
    SHL EAX,0x2                         ; 005261cd
    MOV EDX,EAX                         ; 005261d0
    MOV dword ptr [EDX + EAX*0x8 + 0x2dc1b78],EBX ; 005261d2
    POP EBX                             ; 005261d9
    RET                                 ; 005261da
    PUSH EBX                            ; 005261db
        ;   Label: LAB_005261db
    MOV EDX,0x593437                    ; 005261dc | = "..\\sound\\sndmain.cpp"
    MOV ECX,0xccc                       ; 005261e1
    PUSH 0x59344c                       ; 005261e6 | = "setNextSfxChannel - invalid channel i..."
    MOV dword ptr [0x01cc4800],EDX      ; 005261eb | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 005261f1 | DAT_01cc4804
    CALL FUN_004c8440                   ; 005261f7
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 005261fc
    JMP 0x005261be                      ; 005261ff
        ;   XREF to: 005261be (UNCONDITIONAL_JUMP)  ; LAB_005261be

