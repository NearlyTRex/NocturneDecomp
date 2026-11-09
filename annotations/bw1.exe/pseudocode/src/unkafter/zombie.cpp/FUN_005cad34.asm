; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_zombie_cpp_FUN_005cad34(int param_1)
;
;
; XREF[2]:
;   unkafter_2d.cpp_FUN_005ceba8 at 005cebbe
;   unkafter_zombie.cpp_FUN_005cad88 at 005cad8a
;
; Referenced Globals:
;   void* PTR_CloseHandle_005d051c = 001d0c5a
;   void* PTR_TlsGetValue_005d0668 = 001d1266
;   void* PTR_TlsSetValue_005d066c = 001d1274
;   undefined4 DAT_006265f8
;
; Called Functions:
;   CloseHandle
;   TlsGetValue
;   TlsSetValue
;   unkafter_zombie.cpp_FUN_005ccecc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cad34
        ;   Label: unkafter_zombie.cpp_FUN_005cad34
    PUSH ESI                            ; 005cad35
    MOV EDX,dword ptr [0x006265f8]      ; 005cad36 | DAT_006265f8
    CMP EDX,-0x1                        ; 005cad3c
    JZ 0x005cad85                       ; 005cad3f
        ;   XREF to: 005cad85 (CONDITIONAL_JUMP)  ; LAB_005cad85
    PUSH EDX                            ; 005cad41
    CALL dword ptr CS:[0x5d0668]        ; 005cad42 | PTR_TlsGetValue_005d0668
    TEST EAX,EAX                        ; 005cad49
    JZ 0x005cad85                       ; 005cad4b
        ;   XREF to: 005cad85 (CONDITIONAL_JUMP)  ; LAB_005cad85
    MOV ECX,dword ptr [EAX + 0xda]      ; 005cad4d
    PUSH ECX                            ; 005cad53
    MOV EBX,dword ptr [EAX + 0xde]      ; 005cad54
    CALL unkafter_zombie.cpp_FUN_005ccecc ; 005cad5a
        ;   XREF to: 005ccecc (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005ccecc()
    ADD ESP,0x4                         ; 005cad5f
    PUSH 0x0                            ; 005cad62
    MOV ESI,dword ptr [0x006265f8]      ; 005cad64 | DAT_006265f8
    PUSH ESI                            ; 005cad6a
    CALL dword ptr CS:[0x5d066c]        ; 005cad6b | PTR_TlsSetValue_005d066c
    TEST EBX,EBX                        ; 005cad72
    JZ 0x005cad85                       ; 005cad74
        ;   XREF to: 005cad85 (CONDITIONAL_JUMP)  ; LAB_005cad85
    CMP dword ptr [ESP + 0xc],0x0       ; 005cad76
    JZ 0x005cad85                       ; 005cad7b
        ;   XREF to: 005cad85 (CONDITIONAL_JUMP)  ; LAB_005cad85
    PUSH EBX                            ; 005cad7d
    CALL dword ptr CS:[0x5d051c]        ; 005cad7e | PTR_CloseHandle_005d051c
    POP ESI                             ; 005cad85
        ;   Label: LAB_005cad85
    POP EBX                             ; 005cad86
    RET                                 ; 005cad87

