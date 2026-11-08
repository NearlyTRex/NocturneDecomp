; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double FUN_00572390(int param_1)
;
; Local Variables:
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[1]:
;   FUN_0057d9e0 at 0057da5f
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00572390
        ;   Label: FUN_00572390
    MOV EBP,ESP                         ; 00572391
    SUB ESP,0x8                         ; 00572393
    AND ESP,0xfffffff8                  ; 00572396
    MOV EAX,dword ptr [EBP + 0x8]       ; 00572399
    CMP dword ptr [EAX + 0x10c],0x0     ; 0057239c
    JLE 0x005723c1                      ; 005723a3
        ;   XREF to: 005723c1 (CONDITIONAL_JUMP)  ; LAB_005723c1
    FILD dword ptr [EAX + 0x110]        ; 005723a5
    FILD dword ptr [EAX + 0x10c]        ; 005723ab
    FDIVP                               ; 005723b1
    FSTP double ptr [ESP]               ; 005723b3
    MOV EAX,dword ptr [ESP]             ; 005723b6
    MOV EDX,dword ptr [ESP + 0x4]       ; 005723b9
    MOV ESP,EBP                         ; 005723bd
    POP EBP                             ; 005723bf
    RET                                 ; 005723c0
    XOR ECX,ECX                         ; 005723c1
        ;   Label: LAB_005723c1
    MOV dword ptr [ESP],ECX             ; 005723c3
    MOV dword ptr [ESP + 0x4],ECX       ; 005723c6
    MOV EAX,dword ptr [ESP]             ; 005723ca
    MOV EDX,dword ptr [ESP + 0x4]       ; 005723cd
    MOV ESP,EBP                         ; 005723d1
    POP EBP                             ; 005723d3
    RET                                 ; 005723d4

