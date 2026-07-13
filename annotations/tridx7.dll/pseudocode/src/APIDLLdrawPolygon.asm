; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void APIDLLdrawPolygon(int param_1,int param_2,undefined4 param_3)
;
;
; XREF[1]:
;   APIDLLclear at 100048c6
;
; Referenced Globals:
;   undefined4 DAT_10138fc0
;   undefined4 DAT_10138fc4
;
; Called Functions:
;   APIDLLdrawPolygon2
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 10004380
        ;   Label: APIDLLdrawPolygon
    PUSH ESI                            ; 10004384
    MOV ESI,dword ptr [ESP + 0xc]       ; 10004385
    TEST ESI,ESI                        ; 10004389
    JLE 0x1000439f                      ; 1000438b
        ;   XREF to: 1000439f (CONDITIONAL_JUMP)  ; LAB_1000439f
    MOV ECX,0x10138fc0                  ; 1000438d | DAT_10138fc0
    MOV EAX,ESI                         ; 10004392
    MOV dword ptr [ECX],EDX             ; 10004394 | DAT_10138fc0 | DAT_10138fc4
        ;   Label: LAB_10004394
    ADD ECX,0x4                         ; 10004396
    ADD EDX,0x30                        ; 10004399
    DEC EAX                             ; 1000439c
    JNZ 0x10004394                      ; 1000439d
        ;   XREF to: 10004394 (CONDITIONAL_JUMP)  ; LAB_10004394
    MOV EAX,dword ptr [ESP + 0x10]      ; 1000439f
        ;   Label: LAB_1000439f
    PUSH EAX                            ; 100043a3
    PUSH ESI                            ; 100043a4
    PUSH 0x10138fc0                     ; 100043a5 | DAT_10138fc0
    CALL APIDLLdrawPolygon2             ; 100043aa
        ;   XREF to: 100043c0 (UNCONDITIONAL_CALL)  ; undefined APIDLLdrawPolygon2() | Ordinal_14
    ADD ESP,0xc                         ; 100043af
    POP ESI                             ; 100043b2
    RET                                 ; 100043b3

