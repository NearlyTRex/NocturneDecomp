; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_FUN_005430b0(CDeformableModel *param_1,undefined4 param_2)
;
;
; XREF[1]:
;   core_skeleton.cpp_FUN_00541540 at 0054155e
;
; Called Functions:
;   core_skeleton.cpp_FUN_00544930
;   core_skeleton.cpp_FUN_00544ae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005430b0
        ;   Label: core_skeleton.cpp_FUN_005430b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005430b1
    MOV EAX,dword ptr [ESP + 0xc]       ; 005430b5
    PUSH EBX                            ; 005430b9
    MOV dword ptr [EBX + 0x2a6c],EAX    ; 005430ba
    CALL core_skeleton.cpp_FUN_00544930 ; 005430c0
        ;   XREF to: 00544930 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_00544930(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 005430c5
    PUSH EBX                            ; 005430c8
    CALL core_skeleton.cpp_FUN_00544ae0 ; 005430c9
        ;   XREF to: 00544ae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_00544ae0(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 005430ce
    POP EBX                             ; 005430d1
    RET                                 ; 005430d2

