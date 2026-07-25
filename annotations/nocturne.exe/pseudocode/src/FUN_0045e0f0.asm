; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045e0f0(int *param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[2]:
;   FUN_0045e110 at 0045e120
;   FUN_0045e130 at 0045e181
;
; Called Functions:
;   FUN_0045de40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045e0f0
        ;   Label: FUN_0045e0f0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0045e0f1
    MOV ECX,dword ptr [ESP + 0x10]      ; 0045e0f5
    MOV EAX,dword ptr [EDX]             ; 0045e0f9
    PUSH ECX                            ; 0045e0fb
    DEC EAX                             ; 0045e0fc
    PUSH EAX                            ; 0045e0fd
    PUSH 0x0                            ; 0045e0fe
    MOV EBX,dword ptr [ESP + 0x18]      ; 0045e100
    PUSH EBX                            ; 0045e104
    PUSH EDX                            ; 0045e105
    CALL FUN_0045de40                   ; 0045e106
        ;   XREF to: 0045de40 (UNCONDITIONAL_CALL)  ; undefined FUN_0045de40()
    ADD ESP,0x14                        ; 0045e10b
    POP EBX                             ; 0045e10e
    RET                                 ; 0045e10f

