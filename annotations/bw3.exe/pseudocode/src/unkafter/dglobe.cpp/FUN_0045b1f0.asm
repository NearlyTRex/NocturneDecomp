; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonImage * unkafter_dglobe_cpp_FUN_0045b1f0(CDemonImage *param_1)
;
;
; Called Functions:
;   core_dimage.cpp_FUN_0045b270
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045b1f0
        ;   Label: unkafter_dglobe.cpp_FUN_0045b1f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0045b1f1
    PUSH EBX                            ; 0045b1f5
    CALL core_dimage.cpp_FUN_0045b270   ; 0045b1f6
        ;   XREF to: 0045b270 (UNCONDITIONAL_CALL)  ; void core_dimage.cpp_FUN_0045b270(CDemonImage * this_ptr)
    ADD ESP,0x4                         ; 0045b1fb
    MOV EAX,EBX                         ; 0045b1fe
    POP EBX                             ; 0045b200
    RET                                 ; 0045b201

