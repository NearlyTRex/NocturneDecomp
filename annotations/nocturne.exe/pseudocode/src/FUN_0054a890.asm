; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0054a890(int param_1,undefined4 *param_2,int param_3)
;
;
; Called Functions:
;   FUN_0040a000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054a890
        ;   Label: FUN_0054a890
    PUSH ESI                            ; 0054a891
    MOV EBX,dword ptr [ESP + 0xc]       ; 0054a892
    MOV EDX,dword ptr [ESP + 0x10]      ; 0054a896
    MOV ESI,dword ptr [ESP + 0x14]      ; 0054a89a
    CMP dword ptr [ESI + 0x10],0x0      ; 0054a89e
    JNZ 0x0054a8e5                      ; 0054a8a2
        ;   XREF to: 0054a8e5 (CONDITIONAL_JUMP)  ; LAB_0054a8e5
    LEA EAX,[EBX + 0x30]                ; 0054a8a4
    CMP EAX,EDX                         ; 0054a8a7
    JZ 0x0054a8bb                       ; 0054a8a9
        ;   XREF to: 0054a8bb (CONDITIONAL_JUMP)  ; LAB_0054a8bb
    MOV ECX,dword ptr [EDX]             ; 0054a8ab
    MOV dword ptr [EAX],ECX             ; 0054a8ad
    MOV ECX,dword ptr [EDX + 0x4]       ; 0054a8af
    MOV dword ptr [EAX + 0x4],ECX       ; 0054a8b2
    MOV ECX,dword ptr [EDX + 0x8]       ; 0054a8b5
    MOV dword ptr [EAX + 0x8],ECX       ; 0054a8b8
    PUSH EDI                            ; 0054a8bb
        ;   Label: LAB_0054a8bb
    PUSH EBX                            ; 0054a8bc
    CALL FUN_0040a000                   ; 0054a8bd
        ;   XREF to: 0040a000 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a000()
    MOV EDI,dword ptr [ESI + 0xc]       ; 0054a8c2
    ADD ESP,0x4                         ; 0054a8c5
    TEST EDI,EDI                        ; 0054a8c8
    JZ 0x0054a8dc                       ; 0054a8ca
        ;   XREF to: 0054a8dc (CONDITIONAL_JUMP)  ; LAB_0054a8dc
    PUSH EBX                            ; 0054a8cc
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0054a8cd
    CALL dword ptr [EAX + 0xdc]         ; 0054a8d3
    ADD ESP,0x4                         ; 0054a8d9
    MOV EAX,0x1                         ; 0054a8dc
        ;   Label: LAB_0054a8dc
    POP EDI                             ; 0054a8e1
    POP ESI                             ; 0054a8e2
    POP EBX                             ; 0054a8e3
    RET                                 ; 0054a8e4
    MOV dword ptr [ESI + 0x10],0x0      ; 0054a8e5
        ;   Label: LAB_0054a8e5
    XOR EAX,EAX                         ; 0054a8ec
    POP ESI                             ; 0054a8ee
    POP EBX                             ; 0054a8ef
    RET                                 ; 0054a8f0

