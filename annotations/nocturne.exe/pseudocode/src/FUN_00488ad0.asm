; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00488ad0(void)
;
;
; XREF[1]:
;   FUN_0048af70 at 0048afcb
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_005b8b14
;   undefined4 DAT_005b8b2c
;   undefined4 DAT_005b8ba4
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   FUN_00461eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00488ad0
        ;   Label: FUN_00488ad0
    PUSH ESI                            ; 00488ad1
    MOV EBX,0x5b8b14                    ; 00488ad2 | DAT_005b8b14
    LEA ESI,[EBX + 0x90]                ; 00488ad7 | DAT_005b8ba4
    PUSH EBX                            ; 00488add | DAT_005b8b14 | DAT_005b8b2c
        ;   Label: LAB_00488add
    MOV EDX,dword ptr [0x005ae704]      ; 00488ade | DAT_005ae704
    PUSH EDX                            ; 00488ae4 | DAT_01b4d738
    CALL FUN_00461eb0                   ; 00488ae5
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00461eb0()
    ADD EBX,0x18                        ; 00488aea
    ADD ESP,0x8                         ; 00488aed
    CMP EBX,ESI                         ; 00488af0
    JNZ 0x00488add                      ; 00488af2
        ;   XREF to: 00488add (CONDITIONAL_JUMP)  ; LAB_00488add
    POP ESI                             ; 00488af4
    POP EBX                             ; 00488af5
    RET                                 ; 00488af6

