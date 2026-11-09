; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int shape_edittool_cpp_FUN_0049dc50(undefined4 param_1)
;
;
; XREF[2]:
;   shape_edittool.cpp_FUN_0049dace at 0049db66
;   shape_edittool.cpp_FUN_0049dc70 at 0049dceb
;
; Called Functions:
;   shape_edittool.cpp_FUN_0049dbe0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0049dc50
        ;   Label: shape_edittool.cpp_FUN_0049dc50
    PUSH EDX                            ; 0049dc54
    CALL shape_edittool.cpp_FUN_0049dbe0 ; 0049dc55
        ;   XREF to: 0049dbe0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0049dbe0()
    MOV EDX,EAX                         ; 0049dc5a
    SAR EDX,0x1f                        ; 0049dc5c
    ADD ESP,0x4                         ; 0049dc5f
    SUB EAX,EDX                         ; 0049dc62
    SAR EAX,0x1                         ; 0049dc64
    RET                                 ; 0049dc66

