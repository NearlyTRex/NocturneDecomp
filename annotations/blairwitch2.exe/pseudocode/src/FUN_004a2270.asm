; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a2270(undefined4 *param_1)
;
;
; Called Functions:
;   FUN_0040d900
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a2270
        ;   Label: FUN_004a2270
    PUSH 0xffff                         ; 004a2274
    MOV EDX,dword ptr [EAX + 0x4]       ; 004a2279
    PUSH EDX                            ; 004a227c
    MOV ECX,dword ptr [EAX]             ; 004a227d
    PUSH ECX                            ; 004a227f
    ADD EAX,0x18                        ; 004a2280
    PUSH EAX                            ; 004a2283
    CALL FUN_0040d900                   ; 004a2284
        ;   XREF to: 0040d900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d900()
    ADD ESP,0x10                        ; 004a2289
    RET                                 ; 004a228c

