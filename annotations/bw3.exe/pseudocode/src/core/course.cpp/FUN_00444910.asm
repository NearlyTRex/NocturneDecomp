; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_course_cpp_FUN_00444910(int *param_1,int param_2)
;
;
; XREF[1]:
;   core_course.cpp_FUN_00444970 at 004449fb
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_course.cpp_FUN_00444aa0
;   core_main.c_FUN_004e4330
;   crt_unknown.c_FUN_005a40df
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00444910
        ;   Label: core_course.cpp_FUN_00444910
    MOV EBX,dword ptr [ESP + 0x8]       ; 00444911
    PUSH EBX                            ; 00444915
    CALL core_course.cpp_FUN_00444aa0   ; 00444916
        ;   XREF to: 00444aa0 (UNCONDITIONAL_CALL)  ; undefined core_course.cpp_FUN_00444aa0()
    ADD ESP,0x4                         ; 0044491b
    MOV EAX,dword ptr [ESP + 0xc]       ; 0044491e
    MOV dword ptr [EBX],EAX             ; 00444922
    SHL EAX,0x2                         ; 00444924
    MOV EDX,EAX                         ; 00444927
    SHL EAX,0x3                         ; 00444929
    SUB EAX,EDX                         ; 0044492c
    PUSH EAX                            ; 0044492e
    CALL crt_unknown.c_FUN_005a40df     ; 0044492f
        ;   XREF to: 005a40df (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a40df()
    ADD ESP,0x4                         ; 00444934
    MOV dword ptr [EBX + 0x4],EAX       ; 00444937
    TEST EAX,EAX                        ; 0044493a
    JZ 0x00444940                       ; 0044493c
        ;   XREF to: 00444940 (CONDITIONAL_JUMP)  ; LAB_00444940
    POP EBX                             ; 0044493e
    RET                                 ; 0044493f
    MOV ECX,0x5b9805                    ; 00444940
        ;   Label: LAB_00444940
    MOV EBX,0x6e                        ; 00444945
    PUSH 0x5b9818                       ; 0044494a
    MOV dword ptr [0x01d71de0],ECX      ; 0044494f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 00444955 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0044495b
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00444960
    POP EBX                             ; 00444963
    RET                                 ; 00444964

