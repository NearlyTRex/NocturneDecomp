; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_1000c300(short *param_1,int param_2)
;
;
; XREF[1]:
;   FUN_1000c0f0 at 1000c165
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 1000c300
        ;   Label: FUN_1000c300
    PUSH ESI                            ; 1000c304
    PUSH EDI                            ; 1000c305
    MOV ESI,ECX                         ; 1000c306
    MOV EAX,dword ptr [ESP + 0x10]      ; 1000c308
    TEST EAX,EAX                        ; 1000c30c
    LEA EDX,[EAX + -0x1]                ; 1000c30e
    JZ 0x1000c323                       ; 1000c311
        ;   XREF to: 1000c323 (CONDITIONAL_JUMP)  ; LAB_1000c323
    CMP word ptr [ESI],0x0              ; 1000c313
        ;   Label: LAB_1000c313
    JZ 0x1000c329                       ; 1000c317
        ;   XREF to: 1000c329 (CONDITIONAL_JUMP)  ; LAB_1000c329
    ADD ESI,0x2                         ; 1000c319
    MOV EDI,EDX                         ; 1000c31c
    DEC EDX                             ; 1000c31e
    TEST EDI,EDI                        ; 1000c31f
    JNZ 0x1000c313                      ; 1000c321
        ;   XREF to: 1000c313 (CONDITIONAL_JUMP)  ; LAB_1000c313
    CMP word ptr [ESI],0x0              ; 1000c323
        ;   Label: LAB_1000c323
    JNZ 0x1000c330                      ; 1000c327
        ;   XREF to: 1000c330 (CONDITIONAL_JUMP)  ; LAB_1000c330
    SUB ESI,ECX                         ; 1000c329
        ;   Label: LAB_1000c329
    SAR ESI,0x1                         ; 1000c32b
    MOV EAX,ESI                         ; 1000c32e
    POP EDI                             ; 1000c330
        ;   Label: LAB_1000c330
    POP ESI                             ; 1000c331
    RET                                 ; 1000c332

