; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown char * crt_unknown_c_FUN_0060ade0(uint *param_1,char *param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Called Functions:
;   crt_stdlib.c_i64toa_FUN_0060ad40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060ade0
        ;   Label: crt_unknown.c_FUN_0060ade0
    PUSH ESI                            ; 0060ade1
    PUSH EDI                            ; 0060ade2
    PUSH ES                             ; 0060ade3
    SUB ESP,0x8                         ; 0060ade4
    MOV EBX,dword ptr [ESP + 0x20]      ; 0060ade7
    MOV ECX,dword ptr [ESP + 0x24]      ; 0060adeb
    MOV EDI,ESP                         ; 0060adef
    MOV AX,DS                           ; 0060adf1
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0060adf3
    MOV ES,AX                           ; 0060adf7
    MOV EDX,EBX                         ; 0060adf9
    MOVSD ES:EDI,ESI                    ; 0060adfb
    MOVSD ES:EDI,ESI                    ; 0060adfc
    CMP ECX,0xa                         ; 0060adfd
    JNZ 0x0060ae35                      ; 0060ae00
        ;   XREF to: 0060ae35 (CONDITIONAL_JUMP)  ; LAB_0060ae35
    TEST byte ptr [ESP + 0x7],0x80      ; 0060ae02
    JZ 0x0060ae35                       ; 0060ae07
        ;   XREF to: 0060ae35 (CONDITIONAL_JUMP)  ; LAB_0060ae35
    MOV byte ptr [EBX],0x2d             ; 0060ae09
    MOV EDX,dword ptr [ESP]             ; 0060ae0c
    MOV ESI,dword ptr [ESP + 0x4]       ; 0060ae0f
    NOT EDX                             ; 0060ae13
    NOT ESI                             ; 0060ae15
    MOV dword ptr [ESP],EDX             ; 0060ae17
    MOV dword ptr [ESP + 0x4],ESI       ; 0060ae1a
    MOV EDI,dword ptr [ESP]             ; 0060ae1e
    LEA EDX,[EBX + 0x1]                 ; 0060ae21
    INC EDI                             ; 0060ae24
    MOV dword ptr [ESP],EDI             ; 0060ae25
    JNZ 0x0060ae2f                      ; 0060ae28
        ;   XREF to: 0060ae2f (CONDITIONAL_JUMP)  ; LAB_0060ae2f
    LEA EAX,[ESI + 0x1]                 ; 0060ae2a
    JMP 0x0060ae31                      ; 0060ae2d
        ;   XREF to: 0060ae31 (UNCONDITIONAL_JUMP)  ; LAB_0060ae31
    MOV EAX,ESI                         ; 0060ae2f
        ;   Label: LAB_0060ae2f
    MOV dword ptr [ESP + 0x4],EAX       ; 0060ae31
        ;   Label: LAB_0060ae31
    PUSH ECX                            ; 0060ae35
        ;   Label: LAB_0060ae35
    PUSH EDX                            ; 0060ae36
    LEA EAX,[ESP + 0x8]                 ; 0060ae37
    PUSH EAX                            ; 0060ae3b
    CALL crt_stdlib.c_i64toa_FUN_0060ad40 ; 0060ae3c
        ;   XREF to: 0060ad40 (UNCONDITIONAL_CALL)  ; char * crt_stdlib.c_i64toa_FUN_0060ad40(longlong * value, char * buffer, int base)
    ADD ESP,0xc                         ; 0060ae41
    MOV EAX,EBX                         ; 0060ae44
    ADD ESP,0x8                         ; 0060ae46
    POP ES                              ; 0060ae49
    POP EDI                             ; 0060ae4a
    POP ESI                             ; 0060ae4b
    POP EBX                             ; 0060ae4c
    RET                                 ; 0060ae4d

