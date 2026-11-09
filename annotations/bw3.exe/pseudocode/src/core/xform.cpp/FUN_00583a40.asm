; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_xform_cpp_FUN_00583a40(float param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005d80db
;   undefined4 DAT_005d80df
;   undefined4 DAT_005d80e3
;   undefined4 DAT_005d80e7
;   undefined4 DAT_005d80eb
;   undefined4 DAT_005d80ef
;   undefined4 DAT_005d80f3
;
; Called Functions:
;   crt_math.c_acos_FUN_005a4b74
;   crt_math.c_asin_FUN_005a4b46
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00583a40
        ;   Label: core_xform.cpp_FUN_00583a40
    FLD float ptr [ESP + 0x8]           ; 00583a43
    FCOMP float ptr [0x005d80db]        ; 00583a47 | DAT_005d80db
    FNSTSW AX                           ; 00583a4d
    SAHF                                ; 00583a4f
    JNC 0x00583ab5                      ; 00583a50
        ;   XREF to: 00583ab5 (CONDITIONAL_JUMP)  ; LAB_00583ab5
    FLD float ptr [ESP + 0x8]           ; 00583a52
    FCOMP float ptr [0x005d80df]        ; 00583a56 | DAT_005d80df
    FNSTSW AX                           ; 00583a5c
    SAHF                                ; 00583a5e
    JBE 0x00583ab5                      ; 00583a5f
        ;   XREF to: 00583ab5 (CONDITIONAL_JUMP)  ; LAB_00583ab5
    FLD float ptr [ESP + 0x8]           ; 00583a61
    CALL crt_math.c_asin_FUN_005a4b46   ; 00583a65
        ;   XREF to: 005a4b46 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_asin_FUN_005a4b46()
    FLDZ                                ; 00583a6a
    FXCH                                ; 00583a6c
    FSTP float ptr [ESP]                ; 00583a6e
    FCOMP float ptr [ESP + 0xc]         ; 00583a71
    FNSTSW AX                           ; 00583a75
    SAHF                                ; 00583a77
    JBE 0x00583a86                      ; 00583a78
        ;   XREF to: 00583a86 (CONDITIONAL_JUMP)  ; LAB_00583a86
    FLD float ptr [0x005d80e7]          ; 00583a7a | DAT_005d80e7
    FSUB float ptr [ESP]                ; 00583a80
    FSTP float ptr [ESP]                ; 00583a83
    FLD float ptr [ESP]                 ; 00583a86
        ;   Label: LAB_00583a86
    FCOMP float ptr [0x005d80eb]        ; 00583a89 | DAT_005d80eb
    FNSTSW AX                           ; 00583a8f
    SAHF                                ; 00583a91
    JNC 0x00583aa0                      ; 00583a92
        ;   XREF to: 00583aa0 (CONDITIONAL_JUMP)  ; LAB_00583aa0
    FLD float ptr [ESP]                 ; 00583a94
    FADD float ptr [0x005d80ef]         ; 00583a97 | DAT_005d80ef
    FSTP float ptr [ESP]                ; 00583a9d
    FLD float ptr [ESP]                 ; 00583aa0
        ;   Label: LAB_00583aa0
    FCOMP float ptr [0x005d80e7]        ; 00583aa3 | DAT_005d80e7
    FNSTSW AX                           ; 00583aa9
    SAHF                                ; 00583aab
    JA 0x00583afc                       ; 00583aac
        ;   XREF to: 00583afc (CONDITIONAL_JUMP)  ; LAB_00583afc
    MOV EAX,dword ptr [ESP]             ; 00583aae
    ADD ESP,0x4                         ; 00583ab1
    RET                                 ; 00583ab4
    FLD float ptr [ESP + 0xc]           ; 00583ab5
        ;   Label: LAB_00583ab5
    FCOMP float ptr [0x005d80e3]        ; 00583ab9 | DAT_005d80e3
    FNSTSW AX                           ; 00583abf
    SAHF                                ; 00583ac1
    JA 0x00583add                       ; 00583ac2
        ;   XREF to: 00583add (CONDITIONAL_JUMP)  ; LAB_00583add
    MOV dword ptr [ESP],0x40490fdb      ; 00583ac4
    FLDZ                                ; 00583acb
        ;   Label: LAB_00583acb
    FCOMP float ptr [ESP + 0x8]         ; 00583acd
    FNSTSW AX                           ; 00583ad1
    SAHF                                ; 00583ad3
    JBE 0x00583a86                      ; 00583ad4
        ;   XREF to: 00583a86 (CONDITIONAL_JUMP)  ; LAB_00583a86
    XOR byte ptr [ESP + 0x3],0x80       ; 00583ad6
    JMP 0x00583a86                      ; 00583adb
        ;   XREF to: 00583a86 (UNCONDITIONAL_JUMP)  ; LAB_00583a86
    CMP dword ptr [ESP + 0xc],0x3f800000 ; 00583add
        ;   Label: LAB_00583add
    JL 0x00583aee                       ; 00583ae5
        ;   XREF to: 00583aee (CONDITIONAL_JUMP)  ; LAB_00583aee
    XOR ECX,ECX                         ; 00583ae7
    MOV dword ptr [ESP],ECX             ; 00583ae9
    JMP 0x00583acb                      ; 00583aec
        ;   XREF to: 00583acb (UNCONDITIONAL_JUMP)  ; LAB_00583acb
    FLD float ptr [ESP + 0xc]           ; 00583aee
        ;   Label: LAB_00583aee
    CALL crt_math.c_acos_FUN_005a4b74   ; 00583af2
        ;   XREF to: 005a4b74 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005a4b74()
    FSTP float ptr [ESP]                ; 00583af7
    JMP 0x00583acb                      ; 00583afa
        ;   XREF to: 00583acb (UNCONDITIONAL_JUMP)  ; LAB_00583acb
    FLD float ptr [ESP]                 ; 00583afc
        ;   Label: LAB_00583afc
    FADD float ptr [0x005d80f3]         ; 00583aff | DAT_005d80f3
    FSTP float ptr [ESP]                ; 00583b05
    MOV EAX,dword ptr [ESP]             ; 00583b08
    ADD ESP,0x4                         ; 00583b0b
    RET                                 ; 00583b0e

