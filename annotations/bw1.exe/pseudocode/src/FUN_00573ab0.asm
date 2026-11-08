; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00573ab0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[3]:
;   FUN_00469550 at 0046bd93
;   FUN_004a1d00 at 004a3a44
;   FUN_00585b00 at 005881b3
;
; Called Functions:
;   FUN_0056fa10
;   FUN_00573e70
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00573ab0
        ;   Label: FUN_00573ab0
    PUSH 0x1                            ; 00573ab3
    MOV EDX,dword ptr [ESP + 0xc]       ; 00573ab5
    PUSH EDX                            ; 00573ab9
    CALL FUN_0056fa10                   ; 00573aba
        ;   XREF to: 0056fa10 (UNCONDITIONAL_CALL)  ; undefined FUN_0056fa10()
    ADD ESP,0x8                         ; 00573abf
    TEST EAX,EAX                        ; 00573ac2
    JNZ 0x00573aca                      ; 00573ac4
        ;   XREF to: 00573aca (CONDITIONAL_JUMP)  ; LAB_00573aca
    ADD ESP,0x4                         ; 00573ac6
    RET                                 ; 00573ac9
    MOV EDX,dword ptr [ESP + 0xc]       ; 00573aca
        ;   Label: LAB_00573aca
    MOV dword ptr [EAX + 0xfc],EDX      ; 00573ace
    MOV EDX,dword ptr [ESP + 0x10]      ; 00573ad4
    MOV dword ptr [EAX + 0x100],EDX     ; 00573ad8
    MOV EDX,dword ptr [ESP + 0x14]      ; 00573ade
    MOV dword ptr [ESP],EDX             ; 00573ae2
    FILD dword ptr [ESP]                ; 00573ae5
    FSTP float ptr [EAX + 0x104]        ; 00573ae8
    CALL FUN_00573e70                   ; 00573aee
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00573e70()
    MOV EAX,0x1                         ; 00573af3
    ADD ESP,0x4                         ; 00573af8
    RET                                 ; 00573afb

