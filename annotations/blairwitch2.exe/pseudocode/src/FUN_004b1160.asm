; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004b1160(int param_1)
;
;
; Called Functions:
;   FUN_004268b0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b1160
        ;   Label: FUN_004b1160
    MOV EDX,dword ptr [EAX + 0x247e4]   ; 004b1164
    MOV EAX,dword ptr [EAX + EDX*0x4 + 0x2498c] ; 004b116a
    PUSH EAX                            ; 004b1171
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004b1172
    CALL dword ptr [EDX + 0x1c]         ; 004b1178
    ADD ESP,0x4                         ; 004b117b
    MOV EDX,dword ptr [ESP + 0x4]       ; 004b117e
    PUSH EDX                            ; 004b1182
    CALL FUN_004268b0                   ; 004b1183
        ;   XREF to: 004268b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004268b0()
    MOV EAX,0x1                         ; 004b1188
    ADD ESP,0x4                         ; 004b118d
    RET                                 ; 004b1190

