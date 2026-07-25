; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0047a1e0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c08b60
;   undefined4 DAT_01c08b61
;   undefined4 DAT_01c08b62
;   undefined4 DAT_01c08b63
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0047a1e0
        ;   Label: FUN_0047a1e0
    PUSH EDI                            ; 0047a1e1
    MOV ESI,dword ptr [ESP + 0x14]      ; 0047a1e2
    MOV EDI,0x1c08b60                   ; 0047a1e6
    PUSH EDI                            ; 0047a1eb | DAT_01c08b60
    MOV AL,byte ptr [ESI]               ; 0047a1ec
        ;   Label: LAB_0047a1ec
    MOV byte ptr [EDI],AL               ; 0047a1ee | DAT_01c08b60 | DAT_01c08b62
    CMP AL,0x0                          ; 0047a1f0
    JZ 0x0047a204                       ; 0047a1f2
        ;   XREF to: 0047a204 (CONDITIONAL_JUMP)  ; LAB_0047a204
    MOV AL,byte ptr [ESI + 0x1]         ; 0047a1f4
    ADD ESI,0x2                         ; 0047a1f7
    MOV byte ptr [EDI + 0x1],AL         ; 0047a1fa | DAT_01c08b61 | DAT_01c08b63
    ADD EDI,0x2                         ; 0047a1fd
    CMP AL,0x0                          ; 0047a200
    JNZ 0x0047a1ec                      ; 0047a202
        ;   XREF to: 0047a1ec (CONDITIONAL_JUMP)  ; LAB_0047a1ec
    POP EDI                             ; 0047a204
        ;   Label: LAB_0047a204
    MOV EAX,0xffffffff                  ; 0047a205
    POP EDI                             ; 0047a20a
    POP ESI                             ; 0047a20b
    RET                                 ; 0047a20c

