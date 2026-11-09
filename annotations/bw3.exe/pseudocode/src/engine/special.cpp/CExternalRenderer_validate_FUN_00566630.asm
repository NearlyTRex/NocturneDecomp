; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_CExternalRenderer_validate_FUN_00566630(CExternalRenderer *this_ptr,CExternalRenderer *capabilities)
;
; Parameters:
; CExternalRenderer * Stack[0x4]:4   this_ptr
; CExternalRenderer * Stack[0x8]:4   capabilities
;
; XREF[1]:
;   engine_special.cpp_FUN_00564be0 at 00564c85
;
; Called Functions:
;   crt_string.c__strcmp_FUN_005a3d00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566630
        ;   Label: engine_special.cpp_CExternalRenderer_validate_FUN_00566630
    PUSH ESI                            ; 00566631
    PUSH EDI                            ; 00566632
    MOV EDI,dword ptr [ESP + 0x10]      ; 00566633
    MOV ESI,dword ptr [ESP + 0x14]      ; 00566637
    TEST ESI,ESI                        ; 0056663b
    SETZ AL                             ; 0056663d
    XOR EBX,EBX                         ; 00566640
    MOV BL,AL                           ; 00566642
    TEST ESI,ESI                        ; 00566644
    JZ 0x00566748                       ; 00566646
        ;   XREF to: 00566748 (CONDITIONAL_JUMP)  ; LAB_00566748
    MOV DX,word ptr [EDI + 0x204]       ; 0056664c
    CMP DX,word ptr [ESI + 0x204]       ; 00566653
    JNZ 0x0056674e                      ; 0056665a
        ;   XREF to: 0056674e (CONDITIONAL_JUMP)  ; LAB_0056674e
    MOV EAX,0x1                         ; 00566660
        ;   Label: LAB_00566660
    MOV EBX,EAX                         ; 00566665
        ;   Label: LAB_00566665
    TEST EAX,EAX                        ; 00566667
    JZ 0x00566681                       ; 00566669
        ;   XREF to: 00566681 (CONDITIONAL_JUMP)  ; LAB_00566681
    MOV EAX,dword ptr [EDI + 0x208]     ; 0056666b
    MOV EDX,dword ptr [ESI + 0x208]     ; 00566671
    NOT EAX                             ; 00566677
    AND EAX,EDX                         ; 00566679
    JNZ 0x0056675f                      ; 0056667b
        ;   XREF to: 0056675f (CONDITIONAL_JUMP)  ; LAB_0056675f
    TEST EBX,EBX                        ; 00566681
        ;   Label: LAB_00566681
    JZ 0x005666df                       ; 00566683
        ;   XREF to: 005666df (CONDITIONAL_JUMP)  ; LAB_005666df
    CMP word ptr [ESI + 0x200],0x0      ; 00566685
    JZ 0x005666b0                       ; 0056668d
        ;   XREF to: 005666b0 (CONDITIONAL_JUMP)  ; LAB_005666b0
    MOV EAX,dword ptr [EDI + 0x1fe]     ; 0056668f
    MOV EDX,dword ptr [ESI + 0x1fe]     ; 00566695
    SAR EAX,0x10                        ; 0056669b
    SAR EDX,0x10                        ; 0056669e
    SAR EAX,0x8                         ; 005666a1
    SAR EDX,0x8                         ; 005666a4
    XOR EBX,EBX                         ; 005666a7
    CMP EAX,EDX                         ; 005666a9
    SETZ AL                             ; 005666ab
    MOV BL,AL                           ; 005666ae
    TEST EBX,EBX                        ; 005666b0
        ;   Label: LAB_005666b0
    JZ 0x005666df                       ; 005666b2
        ;   XREF to: 005666df (CONDITIONAL_JUMP)  ; LAB_005666df
    CMP word ptr [ESI + 0x202],0x0      ; 005666b4
    JZ 0x005666df                       ; 005666bc
        ;   XREF to: 005666df (CONDITIONAL_JUMP)  ; LAB_005666df
    MOV EDX,dword ptr [EDI + 0x200]     ; 005666be
    MOV EAX,dword ptr [ESI + 0x200]     ; 005666c4
    SAR EDX,0x10                        ; 005666ca
    SAR EAX,0x10                        ; 005666cd
    SAR EDX,0x8                         ; 005666d0
    SAR EAX,0x8                         ; 005666d3
    XOR EBX,EBX                         ; 005666d6
    CMP EDX,EAX                         ; 005666d8
    SETZ AL                             ; 005666da
    MOV BL,AL                           ; 005666dd
    TEST EBX,EBX                        ; 005666df
        ;   Label: LAB_005666df
    JZ 0x0056670b                       ; 005666e1
        ;   XREF to: 0056670b (CONDITIONAL_JUMP)  ; LAB_0056670b
    CMP byte ptr [ESI + 0x100],0x0      ; 005666e3
    JZ 0x0056670b                       ; 005666ea
        ;   XREF to: 0056670b (CONDITIONAL_JUMP)  ; LAB_0056670b
    LEA EAX,[EDI + 0x100]               ; 005666ec
    PUSH EAX                            ; 005666f2
    LEA EAX,[ESI + 0x100]               ; 005666f3
    PUSH EAX                            ; 005666f9
    XOR EBX,EBX                         ; 005666fa
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 005666fc
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 00566701
    TEST EAX,EAX                        ; 00566704
    SETZ AL                             ; 00566706
    MOV BL,AL                           ; 00566709
    TEST EBX,EBX                        ; 0056670b
        ;   Label: LAB_0056670b
    JZ 0x00566748                       ; 0056670d
        ;   XREF to: 00566748 (CONDITIONAL_JUMP)  ; LAB_00566748
    CMP dword ptr [EDI + 0x20c],0x10    ; 0056670f
    JNZ 0x0056675f                      ; 00566716
        ;   XREF to: 0056675f (CONDITIONAL_JUMP)  ; LAB_0056675f
    XOR EDX,EDX                         ; 00566718
    TEST EBX,EBX                        ; 0056671a
    JZ 0x00566748                       ; 0056671c
        ;   XREF to: 00566748 (CONDITIONAL_JUMP)  ; LAB_00566748
    MOV EAX,ESI                         ; 0056671e
    MOV ECX,EDI                         ; 00566720
    MOV EDI,dword ptr [ECX + 0x210]     ; 00566722
        ;   Label: LAB_00566722
    MOV ESI,dword ptr [EAX + 0x210]     ; 00566728
    ADD ECX,0x4                         ; 0056672e
    CMP ESI,EDI                         ; 00566731
    SETZ BL                             ; 00566733
    ADD EAX,0x4                         ; 00566736
    MOVZX ESI,BL                        ; 00566739
    INC EDX                             ; 0056673c
    MOV EBX,ESI                         ; 0056673d
    CMP EDX,0x10                        ; 0056673f
    JGE 0x00566748                      ; 00566742
        ;   XREF to: 00566748 (CONDITIONAL_JUMP)  ; LAB_00566748
    TEST ESI,ESI                        ; 00566744
    JNZ 0x00566722                      ; 00566746
        ;   XREF to: 00566722 (CONDITIONAL_JUMP)  ; LAB_00566722
    MOV EAX,EBX                         ; 00566748
        ;   Label: LAB_00566748
    POP EDI                             ; 0056674a
    POP ESI                             ; 0056674b
    POP EBX                             ; 0056674c
    RET                                 ; 0056674d
    CMP DX,-0x1                         ; 0056674e
        ;   Label: LAB_0056674e
    JZ 0x00566660                       ; 00566752
        ;   XREF to: 00566660 (CONDITIONAL_JUMP)  ; LAB_00566660
    XOR EAX,EAX                         ; 00566758
    JMP 0x00566665                      ; 0056675a
        ;   XREF to: 00566665 (UNCONDITIONAL_JUMP)  ; LAB_00566665
    XOR EBX,EBX                         ; 0056675f
        ;   Label: LAB_0056675f
    MOV EAX,EBX                         ; 00566761
    POP EDI                             ; 00566763
    POP ESI                             ; 00566764
    POP EBX                             ; 00566765
    RET                                 ; 00566766

