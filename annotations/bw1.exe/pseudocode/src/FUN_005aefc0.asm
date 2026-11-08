; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005aefc0(int *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[4]:
;   FUN_004a1d00 at 004a5ffd
;   FUN_004d27b0 at 004d4c11
;   FUN_0054ec60 at 0054ee7e
;   FUN_005ae170 at 005ae178
;
; Called Functions:
;   FUN_0040cc00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aefc0
        ;   Label: FUN_005aefc0
    SUB ESP,0x4                         ; 005aefc1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005aefc4
    MOV EAX,dword ptr [ESP + 0x10]      ; 005aefc8
    MOV dword ptr [EBX],EAX             ; 005aefcc
    CMP EAX,0x1                         ; 005aefce
    JNZ 0x005af02c                      ; 005aefd1
        ;   XREF to: 005af02c (CONDITIONAL_JUMP)  ; LAB_005af02c
    MOV dword ptr [EBX + 0x4],0x42200000 ; 005aefd3
    PUSH 0x41a00000                     ; 005aefda
        ;   Label: LAB_005aefda
    PUSH 0x41200000                     ; 005aefdf
    CALL FUN_0040cc00                   ; 005aefe4
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0x8],EAX       ; 005aefe9
    MOV dword ptr [EBX + 0x24],0x0      ; 005aefed
    FLD float ptr [ESP + 0x8]           ; 005aeff4
    ADD ESP,0x8                         ; 005aeff8
    MOV dword ptr [EBX + 0x34],0x41200000 ; 005aeffb
    PUSH dword ptr [EBX + 0x34]         ; 005af002
    MOV dword ptr [EBX + 0x28],0x0      ; 005af005
    PUSH 0x40000000                     ; 005af00c
    FSTP float ptr [EBX + 0x20]         ; 005af011
    CALL FUN_0040cc00                   ; 005af014
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0x8],EAX       ; 005af019
    MOV EAX,dword ptr [ESP + 0x8]       ; 005af01d
    MOV dword ptr [EBX + 0x2c],EAX      ; 005af021
    ADD ESP,0x8                         ; 005af024
    ADD ESP,0x4                         ; 005af027
    POP EBX                             ; 005af02a
    RET                                 ; 005af02b
    MOV dword ptr [EBX + 0x4],0x40a00000 ; 005af02c
        ;   Label: LAB_005af02c
    JMP 0x005aefda                      ; 005af033
        ;   XREF to: 005aefda (UNCONDITIONAL_JUMP)  ; LAB_005aefda

