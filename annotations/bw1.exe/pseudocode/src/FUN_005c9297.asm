; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005c9297(int param_1,uint param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_005c2622 at 005c2643
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c9297
        ;   Label: FUN_005c9297
    PUSH ESI                            ; 005c9298
    PUSH EDI                            ; 005c9299
    PUSH EBP                            ; 005c929a
    SUB ESP,0xc                         ; 005c929b
    MOV EBX,dword ptr [ESP + 0x20]      ; 005c929e
    MOV EBP,dword ptr [ESP + 0x24]      ; 005c92a2
    MOV EDI,dword ptr [ESP + 0x28]      ; 005c92a6
    MOV dword ptr [ESP + 0x4],EDI       ; 005c92aa
    MOV dword ptr [ESP + 0x8],EBX       ; 005c92ae
    XOR EDX,EDX                         ; 005c92b2
    MOV ESI,dword ptr [EDI + 0x4]       ; 005c92b4
    MOV dword ptr [ESP],EDX             ; 005c92b7
    MOV EDI,dword ptr [EDI + 0x10]      ; 005c92ba
    CMP EBP,dword ptr [ESP]             ; 005c92bd
        ;   Label: LAB_005c92bd
    JA 0x005c92ce                       ; 005c92c0
        ;   XREF to: 005c92ce (CONDITIONAL_JUMP)  ; LAB_005c92ce
    MOV EAX,dword ptr [ESP + 0x8]       ; 005c92c2
    ADD ESP,0xc                         ; 005c92c6
    POP EBP                             ; 005c92c9
    POP EDI                             ; 005c92ca
    POP ESI                             ; 005c92cb
    POP EBX                             ; 005c92cc
    RET                                 ; 005c92cd
    PUSH 0x0                            ; 005c92ce
        ;   Label: LAB_005c92ce
    PUSH EBX                            ; 005c92d0
    CALL ESI                            ; 005c92d1
    ADD ESP,0x8                         ; 005c92d3
    MOV EAX,dword ptr [ESP]             ; 005c92d6
    INC EAX                             ; 005c92d9
    ADD EBX,EDI                         ; 005c92da
    MOV dword ptr [ESP],EAX             ; 005c92dc
    JMP 0x005c92bd                      ; 005c92df
        ;   XREF to: 005c92bd (UNCONDITIONAL_JUMP)  ; LAB_005c92bd

