; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004494f0(int param_1)
;
;
; Called Functions:
;   FUN_00468900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004494f0
        ;   Label: FUN_004494f0
    PUSH EDI                            ; 004494f1
    SUB ESP,0x18                        ; 004494f2
    MOV EBX,ESI                         ; 004494f5
    MOV EAX,dword ptr [ESP + 0x24]      ; 004494f7
    ADD EAX,0x158                       ; 004494fb
    PUSH EAX                            ; 00449500
    LEA EDI,[ESP + 0x4]                 ; 00449501
    CALL FUN_00468900                   ; 00449505
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; undefined FUN_00468900()
    MOV ECX,0x6                         ; 0044950a
    MOV ESI,dword ptr [EAX + 0x350]     ; 0044950f
    ADD ESP,0x4                         ; 00449515
    MOVSD.REP ES:EDI,ESI                ; 00449518
    MOV ECX,0x6                         ; 0044951a
    MOV ESI,ESP                         ; 0044951f
    MOV EDI,EBX                         ; 00449521
    MOVSD.REP ES:EDI,ESI                ; 00449523
    MOV EAX,EBX                         ; 00449525
    ADD ESP,0x18                        ; 00449527
    POP EDI                             ; 0044952a
    POP EBX                             ; 0044952b
    RET                                 ; 0044952c

