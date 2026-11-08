; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_005238c0(undefined4 *param_1)
;
;
; XREF[1]:
;   FUN_00562dd0 at 00562ddf
;
; Called Functions:
;   FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005238c0
        ;   Label: FUN_005238c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005238c1
    PUSH 0x1c200                        ; 005238c5
    PUSH 0x0                            ; 005238ca
    LEA EAX,[EBX + 0x1c28]              ; 005238cc
    MOV dword ptr [EBX],0x0             ; 005238d2
    PUSH EAX                            ; 005238d8
    MOV dword ptr [EBX + 0x1c24],0x0    ; 005238d9
    CALL FUN_005bfb70                   ; 005238e3
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    ADD ESP,0xc                         ; 005238e8
    MOV EAX,EBX                         ; 005238eb
    POP EBX                             ; 005238ed
    RET                                 ; 005238ee

