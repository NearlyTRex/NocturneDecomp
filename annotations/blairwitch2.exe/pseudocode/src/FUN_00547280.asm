; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00547280(int param_1,int param_2)
;
;
; XREF[2]:
;   FUN_00426730 at 0042681f
;   FUN_00547170 at 00547183
;
; Called Functions:
;   FUN_00541990
;   FUN_005471f0
;   FUN_00547810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00547280
        ;   Label: FUN_00547280
    PUSH ESI                            ; 00547281
    MOV EBX,dword ptr [ESP + 0xc]       ; 00547282
    MOV EAX,dword ptr [ESP + 0x10]      ; 00547286
    CMP EAX,dword ptr [EBX + 0x2230]    ; 0054728a
    JNZ 0x005472b5                      ; 00547290
        ;   XREF to: 005472b5 (CONDITIONAL_JUMP)  ; LAB_005472b5
    MOV ECX,dword ptr [EBX + 0x2234]    ; 00547292
        ;   Label: LAB_00547292
    PUSH ECX                            ; 00547298
    MOV ESI,dword ptr [EBX + 0x2230]    ; 00547299
    PUSH ESI                            ; 0054729f
    PUSH EBX                            ; 005472a0
    CALL FUN_00547810                   ; 005472a1
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; undefined FUN_00547810()
    ADD ESP,0x4                         ; 005472a6
    PUSH EAX                            ; 005472a9
    CALL FUN_00541990                   ; 005472aa
        ;   XREF to: 00541990 (UNCONDITIONAL_CALL)  ; undefined FUN_00541990()
    ADD ESP,0xc                         ; 005472af
    POP ESI                             ; 005472b2
    POP EBX                             ; 005472b3
    RET                                 ; 005472b4
    PUSH EAX                            ; 005472b5
        ;   Label: LAB_005472b5
    PUSH EBX                            ; 005472b6
    CALL FUN_005471f0                   ; 005472b7
        ;   XREF to: 005471f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005471f0()
    ADD ESP,0x8                         ; 005472bc
    JMP 0x00547292                      ; 005472bf
        ;   XREF to: 00547292 (UNCONDITIONAL_JUMP)  ; LAB_00547292

