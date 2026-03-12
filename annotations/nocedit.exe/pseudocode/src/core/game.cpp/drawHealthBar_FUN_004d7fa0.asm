; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_drawHealthBar_FUN_004d7fa0(int x1,int y1,int x2,int y2,float fill_percent)
;
; Parameters:
; int              Stack[0x4]:4   x1
; int              Stack[0x8]:4   y1
; int              Stack[0xc]:4   x2
; int              Stack[0x10]:4   y2
; float            Stack[0x14]:4   fill_percent
;
; Referenced Globals:
;   double DOUBLE_0062b255 = 0.600000000000000
;   double DOUBLE_0062b25d = 0.350000000000000
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   engine_2d.c_fillRectColor_FUN_00403170
;   engine_2d.c_fillRectWithBorder_FUN_00403200
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d7fa0
        ;   Label: core_game.cpp_drawHealthBar_FUN_004d7fa0
    PUSH ESI                            ; 004d7fa1
    PUSH EDI                            ; 004d7fa2
    PUSH EBP                            ; 004d7fa3
    SUB ESP,0x8                         ; 004d7fa4
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004d7fa7
    FLD float ptr [ESP + 0x2c]          ; 004d7fab
    MOV EBX,0x2                         ; 004d7faf
    FCOMP double ptr [0x0062b255]       ; 004d7fb4 | DOUBLE_0062b255
    FNSTSW AX                           ; 004d7fba
    SAHF                                ; 004d7fbc
    JNC 0x004d7fc4                      ; 004d7fbd
        ;   XREF to: 004d7fc4 (CONDITIONAL_JUMP)  ; LAB_004d7fc4
    MOV EBX,0xfb                        ; 004d7fbf
    FLD float ptr [ESP + 0x2c]          ; 004d7fc4
        ;   Label: LAB_004d7fc4
    FCOMP double ptr [0x0062b25d]       ; 004d7fc8 | DOUBLE_0062b25d
    FNSTSW AX                           ; 004d7fce
    SAHF                                ; 004d7fd0
    JNC 0x004d7fd8                      ; 004d7fd1
        ;   XREF to: 004d7fd8 (CONDITIONAL_JUMP)  ; LAB_004d7fd8
    MOV EBX,0x1                         ; 004d7fd3
    PUSH 0x0                            ; 004d7fd8
        ;   Label: LAB_004d7fd8
    PUSH 0x0                            ; 004d7fda
    MOV EDX,dword ptr [ESP + 0x30]      ; 004d7fdc
    PUSH EDX                            ; 004d7fe0
    MOV ECX,dword ptr [ESP + 0x30]      ; 004d7fe1
    PUSH ECX                            ; 004d7fe5
    MOV EDI,dword ptr [ESP + 0x30]      ; 004d7fe6
    PUSH EDI                            ; 004d7fea
    PUSH ESI                            ; 004d7feb
    CALL engine_2d.c_fillRectWithBorder_FUN_00403200 ; 004d7fec
        ;   XREF to: 00403200 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectWithBorder_FUN_00403200(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x18                        ; 004d7ff1
    MOV EAX,dword ptr [ESP + 0x24]      ; 004d7ff4
    SUB EAX,ESI                         ; 004d7ff8
    INC EAX                             ; 004d7ffa
    MOV dword ptr [ESP + 0x4],EAX       ; 004d7ffb
    FILD dword ptr [ESP + 0x4]          ; 004d7fff
    FMUL float ptr [ESP + 0x2c]         ; 004d8003
    CALL crt_math.c_round_FUN_005fe6b0  ; 004d8007
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP]               ; 004d800c
    MOV EBP,dword ptr [ESP]             ; 004d800f
    TEST EBP,EBP                        ; 004d8012
    JG 0x004d801e                       ; 004d8014
        ;   XREF to: 004d801e (CONDITIONAL_JUMP)  ; LAB_004d801e
    ADD ESP,0x8                         ; 004d8016
    POP EBP                             ; 004d8019
    POP EDI                             ; 004d801a
    POP ESI                             ; 004d801b
    POP EBX                             ; 004d801c
    RET                                 ; 004d801d
    PUSH EBX                            ; 004d801e
        ;   Label: LAB_004d801e
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004d801f
    PUSH EAX                            ; 004d8023
    LEA EAX,[ESI + EBP*0x1]             ; 004d8024
    PUSH EAX                            ; 004d8027
    PUSH EDI                            ; 004d8028
    PUSH ESI                            ; 004d8029
    CALL engine_2d.c_fillRectColor_FUN_00403170 ; 004d802a
        ;   XREF to: 00403170 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_00403170(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 004d802f
    ADD ESP,0x8                         ; 004d8032
    POP EBP                             ; 004d8035
    POP EDI                             ; 004d8036
    POP ESI                             ; 004d8037
    POP EBX                             ; 004d8038
    RET                                 ; 004d8039

