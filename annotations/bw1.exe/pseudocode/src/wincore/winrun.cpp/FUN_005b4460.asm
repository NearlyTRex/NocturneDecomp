; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 wincore_winrun_cpp_FUN_005b4460(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_02c9d294
;
; Called Functions:
;   wincore_winrun.cpp_FUN_005b3d70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b4460
        ;   Label: wincore_winrun.cpp_FUN_005b4460
    MOV ECX,dword ptr [ESP + 0x8]       ; 005b4461
    MOV EDX,0x1                         ; 005b4465
    PUSH ECX                            ; 005b446a
    XOR EBX,EBX                         ; 005b446b
    MOV dword ptr [0x02c9d294],EDX      ; 005b446d | DAT_02c9d294
    CALL wincore_winrun.cpp_FUN_005b3d70 ; 005b4473
        ;   XREF to: 005b3d70 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005b3d70()
    ADD ESP,0x4                         ; 005b4478
    MOV dword ptr [0x02c9d294],EBX      ; 005b447b | DAT_02c9d294
    POP EBX                             ; 005b4481
    LEA EAX,[EAX]                       ; 005b4482
    LEA EDX,[EDX]                       ; 005b4488
    MOV EAX,EAX                         ; 005b448e
    RET                                 ; 005b4490

