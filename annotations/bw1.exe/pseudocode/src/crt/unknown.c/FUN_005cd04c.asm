; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005cd04c(void)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005cd0c0 at 005cd0c0
;   crt_unknown.c_FUN_005cd0cc at 005cd0cc
;
; Referenced Globals:
;   void* PTR_CreateFileA_005d0528 = 001d0c8c
;   TerminatedCString s_conin_005fb204
;   TerminatedCString s_conout_005fb20c
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626600 = 005c50d4
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626604 = 005c50d4
;   undefined4 DAT_00626adc
;   undefined4 DAT_00626ae0
;
; Called Functions:
;   CreateFileA
;   crt_unknown.c_FUN_005c50d4
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 005cd04c
        ;   Label: crt_unknown.c_FUN_005cd04c
    CALL dword ptr [0x00626600]         ; 005cd04e | PTR_crt_unknown.c_FUN_005c50d4_00626600
    MOV EDX,dword ptr [0x00626adc]      ; 005cd054 | DAT_00626adc
    ADD ESP,0x4                         ; 005cd05a
    CMP EDX,-0x1                        ; 005cd05d
    JNZ 0x005cd085                      ; 005cd060
        ;   XREF to: 005cd085 (CONDITIONAL_JUMP)  ; LAB_005cd085
    PUSH 0x0                            ; 005cd062
    PUSH 0x80                           ; 005cd064
    PUSH 0x3                            ; 005cd069
    PUSH 0x0                            ; 005cd06b
    PUSH 0x1                            ; 005cd06d
    PUSH 0x80000000                     ; 005cd06f
    PUSH 0x5fb204                       ; 005cd074 | = "conin$"
    CALL dword ptr CS:[0x5d0528]        ; 005cd079 | PTR_CreateFileA_005d0528
    MOV [0x00626adc],EAX                ; 005cd080 | DAT_00626adc
    CMP dword ptr [0x00626ae0],-0x1     ; 005cd085 | DAT_00626ae0
        ;   Label: LAB_005cd085
    JNZ 0x005cd0b1                      ; 005cd08c
        ;   XREF to: 005cd0b1 (CONDITIONAL_JUMP)  ; LAB_005cd0b1
    PUSH 0x0                            ; 005cd08e
    PUSH 0x80                           ; 005cd090
    PUSH 0x3                            ; 005cd095
    PUSH 0x0                            ; 005cd097
    PUSH 0x2                            ; 005cd099
    PUSH 0x40000000                     ; 005cd09b
    PUSH 0x5fb20c                       ; 005cd0a0 | = "conout$"
    CALL dword ptr CS:[0x5d0528]        ; 005cd0a5 | PTR_CreateFileA_005d0528
    MOV [0x00626ae0],EAX                ; 005cd0ac | DAT_00626ae0
    PUSH 0x0                            ; 005cd0b1
        ;   Label: LAB_005cd0b1
    CALL dword ptr [0x00626604]         ; 005cd0b3 | PTR_crt_unknown.c_FUN_005c50d4_00626604
    ADD ESP,0x4                         ; 005cd0b9
    RET                                 ; 005cd0bc

