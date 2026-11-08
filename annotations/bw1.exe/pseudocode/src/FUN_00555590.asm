; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00555590(int param_1)
;
;
; XREF[5]:
;   FUN_0054e3c0 at 0054e56a
;   FUN_00550260 at 00550404
;   FUN_00550580 at 005506d3
;   FUN_00551480 at 00551679
;   FUN_005516c0 at 005518a2
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;   undefined4 DAT_020af5ac
;   undefined4 DAT_020af5b8
;   undefined4 DAT_020af5c4
;
; Called Functions:
;   FUN_004834b0
;   FUN_00483530
;   FUN_004839b0
;   FUN_00484170
;   FUN_00484190
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00555590
        ;   Label: FUN_00555590
    PUSH ESI                            ; 00555591
    PUSH EDI                            ; 00555592
    PUSH 0x20af5ac                      ; 00555593 | DAT_020af5ac
    MOV EDX,dword ptr [0x00612560]      ; 00555598 | DAT_00612560
    PUSH EDX                            ; 0055559e | DAT_01bc120c
    CALL FUN_004834b0                   ; 0055559f
        ;   XREF to: 004834b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004834b0()
    ADD ESP,0x8                         ; 005555a4
    MOV ECX,dword ptr [0x00612560]      ; 005555a7 | DAT_00612560
    PUSH dword ptr [0x020af5c4]         ; 005555ad | DAT_020af5c4
    PUSH ECX                            ; 005555b3 | DAT_01bc120c
    CALL FUN_004839b0                   ; 005555b4
        ;   XREF to: 004839b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004839b0()
    ADD ESP,0x8                         ; 005555b9
    PUSH 0x20af5b8                      ; 005555bc | DAT_020af5b8
    MOV EBX,dword ptr [0x00612560]      ; 005555c1 | DAT_00612560
    PUSH EBX                            ; 005555c7 | DAT_01bc120c
    CALL FUN_00483530                   ; 005555c8
        ;   XREF to: 00483530 (UNCONDITIONAL_CALL)  ; undefined FUN_00483530()
    ADD ESP,0x8                         ; 005555cd
    PUSH 0x0                            ; 005555d0
    MOV ESI,dword ptr [0x00612560]      ; 005555d2 | DAT_00612560
    PUSH ESI                            ; 005555d8 | DAT_01bc120c
    CALL FUN_00484190                   ; 005555d9
        ;   XREF to: 00484190 (UNCONDITIONAL_CALL)  ; undefined FUN_00484190()
    ADD ESP,0x8                         ; 005555de
    PUSH 0x0                            ; 005555e1
    MOV EDI,dword ptr [0x00612560]      ; 005555e3 | DAT_00612560
    PUSH EDI                            ; 005555e9 | DAT_01bc120c
    CALL FUN_00484170                   ; 005555ea
        ;   XREF to: 00484170 (UNCONDITIONAL_CALL)  ; undefined FUN_00484170()
    ADD ESP,0x8                         ; 005555ef
    MOV EAX,dword ptr [ESP + 0x10]      ; 005555f2
    MOV dword ptr [EAX + 0x161668],0x0  ; 005555f6
    POP EDI                             ; 00555600
    POP ESI                             ; 00555601
    POP EBX                             ; 00555602
    RET                                 ; 00555603

