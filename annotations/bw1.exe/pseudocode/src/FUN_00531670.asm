; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00531670(undefined4 param_1)
;
;
; XREF[6]:
;   FUN_004ed190 at 004ed198
;   FUN_004ed500 at 004ed508
;   FUN_004f0990 at 004f0998
;   FUN_00532770 at 00532778
;   FUN_00594780 at 00594786
;   FUN_00594a00 at 00594a06
;
; Called Functions:
;   FUN_0040cc00
;   FUN_0042c080
;   FUN_00532fe0
;   FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00531670
        ;   Label: FUN_00531670
    SUB ESP,0x4                         ; 00531671
    MOV EBX,dword ptr [ESP + 0xc]       ; 00531674
    PUSH EBX                            ; 00531678
    CALL FUN_0042c080                   ; 00531679
        ;   XREF to: 0042c080 (UNCONDITIONAL_CALL)  ; undefined FUN_0042c080()
    ADD ESP,0x4                         ; 0053167e
    ADD EAX,0xc1d0                      ; 00531681
    PUSH EAX                            ; 00531686
    CALL FUN_00532fe0                   ; 00531687
        ;   XREF to: 00532fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00532fe0()
    LEA EBX,[EAX + 0xffff3e30]          ; 0053168c
    MOV dword ptr [EBX + 0x154],0x604454 ; 00531692
    MOV dword ptr [EBX + 0x2fec],0x3f19999a ; 0053169c
    ADD ESP,0x4                         ; 005316a6
    MOV dword ptr [EBX + 0x2ff0],0x3f666666 ; 005316a9
    PUSH 0x3f8ccccd                     ; 005316b3
    MOV dword ptr [EBX + 0x2ffc],0x3fcccccd ; 005316b8
    PUSH 0x3f666666                     ; 005316c2
    MOV dword ptr [EBX + 0x3000],0xc479c000 ; 005316c7
    CALL FUN_0040cc00                   ; 005316d1
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0x8],EAX       ; 005316d6
    FLD float ptr [ESP + 0x8]           ; 005316da
    ADD ESP,0x8                         ; 005316de
    PUSH 0x5ec714                       ; 005316e1
    LEA EAX,[EBX + 0x158]               ; 005316e6
    PUSH EAX                            ; 005316ec
    FSTP float ptr [EBX + 0x1fab4]      ; 005316ed
    CALL FUN_00569f50                   ; 005316f3
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f50()
    MOV dword ptr [EBX + 0x27c0],0x0    ; 005316f8
    ADD ESP,0x8                         ; 00531702
    MOV dword ptr [EBX + 0x1faac],0x0   ; 00531705
    MOV EAX,EBX                         ; 0053170f
    MOV dword ptr [EBX + 0x1fab0],0x0   ; 00531711
    ADD ESP,0x4                         ; 0053171b
    POP EBX                             ; 0053171e
    RET                                 ; 0053171f

