; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_drawCrosshair_FUN_005808d0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0060727c
;   undefined4 DAT_01c5fadc
;   undefined4 DAT_01c5fae0
;   undefined4 DAT_01c6b5a8
;   undefined4 DAT_01c6b5ac
;   undefined4 DAT_01c6b5b0
;   undefined4 DAT_01c6b5b4
;   undefined4 DAT_01c6b5c0
;   undefined4 DAT_02d20338
;
; Called Functions:
;   engine_2d.c_plotPixel_FUN_00401130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005808d0
        ;   Label: wincore_winrun.cpp_drawCrosshair_FUN_005808d0
    PUSH ESI                            ; 005808d1
    PUSH EDI                            ; 005808d2
    PUSH EBP                            ; 005808d3
    MOV EAX,[0x0060727c]                ; 005808d4 | DAT_0060727c
    MOV EDX,dword ptr [0x02d20338]      ; 005808d9 | DAT_02d20338
    ADD EDX,EAX                         ; 005808df
    MOV ESI,dword ptr [0x01c5fadc]      ; 005808e1 | DAT_01c5fadc
    MOV dword ptr [0x02d20338],EDX      ; 005808e7 | DAT_02d20338
    CMP EDX,0xff                        ; 005808ed
    JG 0x0058093f                       ; 005808f3
        ;   XREF to: 0058093f (CONDITIONAL_JUMP)  ; LAB_0058093f
    TEST EDX,EDX                        ; 005808f5
    JL 0x00580956                       ; 005808f7
        ;   XREF to: 00580956 (CONDITIONAL_JUMP)  ; LAB_00580956
    MOV ECX,0x1                         ; 005808f9
        ;   Label: LAB_005808f9
    MOV EBX,0xfffffffb                  ; 005808fe
    MOV dword ptr [0x01c6b5c0],ECX      ; 00580903 | DAT_01c6b5c0
    MOV EAX,[0x01c5fae0]                ; 00580909 | DAT_01c5fae0
        ;   Label: LAB_00580909
    MOV EDI,dword ptr [0x01c6b5a8]      ; 0058090e | DAT_01c6b5a8
    ADD EAX,EBX                         ; 00580914
    CMP ESI,EDI                         ; 00580916
    JG 0x0058096b                       ; 00580918
        ;   XREF to: 0058096b (CONDITIONAL_JUMP)  ; LAB_0058096b
    INC EBX                             ; 0058091a
        ;   Label: LAB_0058091a
    CMP EBX,0x5                         ; 0058091b
    JLE 0x00580909                      ; 0058091e
        ;   XREF to: 00580909 (CONDITIONAL_JUMP)  ; LAB_00580909
    LEA EBX,[ESI + -0x5]                ; 00580920
    ADD ESI,0x6                         ; 00580923
    MOV EDI,dword ptr [0x01c6b5a8]      ; 00580926 | DAT_01c6b5a8
        ;   Label: LAB_00580926
    MOV EAX,[0x01c5fae0]                ; 0058092c | DAT_01c5fae0
    CMP EBX,EDI                         ; 00580931
    JG 0x0058098f                       ; 00580933
        ;   XREF to: 0058098f (CONDITIONAL_JUMP)  ; LAB_0058098f
    INC EBX                             ; 00580935
        ;   Label: LAB_00580935
    CMP EBX,ESI                         ; 00580936
    JNZ 0x00580926                      ; 00580938
        ;   XREF to: 00580926 (CONDITIONAL_JUMP)  ; LAB_00580926
    POP EBP                             ; 0058093a
    POP EDI                             ; 0058093b
    POP ESI                             ; 0058093c
    POP EBX                             ; 0058093d
    RET                                 ; 0058093e
    MOV EDX,0xfffffff8                  ; 0058093f
        ;   Label: LAB_0058093f
    MOV EAX,0xff                        ; 00580944
    MOV dword ptr [0x0060727c],EDX      ; 00580949 | DAT_0060727c
    MOV [0x02d20338],EAX                ; 0058094f | DAT_02d20338
    JMP 0x005808f9                      ; 00580954
        ;   XREF to: 005808f9 (UNCONDITIONAL_JUMP)  ; LAB_005808f9
    MOV EBP,0x8                         ; 00580956
        ;   Label: LAB_00580956
    XOR EDI,EDI                         ; 0058095b
    MOV dword ptr [0x0060727c],EBP      ; 0058095d | DAT_0060727c
    MOV dword ptr [0x02d20338],EDI      ; 00580963 | DAT_02d20338
    JMP 0x005808f9                      ; 00580969
        ;   XREF to: 005808f9 (UNCONDITIONAL_JUMP)  ; LAB_005808f9
    CMP EAX,dword ptr [0x01c6b5ac]      ; 0058096b | DAT_01c6b5ac
        ;   Label: LAB_0058096b
    JLE 0x0058091a                      ; 00580971
        ;   XREF to: 0058091a (CONDITIONAL_JUMP)  ; LAB_0058091a
    CMP ESI,dword ptr [0x01c6b5b0]      ; 00580973 | DAT_01c6b5b0
    JGE 0x0058091a                      ; 00580979
        ;   XREF to: 0058091a (CONDITIONAL_JUMP)  ; LAB_0058091a
    CMP EAX,dword ptr [0x01c6b5b4]      ; 0058097b | DAT_01c6b5b4
    JGE 0x0058091a                      ; 00580981
        ;   XREF to: 0058091a (CONDITIONAL_JUMP)  ; LAB_0058091a
    PUSH EAX                            ; 00580983
    PUSH ESI                            ; 00580984
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00580985
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 0058098a
    JMP 0x0058091a                      ; 0058098d
        ;   XREF to: 0058091a (UNCONDITIONAL_JUMP)  ; LAB_0058091a
    CMP EAX,dword ptr [0x01c6b5ac]      ; 0058098f | DAT_01c6b5ac
        ;   Label: LAB_0058098f
    JLE 0x00580935                      ; 00580995
        ;   XREF to: 00580935 (CONDITIONAL_JUMP)  ; LAB_00580935
    CMP EBX,dword ptr [0x01c6b5b0]      ; 00580997 | DAT_01c6b5b0
    JGE 0x00580935                      ; 0058099d
        ;   XREF to: 00580935 (CONDITIONAL_JUMP)  ; LAB_00580935
    CMP EAX,dword ptr [0x01c6b5b4]      ; 0058099f | DAT_01c6b5b4
    JGE 0x00580935                      ; 005809a5
        ;   XREF to: 00580935 (CONDITIONAL_JUMP)  ; LAB_00580935
    PUSH EAX                            ; 005809a7
    PUSH EBX                            ; 005809a8
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 005809a9
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 005809ae
    INC EBX                             ; 005809b1
    CMP EBX,ESI                         ; 005809b2
    JNZ 0x00580926                      ; 005809b4
        ;   XREF to: 00580926 (CONDITIONAL_JUMP)  ; LAB_00580926
    POP EBP                             ; 005809ba
    POP EDI                             ; 005809bb
    POP ESI                             ; 005809bc
    POP EBX                             ; 005809bd
    RET                                 ; 005809be

