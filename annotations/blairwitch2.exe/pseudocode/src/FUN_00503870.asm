; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00503870(int *param_1)
;
;
; XREF[2]:
;   FUN_004281d0 at 004281ef
;   FUN_005042e0 at 0050441c
;
; Called Functions:
;   FUN_005035c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00503870
        ;   Label: FUN_00503870
    PUSH EDX                            ; 00503874
    CALL FUN_005035c0                   ; 00503875
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0050387a
    ADD EAX,EAX                         ; 0050387d
    MOV EDX,EAX                         ; 0050387f
    SHL EAX,0x4                         ; 00503881
    ADD ESP,0x4                         ; 00503884
    SUB EAX,EDX                         ; 00503887
    MOV EDX,dword ptr [ESP + 0x4]       ; 00503889
    MOV EDX,dword ptr [EDX]             ; 0050388d
    ADD EDX,0x4                         ; 0050388f
    ADD EAX,EDX                         ; 00503892
    RET                                 ; 00503894

