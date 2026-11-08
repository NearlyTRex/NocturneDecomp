; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double FUN_00555890(int param_1)
;
; Local Variables:
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[1]:
;   FUN_00560b10 at 00560b8f
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00555890
        ;   Label: FUN_00555890
    MOV EBP,ESP                         ; 00555891
    SUB ESP,0x8                         ; 00555893
    AND ESP,0xfffffff8                  ; 00555896
    MOV EAX,dword ptr [EBP + 0x8]       ; 00555899
    CMP dword ptr [EAX + 0x10c],0x0     ; 0055589c
    JLE 0x005558c1                      ; 005558a3
        ;   XREF to: 005558c1 (CONDITIONAL_JUMP)  ; LAB_005558c1
    FILD dword ptr [EAX + 0x110]        ; 005558a5
    FILD dword ptr [EAX + 0x10c]        ; 005558ab
    FDIVP                               ; 005558b1
    FSTP double ptr [ESP]               ; 005558b3
    MOV EAX,dword ptr [ESP]             ; 005558b6
    MOV EDX,dword ptr [ESP + 0x4]       ; 005558b9
    MOV ESP,EBP                         ; 005558bd
    POP EBP                             ; 005558bf
    RET                                 ; 005558c0
    XOR ECX,ECX                         ; 005558c1
        ;   Label: LAB_005558c1
    MOV dword ptr [ESP],ECX             ; 005558c3
    MOV dword ptr [ESP + 0x4],ECX       ; 005558c6
    MOV EAX,dword ptr [ESP]             ; 005558ca
    MOV EDX,dword ptr [ESP + 0x4]       ; 005558cd
    MOV ESP,EBP                         ; 005558d1
    POP EBP                             ; 005558d3
    RET                                 ; 005558d4

