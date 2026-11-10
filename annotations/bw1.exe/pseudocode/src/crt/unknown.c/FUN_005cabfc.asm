; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; LPVOID crt_unknown_c_FUN_005cabfc(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005cadb4 at 005caeb5
;
; Referenced Globals:
;   void* PTR_GetLastError_005d05b0 = 001d0f00
;   void* PTR_SetLastError_005d0648 = 001d11de
;   void* PTR_TlsGetValue_005d0668 = 001d1266
;   undefined4 DAT_006265f8
;
; Called Functions:
;   crt_unknown.c_FUN_005ccd50
;   crt_unknown.c_FUN_005ccd88
;   GetLastError
;   SetLastError
;   TlsGetValue
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cabfc
        ;   Label: crt_unknown.c_FUN_005cabfc
    PUSH ESI                            ; 005cabfd
    CALL dword ptr CS:[0x5d05b0]        ; 005cabfe | PTR_GetLastError_005d05b0
    MOV EDX,dword ptr [0x006265f8]      ; 005cac05 | DAT_006265f8
    PUSH EDX                            ; 005cac0b
    MOV ESI,EAX                         ; 005cac0c
    CALL dword ptr CS:[0x5d0668]        ; 005cac0e | PTR_TlsGetValue_005d0668
    MOV EBX,EAX                         ; 005cac15
    TEST EAX,EAX                        ; 005cac17
    JNZ 0x005cac22                      ; 005cac19
        ;   XREF to: 005cac22 (CONDITIONAL_JUMP)  ; LAB_005cac22
    CALL crt_unknown.c_FUN_005ccd50     ; 005cac1b
        ;   XREF to: 005ccd50 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ccd50()
    JMP 0x005cac2d                      ; 005cac20
        ;   XREF to: 005cac2d (UNCONDITIONAL_JUMP)  ; LAB_005cac2d
    CMP byte ptr [EAX + 0x53],0x0       ; 005cac22
        ;   Label: LAB_005cac22
    JZ 0x005cac2f                       ; 005cac26
        ;   XREF to: 005cac2f (CONDITIONAL_JUMP)  ; LAB_005cac2f
    CALL crt_unknown.c_FUN_005ccd88     ; 005cac28
        ;   XREF to: 005ccd88 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ccd88()
    MOV EBX,EAX                         ; 005cac2d
        ;   Label: LAB_005cac2d
    PUSH ESI                            ; 005cac2f
        ;   Label: LAB_005cac2f
    CALL dword ptr CS:[0x5d0648]        ; 005cac30 | PTR_SetLastError_005d0648
    MOV EAX,EBX                         ; 005cac37
    POP ESI                             ; 005cac39
    POP EBX                             ; 005cac3a
    RET                                 ; 005cac3b

