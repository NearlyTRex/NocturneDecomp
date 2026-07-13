; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00404710(int param_1)
;
;
; XREF[16]:
;   FUN_004049d0 at 00404a1b
;   FUN_00405240 at 00405296
;   FUN_00405540 at 0040559d
;   FUN_00405c90 at 00405cd3
;   FUN_00405e10 at 00405f14
;   FUN_00406010 at 0040605e
;   FUN_00406230 at 00406289
;   FUN_00406740 at 00406793
;   FUN_00407690 at 004076eb
;   FUN_00407740 at 0040778e
;   ... and 6 more
;
; Referenced Globals:
;   undefined4 DAT_01c00c74
;
; Called Functions:
;   FUN_004c6cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404710
        ;   Label: FUN_00404710
    MOV EAX,dword ptr [ESP + 0x8]       ; 00404711
    MOV EDX,dword ptr [EAX + 0x10]      ; 00404715
    PUSH EDX                            ; 00404718
    MOV ECX,dword ptr [EAX + 0xc]       ; 00404719
    PUSH ECX                            ; 0040471c
    MOV EBX,dword ptr [EAX + 0x8]       ; 0040471d
    PUSH EBX                            ; 00404720
    CALL FUN_004c6cc0                   ; 00404721
        ;   XREF to: 004c6cc0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c6cc0()
    ADD ESP,0xc                         ; 00404726
    MOV [0x01c00c74],EAX                ; 00404729 | DAT_01c00c74
    POP EBX                             ; 0040472e
    RET                                 ; 0040472f

