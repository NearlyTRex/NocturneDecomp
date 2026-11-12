; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CCloth_grabCloth_FUN_0043fd60(CCloth *this_ptr,char *bone_name,int vertex_index)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   bone_name
; int              Stack[0xc]:4   vertex_index
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_string.c__strcmp_FUN_005a3d00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043fd60
        ;   Label: core_cloth.cpp_CCloth_grabCloth_FUN_0043fd60
    PUSH ESI                            ; 0043fd61
    PUSH EDI                            ; 0043fd62
    PUSH EBP                            ; 0043fd63
    MOV EDI,dword ptr [ESP + 0x14]      ; 0043fd64
    MOV EBP,dword ptr [ESP + 0x18]      ; 0043fd68
    MOV EDX,dword ptr [EDI + 0x37b4c]   ; 0043fd6c
    XOR EBX,EBX                         ; 0043fd72
    TEST EDX,EDX                        ; 0043fd74
    JLE 0x0043fd8c                      ; 0043fd76
        ;   XREF to: 0043fd8c (CONDITIONAL_JUMP)  ; LAB_0043fd8c
    LEA ESI,[EDI + 0x37b50]             ; 0043fd78
    PUSH ESI                            ; 0043fd7e
        ;   Label: LAB_0043fd7e
    PUSH EBP                            ; 0043fd7f
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 0043fd80
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 0043fd85
    TEST EAX,EAX                        ; 0043fd88
    JNZ 0x0043fdbd                      ; 0043fd8a
        ;   XREF to: 0043fdbd (CONDITIONAL_JUMP)  ; LAB_0043fdbd
    CMP EBX,dword ptr [EDI + 0x37b4c]   ; 0043fd8c
        ;   Label: LAB_0043fd8c
    JZ 0x0043fdd0                       ; 0043fd92
        ;   XREF to: 0043fdd0 (CONDITIONAL_JUMP)  ; LAB_0043fdd0
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0043fd94
        ;   Label: LAB_0043fd94
    LEA EAX,[ESI*0x8 + 0x0]             ; 0043fd98
    ADD EAX,ESI                         ; 0043fd9f
    SHL EAX,0x3                         ; 0043fda1
    SUB EAX,ESI                         ; 0043fda4
    MOV dword ptr [EDI + EAX*0x4 + 0x40c],0x1 ; 0043fda6
    MOV dword ptr [EDI + EAX*0x4 + 0x470],EBX ; 0043fdb1
    POP EBP                             ; 0043fdb8
    POP EDI                             ; 0043fdb9
    POP ESI                             ; 0043fdba
    POP EBX                             ; 0043fdbb
    RET                                 ; 0043fdbc
    INC EBX                             ; 0043fdbd
        ;   Label: LAB_0043fdbd
    MOV ECX,dword ptr [EDI + 0x37b4c]   ; 0043fdbe
    ADD ESI,0xac                        ; 0043fdc4
    CMP EBX,ECX                         ; 0043fdca
    JL 0x0043fd7e                       ; 0043fdcc
        ;   XREF to: 0043fd7e (CONDITIONAL_JUMP)  ; LAB_0043fd7e
    JMP 0x0043fd8c                      ; 0043fdce
        ;   XREF to: 0043fd8c (UNCONDITIONAL_JUMP)  ; LAB_0043fd8c
    PUSH EBP                            ; 0043fdd0
        ;   Label: LAB_0043fdd0
    MOV EAX,0x5b928c                    ; 0043fdd1
    MOV EDX,0xab4                       ; 0043fdd6
    PUSH 0x5b929e                       ; 0043fddb
    MOV [0x01d71de0],EAX                ; 0043fde0 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 0043fde5 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0043fdeb
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 0043fdf0
    JMP 0x0043fd94                      ; 0043fdf3
        ;   XREF to: 0043fd94 (UNCONDITIONAL_JUMP)  ; LAB_0043fd94

