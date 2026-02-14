; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl crt_unknown_c_FUN_006040ed(uint param_1,undefined4 param_2,char *unaff_EBX,undefined4 param_4,char *param_5)
;
; Parameters:
; uint             Stack[0x4]:4   param_1
; undefined4       Stack[0x8]:4   param_2
; char *           Stack[0xc]:4   unaff_EBX
; undefined4       Stack[0x10]:4   param_4
; char *           Stack[0x14]:4   param_5
;
; XREF[1]:
;   crt_unknown.c_FUN_006040d7 at 006040e7
;
; Called Functions:
;   crt_unknown.c_FUN_00604104
;
; *****************************************************************************

section .text

    MOV ECX,0x64                        ; 006040ed
        ;   Label: crt_unknown.c_FUN_006040ed
    SUB EDX,EDX                         ; 006040f2
    CMP EAX,ECX                         ; 006040f4
    XCHG EAX,EDX                        ; 006040f6
    JC 0x006040fd                       ; 006040f7
        ;   XREF to: 006040fd (CONDITIONAL_JUMP)  ; LAB_006040fd
    XCHG EAX,EDX                        ; 006040f9
    DIV CX                              ; 006040fa
    PUSH EDX                            ; 006040fd
        ;   Label: LAB_006040fd
    CALL crt_unknown.c_FUN_00604104     ; 006040fe
        ;   XREF to: 00604104 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_00604104(ushort param_1, undefined4 param_2, char * unaff_EBX)
    POP EAX                             ; 00604103

