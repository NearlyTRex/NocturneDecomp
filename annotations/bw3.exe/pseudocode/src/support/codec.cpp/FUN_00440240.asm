; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_codec_cpp_FUN_00440240(undefined4 *param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   support_codec.cpp_CAsciiArmor_flush_FUN_00441580 at 0044158e
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00440240
        ;   Label: support_codec.cpp_FUN_00440240
    MOV EDX,dword ptr [ESP + 0x8]       ; 00440241
    MOV EBX,dword ptr [ESP + 0xc]       ; 00440245
    MOV ECX,dword ptr [EDX]             ; 00440249
    MOV EAX,dword ptr [EDX + 0x4]       ; 0044024b
    MOV dword ptr [EBX],ECX             ; 0044024e
    MOV dword ptr [EDX + 0x4],0x0       ; 00440250
    MOV dword ptr [EDX],0x0             ; 00440257
    POP EBX                             ; 0044025d
    RET                                 ; 0044025e

