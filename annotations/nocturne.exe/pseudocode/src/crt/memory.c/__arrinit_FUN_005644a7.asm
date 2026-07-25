; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_memory_c___arrinit_FUN_005644a7(int param_1,uint param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[76]:
;   FUN_00418630 at 00418650
;   FUN_0041e260 at 0041e28f
;   FUN_0043d8e0 at 0043d8ec
;   FUN_0043f9c0 at 0043f9cf
;   FUN_00448410 at 0044841c
;   FUN_0044bc20 at 0044bc2c
;   FUN_00452530 at 0045253f
;   FUN_00458580 at 004585f6
;   FUN_004671c0 at 004671cf
;   FUN_0046c250 at 0046c25c
;   ... and 66 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005644a7
        ;   Label: crt_memory.c___arrinit_FUN_005644a7
    PUSH ESI                            ; 005644a8
    PUSH EDI                            ; 005644a9
    PUSH EBP                            ; 005644aa
    SUB ESP,0xc                         ; 005644ab
    MOV EBX,dword ptr [ESP + 0x20]      ; 005644ae
    MOV EBP,dword ptr [ESP + 0x24]      ; 005644b2
    MOV EDI,dword ptr [ESP + 0x28]      ; 005644b6
    MOV dword ptr [ESP + 0x4],EDI       ; 005644ba
    MOV dword ptr [ESP + 0x8],EBX       ; 005644be
    XOR EDX,EDX                         ; 005644c2
    MOV ESI,dword ptr [EDI + 0x4]       ; 005644c4
    MOV dword ptr [ESP],EDX             ; 005644c7
    MOV EDI,dword ptr [EDI + 0x10]      ; 005644ca
    CMP EBP,dword ptr [ESP]             ; 005644cd
        ;   Label: LAB_005644cd
    JA 0x005644de                       ; 005644d0
        ;   XREF to: 005644de (CONDITIONAL_JUMP)  ; LAB_005644de
    MOV EAX,dword ptr [ESP + 0x8]       ; 005644d2
    ADD ESP,0xc                         ; 005644d6
    POP EBP                             ; 005644d9
    POP EDI                             ; 005644da
    POP ESI                             ; 005644db
    POP EBX                             ; 005644dc
    RET                                 ; 005644dd
    PUSH EBX                            ; 005644de
        ;   Label: LAB_005644de
    CALL ESI                            ; 005644df
    ADD ESP,0x4                         ; 005644e1
    MOV EAX,dword ptr [ESP]             ; 005644e4
    INC EAX                             ; 005644e7
    ADD EBX,EDI                         ; 005644e8
    MOV dword ptr [ESP],EAX             ; 005644ea
    JMP 0x005644cd                      ; 005644ed
        ;   XREF to: 005644cd (UNCONDITIONAL_JUMP)  ; LAB_005644cd

