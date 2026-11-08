; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00573fc0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)
;
;
; XREF[11]:
;   FUN_00401010 at 004010c0
;   FUN_00401590 at 004015af
;   FUN_00402940 at 004029dc
;   FUN_004350a0 at 00435156
;   FUN_00438ef0 at 00438f2e
;   FUN_004af920 at 004afabc
;   FUN_00551620 at 00551746
;   FUN_00551d20 at 00551e8e
;   FUN_00552350 at 005525b8
;   FUN_00557570 at 00557662
;   ... and 1 more
;
; Referenced Globals:
;   void* PTR_CreateFileA_005b3524 = 001b3c7a
;
; Called Functions:
;   CreateFileA
;   FUN_00465660
;   FUN_004656d0
;   FUN_00573e00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00573fc0
        ;   Label: FUN_00573fc0
    SUB ESP,0x214                       ; 00573fc1
    MOV EBX,dword ptr [ESP + 0x21c]     ; 00573fc7
    PUSH EBX                            ; 00573fce
    MOV EAX,dword ptr [EBX]             ; 00573fcf
    CALL dword ptr [EAX + 0x24]         ; 00573fd1
    ADD ESP,0x4                         ; 00573fd4
    MOV EDX,dword ptr [ESP + 0x224]     ; 00573fd7
    PUSH EDX                            ; 00573fde
    MOV ECX,dword ptr [ESP + 0x224]     ; 00573fdf
    PUSH ECX                            ; 00573fe6
    LEA EAX,[ESP + 0x8]                 ; 00573fe7
    PUSH EAX                            ; 00573feb
    MOV dword ptr [EBX + 0x10],0x0      ; 00573fec
    CALL FUN_00465660                   ; 00573ff3
        ;   XREF to: 00465660 (UNCONDITIONAL_CALL)  ; undefined FUN_00465660()
    ADD ESP,0xc                         ; 00573ff8
    MOV EAX,ESP                         ; 00573ffb
    PUSH EAX                            ; 00573ffd
    CALL FUN_004656d0                   ; 00573ffe
        ;   XREF to: 004656d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004656d0()
    ADD ESP,0x4                         ; 00574003
    TEST EAX,EAX                        ; 00574006
    JZ 0x0057403f                       ; 00574008
        ;   XREF to: 0057403f (CONDITIONAL_JUMP)  ; LAB_0057403f
    PUSH 0x0                            ; 0057400a
    PUSH 0x0                            ; 0057400c
    PUSH 0x3                            ; 0057400e
    MOV EAX,dword ptr [ESP + 0x210]     ; 00574010
    PUSH 0x0                            ; 00574017
    MOV dword ptr [EBX + 0x8],EAX       ; 00574019
    PUSH 0x1                            ; 0057401c
    MOV EAX,dword ptr [ESP + 0x214]     ; 0057401e
    PUSH 0x80000000                     ; 00574025
    MOV dword ptr [EBX + 0xc],EAX       ; 0057402a
    LEA EAX,[ESP + 0x118]               ; 0057402d
    PUSH EAX                            ; 00574034
    CALL dword ptr CS:[0x5b3524]        ; 00574035 | PTR_CreateFileA_005b3524
    MOV dword ptr [EBX + 0x4],EAX       ; 0057403c
    PUSH EBX                            ; 0057403f
        ;   Label: LAB_0057403f
    MOV EAX,dword ptr [EBX]             ; 00574040
    CALL dword ptr [EAX + 0x1c]         ; 00574042
    ADD ESP,0x4                         ; 00574045
    TEST EAX,EAX                        ; 00574048
    JZ 0x0057406c                       ; 0057404a
        ;   XREF to: 0057406c (CONDITIONAL_JUMP)  ; LAB_0057406c
    PUSH EBX                            ; 0057404c
    CALL FUN_00573e00                   ; 0057404d
        ;   XREF to: 00573e00 (UNCONDITIONAL_CALL)  ; undefined FUN_00573e00()
    ADD ESP,0x4                         ; 00574052
    MOV EAX,dword ptr [ESP + 0x228]     ; 00574055
    MOV dword ptr [EBX + 0x28],EAX      ; 0057405c
    MOV EAX,0x1                         ; 0057405f
    ADD ESP,0x214                       ; 00574064
    POP EBX                             ; 0057406a
    RET                                 ; 0057406b
    PUSH EBX                            ; 0057406c
        ;   Label: LAB_0057406c
    MOV EAX,dword ptr [EBX]             ; 0057406d
    CALL dword ptr [EAX + 0x24]         ; 0057406f
    ADD ESP,0x4                         ; 00574072
    XOR EAX,EAX                         ; 00574075
    ADD ESP,0x214                       ; 00574077
    POP EBX                             ; 0057407d
    RET                                 ; 0057407e

