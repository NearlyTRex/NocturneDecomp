; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_font_cpp_CBitFont_calculateCharacterHeight_FUN_00490920(int param_1,byte *param_2,int param_3,int param_4,int param_5)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_font.cpp_FUN_00490470 at 004907fd
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00490920
        ;   Label: engine_font.cpp_CBitFont_calculateCharacterHeight_FUN_00490920
    PUSH ESI                            ; 00490921
    PUSH EDI                            ; 00490922
    PUSH EBP                            ; 00490923
    SUB ESP,0x4                         ; 00490924
    MOV ESI,dword ptr [ESP + 0x18]      ; 00490927
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0049092b
    MOV EBX,dword ptr [ESP + 0x20]      ; 0049092f
    MOV ECX,dword ptr [ESP + 0x24]      ; 00490933
    XOR EDX,EDX                         ; 00490937
    XOR EDI,EDI                         ; 00490939
    MOV dword ptr [ESP],EDX             ; 0049093b
    TEST ECX,ECX                        ; 0049093e
    JLE 0x0049096b                      ; 00490940
        ;   XREF to: 0049096b (CONDITIONAL_JUMP)  ; LAB_0049096b
    MOV EDX,EBP                         ; 00490942
        ;   Label: LAB_00490942
    XOR EAX,EAX                         ; 00490944
    TEST EBX,EBX                        ; 00490946
    JLE 0x0049095c                      ; 00490948
        ;   XREF to: 0049095c (CONDITIONAL_JUMP)  ; LAB_0049095c
    XOR ECX,ECX                         ; 0049094a
        ;   Label: LAB_0049094a
    MOV CL,byte ptr [EDX]               ; 0049094c
    CMP ECX,dword ptr [ESI + 0x3188]    ; 0049094e
    JNZ 0x00490976                      ; 00490954
        ;   XREF to: 00490976 (CONDITIONAL_JUMP)  ; LAB_00490976
    INC EAX                             ; 00490956
    INC EDX                             ; 00490957
    CMP EAX,EBX                         ; 00490958
    JL 0x0049094a                       ; 0049095a
        ;   XREF to: 0049094a (CONDITIONAL_JUMP)  ; LAB_0049094a
    MOV EAX,dword ptr [ESP + 0x28]      ; 0049095c
        ;   Label: LAB_0049095c
    MOV EDX,dword ptr [ESP + 0x24]      ; 00490960
    INC EDI                             ; 00490964
    ADD EBP,EAX                         ; 00490965
    CMP EDI,EDX                         ; 00490967
    JL 0x00490942                       ; 00490969
        ;   XREF to: 00490942 (CONDITIONAL_JUMP)  ; LAB_00490942
    MOV EAX,dword ptr [ESP]             ; 0049096b
        ;   Label: LAB_0049096b
    ADD ESP,0x4                         ; 0049096e
    POP EBP                             ; 00490971
    POP EDI                             ; 00490972
    POP ESI                             ; 00490973
    POP EBX                             ; 00490974
    RET                                 ; 00490975
    LEA EAX,[EDI + 0x1]                 ; 00490976
        ;   Label: LAB_00490976
    MOV dword ptr [ESP],EAX             ; 00490979
    JMP 0x0049095c                      ; 0049097c
        ;   XREF to: 0049095c (UNCONDITIONAL_JUMP)  ; LAB_0049095c

