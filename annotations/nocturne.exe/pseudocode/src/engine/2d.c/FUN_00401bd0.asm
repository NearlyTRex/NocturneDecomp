; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00401bd0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00401010 at 0040105c
;
; Referenced Globals:
;   undefined4 DAT_00577154
;   undefined4 DAT_00577157
;   string s_..\\engine\\2d.c_0057715b
;   string s_Unable_to_open_VGA_palette_0057716a
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_00456a60
;   FUN_004c8440
;   FUN_00563380
;   FUN_005636d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00401bd0
        ;   Label: FUN_00401bd0
    PUSH 0x577154                       ; 00401bd1 | DAT_00577154
    MOV EDX,dword ptr [ESP + 0xc]       ; 00401bd6
    PUSH EDX                            ; 00401bda
    PUSH 0x577157                       ; 00401bdb | DAT_00577157
    CALL FUN_00456a60                   ; 00401be0
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined FUN_00456a60()
    ADD ESP,0xc                         ; 00401be5
    MOV EBX,EAX                         ; 00401be8
    TEST EAX,EAX                        ; 00401bea
    JZ 0x00401c0e                       ; 00401bec
        ;   XREF to: 00401c0e (CONDITIONAL_JUMP)  ; LAB_00401c0e
    PUSH EBX                            ; 00401bee
        ;   Label: LAB_00401bee
    PUSH 0x1                            ; 00401bef
    PUSH 0x300                          ; 00401bf1
    PUSH 0x1c00648                      ; 00401bf6
    CALL FUN_005636d0                   ; 00401bfb
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005636d0()
    ADD ESP,0x10                        ; 00401c00
    PUSH EBX                            ; 00401c03
    CALL FUN_00563380                   ; 00401c04
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined FUN_00563380()
    ADD ESP,0x4                         ; 00401c09
    POP EBX                             ; 00401c0c
    RET                                 ; 00401c0d
    PUSH ESI                            ; 00401c0e
        ;   Label: LAB_00401c0e
    MOV ECX,0x57715b                    ; 00401c0f | = "..\\engine\\2d.c"
    MOV ESI,0x2c1                       ; 00401c14
    PUSH 0x57716a                       ; 00401c19 | = "Unable to open VGA palette"
    MOV dword ptr [0x01cc4800],ECX      ; 00401c1e | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 00401c24 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00401c2a
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00401c2f
    POP ESI                             ; 00401c32
    JMP 0x00401bee                      ; 00401c33
        ;   XREF to: 00401bee (UNCONDITIONAL_JUMP)  ; LAB_00401bee

