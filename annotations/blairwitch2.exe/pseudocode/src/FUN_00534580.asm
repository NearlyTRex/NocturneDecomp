; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00534580(undefined4 param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   FUN_004b6170 at 004b6477
;   FUN_004b82e0 at 004b869d
;
; Referenced Globals:
;   undefined4 DAT_005e5bca
;   undefined4 DAT_005e5bd2
;
; Called Functions:
;   FUN_00443180
;   FUN_005b7ff0
;   FUN_005b9484
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00534580
        ;   Label: FUN_00534580
    PUSH EBP                            ; 00534581
    MOV EBP,ESP                         ; 00534582
    SUB ESP,0xc                         ; 00534584
    AND ESP,0xfffffff8                  ; 00534587
    MOV EDX,dword ptr [EBP + 0x10]      ; 0053458a
    PUSH EDX                            ; 0053458d
    PUSH 0x1fc7838                      ; 0053458e
    CALL FUN_00443180                   ; 00534593
        ;   XREF to: 00443180 (UNCONDITIONAL_CALL)  ; undefined FUN_00443180()
    ADD ESP,0x8                         ; 00534598
    MOV EAX,dword ptr [EBP + 0x10]      ; 0053459b
    MOV dword ptr [ESP + 0x8],EAX       ; 0053459e
    FILD dword ptr [ESP + 0x8]          ; 005345a2
    FMUL double ptr [0x005e5bca]        ; 005345a6 | DAT_005e5bca
    MOV ESI,0x100                       ; 005345ac
    XOR EDX,EDX                         ; 005345b1
    XOR ECX,ECX                         ; 005345b3
    FSTP float ptr [ESP]                ; 005345b5
    MOV dword ptr [ESP + 0x8],EDX       ; 005345b8
        ;   Label: LAB_005345b8
    FILD dword ptr [ESP + 0x8]          ; 005345bc
    FMUL double ptr [0x005e5bca]        ; 005345c0 | DAT_005e5bca
    FLD float ptr [ESP]                 ; 005345c6
    FXCH                                ; 005345c9
    CALL FUN_005b9484                   ; 005345cb
        ;   XREF to: 005b9484 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9484()
    FMUL double ptr [0x005e5bd2]        ; 005345d0 | DAT_005e5bd2
    CALL FUN_005b7ff0                   ; 005345d6
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x4]         ; 005345db
    CMP dword ptr [ESP + 0x4],0x100     ; 005345df
    JL 0x00534604                       ; 005345e7
        ;   XREF to: 00534604 (CONDITIONAL_JUMP)  ; LAB_00534604
    ADD ECX,0x4                         ; 005345e9
        ;   Label: LAB_005345e9
    MOV EAX,dword ptr [ESP + 0x4]       ; 005345ec
    INC EDX                             ; 005345f0
    MOV dword ptr [ECX + 0x1fca38c],EAX ; 005345f1
    CMP EDX,0x10000                     ; 005345f7
    JL 0x005345b8                       ; 005345fd
        ;   XREF to: 005345b8 (CONDITIONAL_JUMP)  ; LAB_005345b8
    MOV ESP,EBP                         ; 005345ff
    POP EBP                             ; 00534601
    POP ESI                             ; 00534602
    RET                                 ; 00534603
    MOV dword ptr [ESP + 0x4],ESI       ; 00534604
        ;   Label: LAB_00534604
    JMP 0x005345e9                      ; 00534608
        ;   XREF to: 005345e9 (UNCONDITIONAL_JUMP)  ; LAB_005345e9

