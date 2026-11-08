; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00573db0(int param_1)
;
;
; XREF[14]:
;   FUN_00401010 at 004010fa
;   FUN_00401590 at 004015d5
;   FUN_00402940 at 00402ab3
;   FUN_004350a0 at 004351c3
;   FUN_00438ef0 at 00438f85
;   FUN_004af920 at 004afb3e
;   FUN_004bda10 at 004bdded
;   FUN_004bdfb0 at 004be32f
;   FUN_00512fb0 at 00513046
;   FUN_00551d20 at 00552091
;   ... and 4 more
;
; Referenced Globals:
;   void* PTR_CloseHandle_005b3518 = 001b3c48
;
; Called Functions:
;   CloseHandle
;   FUN_00573e70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00573db0
        ;   Label: FUN_00573db0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00573db1
    MOV EDX,dword ptr [EBX + 0x4]       ; 00573db5
    TEST EDX,EDX                        ; 00573db8
    JNZ 0x00573de1                      ; 00573dba
        ;   XREF to: 00573de1 (CONDITIONAL_JUMP)  ; LAB_00573de1
    MOV dword ptr [EBX + 0xc],0x0       ; 00573dbc
        ;   Label: LAB_00573dbc
    MOV dword ptr [EBX + 0x10],0x0      ; 00573dc3
    PUSH EBX                            ; 00573dca
    MOV dword ptr [EBX + 0x8],0x0       ; 00573dcb
    CALL FUN_00573e70                   ; 00573dd2
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00573e70()
    MOV EAX,0x1                         ; 00573dd7
    ADD ESP,0x4                         ; 00573ddc
    POP EBX                             ; 00573ddf
    RET                                 ; 00573de0
    PUSH EDX                            ; 00573de1
        ;   Label: LAB_00573de1
    CALL dword ptr CS:[0x5b3518]        ; 00573de2 | PTR_CloseHandle_005b3518
    MOV dword ptr [EBX + 0x4],0x0       ; 00573de9
    JMP 0x00573dbc                      ; 00573df0
        ;   XREF to: 00573dbc (UNCONDITIONAL_JUMP)  ; LAB_00573dbc

