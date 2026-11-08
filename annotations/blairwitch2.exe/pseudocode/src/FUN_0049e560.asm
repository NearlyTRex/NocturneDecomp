; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049e560(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,float param_5,undefined4 param_6)
;
;
; XREF[1]:
;   FUN_0047a0a0 at 0047a0d8
;
; Referenced Globals:
;   undefined4 DAT_005d5822
;
; Called Functions:
;   FUN_0049e5d0
;   FUN_00550da0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049e560
        ;   Label: FUN_0049e560
    PUSH ESI                            ; 0049e561
    PUSH EDI                            ; 0049e562
    PUSH EBP                            ; 0049e563
    FLD float ptr [ESP + 0x24]          ; 0049e564
    FCOMP double ptr [0x005d5822]       ; 0049e568 | DAT_005d5822
    FNSTSW AX                           ; 0049e56e
    SAHF                                ; 0049e570
    JNC 0x0049e57b                      ; 0049e571
        ;   XREF to: 0049e57b (CONDITIONAL_JUMP)  ; LAB_0049e57b
    MOV dword ptr [ESP + 0x24],0x38d1b717 ; 0049e573
    MOV ECX,dword ptr [ESP + 0x20]      ; 0049e57b
        ;   Label: LAB_0049e57b
    PUSH dword ptr [ESP + 0x24]         ; 0049e57f
    PUSH ECX                            ; 0049e583
    MOV EBX,dword ptr [ESP + 0x24]      ; 0049e584
    PUSH EBX                            ; 0049e588
    MOV ESI,dword ptr [ESP + 0x24]      ; 0049e589
    PUSH ESI                            ; 0049e58d
    PUSH 0x0                            ; 0049e58e
    MOV EDI,dword ptr [ESP + 0x28]      ; 0049e590
    PUSH EDI                            ; 0049e594
    CALL FUN_0049e5d0                   ; 0049e595
        ;   XREF to: 0049e5d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0049e5d0()
    IMUL EAX,EAX,0x3e4                  ; 0049e59a
    ADD ESP,0x18                        ; 0049e5a0
    MOV EDX,dword ptr [ESP + 0x28]      ; 0049e5a3
    MOV dword ptr [EAX + 0x1c97ae0],EDX ; 0049e5a7
    MOV EDX,0x1c97700                   ; 0049e5ad
    ADD EDX,EAX                         ; 0049e5b2
    ADD EDX,0x180                       ; 0049e5b4
    PUSH EDX                            ; 0049e5ba
    MOV EBP,dword ptr [EAX + 0x1c97ae0] ; 0049e5bb
    PUSH EBP                            ; 0049e5c1
    CALL FUN_00550da0                   ; 0049e5c2
        ;   XREF to: 00550da0 (UNCONDITIONAL_CALL)  ; undefined FUN_00550da0()
    ADD ESP,0x8                         ; 0049e5c7
    POP EBP                             ; 0049e5ca
    POP EDI                             ; 0049e5cb
    POP ESI                             ; 0049e5cc
    POP EBX                             ; 0049e5cd
    RET                                 ; 0049e5ce

