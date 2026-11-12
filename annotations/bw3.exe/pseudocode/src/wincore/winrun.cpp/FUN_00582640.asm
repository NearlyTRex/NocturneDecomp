; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 wincore_winrun_cpp_FUN_00582640(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_02d22fa4
;
; Called Functions:
;   wincore_winrun.cpp_FUN_00581f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00582640
        ;   Label: wincore_winrun.cpp_FUN_00582640
    MOV ECX,dword ptr [ESP + 0x8]       ; 00582641
    MOV EDX,0x1                         ; 00582645
    PUSH ECX                            ; 0058264a
    XOR EBX,EBX                         ; 0058264b
    MOV dword ptr [0x02d22fa4],EDX      ; 0058264d | DAT_02d22fa4
    CALL wincore_winrun.cpp_FUN_00581f50 ; 00582653
        ;   XREF to: 00581f50 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_00581f50()
    ADD ESP,0x4                         ; 00582658
    MOV dword ptr [0x02d22fa4],EBX      ; 0058265b | DAT_02d22fa4
    POP EBX                             ; 00582661
    LEA EAX,[EAX]                       ; 00582662
    LEA EDX,[EDX]                       ; 00582668
    MOV EAX,EAX                         ; 0058266e
    RET                                 ; 00582670

