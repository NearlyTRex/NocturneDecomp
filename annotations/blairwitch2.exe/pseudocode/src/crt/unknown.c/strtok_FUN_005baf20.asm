; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_strtok_FUN_005baf20(byte *param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x24]:1  local_24
;
; XREF[1]:
;   core_patrpoin.cpp_FUN_0059c9c0 at 0059c9d9
;
; Referenced Globals:
;   undefined4 DAT_00601428
;
; Called Functions:
;   crt_unknown.c_FUN_005c20d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005baf20
        ;   Label: crt_unknown.c_strtok_FUN_005baf20
    SUB ESP,0x20                        ; 005baf21
    MOV EBX,dword ptr [ESP + 0x28]      ; 005baf24
    MOV EDX,dword ptr [ESP + 0x2c]      ; 005baf28
    PUSH EDX                            ; 005baf2c
    LEA EAX,[ESP + 0x4]                 ; 005baf2d
    PUSH EAX                            ; 005baf31
    CALL crt_unknown.c_FUN_005c20d0     ; 005baf32
        ;   XREF to: 005c20d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c20d0()
    ADD ESP,0x8                         ; 005baf37
    XOR EDX,EDX                         ; 005baf3a
    XOR EAX,EAX                         ; 005baf3c
    MOV AL,byte ptr [EBX]               ; 005baf3e
    TEST EAX,EAX                        ; 005baf40
    JNZ 0x005baf4b                      ; 005baf42
        ;   XREF to: 005baf4b (CONDITIONAL_JUMP)  ; LAB_005baf4b
    MOV EAX,EDX                         ; 005baf44
    ADD ESP,0x20                        ; 005baf46
    POP EBX                             ; 005baf49
    RET                                 ; 005baf4a
    MOV ECX,EAX                         ; 005baf4b
        ;   Label: LAB_005baf4b
    SHR ECX,0x3                         ; 005baf4d
    MOV CL,byte ptr [ESP + ECX*0x1]     ; 005baf50
    AND EAX,0x7                         ; 005baf53
    AND ECX,0xff                        ; 005baf56
    MOV AL,byte ptr [EAX + 0x601428]    ; 005baf5c | DAT_00601428
    AND EAX,0xff                        ; 005baf62
    TEST ECX,EAX                        ; 005baf67
    JNZ 0x005baf75                      ; 005baf69
        ;   XREF to: 005baf75 (CONDITIONAL_JUMP)  ; LAB_005baf75
    INC EDX                             ; 005baf6b
    INC EBX                             ; 005baf6c
    XOR EAX,EAX                         ; 005baf6d
    MOV AL,byte ptr [EBX]               ; 005baf6f
    TEST EAX,EAX                        ; 005baf71
    JNZ 0x005baf4b                      ; 005baf73
        ;   XREF to: 005baf4b (CONDITIONAL_JUMP)  ; LAB_005baf4b
    MOV EAX,EDX                         ; 005baf75
        ;   Label: LAB_005baf75
    ADD ESP,0x20                        ; 005baf77
    POP EBX                             ; 005baf7a
    RET                                 ; 005baf7b

