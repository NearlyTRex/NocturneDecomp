; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_drawHealthBar_FUN_004b3220(int x1,int y1,int x2,int y2,float fill_percent)
;
; Parameters:
; int              Stack[0x4]:4   x1
; int              Stack[0x8]:4   y1
; int              Stack[0xc]:4   x2
; int              Stack[0x10]:4   y2
; float            Stack[0x14]:4   fill_percent
;
; Referenced Globals:
;   undefined4 DAT_005d72fb
;   undefined4 DAT_005d7303
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;   engine_2d.c_fillRectColor_FUN_004031c0
;   engine_2d.c_fillRectWithBorder_FUN_00403250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b3220
        ;   Label: core_game.cpp_drawHealthBar_FUN_004b3220
    PUSH ESI                            ; 004b3221
    PUSH EDI                            ; 004b3222
    PUSH EBP                            ; 004b3223
    SUB ESP,0x8                         ; 004b3224
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004b3227
    FLD float ptr [ESP + 0x2c]          ; 004b322b
    MOV EBX,0x2                         ; 004b322f
    FCOMP double ptr [0x005d72fb]       ; 004b3234 | DAT_005d72fb
    FNSTSW AX                           ; 004b323a
    SAHF                                ; 004b323c
    JNC 0x004b3244                      ; 004b323d
        ;   XREF to: 004b3244 (CONDITIONAL_JUMP)  ; LAB_004b3244
    MOV EBX,0xfb                        ; 004b323f
    FLD float ptr [ESP + 0x2c]          ; 004b3244
        ;   Label: LAB_004b3244
    FCOMP double ptr [0x005d7303]       ; 004b3248 | DAT_005d7303
    FNSTSW AX                           ; 004b324e
    SAHF                                ; 004b3250
    JNC 0x004b3258                      ; 004b3251
        ;   XREF to: 004b3258 (CONDITIONAL_JUMP)  ; LAB_004b3258
    MOV EBX,0x1                         ; 004b3253
    PUSH 0x0                            ; 004b3258
        ;   Label: LAB_004b3258
    PUSH 0x0                            ; 004b325a
    MOV EDX,dword ptr [ESP + 0x30]      ; 004b325c
    PUSH EDX                            ; 004b3260
    MOV ECX,dword ptr [ESP + 0x30]      ; 004b3261
    PUSH ECX                            ; 004b3265
    MOV EDI,dword ptr [ESP + 0x30]      ; 004b3266
    PUSH EDI                            ; 004b326a
    PUSH ESI                            ; 004b326b
    CALL engine_2d.c_fillRectWithBorder_FUN_00403250 ; 004b326c
        ;   XREF to: 00403250 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectWithBorder_FUN_00403250(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x18                        ; 004b3271
    MOV EAX,dword ptr [ESP + 0x24]      ; 004b3274
    SUB EAX,ESI                         ; 004b3278
    INC EAX                             ; 004b327a
    MOV dword ptr [ESP + 0x4],EAX       ; 004b327b
    FILD dword ptr [ESP + 0x4]          ; 004b327f
    FMUL float ptr [ESP + 0x2c]         ; 004b3283
    CALL crt_math.c_round_FUN_005b7ff0  ; 004b3287
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP]               ; 004b328c
    MOV EBP,dword ptr [ESP]             ; 004b328f
    TEST EBP,EBP                        ; 004b3292
    JG 0x004b329e                       ; 004b3294
        ;   XREF to: 004b329e (CONDITIONAL_JUMP)  ; LAB_004b329e
    ADD ESP,0x8                         ; 004b3296
    POP EBP                             ; 004b3299
    POP EDI                             ; 004b329a
    POP ESI                             ; 004b329b
    POP EBX                             ; 004b329c
    RET                                 ; 004b329d
    PUSH EBX                            ; 004b329e
        ;   Label: LAB_004b329e
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004b329f
    PUSH EAX                            ; 004b32a3
    LEA EAX,[ESI + EBP*0x1]             ; 004b32a4
    PUSH EAX                            ; 004b32a7
    PUSH EDI                            ; 004b32a8
    PUSH ESI                            ; 004b32a9
    CALL engine_2d.c_fillRectColor_FUN_004031c0 ; 004b32aa
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_004031c0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 004b32af
    ADD ESP,0x8                         ; 004b32b2
    POP EBP                             ; 004b32b5
    POP EDI                             ; 004b32b6
    POP ESI                             ; 004b32b7
    POP EBX                             ; 004b32b8
    RET                                 ; 004b32b9

