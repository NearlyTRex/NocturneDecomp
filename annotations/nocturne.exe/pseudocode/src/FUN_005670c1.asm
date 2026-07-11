; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005670c1(void)
;
;
; XREF[1]:
;   FUN_005670b1 at 005670b5
;
; Referenced Globals:
;   void* PTR_FUN_005c1abc = 005671dc
;
; Called Functions:
;   FUN_005670ed
;   FUN_005671dc
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 005670c1
        ;   Label: FUN_005670c1
    CMP EAX,ESP                         ; 005670c2
    JNC 0x005670e0                      ; 005670c4
        ;   XREF to: 005670e0 (CONDITIONAL_JUMP)
    SUB EAX,ESP                         ; 005670c6
    NEG EAX                             ; 005670c8
    PUSH ESI                            ; 005670ca
    PUSH EAX                            ; 005670cb
    CALL dword ptr [0x005c1abc]         ; 005670cc | PTR_FUN_005c1abc
    MOV ESI,EAX                         ; 005670d2
    POP EAX                             ; 005670d4
    CMP EAX,dword ptr [ESI]             ; 005670d5
    POP ESI                             ; 005670d7
    JBE 0x005670e0                      ; 005670d8
        ;   XREF to: 005670e0 (CONDITIONAL_JUMP)
    CALL FUN_005670ed                   ; 005670da
        ;   XREF to: 005670ed (UNCONDITIONAL_CALL)  ; undefined FUN_005670ed()
    RET                                 ; 005670df

