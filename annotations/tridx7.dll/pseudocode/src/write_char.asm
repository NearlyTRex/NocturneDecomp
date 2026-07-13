; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl write_char(undefined4 param_1,undefined4 *param_2,int *param_3)
;
;
; XREF[3]:
;   FUN_10005f40 at 1000614e
;   write_multi_char at 1000698e
;   write_string at 100069d4
;
; Called Functions:
;   FUN_10007420
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 10006920
        ;   Label: write_char
    MOV EAX,dword ptr [EDX + 0x4]       ; 10006924
    DEC EAX                             ; 10006927
    MOV dword ptr [EDX + 0x4],EAX       ; 10006928
    JS 0x10006940                       ; 1000692b
        ;   XREF to: 10006940 (CONDITIONAL_JUMP)  ; LAB_10006940
    MOV EAX,dword ptr [EDX]             ; 1000692d
    MOV CL,byte ptr [ESP + 0x4]         ; 1000692f
    MOV byte ptr [EAX],CL               ; 10006933
    MOV ECX,dword ptr [EDX]             ; 10006935
    XOR EAX,EAX                         ; 10006937
    MOV AL,byte ptr [ECX]               ; 10006939
    INC ECX                             ; 1000693b
    MOV dword ptr [EDX],ECX             ; 1000693c
    JMP 0x1000694e                      ; 1000693e
        ;   XREF to: 1000694e (UNCONDITIONAL_JUMP)  ; LAB_1000694e
    MOV ECX,dword ptr [ESP + 0x4]       ; 10006940
        ;   Label: LAB_10006940
    PUSH EDX                            ; 10006944
    PUSH ECX                            ; 10006945
    CALL FUN_10007420                   ; 10006946
        ;   XREF to: 10007420 (UNCONDITIONAL_CALL)  ; undefined FUN_10007420()
    ADD ESP,0x8                         ; 1000694b
    CMP EAX,-0x1                        ; 1000694e
        ;   Label: LAB_1000694e
    MOV EAX,dword ptr [ESP + 0xc]       ; 10006951
    JNZ 0x1000695e                      ; 10006955
        ;   XREF to: 1000695e (CONDITIONAL_JUMP)  ; LAB_1000695e
    MOV dword ptr [EAX],0xffffffff      ; 10006957
    RET                                 ; 1000695d
    INC dword ptr [EAX]                 ; 1000695e
        ;   Label: LAB_1000695e
    RET                                 ; 10006960

