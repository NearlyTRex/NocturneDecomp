; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 APIDLLgetVideoMemory(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_10014208
;   undefined4 DAT_1001420c
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 10005280
        ;   Label: APIDLLgetVideoMemory
    PUSH ESI                            ; 10005284
    TEST ECX,ECX                        ; 10005285
    JZ 0x100052b5                       ; 10005287
        ;   XREF to: 100052b5 (CONDITIONAL_JUMP)  ; LAB_100052b5
    MOV EDX,dword ptr [ESP + 0xc]       ; 10005289
    TEST EDX,EDX                        ; 1000528d
    JZ 0x100052b5                       ; 1000528f
        ;   XREF to: 100052b5 (CONDITIONAL_JUMP)  ; LAB_100052b5
    MOV ESI,dword ptr [ESP + 0x10]      ; 10005291
    TEST ESI,ESI                        ; 10005295
    JZ 0x100052b5                       ; 10005297
        ;   XREF to: 100052b5 (CONDITIONAL_JUMP)  ; LAB_100052b5
    MOV EAX,[0x10014208]                ; 10005299 | DAT_10014208
    MOV dword ptr [ESI],0x0             ; 1000529e
    POP ESI                             ; 100052a4
    MOV dword ptr [ECX],EAX             ; 100052a5
    MOV ECX,dword ptr [0x1001420c]      ; 100052a7 | DAT_1001420c
    MOV EAX,0x1                         ; 100052ad
    MOV dword ptr [EDX],ECX             ; 100052b2
    RET                                 ; 100052b4
    XOR EAX,EAX                         ; 100052b5
        ;   Label: LAB_100052b5
    POP ESI                             ; 100052b7
    RET                                 ; 100052b8

