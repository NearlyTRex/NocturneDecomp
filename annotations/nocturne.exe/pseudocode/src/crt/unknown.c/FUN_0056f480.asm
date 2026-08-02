; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * crt_unknown_c_FUN_0056f480(uint *param_1,char *param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Called Functions:
;   crt_stdlib.c_i64toa_FUN_0056f3e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056f480
        ;   Label: crt_unknown.c_FUN_0056f480
    PUSH ESI                            ; 0056f481
    PUSH EDI                            ; 0056f482
    PUSH ES                             ; 0056f483
    SUB ESP,0x8                         ; 0056f484
    MOV EBX,dword ptr [ESP + 0x20]      ; 0056f487
    MOV ECX,dword ptr [ESP + 0x24]      ; 0056f48b
    MOV EDI,ESP                         ; 0056f48f
    MOV AX,DS                           ; 0056f491
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0056f493
    MOV ES,AX                           ; 0056f497
    MOV EDX,EBX                         ; 0056f499
    MOVSD ES:EDI,ESI                    ; 0056f49b
    MOVSD ES:EDI,ESI                    ; 0056f49c
    CMP ECX,0xa                         ; 0056f49d
    JNZ 0x0056f4d5                      ; 0056f4a0
        ;   XREF to: 0056f4d5 (CONDITIONAL_JUMP)  ; LAB_0056f4d5
    TEST byte ptr [ESP + 0x7],0x80      ; 0056f4a2
    JZ 0x0056f4d5                       ; 0056f4a7
        ;   XREF to: 0056f4d5 (CONDITIONAL_JUMP)  ; LAB_0056f4d5
    MOV byte ptr [EBX],0x2d             ; 0056f4a9
    MOV EDX,dword ptr [ESP]             ; 0056f4ac
    MOV ESI,dword ptr [ESP + 0x4]       ; 0056f4af
    NOT EDX                             ; 0056f4b3
    NOT ESI                             ; 0056f4b5
    MOV dword ptr [ESP],EDX             ; 0056f4b7
    MOV dword ptr [ESP + 0x4],ESI       ; 0056f4ba
    MOV EDI,dword ptr [ESP]             ; 0056f4be
    LEA EDX,[EBX + 0x1]                 ; 0056f4c1
    INC EDI                             ; 0056f4c4
    MOV dword ptr [ESP],EDI             ; 0056f4c5
    JNZ 0x0056f4cf                      ; 0056f4c8
        ;   XREF to: 0056f4cf (CONDITIONAL_JUMP)  ; LAB_0056f4cf
    LEA EAX,[ESI + 0x1]                 ; 0056f4ca
    JMP 0x0056f4d1                      ; 0056f4cd
        ;   XREF to: 0056f4d1 (UNCONDITIONAL_JUMP)  ; LAB_0056f4d1
    MOV EAX,ESI                         ; 0056f4cf
        ;   Label: LAB_0056f4cf
    MOV dword ptr [ESP + 0x4],EAX       ; 0056f4d1
        ;   Label: LAB_0056f4d1
    PUSH ECX                            ; 0056f4d5
        ;   Label: LAB_0056f4d5
    PUSH EDX                            ; 0056f4d6
    LEA EAX,[ESP + 0x8]                 ; 0056f4d7
    PUSH EAX                            ; 0056f4db
    CALL crt_stdlib.c_i64toa_FUN_0056f3e0 ; 0056f4dc
        ;   XREF to: 0056f3e0 (UNCONDITIONAL_CALL)  ; char * crt_stdlib.c_i64toa_FUN_0056f3e0(longlong * value, char * buffer, int base)
    ADD ESP,0xc                         ; 0056f4e1
    MOV EAX,EBX                         ; 0056f4e4
    ADD ESP,0x8                         ; 0056f4e6
    POP ES                              ; 0056f4e9
    POP EDI                             ; 0056f4ea
    POP ESI                             ; 0056f4eb
    POP EBX                             ; 0056f4ec
    RET                                 ; 0056f4ed

