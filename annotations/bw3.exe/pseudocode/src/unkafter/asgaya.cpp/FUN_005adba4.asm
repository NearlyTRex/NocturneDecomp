; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_asgaya_cpp_FUN_005adba4(int param_1)
;
;
; XREF[2]:
;   unkafter_2d.cpp_FUN_005b1938 at 005b194e
;   unkafter_asgaya.cpp_FUN_005adbf8 at 005adbfa
;
; Referenced Globals:
;   void* PTR_CloseHandle_005b3518 = 001b3c48
;   void* PTR_TlsGetValue_005b3668 = 001b426c
;   void* PTR_TlsSetValue_005b366c = 001b427a
;   undefined4 DAT_0060799c
;
; Called Functions:
;   CloseHandle
;   TlsGetValue
;   TlsSetValue
;   unkafter_asgaya.cpp_FUN_005afc5c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005adba4
        ;   Label: unkafter_asgaya.cpp_FUN_005adba4
    PUSH ESI                            ; 005adba5
    MOV EDX,dword ptr [0x0060799c]      ; 005adba6 | DAT_0060799c
    CMP EDX,-0x1                        ; 005adbac
    JZ 0x005adbf5                       ; 005adbaf
        ;   XREF to: 005adbf5 (CONDITIONAL_JUMP)  ; LAB_005adbf5
    PUSH EDX                            ; 005adbb1
    CALL dword ptr CS:[0x5b3668]        ; 005adbb2 | PTR_TlsGetValue_005b3668
    TEST EAX,EAX                        ; 005adbb9
    JZ 0x005adbf5                       ; 005adbbb
        ;   XREF to: 005adbf5 (CONDITIONAL_JUMP)  ; LAB_005adbf5
    MOV ECX,dword ptr [EAX + 0xda]      ; 005adbbd
    PUSH ECX                            ; 005adbc3
    MOV EBX,dword ptr [EAX + 0xde]      ; 005adbc4
    CALL unkafter_asgaya.cpp_FUN_005afc5c ; 005adbca
        ;   XREF to: 005afc5c (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005afc5c()
    ADD ESP,0x4                         ; 005adbcf
    PUSH 0x0                            ; 005adbd2
    MOV ESI,dword ptr [0x0060799c]      ; 005adbd4 | DAT_0060799c
    PUSH ESI                            ; 005adbda
    CALL dword ptr CS:[0x5b366c]        ; 005adbdb | PTR_TlsSetValue_005b366c
    TEST EBX,EBX                        ; 005adbe2
    JZ 0x005adbf5                       ; 005adbe4
        ;   XREF to: 005adbf5 (CONDITIONAL_JUMP)  ; LAB_005adbf5
    CMP dword ptr [ESP + 0xc],0x0       ; 005adbe6
    JZ 0x005adbf5                       ; 005adbeb
        ;   XREF to: 005adbf5 (CONDITIONAL_JUMP)  ; LAB_005adbf5
    PUSH EBX                            ; 005adbed
    CALL dword ptr CS:[0x5b3518]        ; 005adbee | PTR_CloseHandle_005b3518
    POP ESI                             ; 005adbf5
        ;   Label: LAB_005adbf5
    POP EBX                             ; 005adbf6
    RET                                 ; 005adbf7

