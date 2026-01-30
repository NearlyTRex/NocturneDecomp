; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl engine_colquant_c_FUN_00441790(void)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   engine_colquant.c_FUN_00441260 at 00441526
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00441790
        ;   Label: engine_colquant.c_FUN_00441790
    MOV EBP,ESP                         ; 00441791
    SUB ESP,0x10                        ; 00441793
    AND ESP,0xfffffff8                  ; 00441796
    FLD double ptr [EBP + 0x8]          ; 00441799
    FCOMP double ptr [EBP + 0x10]       ; 0044179c
    FNSTSW AX                           ; 0044179f
    SAHF                                ; 004417a1
    JBE 0x004417cc                      ; 004417a2
        ;   XREF to: 004417cc (CONDITIONAL_JUMP)  ; LAB_004417cc
    MOV EAX,dword ptr [EBP + 0x8]       ; 004417a4
    MOV dword ptr [ESP],EAX             ; 004417a7
    MOV EAX,dword ptr [EBP + 0xc]       ; 004417aa
    MOV dword ptr [ESP + 0x4],EAX       ; 004417ad
        ;   Label: LAB_004417ad
    MOV EAX,dword ptr [ESP]             ; 004417b1
    MOV dword ptr [ESP + 0x8],EAX       ; 004417b4
    MOV EAX,dword ptr [ESP + 0x4]       ; 004417b8
    MOV dword ptr [ESP + 0xc],EAX       ; 004417bc
    MOV EAX,dword ptr [ESP + 0x8]       ; 004417c0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004417c4
    MOV ESP,EBP                         ; 004417c8
    POP EBP                             ; 004417ca
    RET                                 ; 004417cb
    MOV EAX,dword ptr [EBP + 0x10]      ; 004417cc
        ;   Label: LAB_004417cc
    MOV dword ptr [ESP],EAX             ; 004417cf
    MOV EAX,dword ptr [EBP + 0x14]      ; 004417d2
    JMP 0x004417ad                      ; 004417d5
        ;   XREF to: 004417ad (UNCONDITIONAL_JUMP)  ; LAB_004417ad

