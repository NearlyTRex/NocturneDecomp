; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00555900(int param_1,int param_2)
;
;
; XREF[5]:
;   FUN_00551d20 at 00551f1d
;   FUN_00552350 at 00552549
;   FUN_00553660 at 005536eb
;   FUN_005537c0 at 00553905
;   FUN_00553960 at 00553d6e
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00555900
        ;   Label: FUN_00555900
    MOV EDX,dword ptr [ESP + 0x8]       ; 00555904
    IMUL EDX,dword ptr [EAX + 0x104]    ; 00555908
    IMUL EDX,dword ptr [EAX + 0x108]    ; 0055590f
    ADD EDX,0x7                         ; 00555916
    MOV EAX,EDX                         ; 00555919
    SAR EDX,0x1f                        ; 0055591b
    SHL EDX,0x3                         ; 0055591e
    SBB EAX,EDX                         ; 00555921
    SAR EAX,0x3                         ; 00555923
    RET                                 ; 00555926

