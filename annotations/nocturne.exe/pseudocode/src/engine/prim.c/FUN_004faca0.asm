; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * engine_prim_c_FUN_004faca0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01e52efc
;   undefined4 DAT_01e52f00
;   undefined4 DAT_01e52f48
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004faca0
        ;   Label: engine_prim.c_FUN_004faca0
    PUSH ESI                            ; 004faca1
    MOV EBX,dword ptr [0x01e52efc]      ; 004faca2 | DAT_01e52efc
    MOV ECX,dword ptr [ESP + 0xc]       ; 004faca8
    MOV ESI,dword ptr [ESP + 0x10]      ; 004facac
    MOV EAX,0x1e52f00                   ; 004facb0
    XOR EDX,EDX                         ; 004facb5
    TEST EBX,EBX                        ; 004facb7
    JLE 0x004faccb                      ; 004facb9
        ;   XREF to: 004faccb (CONDITIONAL_JUMP)  ; LAB_004faccb
    CMP ECX,dword ptr [EAX]             ; 004facbb | DAT_01e52f00 | DAT_01e52f48
        ;   Label: LAB_004facbb
    JNZ 0x004facc3                      ; 004facbd
        ;   XREF to: 004facc3 (CONDITIONAL_JUMP)  ; LAB_004facc3
    CMP EAX,ESI                         ; 004facbf
    JNZ 0x004faccd                      ; 004facc1
        ;   XREF to: 004faccd (CONDITIONAL_JUMP)  ; LAB_004faccd
    INC EDX                             ; 004facc3
        ;   Label: LAB_004facc3
    ADD EAX,0x48                        ; 004facc4 | DAT_01e52f48
    CMP EDX,EBX                         ; 004facc7
    JL 0x004facbb                       ; 004facc9
        ;   XREF to: 004facbb (CONDITIONAL_JUMP)  ; LAB_004facbb
    XOR EAX,EAX                         ; 004faccb
        ;   Label: LAB_004faccb
    MOV dword ptr [0x01e52efc],EBX      ; 004faccd | DAT_01e52efc
        ;   Label: LAB_004faccd
    POP ESI                             ; 004facd3
    POP EBX                             ; 004facd4
    RET                                 ; 004facd5

