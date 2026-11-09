; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCodec * support_codec_cpp_FUN_00441660(CCodec *param_1,undefined4 param_2,undefined4 param_3)
;
;
; Called Functions:
;   support_codec.cpp_CCodec_ctor_FUN_00440800
;   support_codec.cpp_FUN_004416a0
;   support_codec.cpp_FUN_004416b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441660
        ;   Label: support_codec.cpp_FUN_00441660
    PUSH ESI                            ; 00441661
    MOV EDX,dword ptr [ESP + 0xc]       ; 00441662
    PUSH EDX                            ; 00441666
    CALL support_codec.cpp_CCodec_ctor_FUN_00440800 ; 00441667
        ;   XREF to: 00440800 (UNCONDITIONAL_CALL)  ; CCodec * support_codec.cpp_CCodec_ctor_FUN_00440800(CCodec * this_ptr)
    ADD ESP,0x4                         ; 0044166c
    MOV ECX,dword ptr [ESP + 0x10]      ; 0044166f
    PUSH ECX                            ; 00441673
    PUSH EAX                            ; 00441674
    MOV EBX,EAX                         ; 00441675
    MOV dword ptr [EAX],0x5dd524        ; 00441677
    CALL support_codec.cpp_FUN_004416a0 ; 0044167d
        ;   XREF to: 004416a0 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_004416a0()
    ADD ESP,0x8                         ; 00441682
    MOV ESI,dword ptr [ESP + 0x14]      ; 00441685
    PUSH ESI                            ; 00441689
    PUSH EBX                            ; 0044168a
    CALL support_codec.cpp_FUN_004416b0 ; 0044168b
        ;   XREF to: 004416b0 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_004416b0()
    ADD ESP,0x8                         ; 00441690
    MOV EAX,EBX                         ; 00441693
    POP ESI                             ; 00441695
    POP EBX                             ; 00441696
    RET                                 ; 00441697

