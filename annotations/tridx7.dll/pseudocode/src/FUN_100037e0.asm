; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_100037e0(uint param_1,int param_2)
;
;
; XREF[3]:
;   APIDLLsetFogColor at 10004a37
;   FUN_100035b0 at 100035e2
;   FUN_10003f10 at 10003fac
;
; Referenced Globals:
;   undefined4 DAT_100141e0
;   undefined4 DAT_101390c8
;   undefined4 DAT_101394c8
;
; Called Functions:
;   FUN_100047b0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 100037e0
        ;   Label: FUN_100037e0
    PUSH EDI                            ; 100037e1
    MOV EDI,dword ptr [ESP + 0xc]       ; 100037e2
    MOV ESI,dword ptr [ESP + 0x10]      ; 100037e6
    MOV EAX,EDI                         ; 100037ea
    AND EAX,0xff                        ; 100037ec
    SHL EAX,0x2                         ; 100037f1
    CMP dword ptr [EAX + 0x101390c8],EDI ; 100037f4 | DAT_101390c8
    JNZ 0x10003804                      ; 100037fa
        ;   XREF to: 10003804 (CONDITIONAL_JUMP)  ; LAB_10003804
    CMP dword ptr [EAX + 0x101394c8],ESI ; 100037fc | DAT_101394c8
    JZ 0x10003822                       ; 10003802
        ;   XREF to: 10003822 (CONDITIONAL_JUMP)  ; LAB_10003822
    MOV dword ptr [EAX + 0x101390c8],EDI ; 10003804 | DAT_101390c8
        ;   Label: LAB_10003804
    MOV dword ptr [EAX + 0x101394c8],ESI ; 1000380a | DAT_101394c8
    CALL FUN_100047b0                   ; 10003810
        ;   XREF to: 100047b0 (UNCONDITIONAL_CALL)  ; undefined FUN_100047b0()
    PUSH ESI                            ; 10003815
    MOV EAX,[0x100141e0]                ; 10003816 | DAT_100141e0
    MOV ESI,dword ptr [EAX]             ; 1000381b
    PUSH EDI                            ; 1000381d
    PUSH EAX                            ; 1000381e
    CALL dword ptr [ESI + 0x58]         ; 1000381f
    POP EDI                             ; 10003822
        ;   Label: LAB_10003822
    POP ESI                             ; 10003823
    RET                                 ; 10003824

