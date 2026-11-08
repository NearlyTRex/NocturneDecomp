; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double FUN_0054fd20(int param_1)
;
; Local Variables:
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[1]:
;   FUN_0055af90 at 0055b00f
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0054fd20
        ;   Label: FUN_0054fd20
    MOV EBP,ESP                         ; 0054fd21
    SUB ESP,0x8                         ; 0054fd23
    AND ESP,0xfffffff8                  ; 0054fd26
    MOV EAX,dword ptr [EBP + 0x8]       ; 0054fd29
    CMP dword ptr [EAX + 0x10c],0x0     ; 0054fd2c
    JLE 0x0054fd51                      ; 0054fd33
        ;   XREF to: 0054fd51 (CONDITIONAL_JUMP)  ; LAB_0054fd51
    FILD dword ptr [EAX + 0x110]        ; 0054fd35
    FILD dword ptr [EAX + 0x10c]        ; 0054fd3b
    FDIVP                               ; 0054fd41
    FSTP double ptr [ESP]               ; 0054fd43
    MOV EAX,dword ptr [ESP]             ; 0054fd46
    MOV EDX,dword ptr [ESP + 0x4]       ; 0054fd49
    MOV ESP,EBP                         ; 0054fd4d
    POP EBP                             ; 0054fd4f
    RET                                 ; 0054fd50
    XOR ECX,ECX                         ; 0054fd51
        ;   Label: LAB_0054fd51
    MOV dword ptr [ESP],ECX             ; 0054fd53
    MOV dword ptr [ESP + 0x4],ECX       ; 0054fd56
    MOV EAX,dword ptr [ESP]             ; 0054fd5a
    MOV EDX,dword ptr [ESP + 0x4]       ; 0054fd5d
    MOV ESP,EBP                         ; 0054fd61
    POP EBP                             ; 0054fd63
    RET                                 ; 0054fd64

