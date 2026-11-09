; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setdir_cpp_restoreZBufferTable_FUN_00538390(int count)
;
; Parameters:
; int              Stack[0x4]:4   count
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_020b0258
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00538390
        ;   Label: core_setdir.cpp_restoreZBufferTable_FUN_00538390
    PUSH EDI                            ; 00538391
    CMP dword ptr [0x020b0258],0x0      ; 00538392 | DAT_020b0258
    JZ 0x005383cb                       ; 00538399
        ;   XREF to: 005383cb (CONDITIONAL_JUMP)  ; LAB_005383cb
    MOV ESI,dword ptr [ESP + 0xc]       ; 0053839b
        ;   Label: LAB_0053839b
    TEST ESI,ESI                        ; 0053839f
    JLE 0x005383c0                      ; 005383a1
        ;   XREF to: 005383c0 (CONDITIONAL_JUMP)  ; LAB_005383c0
    LEA ECX,[ESI*0x4 + 0x0]             ; 005383a3
    XOR EAX,EAX                         ; 005383aa
    ADD EAX,0x4                         ; 005383ac
        ;   Label: LAB_005383ac
    MOV EDX,dword ptr [EAX + 0x20b0254] ; 005383af
    MOV dword ptr [EAX + 0x1c2b648],EDX ; 005383b5
    CMP EAX,ECX                         ; 005383bb
    JL 0x005383ac                       ; 005383bd
        ;   XREF to: 005383ac (CONDITIONAL_JUMP)  ; LAB_005383ac
    NOP                                 ; 005383bf
    XOR EDI,EDI                         ; 005383c0
        ;   Label: LAB_005383c0
    MOV dword ptr [0x020b0258],EDI      ; 005383c2 | DAT_020b0258
    POP EDI                             ; 005383c8
    POP ESI                             ; 005383c9
    RET                                 ; 005383ca
    PUSH EBX                            ; 005383cb
        ;   Label: LAB_005383cb
    MOV ECX,0x5e5f92                    ; 005383cc
    MOV EBX,0x70                        ; 005383d1
    PUSH 0x5e5fa5                       ; 005383d6
    MOV dword ptr [0x01d046a0],ECX      ; 005383db | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 005383e1 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005383e7
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005383ec
    POP EBX                             ; 005383ef
    JMP 0x0053839b                      ; 005383f0
        ;   XREF to: 0053839b (UNCONDITIONAL_JUMP)  ; LAB_0053839b

