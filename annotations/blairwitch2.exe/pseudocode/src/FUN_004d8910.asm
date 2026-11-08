; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004d8910(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[4]:
;   FUN_004bc840 at 004bc8fc
;   FUN_004d8d60 at 004d8d90
;   FUN_004d94d0 at 004d94e6
;   FUN_00522350 at 0052562f
;
; Referenced Globals:
;   void* PTR_FUN_005f8ef4 = 004d8940
;
; Called Functions:
;   FUN_004d8990
;   FUN_004d89d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8910
        ;   Label: FUN_004d8910
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d8911
    MOV EDX,dword ptr [ESP + 0xc]       ; 004d8915
    PUSH EDX                            ; 004d8919
    PUSH EBX                            ; 004d891a
    MOV dword ptr [EBX + 0x200],0x5f8ef4 ; 004d891b | PTR_FUN_005f8ef4
    CALL FUN_004d8990                   ; 004d8925
        ;   XREF to: 004d8990 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8990()
    ADD ESP,0x8                         ; 004d892a
    MOV ECX,dword ptr [ESP + 0x10]      ; 004d892d
    PUSH ECX                            ; 004d8931
    PUSH EBX                            ; 004d8932
    CALL FUN_004d89d0                   ; 004d8933
        ;   XREF to: 004d89d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d89d0()
    ADD ESP,0x8                         ; 004d8938
    MOV EAX,EBX                         ; 004d893b
    POP EBX                             ; 004d893d
    RET                                 ; 004d893e

