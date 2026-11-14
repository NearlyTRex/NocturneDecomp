; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_special_cpp_clearZBufferNative_FUN_0057dca4(void)
;
;
; XREF[4]:
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044ceb0 at 0044d0da
;   core_set.cpp_FUN_00550da0 at 00551108
;   core_setdir.cpp_FUN_0055b330 at 0055b408
;   engine_mini3d.cpp_clearZBuffer_FUN_005111a0 at 005111ae
;
; Referenced Globals:
;   undefined4 DAT_0061b498
;   undefined8 DAT_00623ddc
;   undefined4 DAT_00623de4
;   undefined4 DAT_01c4480c
;   undefined4 DAT_01c4f00c
;   undefined4 DAT_01c4f014
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0057dca4
        ;   Label: engine_special.cpp_clearZBufferNative_FUN_0057dca4
    PUSH EDI                            ; 0057dca5
    PUSHAD                              ; 0057dca6
    CLD                                 ; 0057dca7
    PUSH DS                             ; 0057dca8
    POP ES                              ; 0057dca9
    MOV EDI,dword ptr [0x01c4480c]      ; 0057dcaa | DAT_01c4480c
    MOV EAX,[0x01c4f00c]                ; 0057dcb0 | DAT_01c4f00c
    MOV ECX,dword ptr [0x0061b498]      ; 0057dcb5 | DAT_0061b498
    MUL ECX                             ; 0057dcbb
    SHL EAX,0x2                         ; 0057dcbd
    ADD EDI,EAX                         ; 0057dcc0
    MOV EAX,[0x01c4f014]                ; 0057dcc2 | DAT_01c4f014
    SUB EAX,dword ptr [0x01c4f00c]      ; 0057dcc7 | DAT_01c4f00c
    INC EAX                             ; 0057dccd
    MOV ECX,dword ptr [0x0061b498]      ; 0057dcce | DAT_0061b498
    MUL ECX                             ; 0057dcd4
    MOV ECX,EAX                         ; 0057dcd6
    FLD double ptr [0x00623ddc]         ; 0057dcd8 | DAT_00623ddc
    FST double ptr [EDI]                ; 0057dcde
        ;   Label: LAB_0057dcde
    FST double ptr [EDI + 0x8]          ; 0057dce0
    FST double ptr [EDI + 0x10]         ; 0057dce3
    FST double ptr [EDI + 0x18]         ; 0057dce6
    FST double ptr [EDI + 0x20]         ; 0057dce9
    FST double ptr [EDI + 0x28]         ; 0057dcec
    FST double ptr [EDI + 0x30]         ; 0057dcef
    FST double ptr [EDI + 0x38]         ; 0057dcf2
    ADD EDI,0x40                        ; 0057dcf5
    SUB ECX,0x10                        ; 0057dcf8
    JG 0x0057dcde                       ; 0057dcfb
        ;   XREF to: 0057dcde (CONDITIONAL_JUMP)  ; LAB_0057dcde
    FSTP double ptr [0x00623de4]        ; 0057dcfd | DAT_00623de4
    POPAD                               ; 0057dd03
    POP EDI                             ; 0057dd04
    POP ESI                             ; 0057dd05
    RET                                 ; 0057dd06

