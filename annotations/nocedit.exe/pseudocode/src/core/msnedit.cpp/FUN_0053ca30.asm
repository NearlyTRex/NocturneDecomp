; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_msnedit_cpp_FUN_0053ca30(void)
;
;
; XREF[1]:
;   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 at 0053a48b
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0053ca30
        ;   Label: core_msnedit.cpp_FUN_0053ca30
    MOV ECX,dword ptr [ESP + 0x8]       ; 0053ca31
    MOV ESI,dword ptr [ESP + 0xc]       ; 0053ca35
    MOV EAX,ESI                         ; 0053ca39
    TEST ESI,ESI                        ; 0053ca3b
    JNZ 0x0053ca45                      ; 0053ca3d
        ;   XREF to: 0053ca45 (CONDITIONAL_JUMP)  ; LAB_0053ca45
    MOV EAX,dword ptr [ECX + 0x548]     ; 0053ca3f
    TEST EAX,EAX                        ; 0053ca45
        ;   Label: LAB_0053ca45
    JZ 0x0053ca71                       ; 0053ca47
        ;   XREF to: 0053ca71 (CONDITIONAL_JUMP)  ; LAB_0053ca71
    PUSH EDI                            ; 0053ca49
    XOR EDX,EDX                         ; 0053ca4a
    MOV EAX,dword ptr [EAX + 0x14c]     ; 0053ca4c
        ;   Label: LAB_0053ca4c
    TEST EAX,EAX                        ; 0053ca52
    JNZ 0x0053ca5c                      ; 0053ca54
        ;   XREF to: 0053ca5c (CONDITIONAL_JUMP)  ; LAB_0053ca5c
    MOV EAX,dword ptr [ECX + 0x548]     ; 0053ca56
    CMP EAX,ESI                         ; 0053ca5c
        ;   Label: LAB_0053ca5c
    JZ 0x0053ca70                       ; 0053ca5e
        ;   XREF to: 0053ca70 (CONDITIONAL_JUMP)  ; LAB_0053ca70
    MOV EDI,dword ptr [ECX]             ; 0053ca60
    CMP EDI,dword ptr [EAX + 0x2c]      ; 0053ca62
    JZ 0x0053ca73                       ; 0053ca65
        ;   XREF to: 0053ca73 (CONDITIONAL_JUMP)  ; LAB_0053ca73
    INC EDX                             ; 0053ca67
        ;   Label: LAB_0053ca67
    CMP EDX,0x3e8                       ; 0053ca68
    JL 0x0053ca4c                       ; 0053ca6e
        ;   XREF to: 0053ca4c (CONDITIONAL_JUMP)  ; LAB_0053ca4c
    POP EDI                             ; 0053ca70
        ;   Label: LAB_0053ca70
    POP ESI                             ; 0053ca71
        ;   Label: LAB_0053ca71
    RET                                 ; 0053ca72
    CMP dword ptr [EAX + 0x148],0x0     ; 0053ca73
        ;   Label: LAB_0053ca73
    JNZ 0x0053ca67                      ; 0053ca7a
        ;   XREF to: 0053ca67 (CONDITIONAL_JUMP)  ; LAB_0053ca67
    POP EDI                             ; 0053ca7c
    POP ESI                             ; 0053ca7d
    RET                                 ; 0053ca7e

