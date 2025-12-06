; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined shape_superopt.cpp_FUN_005c79d0()
;
;
; XREF[1]:
;   shape_superopt.cpp_COptimize_FUN_005d7000 at 005d70a5
;
; Called Functions:
;   shape_superopt.cpp_FUN_005c79f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c79d0
        ;   Label: shape_superopt.cpp_FUN_005c79d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005c79d1
    PUSH EBX                            ; 005c79d5
    CALL shape_superopt.cpp_FUN_005c79f0 ; 005c79d6 | undefined shape_superopt.cpp_FUN_005c79f0()
        ;   XREF to: 005c79f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005c79db
    MOV EAX,EBX                         ; 005c79de
    POP EBX                             ; 005c79e0
    RET                                 ; 005c79e1

