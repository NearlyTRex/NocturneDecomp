; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0054fd90(int param_1,int param_2)
;
;
; XREF[5]:
;   FUN_0054c1c0 at 0054c3bb
;   FUN_0054c7f0 at 0054c9e9
;   FUN_0054daf0 at 0054db7b
;   FUN_0054dc50 at 0054dd95
;   FUN_0054ddf0 at 0054e1fe
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0054fd90
        ;   Label: FUN_0054fd90
    MOV EDX,dword ptr [ESP + 0x8]       ; 0054fd94
    IMUL EDX,dword ptr [EAX + 0x104]    ; 0054fd98
    IMUL EDX,dword ptr [EAX + 0x108]    ; 0054fd9f
    ADD EDX,0x7                         ; 0054fda6
    MOV EAX,EDX                         ; 0054fda9
    SAR EDX,0x1f                        ; 0054fdab
    SHL EDX,0x3                         ; 0054fdae
    SBB EAX,EDX                         ; 0054fdb1
    SAR EAX,0x3                         ; 0054fdb3
    RET                                 ; 0054fdb6

