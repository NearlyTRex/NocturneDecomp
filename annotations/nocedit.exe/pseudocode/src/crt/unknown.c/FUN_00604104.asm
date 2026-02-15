; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_unknown_c_FUN_00604104(ushort param_1,undefined4 param_2,char *unaff_EBX)
;
; Parameters:
; ushort           Stack[0x4]:2   param_1
; undefined4       Stack[0x8]:4   param_2
; char *           Stack[0xc]:4   unaff_EBX
;
; XREF[1]:
;   crt_unknown.c_FUN_006040ed at 006040fe
;
; *****************************************************************************

section .text

    MOV CL,0xa                          ; 00604104
        ;   Label: crt_unknown.c_FUN_00604104
    CMP AL,CL                           ; 00604106
    XCHG AH,AL                          ; 00604108
    JC 0x00604110                       ; 0060410a
        ;   XREF to: 00604110 (CONDITIONAL_JUMP)  ; LAB_00604110
    XCHG AH,AL                          ; 0060410c
    DIV CL                              ; 0060410e
    ADD AH,0x30                         ; 00604110
        ;   Label: LAB_00604110
    ADD AL,0x30                         ; 00604113
    MOV byte ptr [EBX],AL               ; 00604115
    INC EBX                             ; 00604117
    MOV byte ptr [EBX],AH               ; 00604118
    INC EBX                             ; 0060411a
    RET                                 ; 0060411b

