; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * engine_font_cpp_FUN_004b391e(int param_1,int *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1ad78
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 004b391e
        ;   Label: engine_font.cpp_FUN_004b391e
    PUSH EBX                            ; 004b3920
    PUSH ESI                            ; 004b3921
    MOV EBX,dword ptr [0x01d1ad78]      ; 004b3922 | DAT_01d1ad78
    MOV ECX,dword ptr [ESP + 0xc]       ; 004b3928
    MOV ESI,dword ptr [ESP + 0x10]      ; 004b392c
    MOV EAX,0x1d1ad7c                   ; 004b3930
    XOR EDX,EDX                         ; 004b3935
    TEST EBX,EBX                        ; 004b3937
    JLE 0x004b394b                      ; 004b3939
        ;   XREF to: 004b394b (CONDITIONAL_JUMP)  ; LAB_004b394b
    CMP ECX,dword ptr [EAX]             ; 004b393b
        ;   Label: LAB_004b393b
    JNZ 0x004b3943                      ; 004b393d
        ;   XREF to: 004b3943 (CONDITIONAL_JUMP)  ; LAB_004b3943
    CMP EAX,ESI                         ; 004b393f
    JNZ 0x004b394d                      ; 004b3941
        ;   XREF to: 004b394d (CONDITIONAL_JUMP)  ; LAB_004b394d
    INC EDX                             ; 004b3943
        ;   Label: LAB_004b3943
    ADD EAX,0x38                        ; 004b3944
    CMP EDX,EBX                         ; 004b3947
    JL 0x004b393b                       ; 004b3949
        ;   XREF to: 004b393b (CONDITIONAL_JUMP)  ; LAB_004b393b
    XOR EAX,EAX                         ; 004b394b
        ;   Label: LAB_004b394b
    MOV dword ptr [0x01d1ad78],EBX      ; 004b394d | DAT_01d1ad78
        ;   Label: LAB_004b394d
    POP ESI                             ; 004b3953
    POP EBX                             ; 004b3954
    RET                                 ; 004b3955

