; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b7270(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[5]:
;   FUN_0049e9c0 at 0049eac1
;   FUN_004e8630 at 004e8a30
;   FUN_005407e0 at 005408fb
;   FUN_00561f80 at 0056209b
;   FUN_00598420 at 00598853
;
; Referenced Globals:
;   undefined4 DAT_01cbae44
;
; Called Functions:
;   FUN_004b4000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b7270
        ;   Label: FUN_004b7270
    PUSH ESI                            ; 004b7271
    PUSH EDI                            ; 004b7272
    MOV EDX,dword ptr [ESP + 0x20]      ; 004b7273
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004b7277
    PUSH EDX                            ; 004b727b
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004b727c
    MOV EDX,dword ptr [0x01cbae44]      ; 004b7280 | DAT_01cbae44
    PUSH ECX                            ; 004b7286
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b7287
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004b728e
    SUB EAX,EDX                         ; 004b7292
    PUSH EBX                            ; 004b7294
    SHL EAX,0x5                         ; 004b7295
    PUSH ESI                            ; 004b7298
    ADD EAX,0x1cbae48                   ; 004b7299
    PUSH EAX                            ; 004b729e
    CALL FUN_004b4000                   ; 004b729f
        ;   XREF to: 004b4000 (UNCONDITIONAL_CALL)  ; undefined FUN_004b4000()
    MOV EDI,dword ptr [0x01cbae44]      ; 004b72a4 | DAT_01cbae44
    INC EDI                             ; 004b72aa
    ADD ESP,0x14                        ; 004b72ab
    MOV dword ptr [0x01cbae44],EDI      ; 004b72ae | DAT_01cbae44
    CMP EDI,0x32                        ; 004b72b4
    JGE 0x004b72bd                      ; 004b72b7
        ;   XREF to: 004b72bd (CONDITIONAL_JUMP)  ; LAB_004b72bd
    POP EDI                             ; 004b72b9
    POP ESI                             ; 004b72ba
    POP EBX                             ; 004b72bb
    RET                                 ; 004b72bc
    XOR EAX,EAX                         ; 004b72bd
        ;   Label: LAB_004b72bd
    MOV [0x01cbae44],EAX                ; 004b72bf | DAT_01cbae44
    POP EDI                             ; 004b72c4
    POP ESI                             ; 004b72c5
    POP EBX                             ; 004b72c6
    RET                                 ; 004b72c7

