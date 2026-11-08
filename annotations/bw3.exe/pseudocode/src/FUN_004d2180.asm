; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004d2180(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004625f0
;   FUN_004d1d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d2180
        ;   Label: FUN_004d2180
    MOV EDX,dword ptr [ESP + 0x8]       ; 004d2181
    PUSH EDX                            ; 004d2185
    CALL FUN_004d1d80                   ; 004d2186
        ;   XREF to: 004d1d80 (UNCONDITIONAL_CALL)  ; undefined FUN_004d1d80()
    ADD ESP,0x4                         ; 004d218b
    PUSH 0x5c4acf                       ; 004d218e
    MOV EBX,EAX                         ; 004d2193
    ADD EAX,0x158                       ; 004d2195
    PUSH EAX                            ; 004d219a
    MOV dword ptr [EAX + -0x4],0x5e13f4 ; 004d219b
    CALL FUN_004625f0                   ; 004d21a2
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    ADD ESP,0x8                         ; 004d21a7
    MOV dword ptr [EBX + 0x2d8],0x41200000 ; 004d21aa
    MOV EAX,EBX                         ; 004d21b4
    MOV dword ptr [EBX + 0x2e0],0x1     ; 004d21b6
    POP EBX                             ; 004d21c0
    RET                                 ; 004d21c1

