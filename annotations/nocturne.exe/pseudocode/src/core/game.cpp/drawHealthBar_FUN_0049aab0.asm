; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_drawHealthBar_FUN_0049aab0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,float param_5)
;
;
; Referenced Globals:
;   double DOUBLE_005823ca = 0.600000000000000
;   double DOUBLE_005823d2 = 0.350000000000000
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;   engine_2d.c_fillRectColor_FUN_00403e60
;   engine_2d.c_fillRectWithBorder_FUN_00403ef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049aab0
        ;   Label: core_game.cpp_drawHealthBar_FUN_0049aab0
    PUSH ESI                            ; 0049aab1
    PUSH EDI                            ; 0049aab2
    PUSH EBP                            ; 0049aab3
    SUB ESP,0x8                         ; 0049aab4
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0049aab7
    FLD float ptr [ESP + 0x2c]          ; 0049aabb
    MOV EBX,0x2                         ; 0049aabf
    FCOMP double ptr [0x005823ca]       ; 0049aac4 | DOUBLE_005823ca
    FNSTSW AX                           ; 0049aaca
    SAHF                                ; 0049aacc
    JNC 0x0049aad4                      ; 0049aacd
        ;   XREF to: 0049aad4 (CONDITIONAL_JUMP)  ; LAB_0049aad4
    MOV EBX,0xfb                        ; 0049aacf
    FLD float ptr [ESP + 0x2c]          ; 0049aad4
        ;   Label: LAB_0049aad4
    FCOMP double ptr [0x005823d2]       ; 0049aad8 | DOUBLE_005823d2
    FNSTSW AX                           ; 0049aade
    SAHF                                ; 0049aae0
    JNC 0x0049aae8                      ; 0049aae1
        ;   XREF to: 0049aae8 (CONDITIONAL_JUMP)  ; LAB_0049aae8
    MOV EBX,0x1                         ; 0049aae3
    PUSH 0x0                            ; 0049aae8
        ;   Label: LAB_0049aae8
    PUSH 0x0                            ; 0049aaea
    MOV EDX,dword ptr [ESP + 0x30]      ; 0049aaec
    PUSH EDX                            ; 0049aaf0
    MOV ECX,dword ptr [ESP + 0x30]      ; 0049aaf1
    PUSH ECX                            ; 0049aaf5
    MOV EDI,dword ptr [ESP + 0x30]      ; 0049aaf6
    PUSH EDI                            ; 0049aafa
    PUSH ESI                            ; 0049aafb
    CALL engine_2d.c_fillRectWithBorder_FUN_00403ef0 ; 0049aafc
        ;   XREF to: 00403ef0 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_fillRectWithBorder_FUN_00403ef0()
    ADD ESP,0x18                        ; 0049ab01
    MOV EAX,dword ptr [ESP + 0x24]      ; 0049ab04
    SUB EAX,ESI                         ; 0049ab08
    INC EAX                             ; 0049ab0a
    MOV dword ptr [ESP + 0x4],EAX       ; 0049ab0b
    FILD dword ptr [ESP + 0x4]          ; 0049ab0f
    FMUL float ptr [ESP + 0x2c]         ; 0049ab13
    CALL crt_math.c_round_FUN_00563a30  ; 0049ab17
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP]               ; 0049ab1c
    MOV EBP,dword ptr [ESP]             ; 0049ab1f
    TEST EBP,EBP                        ; 0049ab22
    JG 0x0049ab2e                       ; 0049ab24
        ;   XREF to: 0049ab2e (CONDITIONAL_JUMP)  ; LAB_0049ab2e
    ADD ESP,0x8                         ; 0049ab26
    POP EBP                             ; 0049ab29
    POP EDI                             ; 0049ab2a
    POP ESI                             ; 0049ab2b
    POP EBX                             ; 0049ab2c
    RET                                 ; 0049ab2d
    PUSH EBX                            ; 0049ab2e
        ;   Label: LAB_0049ab2e
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0049ab2f
    PUSH EAX                            ; 0049ab33
    LEA EAX,[ESI + EBP*0x1]             ; 0049ab34
    PUSH EAX                            ; 0049ab37
    PUSH EDI                            ; 0049ab38
    PUSH ESI                            ; 0049ab39
    CALL engine_2d.c_fillRectColor_FUN_00403e60 ; 0049ab3a
        ;   XREF to: 00403e60 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_fillRectColor_FUN_00403e60()
    ADD ESP,0x14                        ; 0049ab3f
    ADD ESP,0x8                         ; 0049ab42
    POP EBP                             ; 0049ab45
    POP EDI                             ; 0049ab46
    POP ESI                             ; 0049ab47
    POP EBX                             ; 0049ab48
    RET                                 ; 0049ab49

