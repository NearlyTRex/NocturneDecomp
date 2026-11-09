; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; DWORD unkafter_zombie_cpp_FUN_005caf60(HMODULE param_1,LPWSTR param_2,DWORD param_3)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c50fc at 005c51e0
;
; Referenced Globals:
;   void* PTR_GetModuleFileNameA_005d05b8 = 001d0f20
;   void* PTR_GetModuleFileNameW_005d05bc = 001d0f36
;   void* PTR_GetVersion_005d05d8 = 001d0fbc
;   void* PTR_MultiByteToWideChar_005d0604 = 001d1084
;
; Called Functions:
;   crt_unknown.c_FUN_005c08d0
;   crt_unknown.c_FUN_005c09f0
;   GetModuleFileNameA
;   GetModuleFileNameW
;   GetVersion
;   MultiByteToWideChar
;   unkafter_zombie.cpp_FUN_005ccfc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005caf60
        ;   Label: unkafter_zombie.cpp_FUN_005caf60
    PUSH ESI                            ; 005caf61
    PUSH EDI                            ; 005caf62
    PUSH EBP                            ; 005caf63
    MOV EDI,dword ptr [ESP + 0x14]      ; 005caf64
    MOV ESI,dword ptr [ESP + 0x18]      ; 005caf68
    MOV EBP,dword ptr [ESP + 0x1c]      ; 005caf6c
    CALL dword ptr CS:[0x5d05d8]        ; 005caf70 | PTR_GetVersion_005d05d8
    SHR EAX,0x10                        ; 005caf77
    AND EAX,0xffff                      ; 005caf7a
    CMP AX,0x8000                       ; 005caf7f
    JNC 0x005caf94                      ; 005caf83
        ;   XREF to: 005caf94 (CONDITIONAL_JUMP)  ; LAB_005caf94
    PUSH EBP                            ; 005caf85
    PUSH ESI                            ; 005caf86
    PUSH EDI                            ; 005caf87
    CALL dword ptr CS:[0x5d05bc]        ; 005caf88 | PTR_GetModuleFileNameW_005d05bc
    POP EBP                             ; 005caf8f
    POP EDI                             ; 005caf90
    POP ESI                             ; 005caf91
    POP EBX                             ; 005caf92
    RET                                 ; 005caf93
    PUSH 0x208                          ; 005caf94
        ;   Label: LAB_005caf94
    CALL crt_unknown.c_FUN_005c08d0     ; 005caf99
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005c08d0(ulong size)
    MOV EBX,EAX                         ; 005caf9e
    ADD ESP,0x4                         ; 005cafa0
    TEST EAX,EAX                        ; 005cafa3
    JZ 0x005cafff                       ; 005cafa5
        ;   XREF to: 005cafff (CONDITIONAL_JUMP)  ; LAB_005cafff
    PUSH 0x208                          ; 005cafa7
    PUSH EAX                            ; 005cafac
    PUSH EDI                            ; 005cafad
    CALL dword ptr CS:[0x5d05b8]        ; 005cafae | PTR_GetModuleFileNameA_005d05b8
    TEST EAX,EAX                        ; 005cafb5
    JNZ 0x005cafc9                      ; 005cafb7
        ;   XREF to: 005cafc9 (CONDITIONAL_JUMP)  ; LAB_005cafc9
    PUSH EBX                            ; 005cafb9
    CALL crt_unknown.c_FUN_005c09f0     ; 005cafba
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 005cafbf
    XOR EAX,EAX                         ; 005cafc2
    POP EBP                             ; 005cafc4
    POP EDI                             ; 005cafc5
    POP ESI                             ; 005cafc6
    POP EBX                             ; 005cafc7
    RET                                 ; 005cafc8
    PUSH EBP                            ; 005cafc9
        ;   Label: LAB_005cafc9
    PUSH ESI                            ; 005cafca
    PUSH -0x1                           ; 005cafcb
    PUSH EBX                            ; 005cafcd
    PUSH 0x1                            ; 005cafce
    PUSH 0x1                            ; 005cafd0
    CALL dword ptr CS:[0x5d0604]        ; 005cafd2 | PTR_MultiByteToWideChar_005d0604
    PUSH EBX                            ; 005cafd9
    MOV EDI,EAX                         ; 005cafda
    CALL crt_unknown.c_FUN_005c09f0     ; 005cafdc
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 005cafe1
    TEST EDI,EDI                        ; 005cafe4
    JNZ 0x005cafef                      ; 005cafe6
        ;   XREF to: 005cafef (CONDITIONAL_JUMP)  ; LAB_005cafef
    XOR EAX,EAX                         ; 005cafe8
    POP EBP                             ; 005cafea
    POP EDI                             ; 005cafeb
    POP ESI                             ; 005cafec
    POP EBX                             ; 005cafed
    RET                                 ; 005cafee
    PUSH ESI                            ; 005cafef
        ;   Label: LAB_005cafef
    MOV word ptr [ESI + EBP*0x2 + -0x2],0x0 ; 005caff0
    CALL unkafter_zombie.cpp_FUN_005ccfc0 ; 005caff7
        ;   XREF to: 005ccfc0 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005ccfc0()
    ADD ESP,0x4                         ; 005caffc
    POP EBP                             ; 005cafff
        ;   Label: LAB_005cafff
    POP EDI                             ; 005cb000
    POP ESI                             ; 005cb001
    POP EBX                             ; 005cb002
    RET                                 ; 005cb003

