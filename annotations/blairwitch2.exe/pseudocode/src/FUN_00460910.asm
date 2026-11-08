; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00460910(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[5]:
;   FUN_00460aa0 at 00460abb
;   FUN_00460c70 at 00460c97
;   FUN_00519f00 at 00519f32
;   FUN_00573b80 at 00573c09
;   FUN_0057d390 at 0057d3c3
;
; Referenced Globals:
;   void* PTR_FUN_0060b228 = 004608b0
;
; Called Functions:
;   FUN_004608b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460910
        ;   Label: FUN_00460910
    MOV EDX,dword ptr [ESP + 0x10]      ; 00460911
    PUSH EDX                            ; 00460915
    MOV ECX,dword ptr [ESP + 0x10]      ; 00460916
    PUSH ECX                            ; 0046091a
    MOV EBX,dword ptr [ESP + 0x10]      ; 0046091b
    PUSH EBX                            ; 0046091f
    CALL dword ptr [0x0060b228]         ; 00460920 | PTR_FUN_0060b228
    ADD ESP,0xc                         ; 00460926
    POP EBX                             ; 00460929
    RET                                 ; 0046092a

