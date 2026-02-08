; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl crt_unknown_c_FUN_006040d7 (uint param_1,undefined4 param_2,char *unaff_EBX,uint param_4,char *param_5,char *param_6, char *param_7,uint param_8,undefined4 param_9,char *param_10)
;
; Parameters:
; uint             Stack[0x4]:4   param_1
; undefined4       Stack[0x8]:4   param_2
; char *           Stack[0xc]:4   unaff_EBX
; undefined4       Stack[0x10]:4   param_4
; char *           Stack[0x14]:4   param_5
; undefined4       Stack[0x18]:4   param_6
; char *           Stack[0x1c]:4   param_7
; uint             Stack[0x20]:4   param_8
; undefined4       Stack[0x24]:4   param_9
; char *           Stack[0x28]:4   param_10
;
; XREF[1]:
;   crt_unknown.c_FUN_0060403f at 006040d0
;
; Called Functions:
;   crt_unknown.c_FUN_006040ed
;
; *****************************************************************************

section .text

    MOV ECX,0x2710                      ; 006040d7
        ;   Label: crt_unknown.c_FUN_006040d7
    SUB EDX,EDX                         ; 006040dc
    CMP EAX,ECX                         ; 006040de
    XCHG EAX,EDX                        ; 006040e0
    JC 0x006040e6                       ; 006040e1
        ;   XREF to: 006040e6 (CONDITIONAL_JUMP)  ; LAB_006040e6
    XCHG EAX,EDX                        ; 006040e3
    DIV ECX                             ; 006040e4
    PUSH EDX                            ; 006040e6
        ;   Label: LAB_006040e6
    CALL crt_unknown.c_FUN_006040ed     ; 006040e7
        ;   XREF to: 006040ed (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_006040ed(uint param_1, undefined4 param_2, char * unaff_EBX, undefined4 param_4, ...)
    POP EAX                             ; 006040ec

