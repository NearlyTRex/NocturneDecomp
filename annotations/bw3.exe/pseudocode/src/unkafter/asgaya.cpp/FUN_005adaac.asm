; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int unkafter_asgaya_cpp_FUN_005adaac(int param_1)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005a7f6c at 005a7f7f
;   unkafter_asgaya.cpp_FUN_005adb48 at 005adb5d
;
; Referenced Globals:
;   undefined4 DAT_00607e78
;
; Called Functions:
;   crt_unknown.c_FUN_005a4b20
;   unkafter_asgaya.cpp_FUN_005afd10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005adaac
        ;   Label: unkafter_asgaya.cpp_FUN_005adaac
    MOV EBX,dword ptr [ESP + 0x8]       ; 005adaad
    TEST EBX,EBX                        ; 005adab1
    JNZ 0x005adadc                      ; 005adab3
        ;   XREF to: 005adadc (CONDITIONAL_JUMP)  ; LAB_005adadc
    MOV EDX,dword ptr [0x00607e78]      ; 005adab5 | DAT_00607e78
    PUSH EDX                            ; 005adabb
    PUSH 0x1                            ; 005adabc
    CALL crt_unknown.c_FUN_005a4b20     ; 005adabe
        ;   XREF to: 005a4b20 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a4b20()
    ADD ESP,0x8                         ; 005adac3
    MOV EBX,EAX                         ; 005adac6
    TEST EAX,EAX                        ; 005adac8
    JZ 0x005adadc                       ; 005adaca
        ;   XREF to: 005adadc (CONDITIONAL_JUMP)  ; LAB_005adadc
    MOV EDX,dword ptr [0x00607e78]      ; 005adacc | DAT_00607e78
    MOV byte ptr [EAX + 0x52],0x1       ; 005adad2
    MOV dword ptr [EAX + 0xf0],EDX      ; 005adad6
    PUSH EBX                            ; 005adadc
        ;   Label: LAB_005adadc
    CALL unkafter_asgaya.cpp_FUN_005afd10 ; 005adadd
        ;   XREF to: 005afd10 (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005afd10()
    ADD ESP,0x4                         ; 005adae2
    MOV EAX,EBX                         ; 005adae5
    POP EBX                             ; 005adae7
    RET                                 ; 005adae8

