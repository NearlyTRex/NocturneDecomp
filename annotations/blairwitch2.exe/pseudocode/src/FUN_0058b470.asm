; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0058b470(int *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[4]:
;   FUN_00489670 at 0048d744
;   FUN_004b90d0 at 004ba9bd
;   FUN_0052d980 at 0052db9e
;   FUN_0058a640 at 0058a648
;
; Called Functions:
;   FUN_0040cf60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058b470
        ;   Label: FUN_0058b470
    SUB ESP,0x4                         ; 0058b471
    MOV EBX,dword ptr [ESP + 0xc]       ; 0058b474
    MOV EAX,dword ptr [ESP + 0x10]      ; 0058b478
    MOV dword ptr [EBX],EAX             ; 0058b47c
    CMP EAX,0x1                         ; 0058b47e
    JNZ 0x0058b4dc                      ; 0058b481
        ;   XREF to: 0058b4dc (CONDITIONAL_JUMP)  ; LAB_0058b4dc
    MOV dword ptr [EBX + 0x4],0x42200000 ; 0058b483
    PUSH 0x41a00000                     ; 0058b48a
        ;   Label: LAB_0058b48a
    PUSH 0x41200000                     ; 0058b48f
    CALL FUN_0040cf60                   ; 0058b494
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0x8],EAX       ; 0058b499
    MOV dword ptr [EBX + 0x24],0x0      ; 0058b49d
    FLD float ptr [ESP + 0x8]           ; 0058b4a4
    ADD ESP,0x8                         ; 0058b4a8
    MOV dword ptr [EBX + 0x34],0x41200000 ; 0058b4ab
    PUSH dword ptr [EBX + 0x34]         ; 0058b4b2
    MOV dword ptr [EBX + 0x28],0x0      ; 0058b4b5
    PUSH 0x40000000                     ; 0058b4bc
    FSTP float ptr [EBX + 0x20]         ; 0058b4c1
    CALL FUN_0040cf60                   ; 0058b4c4
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0x8],EAX       ; 0058b4c9
    MOV EAX,dword ptr [ESP + 0x8]       ; 0058b4cd
    MOV dword ptr [EBX + 0x2c],EAX      ; 0058b4d1
    ADD ESP,0x8                         ; 0058b4d4
    ADD ESP,0x4                         ; 0058b4d7
    POP EBX                             ; 0058b4da
    RET                                 ; 0058b4db
    MOV dword ptr [EBX + 0x4],0x40a00000 ; 0058b4dc
        ;   Label: LAB_0058b4dc
    JMP 0x0058b48a                      ; 0058b4e3
        ;   XREF to: 0058b48a (UNCONDITIONAL_JUMP)  ; LAB_0058b48a

