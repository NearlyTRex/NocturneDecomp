; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_event.cpp_FUN_004aa270()
;
;
; Referenced Globals:
;   undefined1 DAT_02d0a460
;   undefined1 DAT_02d0a461
;   undefined1 DAT_02d0a462
;   undefined1 DAT_02d0a463
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004aa270
        ;   Label: core_event.cpp_FUN_004aa270
    PUSH EDI                            ; 004aa271
    MOV ESI,dword ptr [ESP + 0x14]      ; 004aa272
    MOV EDI,0x2d0a460                   ; 004aa276 | DAT_02d0a460
    PUSH EDI                            ; 004aa27b | DAT_02d0a460
    MOV AL,byte ptr [ESI]               ; 004aa27c
        ;   Label: LAB_004aa27c
    MOV byte ptr [EDI],AL               ; 004aa27e | DAT_02d0a460 | DAT_02d0a462
    CMP AL,0x0                          ; 004aa280
    JZ 0x004aa294                       ; 004aa282
        ;   XREF to: 004aa294 (CONDITIONAL_JUMP)  ; LAB_004aa294
    MOV AL,byte ptr [ESI + 0x1]         ; 004aa284
    ADD ESI,0x2                         ; 004aa287
    MOV byte ptr [EDI + 0x1],AL         ; 004aa28a | DAT_02d0a461 | DAT_02d0a463
    ADD EDI,0x2                         ; 004aa28d
    CMP AL,0x0                          ; 004aa290
    JNZ 0x004aa27c                      ; 004aa292
        ;   XREF to: 004aa27c (CONDITIONAL_JUMP)  ; LAB_004aa27c
    POP EDI                             ; 004aa294
        ;   Label: LAB_004aa294
    MOV EAX,0xffffffff                  ; 004aa295
    POP EDI                             ; 004aa29a
    POP ESI                             ; 004aa29b
    RET                                 ; 004aa29c

