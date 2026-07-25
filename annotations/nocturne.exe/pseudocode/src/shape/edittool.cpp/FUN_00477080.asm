; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00477080(int param_1)
;
;
; XREF[1]:
;   FUN_00476eb0 at 00476ec7
;
; Referenced Globals:
;   undefined4 DAT_01bcd070
;   undefined4 DAT_01bcd9b8
;   undefined4 DAT_01bcd9bc
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00477080
        ;   Label: FUN_00477080
    PUSH EDI                            ; 00477081
    MOV EBX,dword ptr [ESP + 0xc]       ; 00477082
    CMP dword ptr [0x01bcd070],0x0      ; 00477086 | DAT_01bcd070
    JNZ 0x004770b4                      ; 0047708d
        ;   XREF to: 004770b4 (CONDITIONAL_JUMP)  ; LAB_004770b4
    PUSH ESI                            ; 0047708f
    MOV ECX,0x57e4fa                    ; 00477090
    MOV ESI,0x8b                        ; 00477095
    PUSH 0x57e510                       ; 0047709a
    MOV dword ptr [0x01cc4800],ECX      ; 0047709f | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004770a5 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004770ab
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004770b0
    POP ESI                             ; 004770b3
    MOV EAX,[0x01bcd070]                ; 004770b4 | DAT_01bcd070
        ;   Label: LAB_004770b4
    PUSH 0x6a                           ; 004770b9
    MOV EDX,dword ptr [EAX + 0x3168]    ; 004770bb
    PUSH EAX                            ; 004770c1
    MOV dword ptr [0x01bcd9b8],EDX      ; 004770c2 | DAT_01bcd9b8
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 004770c8
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0()
    ADD ESP,0x8                         ; 004770cd
    MOV [0x01bcd9bc],EAX                ; 004770d0 | DAT_01bcd9bc
    TEST EBX,EBX                        ; 004770d5
    JNZ 0x004770de                      ; 004770d7
        ;   XREF to: 004770de (CONDITIONAL_JUMP)  ; LAB_004770de
    MOV EBX,0x57f0fa                    ; 004770d9
    PUSH EBX                            ; 004770de
        ;   Label: LAB_004770de
    MOV EDI,dword ptr [0x01bcd070]      ; 004770df | DAT_01bcd070
    PUSH EDI                            ; 004770e5
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 004770e6
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0()
    ADD ESP,0x8                         ; 004770eb
    POP EDI                             ; 004770ee
    POP EBX                             ; 004770ef
    RET                                 ; 004770f0

