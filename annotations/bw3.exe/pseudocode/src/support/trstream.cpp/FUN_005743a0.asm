; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trstream_cpp_FUN_005743a0(int param_1)
;
;
; XREF[2]:
;   support_codec.cpp_FUN_00440970 at 004409b0
;   support_codec.cpp_FUN_004409f0 at 00440a3a
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005743a0
        ;   Label: support_trstream.cpp_FUN_005743a0
    CMP dword ptr [EAX + 0x4],0x0       ; 005743a4
    JNZ 0x005743b6                      ; 005743a8
        ;   XREF to: 005743b6 (CONDITIONAL_JUMP)  ; LAB_005743b6
    LEA EAX,[EAX]                       ; 005743aa
    MOV EAX,dword ptr [EAX + 0xc]       ; 005743b6
        ;   Label: LAB_005743b6
    RET                                 ; 005743b9

