; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_zombie_cpp_FUN_005ccccc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,undefined4 *param_5,int param_6,undefined4 param_7)
;
;
; XREF[2]:
;   unkafter_zombie.cpp_FUN_005ca868 at 005ca88a
;   unkafter_zombie.cpp_FUN_005ca8a4 at 005ca8c6
;
; Called Functions:
;   crt_unknown.c_FUN_005c4558
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005ccccc
        ;   Label: unkafter_zombie.cpp_FUN_005ccccc
    MOV EBP,ESP                         ; 005ccccd
    PUSH EBX                            ; 005ccccf
    PUSH ESI                            ; 005cccd0
    PUSH EDI                            ; 005cccd1
    SUB ESP,0x40                        ; 005cccd2
    MOV EAX,dword ptr [EBP + 0x8]       ; 005cccd5
    MOV dword ptr [EBP + -0x14],EAX     ; 005cccd8
    MOV EAX,dword ptr [EBP + 0xc]       ; 005cccdb
    LEA EDX,[EBP + -0x20]               ; 005cccde
    MOV dword ptr [EBP + -0x10],EAX     ; 005ccce1
    LEA EAX,[EBP + -0x14]               ; 005ccce4
    FLD double ptr [EAX]                ; 005ccce7
    FSTP extended double ptr [EDX]      ; 005ccce9
    CMP dword ptr [EBP + 0x1c],0x46     ; 005ccceb
    JNZ 0x005ccd00                      ; 005cccef
        ;   XREF to: 005ccd00 (CONDITIONAL_JUMP)  ; LAB_005ccd00
    MOV ESI,0xa                         ; 005cccf1
    XOR EDI,EDI                         ; 005cccf6
    MOV dword ptr [EBP + -0x44],ESI     ; 005cccf8
    MOV dword ptr [EBP + -0x48],EDI     ; 005cccfb
    JMP 0x005ccd10                      ; 005cccfe
        ;   XREF to: 005ccd10 (UNCONDITIONAL_JUMP)  ; LAB_005ccd10
    MOV EBX,0xc                         ; 005ccd00
        ;   Label: LAB_005ccd00
    MOV ECX,0x1                         ; 005ccd05
    MOV dword ptr [EBP + -0x44],EBX     ; 005ccd0a
    MOV dword ptr [EBP + -0x48],ECX     ; 005ccd0d
    MOV EAX,dword ptr [EBP + 0x10]      ; 005ccd10
        ;   Label: LAB_005ccd10
    MOV dword ptr [EBP + -0x4c],EAX     ; 005ccd13
    XOR EAX,EAX                         ; 005ccd16
    MOV EDX,dword ptr [EBP + 0x20]      ; 005ccd18
    MOV dword ptr [EBP + -0x3c],EAX     ; 005ccd1b
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005ccd1e
    PUSH EDX                            ; 005ccd21
    MOV dword ptr [EBP + -0x40],EAX     ; 005ccd22
    LEA EAX,[EBP + -0x4c]               ; 005ccd25
    PUSH EAX                            ; 005ccd28
    LEA EAX,[EBP + -0x20]               ; 005ccd29
    PUSH EAX                            ; 005ccd2c
    CALL crt_unknown.c_FUN_005c4558     ; 005ccd2d
        ;   XREF to: 005c4558 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c4558()
    MOV EDX,dword ptr [EBP + 0x14]      ; 005ccd32
    MOV EAX,dword ptr [EBP + -0x34]     ; 005ccd35
    MOV dword ptr [EDX],EAX             ; 005ccd38
    MOV EDX,dword ptr [EBP + 0x18]      ; 005ccd3a
    MOV EAX,dword ptr [EBP + -0x38]     ; 005ccd3d
    ADD ESP,0xc                         ; 005ccd40
    MOV dword ptr [EDX],EAX             ; 005ccd43
    MOV EAX,dword ptr [EBP + 0x20]      ; 005ccd45
    LEA ESP,[EBP + -0xc]                ; 005ccd48
    POP EDI                             ; 005ccd4b
    POP ESI                             ; 005ccd4c
    POP EBX                             ; 005ccd4d
    POP EBP                             ; 005ccd4e
    RET                                 ; 005ccd4f

