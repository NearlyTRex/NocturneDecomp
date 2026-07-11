; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004bd860(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[4]:
;   FUN_004a4b50 at 004a4c34
;   FUN_004bdb80 at 004bdbb0
;   FUN_004be2d0 at 004be2e6
;   FUN_004ff2c0 at 00501ced
;
; Called Functions:
;   FUN_004bd890
;   FUN_004bd8d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bd860
        ;   Label: FUN_004bd860
    MOV EBX,dword ptr [ESP + 0x8]       ; 004bd861
    MOV EDX,dword ptr [ESP + 0xc]       ; 004bd865
    PUSH EDX                            ; 004bd869
    PUSH EBX                            ; 004bd86a
    CALL FUN_004bd890                   ; 004bd86b
        ;   XREF to: 004bd890 (UNCONDITIONAL_CALL)  ; undefined FUN_004bd890()
    ADD ESP,0x8                         ; 004bd870
    MOV ECX,dword ptr [ESP + 0x10]      ; 004bd873
    PUSH ECX                            ; 004bd877
    PUSH EBX                            ; 004bd878
    CALL FUN_004bd8d0                   ; 004bd879
        ;   XREF to: 004bd8d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004bd8d0()
    ADD ESP,0x8                         ; 004bd87e
    MOV EAX,EBX                         ; 004bd881
    POP EBX                             ; 004bd883
    RET                                 ; 004bd884

