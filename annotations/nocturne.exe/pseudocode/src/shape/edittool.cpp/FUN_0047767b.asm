; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0047767b(void)
;
;
; *****************************************************************************

section .text

    ADD byte ptr [EAX],AL               ; 0047767b
        ;   Label: shape_edittool.cpp_FUN_0047767b
    ADD byte ptr [EAX],AL               ; 0047767d
    ADD byte ptr [EBX + 0x8b042454],CL  ; 0047767f
    INC ESP                             ; 00477685
    AND AL,0x8                          ; 00477686
    MOV EAX,dword ptr [EAX]             ; 00477688
    MOV dword ptr [EDX],EAX             ; 0047768a
    MOV EAX,EDX                         ; 0047768c
    RET                                 ; 0047768e

