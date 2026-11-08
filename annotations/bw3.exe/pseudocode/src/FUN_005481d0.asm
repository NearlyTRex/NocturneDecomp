; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005481d0(int param_1,int param_2,int param_3)
;
;
; XREF[7]:
;   FUN_0054c1b0 at 0054c244
;   FUN_0054cc90 at 0054cd34
;   FUN_0054d3f0 at 0054d48d
;   FUN_0054d880 at 0054d8ae
;   FUN_0054d8f0 at 0054d948
;   FUN_0054e170 at 0054e1e2
;   FUN_0054e340 at 0054e366
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005481d0
        ;   Label: FUN_005481d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005481d1
    MOV EAX,dword ptr [ESP + 0xc]       ; 005481d5
    MOV ECX,dword ptr [ESP + 0x10]      ; 005481d9
    XOR EDX,EDX                         ; 005481dd
    CMP EAX,ECX                         ; 005481df
    JZ 0x005481f6                       ; 005481e1
        ;   XREF to: 005481f6 (CONDITIONAL_JUMP)  ; LAB_005481f6
    IMUL EAX,EAX,0x24                   ; 005481e3
        ;   Label: LAB_005481e3
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x1de9c] ; 005481e6
    INC EDX                             ; 005481ed
    TEST EAX,EAX                        ; 005481ee
    JL 0x005481fa                       ; 005481f0
        ;   XREF to: 005481fa (CONDITIONAL_JUMP)  ; LAB_005481fa
    CMP EAX,ECX                         ; 005481f2
    JNZ 0x005481e3                      ; 005481f4
        ;   XREF to: 005481e3 (CONDITIONAL_JUMP)  ; LAB_005481e3
    MOV EAX,EDX                         ; 005481f6
        ;   Label: LAB_005481f6
    POP EBX                             ; 005481f8
    RET                                 ; 005481f9
    TEST ECX,ECX                        ; 005481fa
        ;   Label: LAB_005481fa
    JL 0x005481f6                       ; 005481fc
        ;   XREF to: 005481f6 (CONDITIONAL_JUMP)  ; LAB_005481f6
    MOV EDX,0xffffffff                  ; 005481fe
    MOV EAX,EDX                         ; 00548203
    POP EBX                             ; 00548205
    RET                                 ; 00548206

