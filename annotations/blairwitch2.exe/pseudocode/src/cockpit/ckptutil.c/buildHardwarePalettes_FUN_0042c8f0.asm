; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_buildHardwarePalettes_FUN_0042c8f0(SRGBColorPalette *rgb_palette_data)
;
; Parameters:
; SRGBColorPalette * Stack[0x4]:4   rgb_palette_data
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35210
;   undefined4 DAT_01c35814
;   undefined4 DAT_01c35818
;   undefined4 DAT_01c35820
;   undefined4 DAT_01c35824
;   undefined4 DAT_01c3582c
;   undefined4 DAT_01c35830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042c8f0
        ;   Label: cockpit_ckptutil.c_buildHardwarePalettes_FUN_0042c8f0
    PUSH ESI                            ; 0042c8f1
    PUSH EDI                            ; 0042c8f2
    PUSH EBP                            ; 0042c8f3
    SUB ESP,0x8                         ; 0042c8f4
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0042c8f7
    MOV EDX,dword ptr [0x006141c0]      ; 0042c8fb | DAT_006141c0
    MOV dword ptr [0x01c35210],EBX      ; 0042c901 | DAT_01c35210
    CMP EDX,0x20                        ; 0042c907
    JNZ 0x0042c96b                      ; 0042c90a
        ;   XREF to: 0042c96b (CONDITIONAL_JUMP)  ; LAB_0042c96b
    MOV EDX,dword ptr [0x006141c0]      ; 0042c90c | DAT_006141c0
    XOR EAX,EAX                         ; 0042c912
    MOVZX EBP,byte ptr [EBX + 0x1]      ; 0042c914
        ;   Label: LAB_0042c914
    MOVZX EDI,byte ptr [EBX]            ; 0042c918
    MOVZX ESI,byte ptr [EBX + 0x2]      ; 0042c91b
    CMP EDX,0x20                        ; 0042c91f
    JNZ 0x0042c95d                      ; 0042c922
        ;   XREF to: 0042c95d (CONDITIONAL_JUMP)  ; LAB_0042c95d
    MOV CL,byte ptr [0x01c35814]        ; 0042c924 | DAT_01c35814
    SHL EDI,CL                          ; 0042c92a
    MOV CL,byte ptr [0x01c35820]        ; 0042c92c | DAT_01c35820
    SHL EBP,CL                          ; 0042c932
    MOV CL,byte ptr [0x01c3582c]        ; 0042c934 | DAT_01c3582c
    SHL ESI,CL                          ; 0042c93a
    OR EDI,EBP                          ; 0042c93c
    MOV ECX,ESI                         ; 0042c93e
    OR ECX,EDI                          ; 0042c940
    ADD EAX,0x4                         ; 0042c942
        ;   Label: LAB_0042c942
    ADD EBX,0x3                         ; 0042c945
    MOV dword ptr [EAX + 0x1c35210],ECX ; 0042c948
    CMP EAX,0x400                       ; 0042c94e
    JNZ 0x0042c914                      ; 0042c953
        ;   XREF to: 0042c914 (CONDITIONAL_JUMP)  ; LAB_0042c914
    ADD ESP,0x8                         ; 0042c955
    POP EBP                             ; 0042c958
    POP EDI                             ; 0042c959
    POP ESI                             ; 0042c95a
    POP EBX                             ; 0042c95b
    RET                                 ; 0042c95c
    MOV ECX,EBP                         ; 0042c95d
        ;   Label: LAB_0042c95d
    SHL EDI,0x10                        ; 0042c95f
    SHL ECX,0x8                         ; 0042c962
    OR ECX,EDI                          ; 0042c965
    OR ECX,ESI                          ; 0042c967
    JMP 0x0042c942                      ; 0042c969
        ;   XREF to: 0042c942 (UNCONDITIONAL_JUMP)  ; LAB_0042c942
    XOR ESI,ESI                         ; 0042c96b
        ;   Label: LAB_0042c96b
    XOR EAX,EAX                         ; 0042c96d
        ;   Label: LAB_0042c96d
    MOV EDI,dword ptr [0x01c35818]      ; 0042c96f | DAT_01c35818
    MOV AL,byte ptr [EBX]               ; 0042c975
    XOR EDX,EDX                         ; 0042c977
    MOV dword ptr [ESP],EAX             ; 0042c979
    DIV EDI                             ; 0042c97c
    XOR ECX,ECX                         ; 0042c97e
    MOV CL,byte ptr [EBX + 0x1]         ; 0042c980
    MOV dword ptr [ESP + 0x4],ECX       ; 0042c983
    MOV dword ptr [ESP],EAX             ; 0042c987
    XOR EDX,EDX                         ; 0042c98a
    MOV EAX,ECX                         ; 0042c98c
    DIV dword ptr [0x01c35824]          ; 0042c98e | DAT_01c35824
    MOVZX EBP,byte ptr [EBX + 0x2]      ; 0042c994
    MOV EDI,dword ptr [0x01c35830]      ; 0042c998 | DAT_01c35830
    MOV dword ptr [ESP + 0x4],EAX       ; 0042c99e
    XOR EDX,EDX                         ; 0042c9a2
    MOV EAX,EBP                         ; 0042c9a4
    DIV EDI                             ; 0042c9a6
    MOV CL,byte ptr [0x01c35814]        ; 0042c9a8 | DAT_01c35814
    MOV EDX,dword ptr [ESP]             ; 0042c9ae
    MOV EDI,EAX                         ; 0042c9b1
    MOV EAX,dword ptr [ESP + 0x4]       ; 0042c9b3
    SHL EDX,CL                          ; 0042c9b7
    MOV CL,byte ptr [0x01c35820]        ; 0042c9b9 | DAT_01c35820
    SHL EAX,CL                          ; 0042c9bf
    MOV CL,byte ptr [0x01c3582c]        ; 0042c9c1 | DAT_01c3582c
    OR EAX,EDX                          ; 0042c9c7
    SHL EDI,CL                          ; 0042c9c9
    ADD ESI,0x2                         ; 0042c9cb
    OR EAX,EDI                          ; 0042c9ce
    ADD EBX,0x3                         ; 0042c9d0
    MOV word ptr [ESI + 0x1c35612],AX   ; 0042c9d3
    CMP ESI,0x200                       ; 0042c9da
    JNZ 0x0042c96d                      ; 0042c9e0
        ;   XREF to: 0042c96d (CONDITIONAL_JUMP)  ; LAB_0042c96d
    ADD ESP,0x8                         ; 0042c9e2
    POP EBP                             ; 0042c9e5
    POP EDI                             ; 0042c9e6
    POP ESI                             ; 0042c9e7
    POP EBX                             ; 0042c9e8
    RET                                 ; 0042c9e9

