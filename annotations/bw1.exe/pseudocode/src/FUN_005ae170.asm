; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005ae170(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_005ae140 at 005ae145
;
; Called Functions:
;   FUN_005aefc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ae170
        ;   Label: FUN_005ae170
    MOV EBX,dword ptr [ESP + 0x8]       ; 005ae171
    PUSH 0x0                            ; 005ae175
    PUSH EBX                            ; 005ae177
    CALL FUN_005aefc0                   ; 005ae178
        ;   XREF to: 005aefc0 (UNCONDITIONAL_CALL)  ; undefined FUN_005aefc0()
    ADD ESP,0x8                         ; 005ae17d
    MOV EAX,EBX                         ; 005ae180
    POP EBX                             ; 005ae182
    RET                                 ; 005ae183

