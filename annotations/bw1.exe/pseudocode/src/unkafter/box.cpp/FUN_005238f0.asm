; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_box_cpp_FUN_005238f0(undefined4 param_1)
;
;
; XREF[1]:
;   core_skeleton.cpp_CSkeleton_dtor_FUN_00562e30 at 00562e50
;
; Called Functions:
;   unkafter_box.cpp_FUN_00523910
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005238f0
        ;   Label: unkafter_box.cpp_FUN_005238f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005238f1
    PUSH EBX                            ; 005238f5
    CALL unkafter_box.cpp_FUN_00523910  ; 005238f6
        ;   XREF to: 00523910 (UNCONDITIONAL_CALL)  ; undefined unkafter_box.cpp_FUN_00523910()
    ADD ESP,0x4                         ; 005238fb
    MOV EAX,EBX                         ; 005238fe
    POP EBX                             ; 00523900
    RET                                 ; 00523901

