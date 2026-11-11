; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_special_cpp_fillDepthRegion_FUN_0057dd92(int left,int right,int top,int bottom)
;
; Parameters:
; int              Stack[0x4]:4   left
; int              Stack[0x8]:4   right
; int              Stack[0xc]:4   top
; int              Stack[0x10]:4   bottom
;
; XREF[1]:
;   unkafter_bmppuzzl.cpp_CAudioRecPuzzle_renderReel_FUN_00416fa0 at 0041705f
;
; Referenced Globals:
;   undefined8 DAT_00623ddc
;   undefined4 DAT_00623de4
;   undefined4 DAT_01c4480c
;   undefined4 DAT_01c50948
;
; Called Functions:
;   engine_special.cpp_clearZBox_FUN_00582960
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0057dd92
        ;   Label: engine_special.cpp_fillDepthRegion_FUN_0057dd92
    MOV EBP,ESP                         ; 0057dd93
    PUSH ESI                            ; 0057dd95
    PUSH EDI                            ; 0057dd96
    CMP dword ptr [0x01c50948],0x0      ; 0057dd97 | DAT_01c50948
    JZ 0x0057ddb9                       ; 0057dd9e
        ;   XREF to: 0057ddb9 (CONDITIONAL_JUMP)  ; LAB_0057ddb9
    PUSH dword ptr [EBP + 0x14]         ; 0057dda0
    PUSH dword ptr [EBP + 0x10]         ; 0057dda3
    PUSH dword ptr [EBP + 0xc]          ; 0057dda6
    PUSH dword ptr [EBP + 0x8]          ; 0057dda9
    CALL engine_special.cpp_clearZBox_FUN_00582960 ; 0057ddac
        ;   XREF to: 00582960 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_clearZBox_FUN_00582960(int left, int right, int top, int bottom)
    POP EAX                             ; 0057ddb1
    POP EAX                             ; 0057ddb2
    POP EAX                             ; 0057ddb3
    POP EAX                             ; 0057ddb4
    POP EDI                             ; 0057ddb5
    POP ESI                             ; 0057ddb6
    LEAVE                               ; 0057ddb7
    RET                                 ; 0057ddb8
    PUSHAD                              ; 0057ddb9
        ;   Label: LAB_0057ddb9
    CLD                                 ; 0057ddba
    PUSH DS                             ; 0057ddbb
    POP ES                              ; 0057ddbc
    MOV ECX,dword ptr [EBP + 0xc]       ; 0057ddbd
    MOV EBX,dword ptr [EBP + 0x10]      ; 0057ddc0
    SUB ECX,dword ptr [EBP + 0x8]       ; 0057ddc3
    MOV EAX,0x0                         ; 0057ddc6
    INC ECX                             ; 0057ddcb
    MOV EDX,dword ptr [EBP + 0x8]       ; 0057ddcc
    SHL EDX,0x2                         ; 0057ddcf
    FLD double ptr [0x00623ddc]         ; 0057ddd2 | DAT_00623ddc
    PUSH ECX                            ; 0057ddd8
        ;   Label: LAB_0057ddd8
    MOV EDI,dword ptr [EBX*0x4 + 0x1c4480c] ; 0057ddd9 | DAT_01c4480c
    ADD EDI,EDX                         ; 0057dde0
    AND EDI,0xfffffff8                  ; 0057dde2
    SHR ECX,0x1                         ; 0057dde5
    FST double ptr [EDI]                ; 0057dde7
        ;   Label: LAB_0057dde7
    ADD EDI,0x8                         ; 0057dde9
    DEC ECX                             ; 0057ddec
    JGE 0x0057dde7                      ; 0057dded
        ;   XREF to: 0057dde7 (CONDITIONAL_JUMP)  ; LAB_0057dde7
    POP ECX                             ; 0057ddef
    INC EBX                             ; 0057ddf0
    CMP EBX,dword ptr [EBP + 0x14]      ; 0057ddf1
    JBE 0x0057ddd8                      ; 0057ddf4
        ;   XREF to: 0057ddd8 (CONDITIONAL_JUMP)  ; LAB_0057ddd8
    FSTP double ptr [0x00623de4]        ; 0057ddf6 | DAT_00623de4
    POPAD                               ; 0057ddfc
    POP EDI                             ; 0057ddfd
    POP ESI                             ; 0057ddfe
    LEAVE                               ; 0057ddff
    RET                                 ; 0057de00

