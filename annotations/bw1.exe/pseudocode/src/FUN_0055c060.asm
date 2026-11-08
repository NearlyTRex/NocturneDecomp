; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0055c060(int param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_0054ec60 at 0054ee56
;   FUN_00559f80 at 0055a2eb
;
; Called Functions:
;   FUN_0055b990
;   FUN_0055c020
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055c060
        ;   Label: FUN_0055c060
    PUSH ESI                            ; 0055c061
    PUSH EDI                            ; 0055c062
    MOV ESI,dword ptr [ESP + 0x10]      ; 0055c063
    MOV EDI,dword ptr [ESP + 0x14]      ; 0055c067
    MOV EDX,dword ptr [ESI + 0x15b428]  ; 0055c06b
    XOR EBX,EBX                         ; 0055c071
    TEST EDX,EDX                        ; 0055c073
    JLE 0x0055c08f                      ; 0055c075
        ;   XREF to: 0055c08f (CONDITIONAL_JUMP)  ; LAB_0055c08f
    PUSH EDI                            ; 0055c077
        ;   Label: LAB_0055c077
    PUSH EBX                            ; 0055c078
    PUSH ESI                            ; 0055c079
    CALL FUN_0055b990                   ; 0055c07a
        ;   XREF to: 0055b990 (UNCONDITIONAL_CALL)  ; undefined FUN_0055b990()
    ADD ESP,0xc                         ; 0055c07f
    TEST EAX,EAX                        ; 0055c082
    JNZ 0x0055c0a1                      ; 0055c084
        ;   XREF to: 0055c0a1 (CONDITIONAL_JUMP)  ; LAB_0055c0a1
    INC EBX                             ; 0055c086
    CMP EBX,dword ptr [ESI + 0x15b428]  ; 0055c087
    JL 0x0055c077                       ; 0055c08d
        ;   XREF to: 0055c077 (CONDITIONAL_JUMP)  ; LAB_0055c077
    MOV EAX,0xffffffff                  ; 0055c08f
        ;   Label: LAB_0055c08f
    POP EDI                             ; 0055c094
    POP ESI                             ; 0055c095
    POP EBX                             ; 0055c096
    LEA EAX,[EAX]                       ; 0055c097
    LEA EDX,[EDX]                       ; 0055c09d
    PUSH EBX                            ; 0055c0a1
        ;   Label: LAB_0055c0a1
    PUSH ESI                            ; 0055c0a2
    CALL FUN_0055c020                   ; 0055c0a3
        ;   XREF to: 0055c020 (UNCONDITIONAL_CALL)  ; undefined FUN_0055c020()
    ADD ESP,0x8                         ; 0055c0a8
    POP EDI                             ; 0055c0ab
    POP ESI                             ; 0055c0ac
    POP EBX                             ; 0055c0ad
    RET                                 ; 0055c0ae

