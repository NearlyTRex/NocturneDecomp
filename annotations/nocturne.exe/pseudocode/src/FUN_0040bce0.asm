; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040bce0(int param_1,uint param_2)
;
;
; XREF[1]:
;   FUN_004cefe0 at 004ceff8
;
; Referenced Globals:
;   undefined4 DAT_005b9284
;   undefined4 DAT_01cae0e8
;
; Called Functions:
;   FUN_004940d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040bce0
        ;   Label: FUN_0040bce0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040bce1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0040bce5
    PUSH EDX                            ; 0040bce9
    MOV EAX,dword ptr [EDX + 0x14c]     ; 0040bcea
    CALL dword ptr [EAX + 0x8c]         ; 0040bcf0
    MOV EDX,dword ptr [0x01cae0e8]      ; 0040bcf6 | DAT_01cae0e8
    MOV ECX,dword ptr [EDX*0x4 + 0x1cae0d8] ; 0040bcfc
    ADD ESP,0x4                         ; 0040bd03
    CMP EAX,ECX                         ; 0040bd06
    JNZ 0x0040bd16                      ; 0040bd08
        ;   XREF to: 0040bd16 (CONDITIONAL_JUMP)  ; LAB_0040bd16
    CMP EBX,0x1                         ; 0040bd0a
    JC 0x0040bd16                       ; 0040bd0d
        ;   XREF to: 0040bd16 (CONDITIONAL_JUMP)  ; LAB_0040bd16
    JBE 0x0040bd29                      ; 0040bd0f
        ;   XREF to: 0040bd29 (CONDITIONAL_JUMP)  ; LAB_0040bd29
    CMP EBX,0x2                         ; 0040bd11
    JZ 0x0040bd18                       ; 0040bd14
        ;   XREF to: 0040bd18 (CONDITIONAL_JUMP)  ; LAB_0040bd18
    POP EBX                             ; 0040bd16
        ;   Label: LAB_0040bd16
    RET                                 ; 0040bd17
    MOV EBX,dword ptr [0x005b9284]      ; 0040bd18 | DAT_005b9284
        ;   Label: LAB_0040bd18
    PUSH EBX                            ; 0040bd1e
    CALL FUN_004940d0                   ; 0040bd1f
        ;   XREF to: 004940d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004940d0()
    ADD ESP,0x4                         ; 0040bd24
    POP EBX                             ; 0040bd27
    RET                                 ; 0040bd28
    PUSH ESI                            ; 0040bd29
        ;   Label: LAB_0040bd29
    MOV ESI,dword ptr [0x005b9284]      ; 0040bd2a | DAT_005b9284
    PUSH ESI                            ; 0040bd30
    CALL FUN_004940d0                   ; 0040bd31
        ;   XREF to: 004940d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004940d0()
    ADD ESP,0x4                         ; 0040bd36
    POP ESI                             ; 0040bd39
    POP EBX                             ; 0040bd3a
    RET                                 ; 0040bd3b

