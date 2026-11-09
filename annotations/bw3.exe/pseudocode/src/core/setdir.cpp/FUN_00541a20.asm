; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_setdir_cpp_FUN_00541a20(CDemonSet *param_1,undefined4 param_2)
;
;
; XREF[2]:
;   core_set.cpp_CDemonSet_initScene_FUN_00534420 at 00534616
;   core_setdir.cpp_FUN_0053f940 at 0053fcab
;
; Called Functions:
;   core_setdir.cpp_CDemonSet_findVdirBoxRoot_FUN_005419e0
;   core_setdir.cpp_FUN_00541350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00541a20
        ;   Label: core_setdir.cpp_FUN_00541a20
    PUSH ESI                            ; 00541a21
    PUSH EDI                            ; 00541a22
    MOV ESI,dword ptr [ESP + 0x10]      ; 00541a23
    MOV EDI,dword ptr [ESP + 0x14]      ; 00541a27
    MOV EDX,dword ptr [ESI + 0x15b428]  ; 00541a2b
    XOR EBX,EBX                         ; 00541a31
    TEST EDX,EDX                        ; 00541a33
    JLE 0x00541a4f                      ; 00541a35
        ;   XREF to: 00541a4f (CONDITIONAL_JUMP)  ; LAB_00541a4f
    PUSH EDI                            ; 00541a37
        ;   Label: LAB_00541a37
    PUSH EBX                            ; 00541a38
    PUSH ESI                            ; 00541a39
    CALL core_setdir.cpp_FUN_00541350   ; 00541a3a
        ;   XREF to: 00541350 (UNCONDITIONAL_CALL)  ; undefined core_setdir.cpp_FUN_00541350()
    ADD ESP,0xc                         ; 00541a3f
    TEST EAX,EAX                        ; 00541a42
    JNZ 0x00541a61                      ; 00541a44
        ;   XREF to: 00541a61 (CONDITIONAL_JUMP)  ; LAB_00541a61
    INC EBX                             ; 00541a46
    CMP EBX,dword ptr [ESI + 0x15b428]  ; 00541a47
    JL 0x00541a37                       ; 00541a4d
        ;   XREF to: 00541a37 (CONDITIONAL_JUMP)  ; LAB_00541a37
    MOV EAX,0xffffffff                  ; 00541a4f
        ;   Label: LAB_00541a4f
    POP EDI                             ; 00541a54
    POP ESI                             ; 00541a55
    POP EBX                             ; 00541a56
    LEA EAX,[EAX]                       ; 00541a57
    LEA EDX,[EDX]                       ; 00541a5d
    PUSH EBX                            ; 00541a61
        ;   Label: LAB_00541a61
    PUSH ESI                            ; 00541a62
    CALL core_setdir.cpp_CDemonSet_findVdirBoxRoot_FUN_005419e0 ; 00541a63
        ;   XREF to: 005419e0 (UNCONDITIONAL_CALL)  ; int core_setdir.cpp_CDemonSet_findVdirBoxRoot_FUN_005419e0(CDemonSet * this_ptr, int box_index)
    ADD ESP,0x8                         ; 00541a68
    POP EDI                             ; 00541a6b
    POP ESI                             ; 00541a6c
    POP EBX                             ; 00541a6d
    RET                                 ; 00541a6e

