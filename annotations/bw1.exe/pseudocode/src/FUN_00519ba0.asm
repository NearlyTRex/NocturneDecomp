; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00519ba0(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00555360 at 0055539d
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   FUN_00481b80
;   FUN_00519960
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00519ba0
        ;   Label: FUN_00519ba0
    PUSH EDX                            ; 00519ba4
    MOV ECX,dword ptr [ESP + 0x8]       ; 00519ba5
    PUSH ECX                            ; 00519ba9
    CALL FUN_00519960                   ; 00519baa
        ;   XREF to: 00519960 (UNCONDITIONAL_CALL)  ; undefined FUN_00519960()
    ADD ESP,0x8                         ; 00519baf
    TEST EAX,EAX                        ; 00519bb2
    JNZ 0x00519bb7                      ; 00519bb4
        ;   XREF to: 00519bb7 (CONDITIONAL_JUMP)  ; LAB_00519bb7
    RET                                 ; 00519bb6
    PUSH EBX                            ; 00519bb7
        ;   Label: LAB_00519bb7
    MOV EAX,dword ptr [ESP + 0x8]       ; 00519bb8
    ADD EAX,0xe8                        ; 00519bbc
    PUSH EAX                            ; 00519bc1
    MOV EBX,dword ptr [0x00612560]      ; 00519bc2 | DAT_00612560
    PUSH EBX                            ; 00519bc8 | DAT_01bc120c
    CALL FUN_00481b80                   ; 00519bc9
        ;   XREF to: 00481b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00481b80()
    ADD ESP,0x8                         ; 00519bce
    POP EBX                             ; 00519bd1
    RET                                 ; 00519bd2

