; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00529990(int param_1,int param_2)
;
;
; XREF[3]:
;   FUN_004244b0 at 00424554
;   FUN_00522350 at 0052474e
;   FUN_00529b00 at 00529b0a
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00529990
        ;   Label: FUN_00529990
    MOV EDX,dword ptr [ESP + 0x8]       ; 00529994
    CMP EDX,dword ptr [EAX + 0x4]       ; 00529998
    JZ 0x0052999e                       ; 0052999b
        ;   XREF to: 0052999e (CONDITIONAL_JUMP)  ; LAB_0052999e
    RET                                 ; 0052999d
    MOV dword ptr [EAX + 0x4],0x0       ; 0052999e
        ;   Label: LAB_0052999e
    MOV byte ptr [EAX + 0x50],0x0       ; 005299a5
    RET                                 ; 005299a9

