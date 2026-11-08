; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_0040c8a0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0040c840 at 0040c85f
;
; Called Functions:
;   FUN_0040c780
;
; *****************************************************************************

section .text

    LEA EAX,[ESP + 0x8]                 ; 0040c8a0
        ;   Label: FUN_0040c8a0
    PUSH EAX                            ; 0040c8a4
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040c8a5
    PUSH EDX                            ; 0040c8a9
    CALL FUN_0040c780                   ; 0040c8aa
        ;   XREF to: 0040c780 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c780()
    ADD ESP,0x8                         ; 0040c8af
    TEST EAX,EAX                        ; 0040c8b2
    SETG AL                             ; 0040c8b4
    AND EAX,0xff                        ; 0040c8b7
    RET                                 ; 0040c8bc

