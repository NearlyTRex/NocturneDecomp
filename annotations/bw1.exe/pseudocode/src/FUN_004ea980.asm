; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ea980(int param_1)
;
;
; XREF[10]:
;   FUN_00410780 at 0041078f
;   FUN_00445320 at 0044532f
;   FUN_00476700 at 0047670f
;   FUN_004cb760 at 004cb786
;   FUN_004ea280 at 004ea28f
;   FUN_004f2740 at 004f274f
;   FUN_005203b0 at 005203f0
;   FUN_00543070 at 0054307f
;   FUN_00591e60 at 00591e6f
;   FUN_00594680 at 005946b6
;
; Referenced Globals:
;   void* PTR_FUN_00601d34 = 004eaa10
;
; Called Functions:
;   FUN_00408730
;   FUN_0040ee30
;   FUN_00441ca0
;   FUN_004f6f80
;   FUN_00533060
;   FUN_005673f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ea980
        ;   Label: FUN_004ea980
    MOV EDX,dword ptr [ESP + 0x8]       ; 004ea981
    MOV dword ptr [EDX + 0x154],0x601d34 ; 004ea985 | PTR_FUN_00601d34
    XOR EAX,EAX                         ; 004ea98f
    CMP EDX,dword ptr [EAX + 0x1d06aa4] ; 004ea991
        ;   Label: LAB_004ea991
    JZ 0x004eaa05                       ; 004ea997
        ;   XREF to: 004eaa05 (CONDITIONAL_JUMP)  ; LAB_004eaa05
    ADD EAX,0x4                         ; 004ea999
        ;   Label: LAB_004ea999
    CMP EAX,0x10                        ; 004ea99c
    JNZ 0x004ea991                      ; 004ea99f
        ;   XREF to: 004ea991 (CONDITIONAL_JUMP)  ; LAB_004ea991
    PUSH 0x0                            ; 004ea9a1
    ADD EDX,0x1fae8                     ; 004ea9a3
    PUSH EDX                            ; 004ea9a9
    CALL FUN_004f6f80                   ; 004ea9aa
        ;   XREF to: 004f6f80 (UNCONDITIONAL_CALL)  ; undefined FUN_004f6f80()
    ADD ESP,0x8                         ; 004ea9af
    PUSH 0x0                            ; 004ea9b2
    SUB EAX,0x138e0                     ; 004ea9b4
    PUSH EAX                            ; 004ea9b9
    CALL FUN_00533060                   ; 004ea9ba
        ;   XREF to: 00533060 (UNCONDITIONAL_CALL)  ; undefined FUN_00533060()
    ADD ESP,0x8                         ; 004ea9bf
    PUSH 0x0                            ; 004ea9c2
    SUB EAX,0x8c2c                      ; 004ea9c4
    PUSH EAX                            ; 004ea9c9
    CALL FUN_0040ee30                   ; 004ea9ca
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ee30()
    ADD ESP,0x8                         ; 004ea9cf
    PUSH 0x0                            ; 004ea9d2
    SUB EAX,0x93c                       ; 004ea9d4
    PUSH EAX                            ; 004ea9d9
    CALL FUN_00441ca0                   ; 004ea9da
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ca0()
    ADD ESP,0x8                         ; 004ea9df
    PUSH 0x0                            ; 004ea9e2
    SUB EAX,0x2b48                      ; 004ea9e4
    PUSH EAX                            ; 004ea9e9
    CALL FUN_005673f0                   ; 004ea9ea
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005673f0()
    ADD ESP,0x8                         ; 004ea9ef
    PUSH 0x1                            ; 004ea9f2
    LEA EDX,[EAX + 0xfffffea8]          ; 004ea9f4
    PUSH EDX                            ; 004ea9fa
    CALL FUN_00408730                   ; 004ea9fb
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 004eaa00
    POP EBX                             ; 004eaa03
    RET                                 ; 004eaa04
    XOR EBX,EBX                         ; 004eaa05
        ;   Label: LAB_004eaa05
    MOV dword ptr [EAX + 0x1d06aa4],EBX ; 004eaa07
    JMP 0x004ea999                      ; 004eaa0d
        ;   XREF to: 004ea999 (UNCONDITIONAL_JUMP)  ; LAB_004ea999

