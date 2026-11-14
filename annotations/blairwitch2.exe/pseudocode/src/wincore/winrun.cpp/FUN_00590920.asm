; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 wincore_winrun_cpp_FUN_00590920(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_02665a44
;
; Called Functions:
;   wincore_winrun.cpp_FUN_005902a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00590920
        ;   Label: wincore_winrun.cpp_FUN_00590920
    MOV ECX,dword ptr [ESP + 0x8]       ; 00590921
    MOV EDX,0x1                         ; 00590925
    PUSH ECX                            ; 0059092a
    XOR EBX,EBX                         ; 0059092b
    MOV dword ptr [0x02665a44],EDX      ; 0059092d | DAT_02665a44
    CALL wincore_winrun.cpp_FUN_005902a0 ; 00590933
        ;   XREF to: 005902a0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005902a0()
    ADD ESP,0x4                         ; 00590938
    MOV dword ptr [0x02665a44],EBX      ; 0059093b | DAT_02665a44
    POP EBX                             ; 00590941
    LEA EAX,[EAX]                       ; 00590942
    LEA EDX,[EDX]                       ; 00590948
    MOV EAX,EAX                         ; 0059094e
    RET                                 ; 00590950

