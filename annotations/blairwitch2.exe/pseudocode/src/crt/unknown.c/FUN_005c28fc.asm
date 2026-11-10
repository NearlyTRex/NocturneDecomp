; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; LPVOID crt_unknown_c_FUN_005c28fc(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c2ab4 at 005c2bb5
;
; Referenced Globals:
;   void* PTR_GetLastError_005c85a0 = 001c8ed8
;   void* PTR_SetLastError_005c8634 = 001c91a2
;   void* PTR_TlsGetValue_005c8654 = 001c922a
;   undefined4 DAT_0061f2a0
;
; Called Functions:
;   crt_unknown.c_FUN_005c4a50
;   crt_unknown.c_FUN_005c4a88
;   GetLastError
;   SetLastError
;   TlsGetValue
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c28fc
        ;   Label: crt_unknown.c_FUN_005c28fc
    PUSH ESI                            ; 005c28fd
    CALL dword ptr CS:[0x5c85a0]        ; 005c28fe | PTR_GetLastError_005c85a0
    MOV EDX,dword ptr [0x0061f2a0]      ; 005c2905 | DAT_0061f2a0
    PUSH EDX                            ; 005c290b
    MOV ESI,EAX                         ; 005c290c
    CALL dword ptr CS:[0x5c8654]        ; 005c290e | PTR_TlsGetValue_005c8654
    MOV EBX,EAX                         ; 005c2915
    TEST EAX,EAX                        ; 005c2917
    JNZ 0x005c2922                      ; 005c2919
        ;   XREF to: 005c2922 (CONDITIONAL_JUMP)  ; LAB_005c2922
    CALL crt_unknown.c_FUN_005c4a50     ; 005c291b
        ;   XREF to: 005c4a50 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c4a50()
    JMP 0x005c292d                      ; 005c2920
        ;   XREF to: 005c292d (UNCONDITIONAL_JUMP)  ; LAB_005c292d
    CMP byte ptr [EAX + 0x53],0x0       ; 005c2922
        ;   Label: LAB_005c2922
    JZ 0x005c292f                       ; 005c2926
        ;   XREF to: 005c292f (CONDITIONAL_JUMP)  ; LAB_005c292f
    CALL crt_unknown.c_FUN_005c4a88     ; 005c2928
        ;   XREF to: 005c4a88 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c4a88()
    MOV EBX,EAX                         ; 005c292d
        ;   Label: LAB_005c292d
    PUSH ESI                            ; 005c292f
        ;   Label: LAB_005c292f
    CALL dword ptr CS:[0x5c8634]        ; 005c2930 | PTR_SetLastError_005c8634
    MOV EAX,EBX                         ; 005c2937
    POP ESI                             ; 005c2939
    POP EBX                             ; 005c293a
    RET                                 ; 005c293b

