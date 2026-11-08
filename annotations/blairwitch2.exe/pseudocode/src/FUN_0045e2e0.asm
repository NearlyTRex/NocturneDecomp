; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045e2e0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Spine1_005d0894
;   TerminatedCString s_Bip01_Head_005d08a1
;
; Called Functions:
;   FUN_00487eb0
;   FUN_00540e80
;   FUN_00547480
;   FUN_00547890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045e2e0
        ;   Label: FUN_0045e2e0
    PUSH ESI                            ; 0045e2e1
    MOV ESI,dword ptr [ESP + 0xc]       ; 0045e2e2
    LEA EBX,[ESI + 0x2b4]               ; 0045e2e6
    PUSH EBX                            ; 0045e2ec
    CALL FUN_00547480                   ; 0045e2ed
        ;   XREF to: 00547480 (UNCONDITIONAL_CALL)  ; undefined FUN_00547480()
    ADD ESP,0x4                         ; 0045e2f2
    PUSH EBX                            ; 0045e2f5
    CALL FUN_00547890                   ; 0045e2f6
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; undefined FUN_00547890()
    ADD ESP,0x4                         ; 0045e2fb
    PUSH 0x1                            ; 0045e2fe
    PUSH 0x5d0894                       ; 0045e300 | = "Bip01 Spine1"
    PUSH EAX                            ; 0045e305
    MOV EBX,EAX                         ; 0045e306
    CALL FUN_00540e80                   ; 0045e308
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0045e30d
    PUSH 0x1                            ; 0045e310
    PUSH 0x5d08a1                       ; 0045e312 | = "Bip01 Head"
    PUSH EBX                            ; 0045e317
    MOV dword ptr [ESI + 0x10af8],EAX   ; 0045e318
    CALL FUN_00540e80                   ; 0045e31e
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0045e323
    PUSH ESI                            ; 0045e326
    MOV dword ptr [ESI + 0x10afc],EAX   ; 0045e327
    CALL FUN_00487eb0                   ; 0045e32d
        ;   XREF to: 00487eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00487eb0()
    ADD ESP,0x4                         ; 0045e332
    POP ESI                             ; 0045e335
    POP EBX                             ; 0045e336
    RET                                 ; 0045e337

