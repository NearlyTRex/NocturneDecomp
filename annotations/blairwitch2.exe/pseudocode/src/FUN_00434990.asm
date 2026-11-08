; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00434990(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[2]:
;   FUN_0043aee0 at 0043af03
;   FUN_004bbf70 at 004bc274
;
; Referenced Globals:
;   undefined1* PTR_FUN_005f4284 = 004354f0
;
; Called Functions:
;   FUN_00433e80
;   FUN_00434250
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00434990
        ;   Label: FUN_00434990
    PUSH EAX                            ; 00434994
    CALL FUN_00433e80                   ; 00434995
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00433e80()
    ADD ESP,0x4                         ; 0043499a
    ADD EAX,0x4                         ; 0043499d
    PUSH EAX                            ; 004349a0
    CALL FUN_00434250                   ; 004349a1
        ;   XREF to: 00434250 (UNCONDITIONAL_CALL)  ; undefined FUN_00434250()
    ADD ESP,0x4                         ; 004349a6
    SUB EAX,0x4                         ; 004349a9
    MOV EDX,dword ptr [ESP + 0x8]       ; 004349ac
    MOV dword ptr [EAX],0x5f4284        ; 004349b0 | PTR_FUN_005f4284
    MOV dword ptr [EAX + 0x20],EDX      ; 004349b6
    MOV EDX,dword ptr [ESP + 0xc]       ; 004349b9
    MOV dword ptr [EAX + 0x24],EDX      ; 004349bd
    RET                                 ; 004349c0

