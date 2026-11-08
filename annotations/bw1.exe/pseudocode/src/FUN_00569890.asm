; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00569890(int param_1,undefined4 param_2)
;
;
; XREF[13]:
;   FUN_004263d0 at 0042652c
;   FUN_00427b40 at 00427c73
;   FUN_00522490 at 0052249b
;   FUN_00522650 at 00522662
;   FUN_00565830 at 005658db
;   FUN_00566a20 at 00566b08
;   FUN_00569920 at 00569957
;   FUN_00569970 at 005699a7
;   FUN_005699c0 at 005699f7
;   FUN_00569cc0 at 00569d09
;   ... and 3 more
;
; Called Functions:
;   FUN_00563cb0
;   FUN_00569eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00569890
        ;   Label: FUN_00569890
    MOV EBX,dword ptr [ESP + 0x8]       ; 00569891
    LEA EAX,[EBX + 0x2140]              ; 00569895
    PUSH EAX                            ; 0056989b
    MOV EDX,dword ptr [EBX + 0x2324]    ; 0056989c
    PUSH EDX                            ; 005698a2
    LEA EAX,[EBX + 0xe80]               ; 005698a3
    PUSH EAX                            ; 005698a9
    MOV ECX,dword ptr [ESP + 0x18]      ; 005698aa
    PUSH ECX                            ; 005698ae
    PUSH EBX                            ; 005698af
    CALL FUN_00569eb0                   ; 005698b0
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00569eb0()
    ADD ESP,0x4                         ; 005698b5
    PUSH EAX                            ; 005698b8
    CALL FUN_00563cb0                   ; 005698b9
        ;   XREF to: 00563cb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00563cb0()
    ADD ESP,0x14                        ; 005698be
    MOV EAX,dword ptr [ESP + 0xc]       ; 005698c1
    MOV dword ptr [EBX + 0x2320],EAX    ; 005698c5
    POP EBX                             ; 005698cb
    RET                                 ; 005698cc

