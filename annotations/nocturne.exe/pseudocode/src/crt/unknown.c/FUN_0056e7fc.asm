; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056e7fc(void)
;
;
; Referenced Globals:
;   undefined1* PTR_crt_unknown.c_FUN_0056e250_005c1f68 = 0056e250
;
; Called Functions:
;   crt_unknown.c_FUN_0056e2f8
;   crt_unknown.c_FUN_0056e324
;   crt_unknown.c_FUN_0056e6c4
;   crt_unknown.c_FUN_0056f2d0
;   crt_unknown.c_FUN_005713d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056e7fc
        ;   Label: crt_unknown.c_FUN_0056e7fc
    PUSH ESI                            ; 0056e7fd
    PUSH 0x2de54b0                      ; 0056e7fe
    MOV EBX,0x2de54d0                   ; 0056e803
    CALL dword ptr [0x005c1f68]         ; 0056e808 | PTR_crt_unknown.c_FUN_0056e250_005c1f68
    ADD ESP,0x4                         ; 0056e80e
    LEA ESI,[EBX + 0x100]               ; 0056e811
    PUSH EBX                            ; 0056e817
        ;   Label: LAB_0056e817
    CALL dword ptr [0x005c1f68]         ; 0056e818 | PTR_crt_unknown.c_FUN_0056e250_005c1f68
    ADD EBX,0x10                        ; 0056e81e
    ADD ESP,0x4                         ; 0056e821
    CMP EBX,ESI                         ; 0056e824
    JNZ 0x0056e817                      ; 0056e826
        ;   XREF to: 0056e817 (CONDITIONAL_JUMP)  ; LAB_0056e817
    PUSH 0x2de5c00                      ; 0056e828
    CALL dword ptr [0x005c1f68]         ; 0056e82d | PTR_crt_unknown.c_FUN_0056e250_005c1f68
    ADD ESP,0x4                         ; 0056e833
    CALL crt_unknown.c_FUN_0056e324     ; 0056e836
        ;   XREF to: 0056e324 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056e324()
    CALL crt_unknown.c_FUN_005713d0     ; 0056e83b
        ;   XREF to: 005713d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005713d0()
    CALL crt_unknown.c_FUN_0056f2d0     ; 0056e840
        ;   XREF to: 0056f2d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056f2d0()
    PUSH 0x2de55d0                      ; 0056e845
    CALL dword ptr [0x005c1f68]         ; 0056e84a | PTR_crt_unknown.c_FUN_0056e250_005c1f68
    ADD ESP,0x4                         ; 0056e850
    PUSH 0x2de54c0                      ; 0056e853
    CALL dword ptr [0x005c1f68]         ; 0056e858 | PTR_crt_unknown.c_FUN_0056e250_005c1f68
    ADD ESP,0x4                         ; 0056e85e
    PUSH 0x2de5bf0                      ; 0056e861
    CALL dword ptr [0x005c1f68]         ; 0056e866 | PTR_crt_unknown.c_FUN_0056e250_005c1f68
    ADD ESP,0x4                         ; 0056e86c
    PUSH 0x2de5be0                      ; 0056e86f
    CALL dword ptr [0x005c1f68]         ; 0056e874 | PTR_crt_unknown.c_FUN_0056e250_005c1f68
    ADD ESP,0x4                         ; 0056e87a
    CALL crt_unknown.c_FUN_0056e2f8     ; 0056e87d
        ;   XREF to: 0056e2f8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056e2f8()
    CALL crt_unknown.c_FUN_0056e6c4     ; 0056e882
        ;   XREF to: 0056e6c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056e6c4()
    POP ESI                             ; 0056e887
    POP EBX                             ; 0056e888
    RET                                 ; 0056e889

