; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trstream_cpp_FUN_0057e240(undefined4 param_1,undefined1 param_2)
;
;
; Called Functions:
;   wincore_winrun.cpp_FUN_0058ffc0
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0057e240
        ;   Label: support_trstream.cpp_FUN_0057e240
    MOV AL,byte ptr [ESP + 0xc]         ; 0057e243
    MOV byte ptr [ESP],AL               ; 0057e247
    XOR AH,AH                           ; 0057e24a
    MOV byte ptr [ESP + 0x1],AH         ; 0057e24c
    MOV EAX,ESP                         ; 0057e250
    PUSH EAX                            ; 0057e252
    CALL wincore_winrun.cpp_FUN_0058ffc0 ; 0057e253
        ;   XREF to: 0058ffc0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_0058ffc0()
    ADD ESP,0x4                         ; 0057e258
    XOR EAX,EAX                         ; 0057e25b
    ADD ESP,0x4                         ; 0057e25d
    RET                                 ; 0057e260

