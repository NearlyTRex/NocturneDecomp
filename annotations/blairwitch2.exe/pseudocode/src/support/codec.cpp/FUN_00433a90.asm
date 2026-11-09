; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int support_codec_cpp_FUN_00433a90(int *param_1,int *param_2)
;
;
; XREF[3]:
;   support_codec.cpp_FUN_004338f0 at 00433905
;   support_codec.cpp_FUN_00433ad0 at 00433adc
;   support_codec.cpp_FUN_00434570 at 00434584
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00433a90
        ;   Label: support_codec.cpp_FUN_00433a90
    PUSH ESI                            ; 00433a91
    PUSH EDI                            ; 00433a92
    MOV EBX,dword ptr [ESP + 0x10]      ; 00433a93
    MOV EDX,dword ptr [EBX]             ; 00433a97
    MOV ESI,dword ptr [ESP + 0x14]      ; 00433a99
    CMP EDX,0x8                         ; 00433a9d
    JL 0x00433aca                       ; 00433aa0
        ;   XREF to: 00433aca (CONDITIONAL_JUMP)  ; LAB_00433aca
    XOR EDX,EDX                         ; 00433aa2
        ;   Label: LAB_00433aa2
    MOV DL,byte ptr [EBX + 0x4]         ; 00433aa4
    PUSH EDX                            ; 00433aa7
    MOV EAX,dword ptr [ESI]             ; 00433aa8
    PUSH ESI                            ; 00433aaa
    CALL dword ptr [EAX + 0x4]          ; 00433aab
    ADD ESP,0x8                         ; 00433aae
    TEST EAX,EAX                        ; 00433ab1
    JL 0x00433acc                       ; 00433ab3
        ;   XREF to: 00433acc (CONDITIONAL_JUMP)  ; LAB_00433acc
    MOV ECX,dword ptr [EBX + 0x4]       ; 00433ab5
    MOV EDI,dword ptr [EBX]             ; 00433ab8
    SHR ECX,0x8                         ; 00433aba
    SUB EDI,0x8                         ; 00433abd
    MOV dword ptr [EBX + 0x4],ECX       ; 00433ac0
    MOV dword ptr [EBX],EDI             ; 00433ac3
    CMP EDI,0x8                         ; 00433ac5
    JGE 0x00433aa2                      ; 00433ac8
        ;   XREF to: 00433aa2 (CONDITIONAL_JUMP)  ; LAB_00433aa2
    XOR EAX,EAX                         ; 00433aca
        ;   Label: LAB_00433aca
    POP EDI                             ; 00433acc
        ;   Label: LAB_00433acc
    POP ESI                             ; 00433acd
    POP EBX                             ; 00433ace
    RET                                 ; 00433acf

