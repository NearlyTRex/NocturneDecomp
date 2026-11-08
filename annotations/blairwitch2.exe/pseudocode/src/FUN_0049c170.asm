; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0049c170(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004930e0 at 004930e5
;
; Called Functions:
;   FUN_0049c190
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049c170
        ;   Label: FUN_0049c170
    MOV EBX,dword ptr [ESP + 0x8]       ; 0049c171
    PUSH EBX                            ; 0049c175
    CALL FUN_0049c190                   ; 0049c176
        ;   XREF to: 0049c190 (UNCONDITIONAL_CALL)  ; undefined FUN_0049c190()
    ADD ESP,0x4                         ; 0049c17b
    MOV EAX,EBX                         ; 0049c17e
    POP EBX                             ; 0049c180
    RET                                 ; 0049c181

