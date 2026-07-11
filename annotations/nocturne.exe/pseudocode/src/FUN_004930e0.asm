; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004930e0(int param_1,int param_2)
;
;
; XREF[27]:
;   FUN_0046f7e0 at 0046f820
;   FUN_0046fb40 at 0046fb8b
;   FUN_0046fcd0 at 0046fd1b
;   FUN_0046fe60 at 0046feab
;   FUN_0046fff0 at 00470018
;   FUN_00470eb0 at 00470f0f
;   FUN_00471660 at 004716a8
;   FUN_00471a80 at 00471acc
;   FUN_00471b50 at 00471b82
;   FUN_004722b0 at 004722d8
;   ... and 17 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004930e0
        ;   Label: FUN_004930e0
    TEST EAX,EAX                        ; 004930e4
    JL 0x004930ef                       ; 004930e6
        ;   XREF to: 004930ef (CONDITIONAL_JUMP)  ; LAB_004930ef
    CMP EAX,0x100                       ; 004930e8
    JL 0x004930f2                       ; 004930ed
        ;   XREF to: 004930f2 (CONDITIONAL_JUMP)  ; LAB_004930f2
    XOR EAX,EAX                         ; 004930ef
        ;   Label: LAB_004930ef
    RET                                 ; 004930f1
    MOV EDX,dword ptr [ESP + 0x4]       ; 004930f2
        ;   Label: LAB_004930f2
    SHL EAX,0x2                         ; 004930f6
    ADD EDX,EAX                         ; 004930f9
    MOV EAX,dword ptr [EDX + 0x2968]    ; 004930fb
    ADD EAX,dword ptr [EDX + 0x2d68]    ; 00493101
    RET                                 ; 00493107

