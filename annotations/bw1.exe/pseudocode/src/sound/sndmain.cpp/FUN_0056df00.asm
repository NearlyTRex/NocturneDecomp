; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int sound_sndmain_cpp_FUN_0056df00(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_02c74650
;   undefined4 DAT_02c807ec
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0056df00
        ;   Label: sound_sndmain.cpp_FUN_0056df00
    CMP dword ptr [0x02c807ec],0x0      ; 0056df01 | DAT_02c807ec
    JLE 0x0056df32                      ; 0056df08
        ;   XREF to: 0056df32 (CONDITIONAL_JUMP)  ; LAB_0056df32
    MOV ESI,dword ptr [0x02c74650]      ; 0056df0a | DAT_02c74650
        ;   Label: LAB_0056df0a
    XOR EAX,EAX                         ; 0056df10
    XOR EDX,EDX                         ; 0056df12
    TEST ESI,ESI                        ; 0056df14
    JZ 0x0056df2e                       ; 0056df16
        ;   XREF to: 0056df2e (CONDITIONAL_JUMP)  ; LAB_0056df2e
    ADD EAX,0x11c                       ; 0056df18
        ;   Label: LAB_0056df18
    INC EDX                             ; 0056df1d
    CMP EAX,0x4700                      ; 0056df1e
    JGE 0x0056df59                      ; 0056df23
        ;   XREF to: 0056df59 (CONDITIONAL_JUMP)  ; LAB_0056df59
    CMP dword ptr [EAX + 0x2c74650],0x0 ; 0056df25
    JNZ 0x0056df18                      ; 0056df2c
        ;   XREF to: 0056df18 (CONDITIONAL_JUMP)  ; LAB_0056df18
    MOV EAX,EDX                         ; 0056df2e
        ;   Label: LAB_0056df2e
    POP ESI                             ; 0056df30
    RET                                 ; 0056df31
    PUSH EBX                            ; 0056df32
        ;   Label: LAB_0056df32
    MOV ECX,0x5f2c1d                    ; 0056df33
    MOV EBX,0x249                       ; 0056df38
    PUSH 0x5f2c32                       ; 0056df3d
    MOV dword ptr [0x01d1d400],ECX      ; 0056df42 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 0056df48 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0056df4e
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0056df53
    POP EBX                             ; 0056df56
    JMP 0x0056df0a                      ; 0056df57
        ;   XREF to: 0056df0a (UNCONDITIONAL_JUMP)  ; LAB_0056df0a
    MOV EAX,0xffffffff                  ; 0056df59
        ;   Label: LAB_0056df59
    POP ESI                             ; 0056df5e
    RET                                 ; 0056df5f

