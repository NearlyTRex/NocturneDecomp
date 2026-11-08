; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004d8a20(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[4]:
;   FUN_004be8d0 at 004be99f
;   FUN_004d8e70 at 004d8ea0
;   FUN_004d95c0 at 004d95d6
;   FUN_00529a70 at 0052cc7b
;
; Referenced Globals:
;   void* PTR_FUN_005e2074 = 004d8a50
;
; Called Functions:
;   FUN_004d8aa0
;   FUN_004d8ae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8a20
        ;   Label: FUN_004d8a20
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d8a21
    MOV EDX,dword ptr [ESP + 0xc]       ; 004d8a25
    PUSH EDX                            ; 004d8a29
    PUSH EBX                            ; 004d8a2a
    MOV dword ptr [EBX + 0x200],0x5e2074 ; 004d8a2b | PTR_FUN_005e2074
    CALL FUN_004d8aa0                   ; 004d8a35
        ;   XREF to: 004d8aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8aa0()
    ADD ESP,0x8                         ; 004d8a3a
    MOV ECX,dword ptr [ESP + 0x10]      ; 004d8a3d
    PUSH ECX                            ; 004d8a41
    PUSH EBX                            ; 004d8a42
    CALL FUN_004d8ae0                   ; 004d8a43
        ;   XREF to: 004d8ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8ae0()
    ADD ESP,0x8                         ; 004d8a48
    MOV EAX,EBX                         ; 004d8a4b
    POP EBX                             ; 004d8a4d
    RET                                 ; 004d8a4e

