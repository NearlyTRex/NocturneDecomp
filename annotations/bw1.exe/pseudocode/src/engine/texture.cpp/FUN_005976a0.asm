; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_texture_cpp_FUN_005976a0(int param_1,int param_2)
;
;
; XREF[2]:
;   engine_texture.cpp_FUN_00597c90 at 00597caa
;   engine_texture.cpp_updateTextureWithPalette_FUN_00597c60 at 00597c7a
;
; Referenced Globals:
;   undefined4 DAT_01c50948
;   undefined4 DAT_02c833b4
;   undefined4 DAT_02c833bc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005976a0
        ;   Label: engine_texture.cpp_FUN_005976a0
    PUSH EDI                            ; 005976a1
    PUSH EBP                            ; 005976a2
    MOV ECX,dword ptr [ESP + 0x14]      ; 005976a3
    CMP dword ptr [0x01c50948],0x0      ; 005976a7 | DAT_01c50948
    JZ 0x005976ea                       ; 005976ae
        ;   XREF to: 005976ea (CONDITIONAL_JUMP)  ; LAB_005976ea
    MOV EDX,dword ptr [ECX + 0x4]       ; 005976b0
    LEA EAX,[EDX*0x4 + 0x0]             ; 005976b3
    SUB EAX,EDX                         ; 005976ba
    MOV EDX,dword ptr [ESP + 0x10]      ; 005976bc
    SHL EAX,0x5                         ; 005976c0
    ADD EDX,0x4                         ; 005976c3
    ADD EAX,EDX                         ; 005976c6
    MOV EBX,dword ptr [EAX + 0x50]      ; 005976c8
    TEST EBX,EBX                        ; 005976cb
    JNZ 0x005976ee                      ; 005976cd
        ;   XREF to: 005976ee (CONDITIONAL_JUMP)  ; LAB_005976ee
    PUSH ESI                            ; 005976cf
    MOV EBP,dword ptr [EAX + 0x48]      ; 005976d0
    PUSH EBP                            ; 005976d3
    MOV EDX,dword ptr [EAX + 0x4c]      ; 005976d4
    PUSH EDX                            ; 005976d7
    MOV EBX,dword ptr [EAX + 0x44]      ; 005976d8
    PUSH EBX                            ; 005976db
    MOV ESI,dword ptr [EAX]             ; 005976dc
    PUSH ESI                            ; 005976de
    PUSH ECX                            ; 005976df
    CALL dword ptr [0x02c833b4]         ; 005976e0 | DAT_02c833b4
    ADD ESP,0x14                        ; 005976e6
    POP ESI                             ; 005976e9
    POP EBP                             ; 005976ea
        ;   Label: LAB_005976ea
    POP EDI                             ; 005976eb
    POP EBX                             ; 005976ec
    RET                                 ; 005976ed
    PUSH EBX                            ; 005976ee
        ;   Label: LAB_005976ee
    MOV EDI,dword ptr [EAX]             ; 005976ef
    PUSH EDI                            ; 005976f1
    PUSH ECX                            ; 005976f2
    CALL dword ptr [0x02c833bc]         ; 005976f3 | DAT_02c833bc
    ADD ESP,0xc                         ; 005976f9
    POP EBP                             ; 005976fc
    POP EDI                             ; 005976fd
    POP EBX                             ; 005976fe
    RET                                 ; 005976ff

