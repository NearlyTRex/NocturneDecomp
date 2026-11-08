; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0058cda0(int param_1)
;
;
; XREF[1]:
;   FUN_005881d0 at 0058884a
;
; Referenced Globals:
;   undefined4 s_actionPending_d_stranger_005f6cf0+1
;   undefined4 DAT_0061abc0
;   undefined4 DAT_007c33e0
;
; Called Functions:
;   FUN_0040c600
;   FUN_0040e210
;   FUN_00494340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058cda0
        ;   Label: FUN_0058cda0
    PUSH EBP                            ; 0058cda1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0058cda2
    CMP dword ptr [EBX + 0x1ff78],0x0   ; 0058cda6
    JZ 0x0058cdf8                       ; 0058cdad
        ;   XREF to: 0058cdf8 (CONDITIONAL_JUMP)  ; LAB_0058cdf8
    MOV ECX,dword ptr [EBX + 0x1ff5c]   ; 0058cdaf
    CMP ECX,0x4                         ; 0058cdb5
    JNZ 0x0058cdfb                      ; 0058cdb8
        ;   XREF to: 0058cdfb (CONDITIONAL_JUMP)  ; LAB_0058cdfb
    MOV EBP,dword ptr [0x007c33e0]      ; 0058cdba | DAT_007c33e0
        ;   Label: LAB_0058cdba
    PUSH EBP                            ; 0058cdc0
    MOV EAX,dword ptr [EBX + 0x1ff78]   ; 0058cdc1
    PUSH EAX                            ; 0058cdc7
    CALL FUN_0040c600                   ; 0058cdc8
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c600()
    ADD ESP,0x8                         ; 0058cdcd
    TEST EAX,EAX                        ; 0058cdd0
    JZ 0x0058cde4                       ; 0058cdd2
        ;   XREF to: 0058cde4 (CONDITIONAL_JUMP)  ; LAB_0058cde4
    LEA EDX,[EBX + 0x1fae8]             ; 0058cdd4
    PUSH EDX                            ; 0058cdda
    PUSH EAX                            ; 0058cddb
    CALL FUN_0040e210                   ; 0058cddc
        ;   XREF to: 0040e210 (UNCONDITIONAL_CALL)  ; undefined FUN_0040e210()
    ADD ESP,0x8                         ; 0058cde1
    MOV dword ptr [EBX + 0x1ff5c],0x1   ; 0058cde4
        ;   Label: LAB_0058cde4
    MOV dword ptr [EBX + 0x1ff78],0x0   ; 0058cdee
    POP EBP                             ; 0058cdf8
        ;   Label: LAB_0058cdf8
    POP EBX                             ; 0058cdf9
    RET                                 ; 0058cdfa
    PUSH EDI                            ; 0058cdfb
        ;   Label: LAB_0058cdfb
    PUSH 0xdba                          ; 0058cdfc
    PUSH ECX                            ; 0058ce01
    PUSH 0x5f6cf1                       ; 0058ce02 | s_actionPending_d_stranger_005f6cf0+1
    MOV EDI,dword ptr [0x0061abc0]      ; 0058ce07 | DAT_0061abc0
    PUSH EDI                            ; 0058ce0d
    CALL FUN_00494340                   ; 0058ce0e
        ;   XREF to: 00494340 (UNCONDITIONAL_CALL)  ; undefined FUN_00494340()
    ADD ESP,0x10                        ; 0058ce13
    POP EDI                             ; 0058ce16
    JMP 0x0058cdba                      ; 0058ce17
        ;   XREF to: 0058cdba (UNCONDITIONAL_JUMP)  ; LAB_0058cdba

