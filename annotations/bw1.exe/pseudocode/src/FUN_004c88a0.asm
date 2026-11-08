; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004c88a0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   FUN_004c65f0 at 004c6a8e
;   FUN_004c89c0 at 004c8ae0
;
; Referenced Globals:
;   undefined4 DAT_007c5330
;
; Called Functions:
;   FUN_0040c600
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c88a0
        ;   Label: FUN_004c88a0
    SUB ESP,0x4                         ; 004c88a1
    MOV EDX,dword ptr [0x007c5330]      ; 004c88a4 | DAT_007c5330
    MOV EAX,dword ptr [ESP + 0xc]       ; 004c88aa
    PUSH EDX                            ; 004c88ae
    MOV ECX,dword ptr [EAX + 0x25b0]    ; 004c88af
    PUSH ECX                            ; 004c88b5
    CALL FUN_0040c600                   ; 004c88b6
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c600()
    ADD ESP,0x8                         ; 004c88bb
    TEST EAX,EAX                        ; 004c88be
    JZ 0x004c88e1                       ; 004c88c0
        ;   XREF to: 004c88e1 (CONDITIONAL_JUMP)  ; LAB_004c88e1
    MOV EBX,dword ptr [EAX + 0x678]     ; 004c88c2
    CMP EBX,0x2                         ; 004c88c8
    JZ 0x004c88d2                       ; 004c88cb
        ;   XREF to: 004c88d2 (CONDITIONAL_JUMP)  ; LAB_004c88d2
    CMP EBX,0x3                         ; 004c88cd
    JNZ 0x004c88e1                      ; 004c88d0
        ;   XREF to: 004c88e1 (CONDITIONAL_JUMP)  ; LAB_004c88e1
    MOV dword ptr [ESP],0xbf860a92      ; 004c88d2
        ;   Label: LAB_004c88d2
    MOV EAX,dword ptr [ESP]             ; 004c88d9
    ADD ESP,0x4                         ; 004c88dc
    POP EBX                             ; 004c88df
    RET                                 ; 004c88e0
    MOV dword ptr [ESP],0xbfc80fc6      ; 004c88e1
        ;   Label: LAB_004c88e1
    MOV EAX,dword ptr [ESP]             ; 004c88e8
    ADD ESP,0x4                         ; 004c88eb
    POP EBX                             ; 004c88ee
    RET                                 ; 004c88ef

