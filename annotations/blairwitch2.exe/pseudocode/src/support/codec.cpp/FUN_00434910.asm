; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_codec_cpp_FUN_00434910(int param_1,undefined4 param_2)
;
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_00441f50 at 004424f0
;   core_game.cpp_FUN_004bb9b0 at 004bbd54
;
; Called Functions:
;   support_codec.cpp_FUN_00433ad0
;   support_codec.cpp_FUN_00434570
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00434910
        ;   Label: support_codec.cpp_FUN_00434910
    PUSH EDI                            ; 00434911
    MOV EBX,dword ptr [ESP + 0xc]       ; 00434912
    MOV EDX,dword ptr [EBX + 0x30]      ; 00434916
    TEST EDX,EDX                        ; 00434919
    JL 0x0043495d                       ; 0043491b
        ;   XREF to: 0043495d (CONDITIONAL_JUMP)  ; LAB_0043495d
    MOV ECX,dword ptr [ESP + 0x10]      ; 0043491d
    PUSH ECX                            ; 00434921
    LEA EAX,[EBX + 0x18]                ; 00434922
    PUSH EAX                            ; 00434925
    PUSH EDX                            ; 00434926
    LEA EAX,[EBX + 0x4]                 ; 00434927
    PUSH EAX                            ; 0043492a
    CALL support_codec.cpp_FUN_00434570 ; 0043492b
        ;   XREF to: 00434570 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_00434570()
    ADD ESP,0x10                        ; 00434930
    TEST EAX,EAX                        ; 00434933
    JZ 0x0043495d                       ; 00434935
        ;   XREF to: 0043495d (CONDITIONAL_JUMP)  ; LAB_0043495d
    CMP EAX,-0x1                        ; 00434937
    JZ 0x00434950                       ; 0043493a
        ;   XREF to: 00434950 (CONDITIONAL_JUMP)  ; LAB_00434950
    CMP EAX,-0x2                        ; 0043493c
    JNZ 0x00434958                      ; 0043493f
        ;   XREF to: 00434958 (CONDITIONAL_JUMP)  ; LAB_00434958
    MOV EAX,0x2                         ; 00434941
    MOV dword ptr [EBX + 0x30],0xffffffff ; 00434946
    POP EDI                             ; 0043494d
    POP EBX                             ; 0043494e
    RET                                 ; 0043494f
    MOV EAX,0x2                         ; 00434950
        ;   Label: LAB_00434950
    POP EDI                             ; 00434955
    POP EBX                             ; 00434956
    RET                                 ; 00434957
    XOR EAX,EAX                         ; 00434958
        ;   Label: LAB_00434958
    POP EDI                             ; 0043495a
    POP EBX                             ; 0043495b
    RET                                 ; 0043495c
    MOV EDI,dword ptr [ESP + 0x10]      ; 0043495d
        ;   Label: LAB_0043495d
    PUSH EDI                            ; 00434961
    ADD EBX,0x18                        ; 00434962
    PUSH EBX                            ; 00434965
    CALL support_codec.cpp_FUN_00433ad0 ; 00434966
        ;   XREF to: 00433ad0 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_00433ad0()
    ADD ESP,0x8                         ; 0043496b
    TEST EAX,EAX                        ; 0043496e
    JZ 0x0043497f                       ; 00434970
        ;   XREF to: 0043497f (CONDITIONAL_JUMP)  ; LAB_0043497f
    CMP EAX,-0x1                        ; 00434972
    JNZ 0x0043497f                      ; 00434975
        ;   XREF to: 0043497f (CONDITIONAL_JUMP)  ; LAB_0043497f
    MOV EAX,0x2                         ; 00434977
    POP EDI                             ; 0043497c
    POP EBX                             ; 0043497d
    RET                                 ; 0043497e
    MOV EAX,0x1                         ; 0043497f
        ;   Label: LAB_0043497f
    POP EDI                             ; 00434984
    POP EBX                             ; 00434985
    RET                                 ; 00434986

