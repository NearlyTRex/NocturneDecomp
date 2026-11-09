; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int shape_edittool_cpp_FUN_00486780(undefined4 param_1)
;
;
; XREF[3]:
;   shape_edittool.cpp_FUN_0048666e at 004866f8
;   shape_edittool.cpp_FUN_004867f0 at 004867f5
;   shape_edittool.cpp_FUN_00486810 at 0048683f
;
; Referenced Globals:
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;
; Called Functions:
;   shape_edittool.cpp_FUN_004867c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00486780
        ;   Label: shape_edittool.cpp_FUN_00486780
    MOV EDX,dword ptr [ESP + 0x8]       ; 00486781
    PUSH EDX                            ; 00486785
    CALL shape_edittool.cpp_FUN_004867c0 ; 00486786
        ;   XREF to: 004867c0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004867c0()
    IMUL EAX,dword ptr [0x005fba18]     ; 0048678b | DAT_005fba18
    LEA EDX,[EAX*0x4 + 0x0]             ; 00486792
    SUB EDX,EAX                         ; 00486799
    MOV EAX,EDX                         ; 0048679b
    SAR EDX,0x1f                        ; 0048679d
    SHL EDX,0x2                         ; 004867a0
    SBB EAX,EDX                         ; 004867a3
    SAR EAX,0x2                         ; 004867a5
    MOV EDX,EAX                         ; 004867a8
    MOV EBX,dword ptr [0x005fba1c]      ; 004867aa | DAT_005fba1c
    SAR EDX,0x1f                        ; 004867b0
    ADD ESP,0x4                         ; 004867b3
    IDIV EBX                            ; 004867b6
    POP EBX                             ; 004867b8
    RET                                 ; 004867b9

