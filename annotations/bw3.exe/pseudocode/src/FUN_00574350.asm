; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; longlong FUN_00574350(uint param_1,int param_2,uint param_3)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00574350
        ;   Label: FUN_00574350
    MOV EAX,dword ptr [ESP + 0x8]       ; 00574354
    MOV ECX,dword ptr [ESP + 0xc]       ; 00574358
    CMP dword ptr [EDX + 0x4],0x0       ; 0057435c
    JZ 0x005742d8                       ; 00574360
        ;   XREF to: 005742d8 (CONDITIONAL_JUMP)  ; LAB_005742d8
    CMP ECX,0x1                         ; 00574366
    JNC 0x0057438d                      ; 00574369
        ;   XREF to: 0057438d (CONDITIONAL_JUMP)  ; LAB_0057438d
    TEST ECX,ECX                        ; 0057436b
    JNZ 0x00574380                      ; 0057436d
        ;   XREF to: 00574380 (CONDITIONAL_JUMP)  ; LAB_00574380
    TEST EAX,EAX                        ; 0057436f
        ;   Label: LAB_0057436f
    JL 0x00574380                       ; 00574371
        ;   XREF to: 00574380 (CONDITIONAL_JUMP)  ; LAB_00574380
    CMP EAX,dword ptr [EDX + 0x8]       ; 00574373
    JLE 0x00574397                      ; 00574376
        ;   XREF to: 00574397 (CONDITIONAL_JUMP)  ; LAB_00574397
    LEA EAX,[EAX]                       ; 00574378
    MOV EDX,EDX                         ; 0057437e
    XOR EAX,EAX                         ; 00574380
        ;   Label: LAB_00574380
    RET                                 ; 00574382
    ADD EAX,dword ptr [EDX + 0xc]       ; 00574383
        ;   Label: LAB_00574383
    JMP 0x0057436f                      ; 00574386
        ;   XREF to: 0057436f (UNCONDITIONAL_JUMP)  ; LAB_0057436f
    ADD EAX,dword ptr [EDX + 0x8]       ; 00574388
        ;   Label: LAB_00574388
    JMP 0x0057436f                      ; 0057438b
        ;   XREF to: 0057436f (UNCONDITIONAL_JUMP)  ; LAB_0057436f
    JBE 0x00574383                      ; 0057438d
        ;   XREF to: 00574383 (CONDITIONAL_JUMP)  ; LAB_00574383
        ;   Label: LAB_0057438d
    CMP ECX,0x2                         ; 0057438f
    JZ 0x00574388                       ; 00574392
        ;   XREF to: 00574388 (CONDITIONAL_JUMP)  ; LAB_00574388
    XOR EAX,EAX                         ; 00574394
    RET                                 ; 00574396
    MOV dword ptr [EDX + 0xc],EAX       ; 00574397
        ;   Label: LAB_00574397
    MOV EAX,0x1                         ; 0057439a
    RET                                 ; 0057439f

