; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined * FUN_00568560(void)
;
;
; XREF[1]:
;   FUN_00565630 at 0056564e
;
; Referenced Globals:
;   undefined4 DAT_005c1894
;   undefined1 DAT_005c18a0
;   undefined4 DAT_005c18ae
;   undefined1 DAT_005c18ba
;   undefined4 DAT_005c1a9c
;   void* PTR_FUN_005c1ad0 = 005671e4
;   void* PTR_FUN_005c1ad4 = 005671e4
;   undefined4 DAT_02de4e20
;   undefined4 DAT_02de4e24
;
; Called Functions:
;   FUN_005635b0
;   FUN_00563cc0
;   FUN_005671e4
;   FUN_00568e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00568560
        ;   Label: FUN_00568560
    PUSH ESI                            ; 00568561
    PUSH EDI                            ; 00568562
    CALL dword ptr [0x005c1ad0]         ; 00568563 | PTR_FUN_005c1ad0
    MOV ESI,dword ptr [0x02de4e24]      ; 00568569 | DAT_02de4e24
    TEST ESI,ESI                        ; 0056856f
    JZ 0x0056858c                       ; 00568571
        ;   XREF to: 0056858c (CONDITIONAL_JUMP)  ; LAB_0056858c
    MOV EBX,dword ptr [ESI + 0x4]       ; 00568573
    MOV EDI,dword ptr [EBX + 0xc]       ; 00568576
    MOV EAX,dword ptr [ESI]             ; 00568579
    AND EDI,0x4003                      ; 0056857b
    MOV [0x02de4e24],EAX                ; 00568581 | DAT_02de4e24
    OR DI,0x3                           ; 00568586
    JMP 0x005685d9                      ; 0056858a
        ;   XREF to: 005685d9 (UNCONDITIONAL_JUMP)  ; LAB_005685d9
    MOV EBX,0x5c1894                    ; 0056858c | DAT_005c1894
        ;   Label: LAB_0056858c
    CMP EBX,0x5c1a9c                    ; 00568591 | DAT_005c1a9c
    JNC 0x005685c1                      ; 00568597
        ;   XREF to: 005685c1 (CONDITIONAL_JUMP)  ; LAB_005685c1
    TEST byte ptr [EBX + 0xc],0x3       ; 00568599 | DAT_005c18a0 | DAT_005c18ba
        ;   Label: LAB_00568599
    JNZ 0x005685b6                      ; 0056859d
        ;   XREF to: 005685b6 (CONDITIONAL_JUMP)  ; LAB_005685b6
    PUSH 0x1d                           ; 0056859f
    CALL FUN_005635b0                   ; 005685a1
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005635b0()
    ADD ESP,0x4                         ; 005685a6
    MOV ESI,EAX                         ; 005685a9
    TEST EAX,EAX                        ; 005685ab
    JZ 0x00568608                       ; 005685ad
        ;   XREF to: 00568608 (CONDITIONAL_JUMP)  ; LAB_00568608
    MOV EDI,0x3                         ; 005685af
    JMP 0x005685d9                      ; 005685b4
        ;   XREF to: 005685d9 (UNCONDITIONAL_JUMP)  ; LAB_005685d9
    ADD EBX,0x1a                        ; 005685b6
        ;   Label: LAB_005685b6
    CMP EBX,0x5c1a9c                    ; 005685b9 | DAT_005c1a9c
    JC 0x00568599                       ; 005685bf
        ;   XREF to: 00568599 (CONDITIONAL_JUMP)  ; LAB_00568599
    PUSH 0x37                           ; 005685c1
        ;   Label: LAB_005685c1
    MOV EDI,0x4003                      ; 005685c3
    CALL FUN_005635b0                   ; 005685c8
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005635b0()
    ADD ESP,0x4                         ; 005685cd
    MOV ESI,EAX                         ; 005685d0
    TEST EAX,EAX                        ; 005685d2
    JZ 0x00568608                       ; 005685d4
        ;   XREF to: 00568608 (CONDITIONAL_JUMP)  ; LAB_00568608
    LEA EBX,[EAX + 0x1d]                ; 005685d6
    PUSH 0x1a                           ; 005685d9
        ;   Label: LAB_005685d9
    PUSH 0x0                            ; 005685db
    PUSH EBX                            ; 005685dd | DAT_005c18ae
    CALL FUN_00563cc0                   ; 005685de
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00563cc0()
    MOV dword ptr [EBX + 0xc],EDI       ; 005685e3
    MOV EAX,[0x02de4e20]                ; 005685e6 | DAT_02de4e20
    MOV dword ptr [ESI + 0x4],EBX       ; 005685eb
    ADD ESP,0xc                         ; 005685ee
    MOV dword ptr [EBX + 0x8],ESI       ; 005685f1
    MOV dword ptr [0x02de4e20],ESI      ; 005685f4 | DAT_02de4e20
    MOV dword ptr [ESI],EAX             ; 005685fa
    CALL dword ptr [0x005c1ad4]         ; 005685fc | PTR_FUN_005c1ad4
    MOV EAX,EBX                         ; 00568602
    POP EDI                             ; 00568604
    POP ESI                             ; 00568605
    POP EBX                             ; 00568606
    RET                                 ; 00568607
    PUSH 0x5                            ; 00568608
        ;   Label: LAB_00568608
    CALL FUN_00568e80                   ; 0056860a
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00568e80()
    ADD ESP,0x4                         ; 0056860f
    CALL dword ptr [0x005c1ad4]         ; 00568612 | PTR_FUN_005c1ad4
    XOR EAX,EAX                         ; 00568618
    POP EDI                             ; 0056861a
    POP ESI                             ; 0056861b
    POP EBX                             ; 0056861c
    RET                                 ; 0056861d

