; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005adb48(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_005afae0 at 005afae4
;   FUN_005b17a0 at 005b17ee
;
; Referenced Globals:
;   void* PTR_TlsSetValue_005b366c = 001b427a
;   undefined4 DAT_0060799c
;
; Called Functions:
;   FUN_005a3770
;   FUN_005adaac
;   FUN_005afbf0
;   TlsSetValue
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005adb48
        ;   Label: FUN_005adb48
    PUSH ESI                            ; 005adb49
    CMP dword ptr [0x0060799c],-0x1     ; 005adb4a | DAT_0060799c
    JNZ 0x005adb58                      ; 005adb51
        ;   XREF to: 005adb58 (CONDITIONAL_JUMP)  ; LAB_005adb58
    XOR EAX,EAX                         ; 005adb53
    POP ESI                             ; 005adb55
    POP EBX                             ; 005adb56
    RET                                 ; 005adb57
    MOV EBX,dword ptr [ESP + 0xc]       ; 005adb58
        ;   Label: LAB_005adb58
    PUSH EBX                            ; 005adb5c
    CALL FUN_005adaac                   ; 005adb5d
        ;   XREF to: 005adaac (UNCONDITIONAL_CALL)  ; undefined FUN_005adaac()
    MOV EBX,EAX                         ; 005adb62
    ADD ESP,0x4                         ; 005adb64
    TEST EAX,EAX                        ; 005adb67
    JZ 0x005adba1                       ; 005adb69
        ;   XREF to: 005adba1 (CONDITIONAL_JUMP)  ; LAB_005adba1
    PUSH EAX                            ; 005adb6b
    MOV ECX,dword ptr [EAX + 0xda]      ; 005adb6c
    PUSH ECX                            ; 005adb72
    CALL FUN_005afbf0                   ; 005adb73
        ;   XREF to: 005afbf0 (UNCONDITIONAL_CALL)  ; undefined FUN_005afbf0()
    ADD ESP,0x8                         ; 005adb78
    TEST EAX,EAX                        ; 005adb7b
    JNZ 0x005adb8d                      ; 005adb7d
        ;   XREF to: 005adb8d (CONDITIONAL_JUMP)  ; LAB_005adb8d
    PUSH EBX                            ; 005adb7f
    CALL FUN_005a3770                   ; 005adb80
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3770()
    ADD ESP,0x4                         ; 005adb85
    XOR EAX,EAX                         ; 005adb88
    POP ESI                             ; 005adb8a
    POP EBX                             ; 005adb8b
    RET                                 ; 005adb8c
    PUSH EBX                            ; 005adb8d
        ;   Label: LAB_005adb8d
    MOV ESI,dword ptr [0x0060799c]      ; 005adb8e | DAT_0060799c
    PUSH ESI                            ; 005adb94
    CALL dword ptr CS:[0x5b366c]        ; 005adb95 | PTR_TlsSetValue_005b366c
    MOV EAX,0x1                         ; 005adb9c
    POP ESI                             ; 005adba1
        ;   Label: LAB_005adba1
    POP EBX                             ; 005adba2
    RET                                 ; 005adba3

