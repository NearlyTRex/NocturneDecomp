; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 * FUN_0059dd40(int param_1)
;
;
; XREF[1]:
;   FUN_0059e040 at 0059e058
;
; Called Functions:
;   FUN_005bfb70
;   FUN_005c0357
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059dd40
        ;   Label: FUN_0059dd40
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059dd41
    PUSH 0x607310                       ; 0059dd45
    PUSH 0xc                            ; 0059dd4a
    ADD EBX,0x38c                       ; 0059dd4c
    PUSH EBX                            ; 0059dd52
    CALL FUN_005c0357                   ; 0059dd53
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    ADD ESP,0xc                         ; 0059dd58
    PUSH 0x2b8                          ; 0059dd5b
    LEA EBX,[EAX + 0xfffffc74]          ; 0059dd60
    PUSH 0x0                            ; 0059dd66
    SUB EAX,0x288                       ; 0059dd68
    PUSH EAX                            ; 0059dd6d
    CALL FUN_005bfb70                   ; 0059dd6e
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    MOV dword ptr [EBX + 0x3bc],0x0     ; 0059dd73
    ADD ESP,0xc                         ; 0059dd7d
    MOV dword ptr [EBX + 0x3c0],0x0     ; 0059dd80
    MOV EAX,EBX                         ; 0059dd8a
    MOV byte ptr [EBX],0x0              ; 0059dd8c
    POP EBX                             ; 0059dd8f
    RET                                 ; 0059dd90

