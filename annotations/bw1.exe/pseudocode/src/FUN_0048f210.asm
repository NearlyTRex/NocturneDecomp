; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048f210(int param_1)
;
;
; XREF[3]:
;   FUN_00486900 at 0048694c
;   FUN_005a9a40 at 005a9aa2
;   FUN_005ae580 at 005ae5f0
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0048f210
        ;   Label: FUN_0048f210
    SUB ESP,0xc                         ; 0048f211
    MOV EAX,ESI                         ; 0048f214
    MOV ESI,dword ptr [ESP + 0x14]      ; 0048f216
    MOV EDI,ESP                         ; 0048f21a
    LEA ESI,[ESI + 0x10]                ; 0048f21c
    MOVSD ES:EDI,ESI                    ; 0048f21f
    MOVSD ES:EDI,ESI                    ; 0048f220
    MOVSD ES:EDI,ESI                    ; 0048f221
    MOV ESI,ESP                         ; 0048f222
    MOV EDI,EAX                         ; 0048f224
    MOVSD ES:EDI,ESI                    ; 0048f226
    MOVSD ES:EDI,ESI                    ; 0048f227
    MOVSD ES:EDI,ESI                    ; 0048f228
    ADD ESP,0xc                         ; 0048f229
    POP EDI                             ; 0048f22c
    RET                                 ; 0048f22d

