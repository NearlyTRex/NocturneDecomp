; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int cockpit_ckptutil_c_FUN_00436020(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba20
;
; Called Functions:
;   cockpit_ckptutil.c_getColorConversionFunction_FUN_00434e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00436020
        ;   Label: cockpit_ckptutil.c_FUN_00436020
    PUSH ESI                            ; 00436021
    PUSH EDI                            ; 00436022
    PUSH EBP                            ; 00436023
    SUB ESP,0xc                         ; 00436024
    MOV EDI,dword ptr [ESP + 0x28]      ; 00436027
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0043602b
    MOV EBP,dword ptr [ESP + 0x34]      ; 0043602f
    MOV EAX,dword ptr [ESP + 0x30]      ; 00436033
    SUB EAX,EDI                         ; 00436037
    INC EAX                             ; 00436039
    MOV EDX,dword ptr [ESP + 0x20]      ; 0043603a
    MOV dword ptr [ESP + 0x4],EAX       ; 0043603e
    TEST EDX,EDX                        ; 00436042
    JNZ 0x00436058                      ; 00436044
        ;   XREF to: 00436058 (CONDITIONAL_JUMP)  ; LAB_00436058
    LEA EAX,[EAX]                       ; 00436046
    LEA EDX,[EDX]                       ; 0043604c
    ADD ESP,0xc                         ; 00436050
        ;   Label: LAB_00436050
    POP EBP                             ; 00436053
    POP EDI                             ; 00436054
    POP ESI                             ; 00436055
    POP EBX                             ; 00436056
    RET                                 ; 00436057
    CALL cockpit_ckptutil.c_getColorConversionFunction_FUN_00434e80 ; 00436058
        ;   XREF to: 00434e80 (UNCONDITIONAL_CALL)  ; ColorConversionFunc * cockpit_ckptutil.c_getColorConversionFunction_FUN_00434e80()
        ;   Label: LAB_00436058
    MOV ECX,dword ptr [0x005fba20]      ; 0043605d | DAT_005fba20
    MOV dword ptr [ESP + 0x8],EAX       ; 00436063
    LEA EAX,[ESI*0x4 + 0x0]             ; 00436067
    CMP ECX,0x8                         ; 0043606e
    JNZ 0x004360b1                      ; 00436071
        ;   XREF to: 004360b1 (CONDITIONAL_JUMP)  ; LAB_004360b1
    MOV EBX,ESI                         ; 00436073
    CMP ESI,EBP                         ; 00436075
    JGE 0x00436050                      ; 00436077
        ;   XREF to: 00436050 (CONDITIONAL_JUMP)  ; LAB_00436050
    MOV ESI,EAX                         ; 00436079
    MOV EAX,[0x005fba18]                ; 0043607b | DAT_005fba18
        ;   Label: LAB_0043607b
    IMUL EAX,EBX                        ; 00436080
    MOV EDX,dword ptr [ESP + 0x20]      ; 00436083
    MOV ECX,dword ptr [ESP + 0x4]       ; 00436087
    ADD EAX,EDI                         ; 0043608b
    PUSH ECX                            ; 0043608d
    ADD EDX,EAX                         ; 0043608e
    MOV EAX,dword ptr [ESI + 0x1c5faec] ; 00436090
    PUSH EDX                            ; 00436096
    ADD EAX,EDI                         ; 00436097
    PUSH EAX                            ; 00436099
    ADD ESI,0x4                         ; 0043609a
    INC EBX                             ; 0043609d
    CALL dword ptr [ESP + 0x14]         ; 0043609e
    ADD ESP,0xc                         ; 004360a2
    CMP EBX,EBP                         ; 004360a5
    JL 0x0043607b                       ; 004360a7
        ;   XREF to: 0043607b (CONDITIONAL_JUMP)  ; LAB_0043607b
    ADD ESP,0xc                         ; 004360a9
    POP EBP                             ; 004360ac
    POP EDI                             ; 004360ad
    POP ESI                             ; 004360ae
    POP EBX                             ; 004360af
    RET                                 ; 004360b0
    MOV EBX,ESI                         ; 004360b1
        ;   Label: LAB_004360b1
    CMP ESI,EBP                         ; 004360b3
    JGE 0x00436050                      ; 004360b5
        ;   XREF to: 00436050 (CONDITIONAL_JUMP)  ; LAB_00436050
    LEA EDX,[EDI + EDI*0x1]             ; 004360b7
    MOV ESI,EAX                         ; 004360ba
    MOV dword ptr [ESP],EDX             ; 004360bc
    MOV EAX,[0x005fba18]                ; 004360bf | DAT_005fba18
        ;   Label: LAB_004360bf
    IMUL EAX,EBX                        ; 004360c4
    MOV EDX,dword ptr [ESP + 0x20]      ; 004360c7
    ADD EAX,EDI                         ; 004360cb
    MOV ECX,dword ptr [ESP]             ; 004360cd
    ADD EAX,EDX                         ; 004360d0
    MOV EDX,dword ptr [ESI + 0x1c5faec] ; 004360d2
    ADD EDX,ECX                         ; 004360d8
    MOV ECX,dword ptr [ESP + 0x4]       ; 004360da
    PUSH ECX                            ; 004360de
    PUSH EAX                            ; 004360df
    PUSH EDX                            ; 004360e0
    ADD ESI,0x4                         ; 004360e1
    INC EBX                             ; 004360e4
    CALL dword ptr [ESP + 0x14]         ; 004360e5
    ADD ESP,0xc                         ; 004360e9
    CMP EBX,EBP                         ; 004360ec
    JL 0x004360bf                       ; 004360ee
        ;   XREF to: 004360bf (CONDITIONAL_JUMP)  ; LAB_004360bf
    ADD ESP,0xc                         ; 004360f0
    POP EBP                             ; 004360f3
    POP EDI                             ; 004360f4
    POP ESI                             ; 004360f5
    POP EBX                             ; 004360f6
    RET                                 ; 004360f7

